/*
 * XREFs of ??_GCMuteHardware@@EEAAPEAXI@Z @ 0x1800BE6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMuteHardware@@EEAA@XZ @ 0x1800BE5EC (--1CMuteHardware@@EEAA@XZ.c)
 */

CMuteHardware *__fastcall CMuteHardware::`scalar deleting destructor'(CMuteHardware *this, char a2)
{
  CMuteHardware::~CMuteHardware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x58);
  return this;
}
