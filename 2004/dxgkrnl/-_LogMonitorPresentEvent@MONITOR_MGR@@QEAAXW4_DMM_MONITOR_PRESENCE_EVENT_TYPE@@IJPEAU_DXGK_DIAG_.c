/*
 * XREFs of ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C015CCDC
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013C2FC (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C015CADC (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0173ED4 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0185850 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C018AF40 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C018B170 (MonitorCreatePhysicalMonitor.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C018C890 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02F2E64 (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C02F31CC (MonitorDestroySimulatedMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C02F3F24 (MonitorRemovePhysicalMonitor.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C02F8B70 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x1C000CFDC (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z @ 0x1C013746C (-DxgkWriteDiagEntry@@YAJPEAU_DXGK_DIAG_HEADER@@_K@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_LogMonitorPresentEvent(__int64 a1, __int64 a2, unsigned int a3, int a4, _OWORD *a5)
{
  unsigned int v7; // r14d
  unsigned int v9; // r8d
  __int64 v10; // rbx
  struct _LUID *v11; // rdx
  __int128 v12; // xmm1
  __int64 v14; // rax
  unsigned __int64 v15; // [rsp+20h] [rbp-61h] BYREF
  __int64 v16; // [rsp+28h] [rbp-59h]
  _OWORD v17[6]; // [rsp+30h] [rbp-51h] BYREF

  v7 = a2;
  if ( (int)a2 > 1073741826 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
  }
  v9 = *(_DWORD *)(a1 + 280);
  v10 = 3LL * (v9 % 0x14);
  *(_DWORD *)(a1 + 8 * v10 + 296) = v9;
  *(_DWORD *)(a1 + 8 * v10 + 288) = v7;
  *(_DWORD *)(a1 + 8 * v10 + 292) = a3;
  *(_DWORD *)(a1 + 8 * v10 + 300) = a4;
  v16 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 8 * v10 + 304) = v16 * KeQueryTimeIncrement();
  ++*(_DWORD *)(a1 + 280);
  memset(v17, 0, sizeof(v17));
  v17[0] = 0x6000000008uLL;
  DWORD2(v17[2]) = 0;
  *(_QWORD *)&v17[2] = 0LL;
  *((_QWORD *)&v17[1] + 1) = 0LL;
  *(_QWORD *)&v17[3] = __PAIR64__(a3, v7);
  DWORD2(v17[3]) = a4;
  if ( a5 )
  {
    v12 = a5[1];
    v17[4] = *a5;
    v17[5] = v12;
  }
  v15 = 0LL;
  DXGADAPTER::IsAdapterSessionized(*(DXGADAPTER **)(*(_QWORD *)(a1 + 8) + 16LL), v11, 0LL, &v15);
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v17, v15);
}
