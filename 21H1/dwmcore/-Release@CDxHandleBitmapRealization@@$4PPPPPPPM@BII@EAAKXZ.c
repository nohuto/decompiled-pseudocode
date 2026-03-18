/*
 * XREFs of ?Release@CDxHandleBitmapRealization@@$4PPPPPPPM@BII@EAAKXZ @ 0x1800F02B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 392));
}
