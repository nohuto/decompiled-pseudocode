/*
 * XREFs of ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x1800098F0
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18000946C (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800505C0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ?TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000993C (-TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18021E6E4 (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

void __fastcall D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  D2DMatrixHelper *v8; // rcx
  float *v9; // r8
  float *v10; // r9
  int v11; // xmm0_4
  float v12; // xmm4_4
  float v13; // xmm5_4
  int v14; // xmm1_4
  float v15; // xmm3_4
  float v16; // xmm2_4
  float v17; // xmm5_4
  struct D2D_MATRIX_3X2_F *v18; // [rsp+20h] [rbp-8h]

  if ( !D2DMatrixHelper::TryDecomposeMatrixIntoScaleAndRemaining_NumericallyStable(this, a2, a3, a4, v18) )
  {
    D2DMatrixHelper::GetScaleDimensions(v8, a2, v9, v10);
    v11 = *((_DWORD *)this + 4);
    v12 = 1.0 / a2->m11;
    v13 = 1.0 / *a3;
    v14 = *((_DWORD *)this + 5);
    v15 = v12 * *((float *)this + 1);
    v16 = v13 * *((float *)this + 2);
    v17 = v13 * *((float *)this + 3);
    *a4 = v12 * *(float *)this;
    a4[1] = v15;
    a4[2] = v16;
    a4[3] = v17;
    *((_DWORD *)a4 + 4) = v11;
    *((_DWORD *)a4 + 5) = v14;
  }
}
