/*
 * XREFs of ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x18000EDD4
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000DCA8 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18000DF50 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x18000E368 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingCont.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18000EAC0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800B4BA0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV-$TM.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x1801949A8 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000EE04 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace@@@details@wil.c)
 */

bool __fastcall CLayerVisual::GetFlatteningToLocalSpace(CLayerVisual *this)
{
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_AutomaticBoundsToLocalSpace>::GetImpl'::`2'::impl,
    0LL);
  return *((_BYTE *)this + 633) != 0;
}
