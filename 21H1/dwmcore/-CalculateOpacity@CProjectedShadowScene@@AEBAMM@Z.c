/*
 * XREFs of ?CalculateOpacity@CProjectedShadowScene@@AEBAMM@Z @ 0x18000A5E8
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x180008B30 (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x18000A580 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

float __fastcall CProjectedShadowScene::CalculateOpacity(CProjectedShadowScene *this, float a2)
{
  float v3; // xmm0_4

  if ( *((float *)this + 31) <= 0.0 )
    return *((float *)this + 29);
  v3 = fmaxf(*((float *)this + 30), 1.0 - (float)(a2 / *((float *)this + 31)));
  return fminf(*((float *)this + 29), v3);
}
