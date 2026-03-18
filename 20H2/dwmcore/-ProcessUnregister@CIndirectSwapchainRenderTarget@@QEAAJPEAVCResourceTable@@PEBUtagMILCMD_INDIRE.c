/*
 * XREFs of ?ProcessUnregister@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UNREGISTER@@@Z @ 0x1801897B4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ @ 0x180189AC0 (-Unregister@CIndirectSwapchainRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::ProcessUnregister(
        CIndirectSwapchainRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_INDIRECTSWAPCHAINRENDERTARGET_UNREGISTER *a3)
{
  CIndirectSwapchainRenderTarget::Unregister(this);
  return 0LL;
}
