/*
 * XREFs of ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@H@Z @ 0x180010FDC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800978F0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 * Callees:
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18001102C (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawingContext::IsOccluded(__int64 a1, __int64 a2)
{
  __int64 i; // rax
  float v4[4]; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v4[i] = (float)*(int *)(a2 + 4 * i);
  return CDrawingContext::IsOccluded(a1, v4);
}
