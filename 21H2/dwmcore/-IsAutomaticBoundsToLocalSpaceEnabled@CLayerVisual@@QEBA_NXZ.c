/*
 * XREFs of ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800F32A8
 * Callers:
 *     ?CalcRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800934F0 (-CalcRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointA.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009FA80 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?LayerVisualHasTreeEffect@CDrawingContext@@AEBA_NPEBVCLayerVisual@@@Z @ 0x1800D90C8 (-LayerVisualHasTreeEffect@CDrawingContext@@AEBA_NPEBVCLayerVisual@@@Z.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801D8EC0 (-CalcDeviceTransformDelta@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x1801D9CDC (-PopLayerTransformFromExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 *     ?PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ @ 0x1801D9E88 (-PushLayerTransformOnExplicitSurfaceInput@CTreeEffectLayer@@AEAAXXZ.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F32DC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil.c)
 */

bool __fastcall CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(CLayerVisual *this)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetImpl'::`2'::impl,
    0LL);
  return *((_WORD *)this + 376) != 0;
}
