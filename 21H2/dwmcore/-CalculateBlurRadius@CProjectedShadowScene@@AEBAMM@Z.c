/*
 * XREFs of ?CalculateBlurRadius@CProjectedShadowScene@@AEBAMM@Z @ 0x18000C504
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18000A760 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     <none>
 */

float __fastcall CProjectedShadowScene::CalculateBlurRadius(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm0_4

  v3 = fmaxf(*((float *)this + 27), a2 * *((float *)this + 28));
  return fminf(*((float *)this + 26), v3);
}
