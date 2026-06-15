/*
 * XREFs of ??_GCMeterSoftware@@EEAAPEAXI@Z @ 0x1800C2C60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMeterSoftware@@EEAA@XZ @ 0x1800C2964 (--1CMeterSoftware@@EEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CMeterSoftware::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  CMeterSoftware::~CMeterSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
