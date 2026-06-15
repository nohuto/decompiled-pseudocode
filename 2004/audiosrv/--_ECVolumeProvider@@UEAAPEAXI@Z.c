/*
 * XREFs of ??_ECVolumeProvider@@UEAAPEAXI@Z @ 0x1800C4D20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVolumeProvider@@UEAA@XZ @ 0x1800C4C7C (--1CVolumeProvider@@UEAA@XZ.c)
 */

CVolumeProvider *__fastcall CVolumeProvider::`vector deleting destructor'(CVolumeProvider *this, char a2)
{
  CVolumeProvider::~CVolumeProvider(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x50);
  return this;
}
