/*
 * XREFs of ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0190BC4
 * Callers:
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0190A6C (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0191114 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2238 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2618 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F27F0 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorFromList(struct _FAST_MUTEX *this, struct DXGMONITOR ***a2)
{
  ULONG *v4; // rdx
  ULONG *p_Contention; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  ULONG *v9; // rax
  __int64 v10; // rax
  struct DXGMONITOR **v11; // rdx
  struct DXGMONITOR **v12; // rcx
  __int64 v13; // rax

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v8);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  if ( !a2 || (v9 = *(ULONG **)p_Contention, *(ULONG **)p_Contention == p_Contention) )
  {
LABEL_16:
    v10 = WdLogNewEntry5_WdAssertion(p_Contention, v4);
    WdLogEvent5_WdAssertion(v10);
  }
  else
  {
    v4 = (ULONG *)(a2 + 2);
    while ( v9 != v4 )
    {
      if ( p_Contention == v9 )
        goto LABEL_16;
      v9 = *(ULONG **)v9;
    }
  }
  v11 = a2[2];
  if ( v11[1] != (struct DXGMONITOR *)(a2 + 2) || (v12 = a2[3], *v12 != (struct DXGMONITOR *)(a2 + 2)) )
    __fastfail(3u);
  *v12 = (struct DXGMONITOR *)v11;
  v11[1] = (struct DXGMONITOR *)v12;
  --LODWORD(this[2].Owner);
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    WdLogEvent5_WdAssertion(v13);
  }
  KeReleaseGuardedMutex(this + 3);
  return 0LL;
}
