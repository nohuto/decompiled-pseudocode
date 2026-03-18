/*
 * XREFs of ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180080610
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800079B0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180010050 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBoundsRecursive@CFilterEffect@@UEAAJAEBVCMILM.c)
 *     ?CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180010290 (-CalcEntireInputBoundsFromInputResources@CFilterEffect@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180016D80 (-GetBoundsWithEffects@CLayerVisual@@UEBAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?GetBoundsFromInputs@CGaussianBlurEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180020330 (-GetBoundsFromInputs@CGaussianBlurEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMil.c)
 *     ?GetContentBounds@CWindowNode@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040370 (-GetContentBounds@CWindowNode@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@.c)
 *     ?GetContentBounds@CVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180040540 (-GetContentBounds@CVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x180056A04 (-Update@CDrawListCache@@AEAAX_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E930 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180075FB0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Optimize@CDirtyRegion@@QEAAXXZ @ 0x18007A420 (-Optimize@CDirtyRegion@@QEAAXXZ.c)
 *     ?GetUnOccludedDirtyRect@CDirtyRegion@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IAEBV2@_NAEBV?$span@PEBVCVisual@@$0?0@gsl@@PEBVCOcclusionContext@@@Z @ 0x18007D874 (-GetUnOccludedDirtyRect@CDirtyRegion@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSi.c)
 *     ?Add@CMergedDirtyRect@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007F940 (-Add@CMergedDirtyRect@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18007FB10 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?GetContentBounds@CSpriteVisual@@UEAAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AB140 (-GetContentBounds@CSpriteVisual@@UEAAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x1800BE948 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?GetUnoptimizedBounds@CDirtyRegion@@IEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x1800C0C7C (-GetUnoptimizedBounds@CDirtyRegion@@IEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ @ 0x1800C1B30 (-IsEmptyDrawing@CAtlasedRectsGroup@@UEBA_NXZ.c)
 *     ?CalcOvehead@@YAMAEBUMilRectF@@0@Z @ 0x1800C4664 (-CalcOvehead@@YAMAEBUMilRectF@@0@Z.c)
 *     ?EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ @ 0x1800C62C0 (-EnsureBounds@CAtlasedRectsGroup@@IEBAXXZ.c)
 *     ?GetBounds@CAtlasedRectsMesh@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C6358 (-GetBounds@CAtlasedRectsMesh@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?AddBounds@CRenderDataBounds@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800CA948 (-AddBounds@CRenderDataBounds@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?Add@?$CMergedRectBase@$03@@UEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AE510 (-Add@-$CMergedRectBase@$03@@UEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B3E70 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 *     ?GetGeometryBounds@CGeometry2DGroup@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x1801B6100 (-GetGeometryBounds@CGeometry2DGroup@@UEAAXPEAV-$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z.c)
 *     ?GetTextureBounds@CGeometry2DGroup@@UEAAXPEAV?$CRectF@UBaseSampling@CoordinateSpace@@@@@Z @ 0x1801B6400 (-GetTextureBounds@CGeometry2DGroup@@UEAAXPEAV-$CRectF@UBaseSampling@CoordinateSpace@@@@@Z.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x1801C1340 (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801D3918 (-GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F6D80 (-GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEA.c)
 *     ?GetBoundsFromInputs@CShadowEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F7550 (-GetBoundsFromInputs@CShadowEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 *     ?GetBounds@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18020BF04 (-GetBounds@CTextVisualContent@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z @ 0x18025F7D4 (-PostSubgraph@CShapeBoundingContext@@QEAAJPEA_N@Z.c)
 *     ?GetBounds@CRadialGradientEffect@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x180267B20 (-GetBounds@CRadialGradientEffect@@UEBAJPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
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
