/*
 * XREFs of ?Release@CGdiSpriteBitmap@@$4PPPPPPPM@CAI@EAAKXZ @ 0x1800F08E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CGdiSpriteBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 520));
}
