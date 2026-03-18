/*
 * XREFs of ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18002F524
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000DCA8 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x18000DF50 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x18000E368 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingCont.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180016440 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetTransform@CGDISectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001A78C (-GetTransform@CGDISectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetTransform@CGDIBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F400 (-GetTransform@CGDIBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x1800303C0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048958 (-ApplyTextureToLocalTransform@CWindowNode@@AEAAJPEAVIBitmapResource@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18008B8F4 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?CalculateMonitorTransform@CLegacyRenderTarget@@AEAAXXZ @ 0x1800D5CF4 (-CalculateMonitorTransform@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800E00C4 (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x18016645C (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18017A588 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x180189C80 (-InitializeDeviceTransform@COffScreenRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z @ 0x18018C120 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?InitializeDeviceTransform@CVirtualMonitorCaptureRenderTarget@@MEAAXPEAVCMILMatrix@@@Z @ 0x18018C9E0 (-InitializeDeviceTransform@CVirtualMonitorCaptureRenderTarget@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?CalculateMonitorTransform@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018FFC4 (-CalculateMonitorTransform@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?CalcDeviceTransformDelta@CResampleLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180195F00 (-CalcDeviceTransformDelta@CResampleLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@@Z @ 0x18019D294 (-UpdateTransform@CDDARenderTarget@@QEAAXAEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRect.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801A1E48 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1801F8D40 (-GetRealization@CSkewTransform@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z @ 0x1802136AC (-SetToRotation@CMILMatrix@@QEAAXMMW4DXGI_MODE_ROTATION@@@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18023E70C (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 *     ?ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPHICINTEROPTEXTURE_SETPOSITION@@@Z @ 0x18025A334 (-ProcessSetPosition@CHolographicInteropTexture@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_HOLOGRAPH.c)
 *     ?GetTransform@CGDISubSectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180263DF4 (-GetTransform@CGDISubSectionBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::Translate(CMILMatrix *this, float a2, float a3)
{
  float v3; // xmm3_4
  float v5; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4

  v3 = *((float *)this + 3);
  v5 = *((float *)this + 7);
  v7 = *((float *)this + 11);
  v8 = v3;
  *((_BYTE *)this + 64) &= 0xFCu;
  v9 = (float)(v3 * a3) + *((float *)this + 1);
  *(float *)this = (float)(v8 * a2) + *(float *)this;
  v10 = (float)(v5 * a2) + *((float *)this + 4);
  *((float *)this + 1) = v9;
  v11 = (float)(v5 * a3) + *((float *)this + 5);
  *((float *)this + 4) = v10;
  *((float *)this + 5) = v11;
  v12 = *((float *)this + 15);
  v13 = (float)(v7 * a2) + *((float *)this + 8);
  v14 = (float)(v7 * a3) + *((float *)this + 9);
  *((float *)this + 8) = v13;
  v15 = (float)(v12 * a2) + *((float *)this + 12);
  *((float *)this + 9) = v14;
  v16 = (float)(v12 * a3) + *((float *)this + 13);
  *((float *)this + 12) = v15;
  *((float *)this + 13) = v16;
}
