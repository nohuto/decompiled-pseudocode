/*
 * XREFs of ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x18000D838
 * Callers:
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x18000B52C (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x18000D7B8 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CProjectedShadowCaster::GetColor(
        CProjectedShadowCaster *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct _D3DCOLORVALUE *v2; // rax

  v2 = (struct _D3DCOLORVALUE *)*((_QWORD *)this + 14);
  if ( v2 )
  {
    *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)&v2[5].r;
  }
  else
  {
    *(_QWORD *)&retstr->r = 0LL;
    retstr->b = 0.0;
    retstr->a = 1.0;
  }
  return retstr;
}
