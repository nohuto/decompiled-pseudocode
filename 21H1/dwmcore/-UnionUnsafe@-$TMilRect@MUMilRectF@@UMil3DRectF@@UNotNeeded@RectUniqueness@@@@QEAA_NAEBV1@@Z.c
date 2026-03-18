/*
 * XREFs of ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AA870
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x18000C3C0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x18000C600 (-CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18000EAC0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180017440 (-GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?GetBoundsFromInputs@CGaussianBlurEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180020810 (-GetBoundsFromInputs@CGaussianBlurEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMil.c)
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x18004CBC8 (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180061FD0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180063420 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x180067630 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?Add@CMergedDirtyRect@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800680D0 (-Add@CMergedDirtyRect@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x1800682A0 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18006C758 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180095750 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180095920 (-GetContentBounds@CVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA0E0 (-GetContentBounds@CSpriteVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x1800B8D28 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?GetUnoptimizedBounds@CDirtyRegion@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800BB618 (-GetUnoptimizedBounds@CDirtyRegion@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1800BBBC0 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x1800BDD04 (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 *     ?EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ @ 0x1800BFF70 (-EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ.c)
 *     ?GetBounds@CAtlasedRectsMesh@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C0008 (-GetBounds@CAtlasedRectsMesh@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C3E08 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B0E70 (-Add@-$CMergedRectBase@$03@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B67E0 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 *     ?GetGeometryBounds@CGeometry2DGroup@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x1801B8A70 (-GetGeometryBounds@CGeometry2DGroup@@UEAAXPEAV-$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z.c)
 *     ?GetTextureBounds@CGeometry2DGroup@@UEAAXPEAV?$CRectF@UBaseSampling@CoordinateSpace@@@@@Z @ 0x1801B8D70 (-GetTextureBounds@CGeometry2DGroup@@UEAAXPEAV-$CRectF@UBaseSampling@CoordinateSpace@@@@@Z.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x1801C3C60 (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801D6298 (-GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F9740 (-GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEA.c)
 *     ?GetBoundsFromInputs@CShadowEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F9F10 (-GetBoundsFromInputs@CShadowEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 *     ?GetBounds@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020E8C4 (-GetBounds@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z @ 0x180262244 (-PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z.c)
 *     ?GetBounds@CRadialGradientEffect@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x18026A590 (-GetBounds@CRadialGradientEffect@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 * Callees:
 *     <none>
 */

char __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(float *a1, float *a2)
{
  int v2; // eax
  BOOL v3; // r8d
  float v4; // xmm1_4
  char result; // al
  float v6; // xmm1_4
  float v7; // xmm0_4
  float v8; // xmm0_4

  v2 = 1;
  v3 = a1[2] <= *a1 || a1[3] <= a1[1];
  v4 = *a2;
  if ( a2[2] > *a2 && a2[3] > a2[1] )
    v2 = 0;
  if ( v3 )
  {
    if ( v2 )
    {
      *((_QWORD *)a1 + 1) = 0LL;
      result = 0;
      *(_QWORD *)a1 = 0LL;
    }
    else
    {
      result = 1;
      *(_OWORD *)a1 = *(_OWORD *)a2;
    }
  }
  else
  {
    if ( !v2 )
    {
      if ( *a1 > v4 )
        *a1 = v4;
      v6 = a2[1];
      if ( a1[1] > v6 )
        a1[1] = v6;
      v7 = a2[2];
      if ( v7 > a1[2] )
        a1[2] = v7;
      v8 = a2[3];
      if ( v8 > a1[3] )
        a1[3] = v8;
    }
    return 1;
  }
  return result;
}
