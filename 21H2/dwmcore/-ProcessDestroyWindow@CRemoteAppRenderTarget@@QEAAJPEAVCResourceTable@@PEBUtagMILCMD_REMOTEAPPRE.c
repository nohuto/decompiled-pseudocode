/*
 * XREFs of ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x1801C2B50
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z @ 0x1800F4FF4 (-RemoveRenderTarget@CRenderTargetManager@@QEAAXPEAVCRenderTarget@@@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1801C2F80 (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     ?SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x1801C37A0 (-SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessDestroyWindow(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW *a3)
{
  CRemoteAppRenderTarget *v4; // rcx
  int v6; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v7[10]; // [rsp+28h] [rbp-50h] BYREF

  v6 = 4;
  memset_0(v7, 0, 0x40uLL);
  v7[0] = *((_QWORD *)this + 32);
  CRemoteAppRenderTarget::SendMetaData(v4, (const struct _DWMIndirectMetaData *)&v6);
  CRenderTargetManager::RemoveRenderTarget(*((CRenderTargetManager **)g_pComposition + 27), this);
  CRemoteAppRenderTarget::ReleaseSwapChain(this);
  *((_QWORD *)this + 32) = 0LL;
  return 0LL;
}
