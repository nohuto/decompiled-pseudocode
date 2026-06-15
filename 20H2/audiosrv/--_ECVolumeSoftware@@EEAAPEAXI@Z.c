/*
 * XREFs of ??_ECVolumeSoftware@@EEAAPEAXI@Z @ 0x1800C2CE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVolumeSoftware@@EEAA@XZ @ 0x1800C2A2C (--1CVolumeSoftware@@EEAA@XZ.c)
 */

CVolumeSoftware *__fastcall CVolumeSoftware::`vector deleting destructor'(CVolumeSoftware *this, char a2)
{
  CVolumeSoftware::~CVolumeSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x138);
  return this;
}
