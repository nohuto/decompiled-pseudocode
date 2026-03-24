/*
 * XREFs of ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800DB90C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800DB984 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ @ 0x180163BD4 (-HandleDDAArrivalOrDeparture@CRenderTargetManager@@IEAAJXZ.c)
 *     ?EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x180238B8C (-EnterHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ.c)
 *     ?LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ @ 0x180238D30 (-LeaveHardwareProtectionTeardown@CDeviceManager@@QEAAXXZ.c)
 */

__int64 __fastcall CComposition::Partition_ForceRender(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct tagMILCMD_PARTITION_FORCERENDER *a4)
{
  CRenderTargetManager *v6; // rcx

  if ( *((_BYTE *)a4 + 4) )
    *(_BYTE *)(*((_QWORD *)this + 11) + 133LL) = 1;
  if ( *((_DWORD *)a4 + 2) == 1 )
  {
    CDeviceManager::EnterHardwareProtectionTeardown(this);
  }
  else if ( *((_DWORD *)a4 + 2) == 2 )
  {
    CDeviceManager::LeaveHardwareProtectionTeardown(this);
  }
  if ( *((_BYTE *)a4 + 12) )
    *((_BYTE *)this + 1130) = 1;
  v6 = (CRenderTargetManager *)*((_QWORD *)this + 11);
  if ( *((_BYTE *)a4 + 5) )
    CRenderTargetManager::HandleDDAArrivalOrDeparture(v6);
  else
    CRenderTargetManager::ForceFullRender(v6);
  return 0LL;
}
