/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x180032458
 * Callers:
 *     ?CalcDeviceTransformDelta@CFilterEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x1800209D0 (-CalcDeviceTransformDelta@CFilterEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalculateMonitorTransform@CLegacyRenderTarget@@AEAAXXZ @ 0x1800321F4 (-CalculateMonitorTransform@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x18017DA54 (-GetInverseDesktopMPOTransform@COverlayContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?CalculateMonitorTransform@CDDisplayRenderTarget@@IEAAXXZ @ 0x18018D2D4 (-CalculateMonitorTransform@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180190F20 (-CalcDeviceTransformDelta@CExternalLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180192720 (-CalcDeviceTransformDelta@CLinearInterpolationLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020B1E0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@W4DXGI_MODE_ROTATION@@1PEAVCMILMatrix@@@Z @ 0x18023BCDC (-CalcHDRConvertUVTransform@CD3DDevice@@SAXAEBUD2D_SIZE_U@@0AEBV-$TMilRect_@HUtagRECT@@UMilPointA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILMatrix::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  char v4; // cl
  __int64 result; // rax
  double v6; // xmm3_8
  float v7; // xmm4_4
  float v8; // xmm0_4
  double v9; // xmm3_8
  float v10; // xmm5_4
  float v11; // xmm1_4
  double v12; // xmm0_8

  v4 = 84;
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
  *(_BYTE *)(a1 + 65) = 125;
  result = 125LL;
  *(_BYTE *)(a1 + 64) = 85;
  v6 = (a3[2] - *a3) / (a2[2] - *a2);
  v7 = v6;
  *(float *)a1 = v7;
  v8 = *a3 - *a2 * v6;
  *(float *)(a1 + 48) = v8;
  v9 = (a3[3] - a3[1]) / (a2[3] - a2[1]);
  v10 = v9;
  *(float *)(a1 + 20) = v10;
  v11 = a3[1];
  v12 = a2[1];
  *(_BYTE *)(a1 + 65) = 125;
  *(float *)&v12 = v11 - v12 * v9;
  *(_DWORD *)(a1 + 52) = LODWORD(v12);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v7 - 1.0) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v10 - 1.0) & _xmm) >= 0.000081380211 )
  {
    v4 = 124;
  }
  *(_BYTE *)(a1 + 64) = v4;
  return result;
}
