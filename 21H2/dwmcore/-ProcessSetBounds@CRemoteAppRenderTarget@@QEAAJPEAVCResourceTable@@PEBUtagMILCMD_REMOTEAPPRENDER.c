/*
 * XREFs of ?ProcessSetBounds@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETBOUNDS@@@Z @ 0x1801A1B10
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x1801C390C (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessSetBounds(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_SETBOUNDS *a3)
{
  CRemoteAppRenderTarget::SetWindowBounds(this, (const struct tagRECT *)((char *)a3 + 8));
  return 0LL;
}
