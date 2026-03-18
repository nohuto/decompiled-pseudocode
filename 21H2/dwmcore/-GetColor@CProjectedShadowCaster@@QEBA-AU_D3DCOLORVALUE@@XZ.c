/*
 * XREFs of ?GetColor@CProjectedShadowCaster@@QEBA?AU_D3DCOLORVALUE@@XZ @ 0x180201810
 * Callers:
 *     ?ComputeShadowColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x180114772 (-ComputeShadowColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1802018DC (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CProjectedShadowCaster::GetColor(
        CProjectedShadowCaster *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 15);
  if ( v2 )
  {
    *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)(v2 + 88);
  }
  else
  {
    *(_QWORD *)&retstr->r = 0LL;
    retstr->b = 0.0;
    retstr->a = 1.0;
  }
  return retstr;
}
