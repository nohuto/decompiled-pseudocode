/*
 * XREFs of MonitorCreateSimulatedMonitor @ 0x1C02EE8F4
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012AE30 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0291010 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C0293330 (DxgkHandleForceProjectionMonitor.c)
 *     MonitorDRTTest @ 0x1C02EEA7C (MonitorDRTTest.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C014FC64 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02D96B8 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02ED968 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 */

__int64 __fastcall MonitorCreateSimulatedMonitor(
        PERESOURCE *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        int a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  __int64 v8; // rbp
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  PERESOURCE v15; // rax
  __int64 v16; // rax
  struct _FAST_MUTEX *SpinLock; // r14
  int IsTargetForceable; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  bool v26; // [rsp+58h] [rbp+10h] BYREF
  __int64 v27; // [rsp+68h] [rbp+20h] BYREF

  v27 = a4;
  v8 = (int)a3;
  v10 = (unsigned int)a2;
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  v11[3] = v8;
  v11[4] = v10;
  v11[5] = this;
  if ( !this || (_DWORD)v10 == -1 || (_DWORD)v8 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = this[334];
  if ( !v15 || (SpinLock = (struct _FAST_MUTEX *)v15->SpinLock) == 0LL )
  {
    v16 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v16 + 24) = this;
    WdLogEvent5_WdError(v16);
    return 3221225485LL;
  }
  if ( a6 )
    goto LABEL_16;
  v26 = 0;
  IsTargetForceable = DmmIsTargetForceable((DXGADAPTER *)this, (unsigned int)v10, &v26, v8);
  v23 = IsTargetForceable;
  if ( IsTargetForceable < 0 )
  {
    v24 = WdLogNewEntry5_WdError(v21, v20);
    *(_QWORD *)(v24 + 24) = v10;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdError(v24);
    return (unsigned int)v23;
  }
  if ( v26 )
  {
LABEL_16:
    v27 = 0LL;
    LODWORD(v23) = MONITOR_MGR::_HandleCreateSimulatedMonitor(
                     SpinLock,
                     (unsigned int)v10,
                     v8,
                     0LL,
                     (struct DXGMONITOR *)&v27,
                     a8);
    MONITOR_MGR::_LogMonitorPresentEvent((__int64)SpinLock, 1073741825LL, v10, v23, 0LL);
    return (unsigned int)v23;
  }
  v25 = WdLogNewEntry5_WdWarning(v21, v20, v22);
  *(_QWORD *)(v25 + 24) = v10;
  WdLogEvent5_WdWarning(v25);
  return 3221225659LL;
}
