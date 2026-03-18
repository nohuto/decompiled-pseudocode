/*
 * XREFs of ?Release@CLegacySwapChain@@$4PPPPPPPM@BCA@EAAKXZ @ 0x1800EEC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::Release(__int64 a1)
{
  return CRenderTargetBitmap::Release((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 288));
}
