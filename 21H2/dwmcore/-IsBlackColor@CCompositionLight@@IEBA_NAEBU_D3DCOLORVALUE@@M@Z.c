/*
 * XREFs of ?IsBlackColor@CCompositionLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z @ 0x1800EA3BC
 * Callers:
 *     ?IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ @ 0x180018A90 (-IsBlackLight@CCompositionAmbientLight@@UEBA_NXZ.c)
 *     ?IsBlackLight@CCompositionDistantLight@@UEBA_NXZ @ 0x1800EA350 (-IsBlackLight@CCompositionDistantLight@@UEBA_NXZ.c)
 *     ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ @ 0x1800EA370 (-IsBlackLight@CCompositionSpotLight@@UEBA_NXZ.c)
 *     ?IsBlackLight@CCompositionPointLight@@UEBA_NXZ @ 0x18020DE20 (-IsBlackLight@CCompositionPointLight@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionLight::IsBlackColor(CCompositionLight *this, const struct _D3DCOLORVALUE *a2, float a3)
{
  return COERCE_FLOAT(COERCE_UNSIGNED_INT(a3 * a2->r) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a3 * a2->g) & _xmm) < 0.0000011920929
      && COERCE_FLOAT(COERCE_UNSIGNED_INT(a3 * a2->b) & _xmm) < 0.0000011920929;
}
