/*
 * XREFs of ??_GCDriverListener@@UEAAPEAXI@Z @ 0x18002D8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDriverListener@@UEAA@XZ @ 0x18002D92C (--1CDriverListener@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CDriverListener *__fastcall CDriverListener::`scalar deleting destructor'(CDriverListener *this, char a2)
{
  CDriverListener::~CDriverListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x208);
  return this;
}
