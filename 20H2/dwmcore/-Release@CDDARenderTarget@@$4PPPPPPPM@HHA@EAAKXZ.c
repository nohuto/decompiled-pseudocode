/*
 * XREFs of ?Release@CDDARenderTarget@@$4PPPPPPPM@HHA@EAAKXZ @ 0x1800F0040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDARenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 1904));
}
