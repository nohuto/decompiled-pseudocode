/*
 * XREFs of ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AC3B0
 * Callers:
 *     ?AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x1800236F0 (-AffectsVisual@CCompositionSpotLight@@UEAA_NPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 *     ?GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z @ 0x180049320 (-GetUnOccludedWorldShape@CDrawingContext@@AEAAJAEBVCShape@@HPEAPEAV2@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005E7C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180065300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x180067630 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800682A0 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18006BCD8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18006C758 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N@Z @ 0x1800A8EE0 (-IsCovered@CArrayBasedCoverageSet@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?RectIntersectsDirty@COverlayContext@@AEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180181168 (-RectIntersectsDirty@COverlayContext@@AEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAn.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180190C9C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 *     ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B0E70 (-Add@-$CMergedRectBase@$03@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z @ 0x1802623C8 (-PreSubgraph@CShapeDrawingContext@@QEAAJPEA_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
        float *a1,
        float *a2)
{
  float v2; // xmm0_4
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm5_4
  float v6; // xmm6_4
  float v7; // xmm7_4
  bool result; // al

  v2 = a1[2];
  result = 0;
  if ( v2 > *a1 )
  {
    v3 = a1[3];
    v4 = a1[1];
    if ( v3 > v4 )
    {
      v5 = a2[2];
      if ( v5 > *a2 )
      {
        v6 = a2[3];
        v7 = a2[1];
        if ( v6 > v7 && v2 > *a2 && v5 > *a1 && v3 > v7 && v6 > v4 )
          return 1;
      }
    }
  }
  return result;
}
