/*
 * XREFs of ??_ECSecondarySysmemBitmap@@UEAAPEAXI@Z @ 0x1800D3C70
 * Callers:
 *     <none>
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 */

CSecondarySysmemBitmap *__fastcall CSecondarySysmemBitmap::`vector deleting destructor'(
        CSecondarySysmemBitmap *this,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 19);
  if ( v4 )
    operator delete(v4);
  FastRegion::CRegion::FreeMemory((void **)this + 7);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
