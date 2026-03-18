/*
 * XREFs of MonitorDestroySimulatedMonitor @ 0x1C02F31CC
 * Callers:
 *     DxgkHandleForceProjectionMonitor @ 0x1C0297820 (DxgkHandleForceProjectionMonitor.c)
 *     MonitorDRTTest @ 0x1C02F2FEC (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C015CCDC (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2490 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorDestroySimulatedMonitor(
        PERESOURCE *this,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  PERESOURCE v11; // rax
  __int64 v12; // rax
  __int64 SpinLock; // rsi
  unsigned int v15; // ebx

  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = this;
  if ( !this || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = this[337];
  if ( !v11 || (SpinLock = v11->SpinLock) == 0 )
  {
    v12 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v12 + 24) = this;
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  v15 = MONITOR_MGR::_HandleRemoveSimulatedMonitor((struct _FAST_MUTEX *)v11->SpinLock, (unsigned int)v5, a3);
  MONITOR_MGR::_LogMonitorPresentEvent(SpinLock, 1073741826LL, v5, v15, 0LL);
  return v15;
}
