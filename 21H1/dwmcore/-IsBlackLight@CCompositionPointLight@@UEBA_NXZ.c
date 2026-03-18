/*
 * XREFs of ?IsBlackLight@CCompositionPointLight@@UEBA_NXZ @ 0x1801BF0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionPointLight::IsBlackLight(struct _D3DCOLORVALUE *this)
{
  return CCompositionLight::IsBlackColor((CCompositionLight *)this, this + 16, this[19].r);
}
