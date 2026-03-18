/*
 * XREFs of ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180046F60
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800464F8 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800CEFF4 (-Update@CSecondarySysmemBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800473E8 (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x1800474F0 (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800A5E54 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CSecondaryBitmap::AddValidRect(__int64 a1, const struct MilRectU *a2)
{
  int v3; // eax
  _BYTE v4[80]; // [rsp+20h] [rbp-68h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]

  CRegion::CRegion((CRegion *)v4, a2);
  v3 = FastRegion::CRegion::Subtract((FastRegion::CRegion *)(a1 + 16), (const struct CRegion *)v4);
  if ( v3 < 0 )
    ModuleFailFastForHRESULT((unsigned int)v3, retaddr);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v4);
}
