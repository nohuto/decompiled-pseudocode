/*
 * XREFs of ?Release@CGDIBitmapRealization@@$4PPPPPPPM@BKI@EAAKXZ @ 0x1800F3260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGDIBitmapRealization::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 424));
}
