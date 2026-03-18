/*
 * XREFs of floorf_0 @ 0x1800EECAF
 * Callers:
 *     RoundIntermediateSize @ 0x18003A1C0 (RoundIntermediateSize.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x18006B510 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E930 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSiz.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006FD60 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnimationStopBehavior@@@Z @ 0x18008C010 (-SetIterationInfo@CKeyframeAnimation@@AEAAJMW4Enum@KeyframeAnimationDirection@@MW42KeyframeAnima.c)
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800BFDAC (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x180176AFC (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z @ 0x18017E118 (-IsIntelWorkaroundNeeded@COverlayContext@@AEBA_NAEBUtagRECT@@00@Z.c)
 *     ?InflateRectF_InPlace@@YAXPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x18018A4F8 (-InflateRectF_InPlace@@YAXPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x18018FBC8 (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 *     ?CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z @ 0x1801F52BC (-CalcFrustumOutline@@YAXVCMILMatrix@@PEAULine3D@@111@Z.c)
 *     ?Floor@CExpressionValueStack@@QEAAJXZ @ 0x1801FD428 (-Floor@CExpressionValueStack@@QEAAJXZ.c)
 *     ?Round@CExpressionValueStack@@QEAAJXZ @ 0x180200798 (-Round@CExpressionValueStack@@QEAAJXZ.c)
 *     ?IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAU2@@Z @ 0x18023AE00 (-IntersectGeometryWithSafeBounds@CD2DContext@@MEAAJPEAUID2D1Geometry@@0PEBUD2D_MATRIX_3X2_F@@PEA.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
float __cdecl floorf_0(float X)
{
  return floorf(X);
}
