/*
 * XREFs of ?NotifyInvalidResource@CLocalAppRenderTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x18018AB70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CLocalAppRenderTarget::NotifyInvalidResource(
        CLocalAppRenderTarget *this,
        const struct IDeviceResource *a2)
{
  CLocalAppRenderTarget::ReleaseSwapChain((CLocalAppRenderTarget *)((char *)this - 136));
}
