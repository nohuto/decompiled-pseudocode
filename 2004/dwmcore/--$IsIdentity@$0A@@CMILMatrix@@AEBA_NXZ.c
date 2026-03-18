/*
 * XREFs of ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x18006F780
 * Callers:
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015670 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z @ 0x1800157C8 (-CalcImageTransform@CBitmapRealization@@QEBA_NPEAVCMILMatrix@@@Z.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x18001ACA8 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x180062884 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOverlayContext@@@Z @ 0x18006622C (-BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@PEAVCOv.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18006C580 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?GetTightBounds@CRectanglesShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AD820 (-GetTightBounds@CRectanglesShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSize.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800AD970 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@U.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801638FC (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x1801774F4 (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x18022B778 (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18022BC2C (_anonymous_namespace_--DecomposeMatrix.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::IsIdentity<0>(__int64 a1)
{
  if ( *(float *)a1 != 1.0
    || *(float *)(a1 + 4) != 0.0
    || *(float *)(a1 + 8) != 0.0
    || *(float *)(a1 + 12) != 0.0
    || *(float *)(a1 + 16) != 0.0
    || *(float *)(a1 + 20) != 1.0
    || *(float *)(a1 + 24) != 0.0
    || *(float *)(a1 + 28) != 0.0
    || *(float *)(a1 + 32) != 0.0
    || *(float *)(a1 + 36) != 0.0
    || *(float *)(a1 + 40) != 1.0
    || *(float *)(a1 + 44) != 0.0
    || *(float *)(a1 + 48) != 0.0
    || *(float *)(a1 + 52) != 0.0
    || *(float *)(a1 + 56) != 0.0
    || *(float *)(a1 + 60) != 1.0 )
  {
    return 0;
  }
  *(_WORD *)(a1 + 64) = 32085;
  return 1;
}
