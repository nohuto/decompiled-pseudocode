/*
 * XREFs of ?Release@CSectionBitmapRealization@@WBDA@EAAKXZ @ 0x1800F2A90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSectionBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 304));
}
