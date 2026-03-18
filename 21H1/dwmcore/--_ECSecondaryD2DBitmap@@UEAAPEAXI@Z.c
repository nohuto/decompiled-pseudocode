/*
 * XREFs of ??_ECSecondaryD2DBitmap@@UEAAPEAXI@Z @ 0x1800CBB00
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmap@@UEAA@XZ @ 0x180030C70 (--1CD2DBitmap@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180038160 (--3@YAXPEAX_K@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

void **__fastcall CSecondaryD2DBitmap::`vector deleting destructor'(void **this, char a2)
{
  FastRegion::CRegion::FreeMemory(this + 33);
  CD2DBitmap::~CD2DBitmap((CD2DBitmap *)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
