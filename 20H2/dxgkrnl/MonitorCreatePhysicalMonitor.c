/*
 * XREFs of MonitorCreatePhysicalMonitor @ 0x1C0189FC0
 * Callers:
 *     DpiPdoHandleChildConnectionChange @ 0x1C0174078 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoAddPdo @ 0x1C01741EC (DpiPdoAddPdo.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0125308 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C013216C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z @ 0x1C0149928 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXIE@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C014A2A4 (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C015BB2C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0189714 (-_GetMonitorDiagInfo@DXGMONITOR@@QEAAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018A14C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C02DCC78 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 */

__int64 __fastcall MonitorCreatePhysicalMonitor(
        char *a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        __int64 a4,
        char a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  unsigned __int8 v6; // r12
  __int64 v7; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  MONITOR_MGR *v15; // r15
  unsigned int PhysicalMonitor; // eax
  unsigned int v17; // r12d
  struct DXGMONITOR *v18; // r14
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbx
  _QWORD *v27; // rax
  _OWORD v28[2]; // [rsp+30h] [rbp-20h] BYREF
  struct DXGMONITOR *v29; // [rsp+90h] [rbp+40h] BYREF
  char v30; // [rsp+98h] [rbp+48h] BYREF

  v6 = a4;
  v7 = (unsigned int)a2;
  v10 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v10 + 24) = v7;
  *(_QWORD *)(v10 + 32) = a1;
  if ( !a1 || !a3 || (_DWORD)v7 == -1 )
    return 3221225485LL;
  v11 = (__int64)a6;
  if ( a6 )
  {
    *((_DWORD *)a6 + 9) = v7;
    *(_QWORD *)(v11 + 52) = *(_QWORD *)(a1 + 316);
    *(_DWORD *)(v11 + 40) = 1;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v13, v12);
    WdLogEvent5_WdAssertion(v21);
  }
  v14 = *((_QWORD *)a1 + 337);
  if ( !v14 || (v15 = *(MONITOR_MGR **)(v14 + 96)) == 0LL )
  {
    v22 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v22 + 24) = a1;
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  PhysicalMonitor = MONITOR_MGR::_HandleCreatePhysicalMonitor(
                      v15,
                      v7,
                      a3,
                      v6,
                      a5,
                      (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v11);
  v29 = 0LL;
  memset(v28, 0, sizeof(v28));
  v17 = PhysicalMonitor;
  if ( (int)MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)v15, (unsigned int)v7, 1, &v29) >= 0 )
  {
    v18 = v29;
    if ( v29 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite((PERESOURCE)((char *)v18 + 296), 1u);
      DXGMONITOR::_GetMonitorDiagInfo(v18, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v28, v19);
      ExReleaseResourceLite((PERESOURCE)((char *)v18 + 296));
      KeLeaveCriticalRegion();
    }
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)v15, 1LL, v7, v17, v28);
  LODWORD(v29) = -1;
  v30 = 0;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)a1)
    && !a1[2609]
    && (int)DmmIsTargetForceable(a1, (unsigned int)v7, &v30, 0LL) >= 0
    && !v30
    && (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, (unsigned int)v7, (unsigned int *)&v29) >= 0 )
  {
    v23 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)a1, (unsigned int)v29, 1u);
    v26 = v23;
    if ( v23 < 0 )
    {
      v27 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
      v27[3] = v7;
      v27[4] = a1;
      v27[5] = v26;
      WdLogEvent5_WdError(v27);
    }
  }
  return v17;
}
