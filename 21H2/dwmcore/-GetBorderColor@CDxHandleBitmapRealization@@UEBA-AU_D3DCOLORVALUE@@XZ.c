/*
 * XREFs of ?GetBorderColor@CDxHandleBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x1800E3A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CDxHandleBitmapRealization::GetBorderColor(
        CDxHandleBitmapRealization *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct _D3DCOLORVALUE *result; // rax

  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)((char *)this - 212);
  return result;
}
