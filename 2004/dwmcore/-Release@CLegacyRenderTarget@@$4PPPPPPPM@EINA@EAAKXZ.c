/*
 * XREFs of ?Release@CLegacyRenderTarget@@$4PPPPPPPM@EINA@EAAKXZ @ 0x1800EFBE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyRenderTarget::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 18640));
}
