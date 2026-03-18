/*
 * XREFs of ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x1800EE630
 * Callers:
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18007A258 (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_FORCERENDER@@@Z @ 0x1800EE5B0 (-Partition_ForceRender@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800F59B4 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 *     ?AdjustStereoEntityCount@CComposition@@QEAAX_N@Z @ 0x180192F60 (-AdjustStereoEntityCount@CComposition@@QEAAX_N@Z.c)
 *     ?UpdateDebugCounter@CComposition@@QEAAX_N@Z @ 0x180193898 (-UpdateDebugCounter@CComposition@@QEAAX_N@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetManager::ForceFullRender(CRenderTargetManager *this)
{
  _QWORD *v2; // rsi
  _QWORD *i; // rdi

  *((_BYTE *)this + 576) = 1;
  v2 = (_QWORD *)*((_QWORD *)this + 2);
  for ( i = (_QWORD *)*((_QWORD *)this + 1); i != v2; ++i )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*i + 224LL))(*i);
  CRenderTargetManager::EndTargetEnumeration(this);
}
