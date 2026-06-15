/*
 * XREFs of ??_GCVolumeStrip@@MEAAPEAXI@Z @ 0x1800C39B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CVolumeStrip@@MEAA@XZ @ 0x1800C3740 (--1CVolumeStrip@@MEAA@XZ.c)
 */

CVolumeStrip *__fastcall CVolumeStrip::`scalar deleting destructor'(CVolumeStrip *this, char a2)
{
  CVolumeStrip::~CVolumeStrip(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x110);
  return this;
}
