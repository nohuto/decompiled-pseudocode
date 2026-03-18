/*
 * XREFs of ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180082C58
 * Callers:
 *     ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x1800055D0 (-CalculateCasterBounds@CProjectedShadowCaster@@QEBA-AV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180006B98 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x180007254 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingCont.c)
 *     ?IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry@1@PEBUReceiverEntry@1@M@Z @ 0x18000B798 (-IsCasterInBetweenLightAndReceiver@CProjectedShadowScene@@AEBA_NPEBVCVisualTree@@PEBUCasterEntry.c)
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x18000C080 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18000C670 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V?$span@PEAVCVisual@@$0?0@gsl@@PEAV1@V?$span@PEAVCMILMatrix@@$0?0@5@@Z @ 0x18000DD8C (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@V-$span@PEAVCVisual@@$0.c)
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001057C (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015468 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NAEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180015670 (-GetTransform@CDxHandleBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x18001AC14 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z @ 0x18001ACA8 (-UpdateDeviceTransform@CDrawingContext@@AEAAXAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x180021838 (-CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisua.c)
 *     ?CalculateMonitorTransform@CLegacyRenderTarget@@AEAAXXZ @ 0x1800321F4 (-CalculateMonitorTransform@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x180037108 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x18003AA30 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x180046890 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoin.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18004D020 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x1800737F0 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180078060 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?CalculateRootBounds@CVisual@@QEBAJPEAV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180078900 (-CalculateRootBounds@CVisual@@QEBAJPEAV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilP.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007ED78 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180082C08 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800BF6E0 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EC7F0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800ED520 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x1801638FC (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x180177978 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x180184544 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180187C6C (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalculateMonitorTransform@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018D2D4 (-CalculateMonitorTransform@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z @ 0x1801BA000 (-GetScaleRotationTranslationRealization@CComponentTransform3D@@AEAAXPEAVCMILMatrix@@@Z.c)
 *     ?GetSceneLightRealization@CCompositionDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1801BB0E0 (-GetSceneLightRealization@CCompositionDistantLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNod.c)
 *     ?GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1801BC5D0 (-GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@.c)
 *     ?CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawListPrimitive@@@Z @ 0x1801BD1C4 (-CreateSkyBoxPrimitive@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAPEAVCDrawLi.c)
 *     ?GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x1801BDBA0 (-GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@.c)
 *     ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x1801F3170 (-InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x180210144 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18023BCDC (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800172DC (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180070C30 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x180072C60 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180082D80 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800CB03C (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x180210748 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CMILMatrix::Multiply(CMILMatrix *this, const struct CMILMatrix *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r10
  __int64 v4; // r10
  CMILMatrix *v5; // r11
  char v6; // cl
  float v7; // xmm3_4
  CMILMatrix *v8; // rcx
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm6_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  _OWORD *v14; // rax
  __int64 v15; // r11
  float v16; // xmm2_4
  float v17; // xmm3_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  int v20; // xmm5_4
  CMILMatrix *v21; // rcx
  _BYTE v22[64]; // [rsp+20h] [rbp-68h] BYREF

  if ( CMILMatrix::IsIdentity<1>((__int64)this) )
  {
    *(_OWORD *)v2 = *(_OWORD *)v3;
    *(_OWORD *)(v2 + 16) = *(_OWORD *)(v3 + 16);
    *(_OWORD *)(v2 + 32) = *(_OWORD *)(v3 + 32);
    *(_OWORD *)(v2 + 48) = *(_OWORD *)(v3 + 48);
    *(_DWORD *)(v2 + 64) = *(_DWORD *)(v3 + 64);
  }
  else
  {
    CMILMatrix::Ensure3DFlags((CMILMatrix *)v3);
    v6 = *(_BYTE *)(v4 + 64);
    if ( (v6 & 3) != 1 )
    {
      if ( (v6 & 0xC) == 4 )
      {
        v7 = *(float *)(v4 + 56);
        v8 = v5;
        v9 = *(float *)(v4 + 52);
        v10 = *(float *)(v4 + 48);
LABEL_5:
        CMILMatrix::Translate(v8, v10, v9, v7);
        return;
      }
      if ( (v6 & 0xC0) == 0x40 )
      {
        v11 = *(float *)(v4 + 48);
        CMILMatrix::Scale(v5, *(float *)v4, *(float *)(v4 + 20), *(float *)(v4 + 40));
        v10 = v11;
        v9 = v13;
LABEL_10:
        v7 = v12;
        goto LABEL_5;
      }
      if ( (*(_BYTE *)(v4 + 65) & 0xC) == 4 )
      {
        v16 = *(float *)(v4 + 4);
        v17 = *(float *)(v4 + 40);
        v18 = *(float *)(v4 + 48);
        v19 = *(float *)(v4 + 52);
        CMILMatrix::Rotate90(v5);
        CMILMatrix::Scale(v21, COERCE_FLOAT(v20 ^ _xmm), v16, v17);
        v10 = v18;
        v9 = v19;
        goto LABEL_10;
      }
      v14 = Windows::Foundation::Numerics::operator*((__int64)v22, (__int128 *)v5, (_OWORD *)v4);
      *(_OWORD *)v15 = *v14;
      *(_OWORD *)(v15 + 16) = v14[1];
      *(_OWORD *)(v15 + 32) = v14[2];
      *(_OWORD *)(v15 + 48) = v14[3];
      *(_DWORD *)(v15 + 64) = 0;
    }
  }
}
