/*
 * XREFs of ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@H@Z @ 0x1800172E4
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180048ABC (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVI_ea_1800E9624.c)
 * Callees:
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180017334 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::IsOccluded(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  float v4[4]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v4[i] = (float)*(int *)(a2 + 4 * i);
  return CDrawingContext::IsOccluded(a1, v4);
}
