/*
 * XREFs of ?GetSurfaceTransform@CProjectedShadowApproxBlurEffect@@UEBAAEBUD2D_MATRIX_3X2_F@@I@Z @ 0x1800E3CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct D2D_MATRIX_3X2_F *__fastcall CProjectedShadowApproxBlurEffect::GetSurfaceTransform(
        CProjectedShadowApproxBlurEffect *this,
        unsigned int a2)
{
  return (const struct D2D_MATRIX_3X2_F *)((char *)this + 24 * a2 + 20);
}
