/*
 * XREFs of ??_GCExclusiveModeListener@@UEAAPEAXI@Z @ 0x1801067A0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AB58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CExclusiveModeListener@@UEAA@XZ @ 0x18010D2E0 (--1CExclusiveModeListener@@UEAA@XZ.c)
 */

CExclusiveModeListener *__fastcall CExclusiveModeListener::`scalar deleting destructor'(
        CExclusiveModeListener *this,
        char a2)
{
  CExclusiveModeListener::~CExclusiveModeListener(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x180);
  return this;
}
