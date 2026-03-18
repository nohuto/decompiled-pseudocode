/*
 * XREFs of ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800092D8
 * Callers:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000928C (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 * Callees:
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800096E4 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x18009F1C8 (-IsCloseRealZero@@YA_NMM@Z.c)
 */

bool __fastcall D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  bool result; // al
  int *v5; // rcx
  __int64 v6; // r9
  int v7; // xmm2_4
  __int64 v8; // rcx
  _DWORD *v9; // r8
  float *v10; // r9
  _DWORD *v11; // r10
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  bool v15; // cc

  result = D2DMatrixHelper::Is2DAxisAlignedPreserving(this, a2);
  if ( result )
  {
    *(_OWORD *)v6 = *(_OWORD *)v5;
    *(_QWORD *)(v6 + 16) = *((_QWORD *)v5 + 2);
    v7 = *v5;
    if ( IsCloseRealZero(*(float *)v5, 0.000081380211) && IsCloseRealZero(*(float *)(v8 + 12), 0.000081380211) )
    {
      *v11 = *(_DWORD *)(v8 + 4) & _xmm;
      *v9 = *(_DWORD *)(v8 + 8) & _xmm;
      v12 = FLOAT_N1_0;
      if ( v10[1] >= 0.0 )
        v13 = *(float *)&FLOAT_1_0;
      else
        v13 = FLOAT_N1_0;
      v10[1] = v13;
      if ( v10[2] >= 0.0 )
        v12 = *(float *)&FLOAT_1_0;
      v10[2] = v12;
    }
    else
    {
      *v11 = v7 & _xmm;
      *v9 = *(_DWORD *)(v8 + 12) & _xmm;
      if ( *v10 >= 0.0 )
        v14 = *(float *)&FLOAT_1_0;
      else
        v14 = FLOAT_N1_0;
      v15 = v10[3] >= 0.0;
      *v10 = v14;
      if ( v15 )
        v10[3] = 1.0;
      else
        v10[3] = -1.0;
    }
    return 1;
  }
  return result;
}
