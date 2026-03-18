/*
 * XREFs of ?Release@CLegacyStereoSwapChain@@$4PPPPPPPM@BDI@EAAKXZ @ 0x1800EF110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CLegacyStereoSwapChain::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 312));
}
