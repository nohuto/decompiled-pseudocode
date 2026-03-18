/*
 * XREFs of ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003F35C
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x18003C2A8 (-Update@CSecondaryD2DBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?Update@CSecondarySysmemBitmap@@QEAAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x1800914B4 (-Update@CSecondarySysmemBitmap@@QEAAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x18003F2AC (--0CRegion@@QEAA@AEBUMilRectU@@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x18004011C (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CSecondaryBitmap::AddValidRect(__int64 a1, struct tagRECT *a2)
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
