/*
 * XREFs of ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180012684
 * Callers:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180012638 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180012AF0 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 */

char __fastcall D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  float *v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // r8
  __int64 v7; // r9
  float v8; // xmm3_4
  float v9; // xmm0_4
  bool v10; // cc
  float v12; // xmm0_4
  float v13; // xmm1_4

  if ( !D2DMatrixHelper::Is2DAxisAlignedPreserving(this, a2) )
    return 0;
  *(_OWORD *)v7 = *(_OWORD *)v5;
  *(_QWORD *)(v7 + 16) = *(_QWORD *)(v5 + 16);
  LODWORD(v8) = *(_DWORD *)v5 & _xmm;
  if ( v8 >= 0.000081380211 || COERCE_FLOAT(*(_DWORD *)(v5 + 12) & _xmm) >= 0.000081380211 )
  {
    *v4 = v8;
    *v6 = *(_DWORD *)(v5 + 12) & _xmm;
    if ( *(float *)v7 < 0.0 )
      v9 = FLOAT_N1_0;
    else
      v9 = *(float *)&FLOAT_1_0;
    v10 = *(float *)(v7 + 12) >= 0.0;
    *(float *)v7 = v9;
    if ( v10 )
      *(_DWORD *)(v7 + 12) = 1065353216;
    else
      *(_DWORD *)(v7 + 12) = -1082130432;
  }
  else
  {
    *(_DWORD *)v4 = *(_DWORD *)(v5 + 4) & _xmm;
    v12 = FLOAT_N1_0;
    *v6 = *(_DWORD *)(v5 + 8) & _xmm;
    if ( *(float *)(v7 + 4) >= 0.0 )
      v13 = *(float *)&FLOAT_1_0;
    else
      v13 = FLOAT_N1_0;
    v10 = *(float *)(v7 + 8) >= 0.0;
    *(float *)(v7 + 4) = v13;
    if ( v10 )
      v12 = *(float *)&FLOAT_1_0;
    *(float *)(v7 + 8) = v12;
  }
  return 1;
}
