/*
 * XREFs of ??_GCMeterHardware@@EEAAPEAXI@Z @ 0x1800614B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMeterHardware@@EEAA@XZ @ 0x1800614EC (--1CMeterHardware@@EEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CMeterHardware *__fastcall CMeterHardware::`scalar deleting destructor'(CMeterHardware *this, char a2)
{
  CMeterHardware::~CMeterHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x30);
  return this;
}
