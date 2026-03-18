/*
 * XREFs of ?Release@CWICBitmapWrapper@@$4PPPPPPPM@BBA@EAAKXZ @ 0x1800F1350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 272));
}
