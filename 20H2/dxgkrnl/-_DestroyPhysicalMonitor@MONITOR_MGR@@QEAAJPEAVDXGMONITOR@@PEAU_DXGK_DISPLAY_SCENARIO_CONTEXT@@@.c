/*
 * XREFs of ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F0D74
 * Callers:
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018A2B4 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ??1MONITOR_MGR@@QEAA@XZ @ 0x1C02F04F0 (--1MONITOR_MGR@@QEAA@XZ.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1318 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_GDXGMONITOR@@AEAAPEAXI@Z @ 0x1C005CE7C (--_GDXGMONITOR@@AEAAPEAXI@Z.c)
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C005CFFC (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018A2B4 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z @ 0x1C02F16F0 (-_IsMonitorInMonitorList@MONITOR_MGR@@QEAAEPEAVDXGMONITOR@@@Z.c)
 *     ?_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ @ 0x1C02F8418 (-_UnregisterPnPTargetDeviceNotification@DXGMONITOR@@AEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyPhysicalMonitor(
        struct _FAST_MUTEX *this,
        _DWORD *P,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  struct DXGMONITOR *v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax

  if ( !P )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( P[108] != 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, P);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((_BYTE *)P + 480) )
  {
    v8 = (struct DXGMONITOR *)*((_QWORD *)P + 61);
    if ( v8 )
      MONITOR_MGR::_HandleCreateMonitorStep2(this, (unsigned int)P[11], v8, 0LL, a3);
    MONITOR_MGR::_LeaveMonitorPendingState((MONITOR_MGR *)this);
  }
  DXGMONITOR::_UnregisterPnPTargetDeviceNotification((DXGMONITOR *)P);
  if ( MONITOR_MGR::_IsMonitorInMonitorList((MONITOR_MGR *)this, (struct DXGMONITOR *)P) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v11);
  }
  DXGMONITOR::`scalar deleting destructor'((DXGMONITOR *)P);
  return 0LL;
}
