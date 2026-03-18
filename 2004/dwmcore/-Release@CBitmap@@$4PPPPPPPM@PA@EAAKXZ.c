/*
 * XREFs of ?Release@CBitmap@@$4PPPPPPPM@PA@EAAKXZ @ 0x1800F12E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 240));
}
