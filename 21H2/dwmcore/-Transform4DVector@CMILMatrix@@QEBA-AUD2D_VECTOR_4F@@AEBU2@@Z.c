/*
 * XREFs of ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180261004
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180114AC6 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x18020DC20 (-GetSceneLightRealization@CCompositionPointLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@.c)
 *     ?GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@@Z @ 0x18020F8B0 (-GetSceneLightRealization@CCompositionSpotLight@@UEBAJAEBVCMILMatrix@@PEAPEAUISpectreLightNode@@.c)
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180236944 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1802A9FAC (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
 * Callees:
 *     ??$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180096590 (--$IsAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 */

struct D2D_VECTOR_4F *__fastcall CMILMatrix::Transform4DVector(
        CMILMatrix *this,
        struct D2D_VECTOR_4F *__return_ptr retstr,
        const struct D2D_VECTOR_4F *a3)
{
  float w; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm1_4
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  FLOAT v12; // xmm7_4
  float v13; // xmm2_4

  w = a3->w;
  v7 = a3->x * *((float *)this + 2);
  v8 = a3->z * *((float *)this + 9);
  v9 = a3->z * *((float *)this + 10);
  v10 = a3->y * *((float *)this + 6);
  v11 = (float)(a3->x * *((float *)this + 1)) + (float)(a3->y * *((float *)this + 5));
  retstr->x = (float)((float)((float)(a3->y * *((float *)this + 4)) + (float)(a3->x * *(float *)this))
                    + (float)(a3->z * *((float *)this + 8)))
            + (float)(w * *((float *)this + 12));
  v12 = (float)((float)(v7 + v10) + v9) + (float)(w * *((float *)this + 14));
  retstr->y = (float)(v11 + v8) + (float)(w * *((float *)this + 13));
  retstr->z = v12;
  if ( CMILMatrix::IsAffine<1>((__int64)this, 0) )
    v13 = *(float *)&FLOAT_1_0;
  else
    v13 = (float)((float)((float)(*((float *)this + 3) * a3->x) + (float)(*((float *)this + 7) * a3->y))
                + (float)(*((float *)this + 11) * a3->z))
        + (float)(*((float *)this + 15) * a3->w);
  retstr->w = v13;
  return retstr;
}
