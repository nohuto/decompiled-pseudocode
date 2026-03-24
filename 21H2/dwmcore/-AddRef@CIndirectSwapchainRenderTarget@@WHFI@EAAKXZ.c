/*
 * XREFs of ?AddRef@CIndirectSwapchainRenderTarget@@WHFI@EAAKXZ @ 0x1800F4BA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CIndirectSwapchainRenderTarget::AddRef(__int64 a1)
{
  return CProjectedShadowReceiver::AddRef((CProjectedShadowReceiver *)(a1 - 1880));
}
