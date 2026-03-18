/*
 * XREFs of ?ReleaseRenderTargets@CIndirectSwapchainRenderTarget@@EEAAXXZ @ 0x180174540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CIndirectSwapchainRenderTarget::ReleaseRenderTargets(CIndirectSwapchainRenderTarget *this)
{
  COffScreenRenderTarget::ReleaseRenderTargets(this);
}
