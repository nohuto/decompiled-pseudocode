/*
 * XREFs of ??_EDeviceState@MagnifierProcessor@@UEAAPEAXI@Z @ 0x18017CAF0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C740 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DeviceState@MagnifierProcessor@@UEAA@XZ @ 0x18017CA10 (--1DeviceState@MagnifierProcessor@@UEAA@XZ.c)
 */

MagnifierProcessor::DeviceState *__fastcall MagnifierProcessor::DeviceState::`vector deleting destructor'(
        MagnifierProcessor::DeviceState *this,
        char a2)
{
  MagnifierProcessor::DeviceState::~DeviceState(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x88);
  return this;
}
