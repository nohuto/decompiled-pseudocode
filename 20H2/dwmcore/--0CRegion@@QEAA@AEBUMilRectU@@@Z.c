/*
 * XREFs of ??0CRegion@@QEAA@AEBUMilRectU@@@Z @ 0x1800474F0
 * Callers:
 *     ?AddValidRect@CSecondaryBitmap@@QEAAXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180046F60 (-AddValidRect@CSecondaryBitmap@@QEAAXAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniq.c)
 *     ?AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z @ 0x18026017C (-AddDirtyRegion@CGDISubSectionBitmapRealization@@EEAAXAEBVCRegion@@@Z.c)
 *     ?UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ @ 0x180261694 (-UpdateDecodeBitmap@CDxHandleAdvancedDirectFlipBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180047530 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 */

CRegion *__fastcall CRegion::CRegion(CRegion *this, struct tagRECT *a2)
{
  struct tagRECT v4; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a2;
  FastRegion::CRegion::CRegion(this, &v4);
  return this;
}
