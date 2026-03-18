/*
 * XREFs of ?InflateToHalf@@YAMM@Z @ 0x180087BE0
 * Callers:
 *     ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800879D0 (-CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCS.c)
 * Callees:
 *     floorf @ 0x1801018F8 (floorf.c)
 */

float __fastcall InflateToHalf(float a1)
{
  float v1; // xmm6_4
  float v2; // xmm0_4

  v1 = a1;
  v2 = floorf(a1);
  if ( (float)(v1 - v2) < 0.5 )
    return v2 + 0.5;
  return v1;
}
