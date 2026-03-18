/*
 * XREFs of ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800EE5B0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800EE630 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ @ 0x18019A380 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ.c)
 *     ?EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x1802771B8 (-EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ.c)
 *     ?LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x180277368 (-LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ.c)
 */

__int64 __fastcall CComposition::Partition_ForceRender(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_FORCERENDER *a4)
{
  CRenderTargetManager *v6; // rcx

  if ( *((_BYTE *)a4 + 4) )
    *(_BYTE *)(*((_QWORD *)this + 27) + 582LL) = 1;
  if ( *((_DWORD *)a4 + 2) == 1 )
  {
    CDeviceManager::EnterHardwareProtectionTeardown(this);
  }
  else if ( *((_DWORD *)a4 + 2) == 2 )
  {
    CDeviceManager::LeaveHardwareProtectionTeardown(this);
  }
  if ( *((_BYTE *)a4 + 12) )
    *((_BYTE *)this + 1275) = 1;
  v6 = (CRenderTargetManager *)*((_QWORD *)this + 27);
  if ( *((_BYTE *)a4 + 5) )
    CRenderTargetManager::HandleDDAArrivalOrDeparture(v6);
  else
    CRenderTargetManager::ForceFullRender(v6);
  return 0LL;
}
