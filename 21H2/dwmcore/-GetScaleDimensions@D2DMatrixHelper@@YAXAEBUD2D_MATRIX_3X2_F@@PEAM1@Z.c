/*
 * XREFs of ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x180053CDC
 * Callers:
 *     ?DeterminePreScale@CBlurRenderingGraph@@SAXPEAVCDrawingContext@@AEBUEffectInput@@1W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU5@@Z @ 0x180053BB4 (-DeterminePreScale@CBlurRenderingGraph@@SAXPEAVCDrawingContext@@AEBUEffectInput@@1W4D2D1_GAUSSIA.c)
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180059A10 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801E56E8 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     _o_sqrtf_0 @ 0x18010197C (_o_sqrtf_0.c)
 */

void __fastcall D2DMatrixHelper::GetScaleDimensions(
        D2DMatrixHelper *this,
        const struct D2D_MATRIX_3X2_F *a2,
        float *a3,
        float *a4)
{
  float v7; // xmm6_4
  float v8; // xmm0_4

  v7 = o_sqrtf_0((float)(*(float *)this * *(float *)this) + (float)(*((float *)this + 1) * *((float *)this + 1)));
  v8 = o_sqrtf_0((float)(*((float *)this + 2) * *((float *)this + 2)) + (float)(*((float *)this + 3)
                                                                              * *((float *)this + 3)));
  a2->m11 = v7;
  *a3 = v8;
}
