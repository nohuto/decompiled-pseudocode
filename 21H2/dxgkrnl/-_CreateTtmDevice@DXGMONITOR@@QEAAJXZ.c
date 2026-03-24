/*
 * XREFs of ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C018B43C
 * Callers:
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013F93C (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019127C (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01915B8 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2238 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F27F0 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorSetAppOverride @ 0x1C02F4808 (MonitorSetAppOverride.c)
 *     MonitorSetUsageClass @ 0x1C02F50F8 (MonitorSetUsageClass.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEAPEAX@Z @ 0x1C018B1FC (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 */

__int64 __fastcall DXGMONITOR::_CreateTtmDevice(DXGMONITOR *this, __int64 a2, __int64 a3, __int64 a4)
{
  CTTMDEVICE **v5; // r15
  unsigned int v6; // ebp
  int v7; // ebx
  __int64 v8; // rcx
  struct DXGADAPTER *v9; // rdi
  struct _DEVICE_OBJECT *v10; // rsi
  struct DXGGLOBAL *Global; // rax
  int TtmDevice; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rax

  if ( *((_DWORD *)this + 148) )
  {
    v17 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v17 + 24) = this;
    *(_QWORD *)(v17 + 32) = -1073741637LL;
    return 3221225659LL;
  }
  else
  {
    v5 = (CTTMDEVICE **)((char *)this + 576);
    if ( *((_QWORD *)this + 72) )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
      return 0LL;
    }
    v6 = *((_DWORD *)this + 10);
    v7 = *((_DWORD *)this + 108);
    v8 = *(_QWORD *)(*((_QWORD *)this + 4) + 8LL);
    v9 = *(struct DXGADAPTER **)(v8 + 16);
    v10 = (struct _DEVICE_OBJECT *)*((_QWORD *)v9 + 27);
    Global = DXGGLOBAL::GetGlobal(v8, a2);
    TtmDevice = DXGSESSIONMGR::CreateTtmDevice(
                  *((_QWORD *)Global + 102),
                  (v6 >> 1) & 1 | (v7 != 1 ? 2 : 0),
                  v10,
                  v9,
                  *((_DWORD *)this + 11),
                  (v6 >> 1) & 1 | (v7 != 1 ? 2 : 0),
                  v5);
    v15 = TtmDevice;
    if ( TtmDevice >= 0 )
      return 0LL;
    v18 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v18[3] = this;
    v18[4] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 8LL) + 16LL);
    v18[5] = v15;
    WdLogEvent5_WdError(v18);
    return (unsigned int)v15;
  }
}
