/*
 * XREFs of ??_ECSecondaryD2DBitmap@@UEAAPEAXI@Z @ 0x180049380
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmap@@UEAA@XZ @ 0x180046A4C (--1CD2DBitmap@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

CSecondaryD2DBitmap *__fastcall CSecondaryD2DBitmap::`vector deleting destructor'(CSecondaryD2DBitmap *this, char a2)
{
  FastRegion::CRegion::FreeMemory((CSecondaryD2DBitmap *)((char *)this + 264));
  CD2DBitmap::~CD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x1C0uLL);
  return this;
}
