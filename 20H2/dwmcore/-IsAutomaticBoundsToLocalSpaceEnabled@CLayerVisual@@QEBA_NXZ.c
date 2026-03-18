/*
 * XREFs of ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x180007360
 * Callers:
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180006830 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x1800072A0 (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ @ 0x1800072EC (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@IEAAXXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800866D0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180097700 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800076E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil.c)
 */

bool __fastcall CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(CLayerVisual *this)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetImpl'::`2'::impl,
    0LL);
  return *((_WORD *)this + 316) != 0;
}
