/*
 * XREFs of ?IsOccluded@COcclusionContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800DF6AC
 * Callers:
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18001102C (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180089680 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z @ 0x1800B9510 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@AEBVCDirtyRegion@@@Z.c)
 *     ?GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV?$DynArray@UMilRectF@@$0A@@@@Z @ 0x1801B5FF0 (-GetIntersectingRedrawRects@CDirtyRegion@@QEBAXAEBUMilRectF@@_NPEAV-$DynArray@UMilRectF@@$0A@@@@.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800B3CA0 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800C9230 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801C0588 (-PageInPixelsRectToDeviceRect@COcclusionContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@.c)
 */

char __fastcall COcclusionContext::IsOccluded(__int64 a1, float *a2, int a3)
{
  __int128 *v5; // rdx
  char v6; // r9
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  if ( TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty(a2) )
    return 1;
  v8 = 0LL;
  if ( !v6 && *(_BYTE *)(a1 + 1204) )
    COcclusionContext::PageInPixelsRectToDeviceRect(a1, v5, &v8);
  else
    v8 = *v5;
  return CArrayBasedCoverageSet::IsCovered((__int64 *)(a1 + 448), (float *)&v8, a3);
}
