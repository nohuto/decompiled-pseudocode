/*
 * XREFs of MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C01B8534
 * Callers:
 *     ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0165090 (-DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01B4D88 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 */

__int64 __fastcall MonitorDestroyAllSameTypeSimulatedMonitor(PERESOURCE *this, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx

  v5 = (int)a2;
  v8 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = v5;
  if ( !this || (_DWORD)v5 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  result = (__int64)this[349];
  if ( result )
  {
    v10 = *(_QWORD *)(result + 112);
    if ( v10 )
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v10, v5, a4, a3);
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  return result;
}
