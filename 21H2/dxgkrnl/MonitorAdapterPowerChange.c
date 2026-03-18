/*
 * XREFs of MonitorAdapterPowerChange @ 0x1C01F2BB8
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0217840 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01B4D88 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 */

__int64 __fastcall MonitorAdapterPowerChange(PERESOURCE *this, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  result = (__int64)this[349];
  if ( result )
  {
    v6 = *(_QWORD *)(result + 112);
    if ( v6 )
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v6, 3, 1, a3);
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  return result;
}
