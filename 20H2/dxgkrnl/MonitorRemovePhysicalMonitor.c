/*
 * XREFs of MonitorRemovePhysicalMonitor @ 0x1C02F2F84
 * Callers:
 *     DxgkPowerOnOffMonitor @ 0x1C0172494 (DxgkPowerOnOffMonitor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0174078 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoRemovePdo @ 0x1C02D8330 (DpiPdoRemovePdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C013216C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C0149928 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C014A2A4 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C015BB2C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02DCC78 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1318 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorRemovePhysicalMonitor(
        char *a1,
        __int64 a2,
        __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  __int64 v5; // rdi
  char v6; // r15
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v17; // rbp
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  _QWORD *v23; // rax
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF
  bool v25; // [rsp+68h] [rbp+10h] BYREF

  v5 = (unsigned int)a2;
  v6 = a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v9 = (unsigned int)v5;
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  if ( !a1 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  if ( a4 )
  {
    *((_DWORD *)a4 + 9) = v5;
    v10 = *(_QWORD *)(a1 + 316);
    *((_DWORD *)a4 + 10) = 0;
    *(_QWORD *)((char *)a4 + 52) = v10;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_QWORD *)a1 + 337);
  if ( !v14 || (v17 = *(_QWORD *)(v14 + 96)) == 0 )
  {
    v15 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v18 = MONITOR_MGR::_HandleRemovePhysicalMonitor(*(struct _FAST_MUTEX **)(v14 + 96), (unsigned int)v5, v6, a4);
  MONITOR_MGR::_LogMonitorPresentEvent(v17, 2LL, v5, v18, 0LL);
  v24 = -1;
  v25 = 0;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)a1)
    && !a1[2609]
    && (int)DmmIsTargetForceable((DXGADAPTER *)a1, (unsigned int)v5, &v25, 0) >= 0
    && !v25
    && (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, (unsigned int)v5, &v24) >= 0 )
  {
    v19 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)a1, v24, 1u);
    v22 = v19;
    if ( v19 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v21, v20);
      v23[3] = v9;
      v23[4] = a1;
      v23[5] = v22;
      WdLogEvent5_WdError(v23);
    }
  }
  return v18;
}
