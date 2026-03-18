/*
 * XREFs of ?GetBorderColor@CDxHandleYUVBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x1800DF45C
 * Callers:
 *     ?GetBorderColor@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA?AU_D3DCOLORVALUE@@XZ @ 0x1800F36D0 (-GetBorderColor@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA-AU_D3DCOLORVALUE@@XZ.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CDxHandleYUVBitmapRealization::GetBorderColor(
        CDxHandleYUVBitmapRealization *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct _D3DCOLORVALUE *result; // rax

  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)((char *)this - 364);
  return result;
}
