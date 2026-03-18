/*
 * XREFs of ?InferAffineMatrix@CMILMatrix@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUMilPoint2F@@@Z @ 0x180210258
 * Callers:
 *     ?InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1801E8308 (-InferVisualToTextureTransform@CGradientBrush@@IEBAJAEAY02$$CBUD2D_POINT_2F@@AEBV-$TMilRect_@MUM.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILMatrix::InferAffineMatrix(__int64 a1, float *a2, float *a3)
{
  __int64 result; // rax
  float v4; // xmm9_4
  float v5; // xmm10_4
  float v6; // xmm5_4
  float v7; // xmm13_4
  float v8; // xmm15_4
  float v9; // xmm14_4
  float v10; // xmm0_4
  float v11; // xmm8_4
  float v12; // xmm7_4
  float v13; // xmm2_4
  float v14; // xmm11_4
  float v15; // [rsp+B0h] [rbp+8h]
  float v16; // [rsp+B8h] [rbp+10h]
  float v17; // [rsp+C8h] [rbp+20h]

  result = 1065353216LL;
  v4 = a2[3];
  v5 = *a2;
  v16 = a3[1];
  v6 = a2[1];
  v7 = a2[2];
  v15 = a3[3];
  v8 = *a3;
  v9 = a3[2];
  v17 = a3[4];
  v10 = a3[5];
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 1065353216;
  v11 = (float)(v4 * v7) - (float)(v6 * v5);
  v12 = 1.0 / (float)((float)((float)((float)(v6 - v4) * v5) - (float)((float)(v7 - v5) * v6)) + v11);
  *(float *)(a1 + 4) = (float)((float)((float)((float)(v4 - v6) * v15) + (float)((float)(v6 - v4) * v16))
                             + (float)((float)(v6 - v6) * v10))
                     * v12;
  *(float *)a1 = (float)((float)((float)((float)(v4 - v6) * v9) + (float)((float)(v6 - v4) * v8))
                       + (float)((float)(v6 - v6) * v17))
               * v12;
  *(_WORD *)(a1 + 64) = 0x4000;
  *(float *)(a1 + 16) = (float)((float)((float)((float)(v5 - v5) * v9) + (float)((float)(v5 - v7) * v8))
                              + (float)((float)(v7 - v5) * v17))
                      * v12;
  v13 = (float)(v6 * v5) - (float)(v4 * v5);
  v14 = (float)(v6 * v5) - (float)(v7 * v6);
  *(float *)(a1 + 20) = (float)((float)((float)((float)(v5 - v5) * v15) + (float)((float)(v5 - v7) * v16))
                              + (float)((float)(v7 - v5) * v10))
                      * v12;
  *(float *)(a1 + 52) = (float)((float)((float)(v13 * v15) + (float)(v11 * v16)) + (float)(v14 * v10)) * v12;
  *(float *)(a1 + 48) = (float)((float)((float)(v13 * v9) + (float)(v11 * v8)) + (float)(v14 * v17)) * v12;
  return result;
}
