/*
 * XREFs of ?NotifyInvalidResource@CIndirectSwapchainRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801715D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CIndirectSwapchainRenderTarget::NotifyInvalidResource(
        CIndirectSwapchainRenderTarget *this,
        const struct IDeviceResource *a2)
{
  CIndirectSwapchainRenderTarget::Unregister((CIndirectSwapchainRenderTarget *)((char *)this - 1888));
}
