/*
 * XREFs of MonitorCreatePhysicalMonitor @ 0x1C0205ED8
 * Callers:
 *     DpiPdoAddPdo @ 0x1C0205A28 (DpiPdoAddPdo.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C02164B8 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00131F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C00135F8 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x1C0157474 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01A7544 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x1C01BE8BC (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C01E285C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C0206098 (-DmmIsTargetForceable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C0207244 (-_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02076C0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 */

__int64 __fastcall MonitorCreatePhysicalMonitor(
        char *a1,
        __int64 a2,
        struct _DEVICE_OBJECT *a3,
        unsigned __int8 a4,
        char a5,
        struct _DXGK_CONNECTION_USB4_INFO *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v8; // rdi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  MONITOR_MGR *v14; // r14
  unsigned int PhysicalMonitor; // eax
  unsigned int v16; // r15d
  DXGMONITOR *v17; // rsi
  __int64 v18; // rdx
  int v20; // eax
  _OWORD v21[2]; // [rsp+40h] [rbp-20h] BYREF
  DXGMONITOR *v22; // [rsp+90h] [rbp+30h] BYREF
  unsigned int v23; // [rsp+98h] [rbp+38h] BYREF

  v8 = (unsigned int)a2;
  v11 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v11 + 24) = v8;
  *(_QWORD *)(v11 + 32) = a1;
  if ( !a1 || !a3 || (_DWORD)v8 == -1 )
    return 3221225485LL;
  v12 = (__int64)a7;
  if ( a7 )
  {
    *((_DWORD *)a7 + 9) = v8;
    *(_QWORD *)(v12 + 52) = *(_QWORD *)(a1 + 404);
    *(_DWORD *)(v12 + 40) = 1;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
    WdLogSingleEntry0(1LL);
  v13 = *((_QWORD *)a1 + 349);
  if ( !v13 || (v14 = *(MONITOR_MGR **)(v13 + 112)) == 0LL )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3221225485LL;
  }
  PhysicalMonitor = MONITOR_MGR::_HandleCreatePhysicalMonitor(
                      v14,
                      v8,
                      a3,
                      a4,
                      a5,
                      a6,
                      (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v12);
  v22 = 0LL;
  memset(v21, 0, sizeof(v21));
  v16 = PhysicalMonitor;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v14, v8, 1, &v22) >= 0 )
  {
    v17 = v22;
    if ( v22 )
    {
      RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v22, (__int64)v22, 0);
      DXGMONITOR::_GetMonitorDiagInfo(v17, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v21);
      if ( v22 )
      {
        ExReleaseResourceLite((PERESOURCE)((char *)v22 + 24));
        KeLeaveCriticalRegion();
      }
    }
  }
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)v14, 1, v8, v16, v21);
  LOBYTE(v23) = 0;
  if ( DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)a1)
    && !a1[2705]
    && (int)DmmIsTargetForceable(a1, (unsigned int)v8, &v23, 0LL) >= 0
    && !(_BYTE)v23
    && (int)DmmGetSourceConnectedToTargetInClientVidPn(a1, v8, &v23) >= 0 )
  {
    LOBYTE(v18) = 1;
    v20 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)a1, v18, 0LL);
    if ( v20 < 0 )
      WdLogSingleEntry2(2LL, a1, v20);
  }
  return v16;
}
