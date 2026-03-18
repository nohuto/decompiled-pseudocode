/*
 * XREFs of ?Release@CBitmapLock@@WCA@EAAKXZ @ 0x1800EFF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmapLock::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 32));
}
