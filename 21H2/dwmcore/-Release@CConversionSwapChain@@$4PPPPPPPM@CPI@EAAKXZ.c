/*
 * XREFs of ?Release@CConversionSwapChain@@$4PPPPPPPM@CPI@EAAKXZ @ 0x18010A770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CConversionSwapChain::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 760));
}
