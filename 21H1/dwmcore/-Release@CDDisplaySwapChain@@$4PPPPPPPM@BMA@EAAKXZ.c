/*
 * XREFs of ?Release@CDDisplaySwapChain@@$4PPPPPPPM@BMA@EAAKXZ @ 0x1800EE9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDDisplaySwapChain::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4) - 448));
}
