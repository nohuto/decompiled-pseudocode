/*
 * XREFs of ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ @ 0x180019940
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionAmbientLight::IsBlackLight(CCompositionAmbientLight *this)
{
  return CCompositionLight::IsBlackColor(
           this,
           (const struct _D3DCOLORVALUE *)((char *)this + 248),
           *((float *)this + 66));
}
