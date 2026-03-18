/*
 * XREFs of ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x180017334
 * Callers:
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@H@Z @ 0x1800172E4 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVI_ea_1800E9624.c)
 * Callees:
 *     ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NH@Z @ 0x1800173C4 (-IsOccluded@COcclusionContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036784 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800469E8 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMil.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

char __fastcall CDrawingContext::IsOccluded(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // bl
  __int64 v6; // r8
  __int64 v7; // rcx
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  v9 = 0LL;
  v5 = 0;
  CDrawingContext::CalcWorldSpaceClippedBounds(a1, a2, &v9);
  if ( (unsigned __int8)TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(&v9) )
    return 1;
  v7 = *(_QWORD *)(a1 + 5936);
  if ( v7 )
  {
    LOBYTE(v6) = 1;
    return COcclusionContext::IsOccluded(v7, &v9, v6, a3);
  }
  return v5;
}
