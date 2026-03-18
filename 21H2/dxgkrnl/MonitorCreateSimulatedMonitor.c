/*
 * XREFs of MonitorCreateSimulatedMonitor @ 0x1C03AFD5C
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01E17E0 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0610 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C02F2F10 (DxgkHandleForceProjectionMonitor.c)
 *     MonitorDRTTest @ 0x1C03AFECC (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01E285C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0206098 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3D18 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 */

__int64 __fastcall MonitorCreateSimulatedMonitor(PERESOURCE *this, __int64 a2, int a3, __int64 a4, int a5, char a6)
{
  __int64 v6; // rbp
  __int64 v8; // rdi
  _QWORD *v9; // rax
  PERESOURCE v10; // rax
  __int64 Blink; // r14
  int IsTargetForceable; // eax
  unsigned int SimulatedMonitor; // ebx
  unsigned __int8 v15; // [rsp+58h] [rbp+10h] BYREF
  __int64 v16; // [rsp+68h] [rbp+20h]

  v16 = a4;
  v6 = a3;
  v8 = (unsigned int)a2;
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2);
  v9[3] = v6;
  v9[4] = v8;
  v9[5] = this;
  if ( !this || (_DWORD)v8 == -1 || (_DWORD)v6 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
    WdLogSingleEntry0(1LL);
  v10 = this[349];
  if ( !v10 || (Blink = (__int64)v10[1].SystemResourcesList.Blink) == 0 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3221225485LL;
  }
  if ( a6 )
    goto LABEL_16;
  v15 = 0;
  IsTargetForceable = DmmIsTargetForceable((DXGADAPTER *)this, v8, &v15, v6);
  SimulatedMonitor = IsTargetForceable;
  if ( IsTargetForceable < 0 )
  {
    WdLogSingleEntry2(2LL, v8, IsTargetForceable);
    return SimulatedMonitor;
  }
  if ( v15 )
  {
LABEL_16:
    v16 = 0LL;
    SimulatedMonitor = MONITOR_MGR::_HandleCreateSimulatedMonitor(Blink, (unsigned int)v8, (unsigned int)v6);
    MONITOR_MGR::_LogMonitorPresentEvent(Blink, 1073741825, v8, SimulatedMonitor, 0LL);
    return SimulatedMonitor;
  }
  WdLogSingleEntry1(3LL, v8);
  return 3221225659LL;
}
