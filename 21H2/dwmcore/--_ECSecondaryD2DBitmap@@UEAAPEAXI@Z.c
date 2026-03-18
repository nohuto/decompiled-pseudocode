/*
 * XREFs of ??_ECSecondaryD2DBitmap@@UEAAPEAXI@Z @ 0x18006C8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmap@@UEAA@XZ @ 0x18006A758 (--1CD2DBitmap@@UEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800D3824 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

CSecondaryD2DBitmap *__fastcall CSecondaryD2DBitmap::`vector deleting destructor'(CSecondaryD2DBitmap *this, char a2)
{
  FastRegion::CRegion::FreeMemory((CSecondaryD2DBitmap *)((char *)this + 264));
  CD2DBitmap::~CD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1C0uLL);
  return this;
}
