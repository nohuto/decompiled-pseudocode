/*
 * XREFs of ?Release@CDxHandleAdvancedDirectFlipBitmapRealization@@$4PPPPPPPM@BLI@EAAKXZ @ 0x1800F8ED0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 440));
}
