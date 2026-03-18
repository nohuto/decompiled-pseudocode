/*
 * XREFs of ?Release@CConversionSwapChain@@$4PPPPPPPM@CMI@EAAKXZ @ 0x1800F24E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CConversionSwapChain::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 712));
}
