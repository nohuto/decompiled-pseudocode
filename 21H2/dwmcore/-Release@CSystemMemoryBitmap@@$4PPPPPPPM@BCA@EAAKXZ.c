/*
 * XREFs of ?Release@CSystemMemoryBitmap@@$4PPPPPPPM@BCA@EAAKXZ @ 0x1800F6D40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 288));
}
