/*
 * XREFs of ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0208A68
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02076C0 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02087D4 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_CO.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B3D18 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B40B8 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03B42F0 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1C0012EA0 (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x1C0012ED0 (--1MUTEX_LOCK@@QEAA@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorFromList(MONITOR_MGR *this, struct DXGMONITOR *a2)
{
  struct DXGMONITOR **v4; // rcx
  struct DXGMONITOR *v5; // rax
  struct DXGMONITOR **v6; // rdx
  struct DXGMONITOR **v7; // rcx
  struct _KTHREAD **v9; // [rsp+30h] [rbp+8h] BYREF

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v9, (MONITOR_MGR *)((char *)this + 80));
  v4 = (struct DXGMONITOR **)((char *)this + 40);
  if ( !a2 || (v5 = *v4, *v4 == (struct DXGMONITOR *)v4) )
  {
LABEL_11:
    WdLogSingleEntry0(1LL);
  }
  else
  {
    while ( v5 != (struct DXGMONITOR *)((char *)a2 + 152) )
    {
      if ( v4 == (struct DXGMONITOR **)v5 )
        goto LABEL_11;
      v5 = *(struct DXGMONITOR **)v5;
    }
  }
  v6 = (struct DXGMONITOR **)*((_QWORD *)a2 + 19);
  if ( v6[1] != (struct DXGMONITOR *)((char *)a2 + 152)
    || (v7 = (struct DXGMONITOR **)*((_QWORD *)a2 + 20), *v7 != (struct DXGMONITOR *)((char *)a2 + 152)) )
  {
    __fastfail(3u);
  }
  *v7 = (struct DXGMONITOR *)v6;
  v6[1] = (struct DXGMONITOR *)v7;
  --*((_DWORD *)this + 8);
  MUTEX_LOCK::~MUTEX_LOCK(&v9);
  return 0LL;
}
