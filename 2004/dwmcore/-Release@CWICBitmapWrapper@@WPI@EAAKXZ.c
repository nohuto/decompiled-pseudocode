/*
 * XREFs of ?Release@CWICBitmapWrapper@@WPI@EAAKXZ @ 0x1800F0310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWICBitmapWrapper::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 248));
}
