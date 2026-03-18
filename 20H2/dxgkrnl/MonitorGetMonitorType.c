/*
 * XREFs of MonitorGetMonitorType @ 0x1C0127328
 * Callers:
 *     _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C0129154 (_lambda_3a429c02e21bb855f1ec386a1cface2b_--operator().c)
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C0133C90 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01373BC (-IsMonitorConnected@DMMVIDEOPRESENTTARGET@@QEBAEPEAW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z @ 0x1C0141EA8 (-IsTargetEmergencySimulatedMonitor@@YAJPEAXIPEAE@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C01582A0 (DxgkQueryMonitorTypeLockHeld.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0296840 (DxgkHandleForceProjectionMonitor.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetMonitorType(struct HDXGMONITOR__ *a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGMONITOR *v9; // rbx
  __int64 v10; // rax
  struct DXGMONITOR *v11; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = a1;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v11 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v11);
  if ( (int)result >= 0 )
  {
    v9 = v11;
    if ( !v11 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v8, v7);
      WdLogEvent5_WdAssertion(v10);
    }
    *a2 = *((_DWORD *)v9 + 108);
    return 0LL;
  }
  return result;
}
