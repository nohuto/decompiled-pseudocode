/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18001E4B8
 * Callers:
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x180004E24 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@MW4DXGI_MODE_ROTATION@@PEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001E0D4 (-Initialize@CMonitorTransform@@QEAAXAEBUD2D_SIZE_U@@AEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMi.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1800FF650 (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801D8170 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801DBCB0 (-CalcDeviceTransformDelta@CFilterEffectLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1801DC210 (-CalcDeviceTransformDelta@CLinearInterpolationLayer@@EEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18025C060 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18027CD28 (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     <none>
 */

char __fastcall CMILMatrix::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  char v3; // al
  char result; // al
  double v5; // xmm3_8
  float v6; // xmm0_4
  float v7; // xmm0_4
  double v8; // xmm3_8
  float v9; // xmm0_4
  float v10; // xmm1_4
  double v11; // xmm2_8

  *(_QWORD *)a1 = 1065353216LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 20) = 1065353216LL;
  *(_QWORD *)(a1 + 28) = 0LL;
  *(_DWORD *)(a1 + 36) = 0;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v3 = *(_BYTE *)(a1 + 65);
  *(_BYTE *)(a1 + 64) = 85;
  result = v3 & 0xC0 | 0x17;
  *(_BYTE *)(a1 + 65) = result;
  v5 = (a3[2] - *a3) / (a2[2] - *a2);
  v6 = v5;
  *(float *)a1 = v6;
  v7 = *a3 - *a2 * v5;
  *(float *)(a1 + 48) = v7;
  v8 = (a3[3] - a3[1]) / (a2[3] - a2[1]);
  v9 = v8;
  *(float *)(a1 + 20) = v9;
  v10 = a2[1];
  v11 = a3[1];
  *(_BYTE *)(a1 + 64) = 68;
  *(float *)(a1 + 52) = v11 - v10 * v8;
  return result;
}
