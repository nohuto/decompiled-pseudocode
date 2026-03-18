/*
 * XREFs of ?ReleaseRenderTargets@CIndirectSwapchainRenderTarget@@EEAAXXZ @ 0x1801A1EA0
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
