/*
 * XREFs of ?Release@CIndirectSwapchainRenderTarget@@WHFI@EAAKXZ @ 0x1800F5650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CIndirectSwapchainRenderTarget::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 1880));
}
