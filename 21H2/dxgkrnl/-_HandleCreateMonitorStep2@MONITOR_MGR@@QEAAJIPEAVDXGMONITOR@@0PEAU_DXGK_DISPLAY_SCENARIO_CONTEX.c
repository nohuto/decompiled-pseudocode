/*
 * XREFs of ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019127C
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018C2F4 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0191114 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2074 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 * Callees:
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C005DF0C (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0129B38 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0161968 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C017AEFC (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C018B43C (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2074 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C02F2154 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateMonitorStep2(
        struct _FAST_MUTEX *this,
        __int64 a2,
        struct DXGMONITOR *a3,
        struct DXGMONITOR *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v5; // ebp
  int v8; // r15d
  unsigned int *v10; // r14
  bool v11; // r12
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12; // r15
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  struct DXGMONITOR *v24; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  v8 = a2;
  if ( (_DWORD)a2 == -1 )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v19);
  }
  v10 = 0LL;
  v11 = 0;
  if ( a3 )
  {
    v20 = *((_DWORD *)a3 + 108);
    if ( *((_DWORD *)a3 + 11) == v8 )
    {
      v11 = v20 == 5;
    }
    else
    {
      if ( v20 != 5 )
      {
        v21 = WdLogNewEntry5_WdAssertion(this, a2);
        WdLogEvent5_WdAssertion(v21);
      }
      v10 = (unsigned int *)a3;
      a3 = 0LL;
    }
  }
  v12 = a5;
  if ( a4 )
  {
    *((_QWORD *)a4 + 61) = 0LL;
    v13 = a3 ? 3LL : *((_DWORD *)a4 + 148) != 0 ? 4LL : 1LL;
    MONITOR_MGR::_IssueMonitorEvent(
      this,
      *((unsigned int *)a4 + 11),
      (*((_DWORD *)a4 + 10) & 0x40) != 0 ? 0 : 7,
      v13,
      *((_DWORD *)a4 + 108),
      (__int64)v12);
    if ( *((_BYTE *)a4 + 480) )
    {
      *((_BYTE *)a4 + 480) = 0;
      MONITOR_MGR::_LeaveMonitorPendingState((MONITOR_MGR *)this);
    }
  }
  if ( a3 )
  {
    if ( *((_DWORD *)a3 + 108) == 1 )
      v22 = MONITOR_MGR::_DestroyPhysicalMonitor((MONITOR_MGR *)this, a3, v12);
    else
      v22 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, a3);
    v5 = v22;
  }
  if ( v10 )
  {
    MONITOR_MGR::_IssueMonitorEvent(this, v10[11], 0, 2LL, v10[108], (__int64)v12);
    v5 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v10);
  }
  if ( v5 < 0 )
  {
    v23 = WdLogNewEntry5_WdError(this, a2);
    *(_QWORD *)(v23 + 32) = v5;
    *(_QWORD *)(v23 + 24) = a3;
    WdLogEvent5_WdError(v23);
  }
  if ( a4 )
  {
    v14 = *((unsigned int *)a4 + 11);
    v24 = 0LL;
    if ( (int)MONITOR_MGR::_GetMonitorInstance(this, v14, 0, &v24) >= 0 && MONITOR_MGR::_UsingCCDNameForTTM && v24 == a4 )
      DXGMONITOR::_CreateTtmDevice(a4, v15, v16, v17);
    if ( v11 && (*((_DWORD *)a4 + 10) & 2) != 0 )
      MONITOR_MGR::_CleanUpFromSimulatedMonitor((MONITOR_MGR *)this, v12);
  }
  return 0LL;
}
