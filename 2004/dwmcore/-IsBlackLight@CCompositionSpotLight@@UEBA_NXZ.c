/*
 * XREFs of ?IsBlackLight@CCompositionSpotLight@@UEBA_NXZ @ 0x1800BE5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBlackColor@CCompositionLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z @ 0x1800BE69C (-IsBlackColor@CCompositionLight@@IEBA_NAEBU_D3DCOLORVALUE@@M@Z.c)
 */

char __fastcall CCompositionSpotLight::IsBlackLight(struct _D3DCOLORVALUE *this)
{
  float g; // xmm1_4
  char v2; // r8

  g = this[24].g;
  v2 = 0;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(g * this[19].r) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(g * this[19].g) & _xmm) < 0.0000011920929
    && COERCE_FLOAT(COERCE_UNSIGNED_INT(g * this[19].b) & _xmm) < 0.0000011920929 )
  {
    return CCompositionLight::IsBlackColor((CCompositionLight *)this, this + 20, this[24].b);
  }
  return v2;
}
