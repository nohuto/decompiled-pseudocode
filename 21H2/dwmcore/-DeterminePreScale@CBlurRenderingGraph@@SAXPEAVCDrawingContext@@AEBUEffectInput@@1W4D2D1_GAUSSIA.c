/*
 * XREFs of ?DeterminePreScale@CBlurRenderingGraph@@SAXPEAVCDrawingContext@@AEBUEffectInput@@1W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU5@@Z @ 0x180053BB4
 * Callers:
 *     ?ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@PEAU3@@Z @ 0x1800535FC (-ExecuteBlur@CRenderingTechnique@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@AEBUD2D_VECTOR_2F@@.c)
 * Callees:
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x180053CDC (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18007F8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800AEAE0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 */

void __fastcall CBlurRenderingGraph::DeterminePreScale(
        struct CDrawingContext *a1,
        const struct EffectInput *a2,
        const struct EffectInput *a3,
        struct D2D_MATRIX_3X2_F *a4,
        const struct D2D_VECTOR_2F *a5)
{
  float v5; // xmm6_4
  float v6; // xmm7_4
  float *v7; // r9
  const struct D2D_MATRIX_3X2_F *v8; // r11
  struct D2D_RECT_F v9; // [rsp+28h] [rbp-29h] BYREF
  __int64 v10; // [rsp+38h] [rbp-19h]
  struct D2D_RECT_F v11; // [rsp+40h] [rbp-11h] BYREF
  __int64 v12; // [rsp+50h] [rbp-1h]
  _DWORD v13[6]; // [rsp+58h] [rbp+7h] BYREF

  v5 = fmaxf(
         0.0099999998,
         fminf(
           1.0,
           *((float *)&CBlurRenderingGraph::k_optimizations + 5 * (int)a4)
         / (float)(*((float *)&CBlurRenderingGraph::k_optimizations + 5 * (int)a4 + 1) + a5->x)));
  v6 = fmaxf(
         0.0099999998,
         fminf(
           1.0,
           *((float *)&CBlurRenderingGraph::k_optimizations + 5 * (int)a4)
         / (float)(*((float *)&CBlurRenderingGraph::k_optimizations + 5 * (int)a4 + 1) + a5->y)));
  D2DMatrixHelper::ComputeRectangleTransform(
    (const struct EffectInput *)((char *)a2 + 84),
    (const struct D2D_RECT_F *)((char *)a3 + 84),
    &v9,
    a4);
  v13[1] = 0;
  v13[2] = 0;
  *(float *)v13 = v5;
  *(float *)&v13[3] = v6;
  *(float *)&v13[4] = 0.0 - (float)(v5 * 0.0);
  *(float *)&v13[5] = 0.0 - (float)(v6 * 0.0);
  D2D1::Matrix3x2F::SetProduct(
    (D2D1::Matrix3x2F *)&v11,
    (const struct D2D1::Matrix3x2F *)&v9,
    (const struct D2D1::Matrix3x2F *)v13);
  v9 = v11;
  v10 = v12;
  D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)&v9, v8, &v8->m12, v7);
}
