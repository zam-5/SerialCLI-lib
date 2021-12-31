#ifndef SERIALCLI_H
#define SERIALCLI_H

#include "Arduino.h"

class SerialCLI
{
private:
    Stream *_serial;

    void read_analog(String ops);
    void read_digital(String ops);
    void write_digital(String ops);
    void write_analog(String ops);
    int parseInt(String str);
    float parseFloat(String str);
    int8_t parseVoltage(String str);

public:
    SerialCLI();
    void begin(Stream &serial);
    void parse();
};

#endif