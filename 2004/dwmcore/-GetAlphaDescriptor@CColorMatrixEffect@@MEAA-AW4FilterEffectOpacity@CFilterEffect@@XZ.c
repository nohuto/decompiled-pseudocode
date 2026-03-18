/*
 * XREFs of ?GetAlphaDescriptor@CColorMatrixEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ @ 0x18016FE80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CColorMatrixEffect::GetAlphaDescriptor(__int64 a1)
{
  return *(float *)(a1 + 212) != 0.0 || *(float *)(a1 + 228) != 1.0;
}
