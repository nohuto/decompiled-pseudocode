/*
 * XREFs of ?Release@CBitmap@@$4PPPPPPPM@PI@EAAKXZ @ 0x1800F0F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 248));
}
