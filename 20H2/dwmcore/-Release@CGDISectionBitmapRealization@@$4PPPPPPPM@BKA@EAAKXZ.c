/*
 * XREFs of ?Release@CGDISectionBitmapRealization@@$4PPPPPPPM@BKA@EAAKXZ @ 0x1800F2A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGDISectionBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 416));
}
