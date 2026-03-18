/*
 * XREFs of ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C02F2754
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1ED8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0126488 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02F1750 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C02F1BE4 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C02F9678 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_MigrateSimulatedMonitor(
        struct _FAST_MUTEX *a1,
        __int64 a2,
        int a3,
        const struct DXGMONITOR *a4,
        struct DXGMONITOR **a5)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int MonitorInstance; // ebx
  struct DXGMONITOR *v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  struct DXGMONITOR *v22; // [rsp+20h] [rbp-38h] BYREF

  v5 = a3;
  v7 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v9);
  }
  v22 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, (unsigned int)v7, 0, &v22);
  if ( MonitorInstance < 0 )
    goto LABEL_18;
  v13 = v22;
  if ( !v22 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = *((_DWORD *)v13 + 108);
  if ( v15 == 1 )
  {
    v20 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v20 + 24) = v7;
    WdLogEvent5_WdError(v20);
    MonitorInstance = -1073741637;
  }
  else
  {
    if ( v15 == (_DWORD)v5 )
    {
      v16 = WdLogNewEntry5_WdDmmEvent(v11, v10);
      *(_QWORD *)(v16 + 24) = v7;
      *(_QWORD *)(v16 + 32) = v5;
      WdLogEvent5_WdDmmEvent(v16);
      MonitorInstance = 0;
    }
    else
    {
      v17 = WdLogNewEntry5_WdDmmEvent(v11, v10);
      *(_QWORD *)(v17 + 24) = v7;
      *(_QWORD *)(v17 + 32) = v5;
      WdLogEvent5_WdDmmEvent(v17);
      if ( *((_DWORD *)v13 + 108) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry((MONITOR_MGR *)a1, (unsigned int)v7, v18, v19);
      *((_DWORD *)v13 + 108) = v5;
      if ( (_DWORD)v5 == 2 )
        MONITOR_MGR::_AddTargetIntoPersistencyRegistry((MONITOR_MGR *)a1, (unsigned int)v7, v18, v19);
    }
    if ( a4 )
      MonitorInstance = DXGMONITOR::_CopyMonitorInformation(v13, a4);
  }
  if ( MonitorInstance < 0 )
LABEL_18:
    *a5 = 0LL;
  else
    *a5 = v13;
  return (unsigned int)MonitorInstance;
}
