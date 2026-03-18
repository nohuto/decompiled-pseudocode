/*
 * XREFs of ?CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z @ 0x180236154
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180236944 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     <none>
 */

float __fastcall CProjectedShadowScene::CalculateBlurRadius(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(*((float *)this + 29), a2 * *((float *)this + 30));
  return fminf(*((float *)this + 28), v3);
}
