/*
 * XREFs of ?IsEmergencyMonitorConnected@@YAJPEAXIPEAE@Z @ 0x1C0134CF4
 * Callers:
 *     DxgkUpdateGdiInfo @ 0x1C0135D50 (DxgkUpdateGdiInfo.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000A6B4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C0129954 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     MonitorGetNumConnectedMonitor @ 0x1C0134D9C (MonitorGetNumConnectedMonitor.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1C0134E90 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C01387F8 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 */

__int64 __fastcall IsEmergencyMonitorConnected(DXGADAPTER *a1, __int64 a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v5; // rdx
  MONITOR_MGR *v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  *a3 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v9);
    }
    v7 = *((_QWORD *)a1 + 334);
    if ( v7 && (v6 = *(MONITOR_MGR **)(v7 + 96)) != 0LL )
    {
      MONITOR_MGR::_IsUsingSimulatedMonitor(v6);
    }
    else
    {
      v10 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v10 + 24) = a1;
      WdLogEvent5_WdError(v10);
    }
  }
  MonitorGetNumConnectedMonitor(a1);
  return 0LL;
}
