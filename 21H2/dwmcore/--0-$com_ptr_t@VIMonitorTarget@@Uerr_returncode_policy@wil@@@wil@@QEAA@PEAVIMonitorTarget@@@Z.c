/*
 * XREFs of ??0?$com_ptr_t@VIMonitorTarget@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVIMonitorTarget@@@Z @ 0x1801922E0
 * Callers:
 *     ?UpdateMmcssPartners@CComposition@@QEAAJXZ @ 0x18003D4B4 (-UpdateMmcssPartners@CComposition@@QEAAJXZ.c)
 *     ?Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUtagMILCMD_PARTITION_SWITCHREMOTINGMODE@@@Z @ 0x1800F59B4 (-Partition_SwitchRemotingMode@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUta.c)
 *     ?SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x1801C37A0 (-SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z.c)
 *     SendRemotingMetaData @ 0x180216CB4 (SendRemotingMetaData.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>::com_ptr_t<IMonitorTarget,wil::err_returncode_policy>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx

  *a1 = a2;
  if ( a2 )
  {
    v3 = *(int *)(*(_QWORD *)(a2 + 8) + 4LL) + a2 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  return a1;
}
