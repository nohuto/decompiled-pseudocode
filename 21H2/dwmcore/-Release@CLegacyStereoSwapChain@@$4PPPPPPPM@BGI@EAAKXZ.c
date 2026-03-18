/*
 * XREFs of ?Release@CLegacyStereoSwapChain@@$4PPPPPPPM@BGI@EAAKXZ @ 0x18010A150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacyStereoSwapChain::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 360));
}
