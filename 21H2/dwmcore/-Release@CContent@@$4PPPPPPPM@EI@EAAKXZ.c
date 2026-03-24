/*
 * XREFs of ?Release@CContent@@$4PPPPPPPM@EI@EAAKXZ @ 0x1800F48C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CContent::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 72));
}
