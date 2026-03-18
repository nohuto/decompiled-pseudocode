/*
 * XREFs of ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0292A64
 * Callers:
 *     ?DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION@@@Z @ 0x1C02911A8 (-DxgkHandleMonitorEvent@@YAJU_LUID@@IW4MONITOR_EVENT@@_KPEAU_D3DKMT_DISPLAY_CALLOUT_BATCH_ACTION.c)
 * Callees:
 *     DxgkInvalidateMonitorConnections @ 0x1C014BB30 (DxgkInvalidateMonitorConnections.c)
 *     ?DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C014BC90 (-DisplayConfigHandleMonitorInvalidation@@YAJ_KPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@PEAU_DXGK_DISP.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0291010 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 */

__int64 __fastcall HandleRapidHPDAction(
        struct MONITORSCOUNT_CALLBACK_CONTEXT *const a1,
        struct _LUID *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int8 v19; // [rsp+50h] [rbp+8h] BYREF

  v8 = DxgkInvalidateMonitorConnections(2uLL);
  v11 = v8;
  if ( v8 < 0 )
  {
    v12 = WdLogNewEntry5_WdEvent(v10, v9);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdEvent(v12);
  }
  *((_DWORD *)a1 + 8) |= 0x10u;
  v19 = 0;
  if ( (int)DisplayConfigHelperCreateSimulateMonitor(a2, a3, 3u, 0, &v19, (__int64)a4) >= 0 )
    *((_BYTE *)a1 + 26) = 0;
  v13 = DisplayConfigHandleMonitorInvalidation(1LL, a1, a4);
  v16 = v13;
  if ( v13 < 0 )
  {
    v17 = WdLogNewEntry5_WdEvent(v15, v14);
    *(_QWORD *)(v17 + 24) = v16;
    WdLogEvent5_WdEvent(v17);
    LODWORD(v16) = 0;
  }
  return (unsigned int)v16;
}
