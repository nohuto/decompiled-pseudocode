/*
 * XREFs of ?GetAlphaDescriptor@CColorMatrixEffect@@MEAA?AW4FilterEffectOpacity@CFilterEffect@@XZ @ 0x18019FE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CColorMatrixEffect::GetAlphaDescriptor(__int64 a1)
{
  return *(float *)(a1 + 220) != 0.0 || *(float *)(a1 + 236) != 1.0;
}
