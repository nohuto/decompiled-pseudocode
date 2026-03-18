/*
 * XREFs of ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800DE978
 * Callers:
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1800BB300 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?AddInvalidRects@CDDisplayRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x1801C84C0 (-AddInvalidRects@CDDisplayRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 * Callees:
 *     ?Add@CDirtyRegion@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DE9C8 (-Add@CDirtyRegion@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@R.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CDirtyRegion::Add(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  float v4[4]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v4[i] = (float)*(int *)(a2 + 4 * i);
  return CDirtyRegion::Add(a1, v4);
}
