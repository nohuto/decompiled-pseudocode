/*
 * XREFs of ?Release@CCompositionTextLine@@$4PPPPPPPM@HI@EAAKXZ @ 0x1800ECAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompositionTextLine::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 120));
}
