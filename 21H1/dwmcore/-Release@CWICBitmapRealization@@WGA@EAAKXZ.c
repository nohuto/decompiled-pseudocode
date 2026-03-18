/*
 * XREFs of ?Release@CWICBitmapRealization@@WGA@EAAKXZ @ 0x1800EFF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CWICBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 96));
}
