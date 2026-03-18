/*
 * XREFs of ?ValidateRealizationSize@CBackdropVisualImage@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F27C0
 * Callers:
 *     ?SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F2610 (-SetRootAndSourceRectangle@CBackdropVisualImage@@AEAAJPEAVCVisual@@AEBV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x180057E64 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800882E4 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUnique.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

int *__fastcall CBackdropVisualImage::ValidateRealizationSize(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        struct D2D_RECT_F *a4)
{
  int *result; // rax
  double v5; // xmm2_8
  double v7; // xmm1_8
  double v8; // xmm0_8
  double v9; // xmm1_8
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  __int128 v13; // xmm0
  float v14; // xmm2_4
  _BYTE v15[32]; // [rsp+20h] [rbp-40h] BYREF
  struct D2D_RECT_F v16; // [rsp+40h] [rbp-20h] BYREF
  float v17; // [rsp+50h] [rbp-10h]
  float v18; // [rsp+54h] [rbp-Ch]

  result = (int *)*(unsigned int *)(a1 + 1872);
  v5 = *(double *)(a1 + 120);
  v7 = (double)(int)result;
  if ( v5 > (double)(int)result || *(double *)(a1 + 128) > v7 )
  {
    v8 = *(double *)(a1 + 128);
    if ( v5 <= v8 )
      v9 = v7 / v8;
    else
      v9 = v7 / v5;
    v10 = v9;
    v11 = v10 * *(float *)(a1 + 1880);
    v12 = v10 * *(float *)(a1 + 1876);
    *(float *)(a1 + 1880) = v11;
    *(float *)(a1 + 1876) = v12;
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v12 - 1.0) & _xmm) >= 0.000081380211
      || COERCE_FLOAT(COERCE_UNSIGNED_INT(v11 - 1.0) & _xmm) >= 0.000081380211 )
    {
      v13 = *a2;
      v16.top = 0.0;
      v16.right = 0.0;
      v16.left = v12;
      *(_OWORD *)v15 = v13;
      *(_OWORD *)&v15[16] = v13;
      v16.bottom = v11;
      v17 = 0.0 - (float)(v12 * 0.0);
      v18 = 0.0 - (float)(v11 * 0.0);
      D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
        (D2DMatrixHelper *)&v15[16],
        &v16,
        (const struct D2D_MATRIX_3X2_F *)v15,
        a4);
      *(_OWORD *)&v15[16] = *(_OWORD *)v15;
      result = PixelAlign(v15, (__int64)&v15[16]);
      v14 = (float)result[3];
      *(float *)&v13 = (float)result[1];
      *(double *)(a1 + 120) = (float)((float)result[2] - (float)*result);
      *(double *)(a1 + 128) = (float)(v14 - *(float *)&v13);
    }
  }
  return result;
}
