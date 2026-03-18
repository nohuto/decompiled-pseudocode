/*
 * XREFs of ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C018B770
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018B2FC (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018B57C (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1ED8 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F2490 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_InsertMonitorToList(struct _FAST_MUTEX *this, struct DXGMONITOR *a2)
{
  ULONG *p_Contention; // rax
  MONITOR_MGR *v5; // rcx
  char **v6; // rdx
  char *v7; // rcx
  unsigned int v8; // edi
  __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax

  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v10);
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v11);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  v5 = *(MONITOR_MGR **)&this[2].Contention;
  if ( v5 == (MONITOR_MGR *)&this[2].Contention )
    goto LABEL_6;
  v12 = (char *)v5 - 16;
  if ( !v5 )
    v12 = 0LL;
  if ( !v12 )
  {
LABEL_6:
    v6 = *(char ***)&this[2].Event.Header.Lock;
    v7 = (char *)a2 + 16;
    if ( *v6 != (char *)p_Contention )
      __fastfail(3u);
    *(_QWORD *)v7 = p_Contention;
    v8 = 0;
    *((_QWORD *)a2 + 3) = v6;
    *v6 = v7;
    *(_QWORD *)&this[2].Event.Header.Lock = v7;
    ++LODWORD(this[2].Owner);
  }
  else
  {
    v13 = *((unsigned int *)a2 + 11);
    while ( (_DWORD)v13 != *((_DWORD *)v12 + 11) )
    {
      v5 = (MONITOR_MGR *)*((_QWORD *)v12 + 2);
      if ( v5 != (MONITOR_MGR *)p_Contention )
      {
        v12 = (char *)v5 - 16;
        if ( !v5 )
          v12 = 0LL;
        if ( v12 )
          continue;
      }
      goto LABEL_6;
    }
    v14 = WdLogNewEntry5_WdError(v5, v13);
    *(_QWORD *)(v14 + 24) = *((unsigned int *)v12 + 11);
    WdLogEvent5_WdError(v14);
    v8 = -1071774952;
  }
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6);
    WdLogEvent5_WdAssertion(v15);
  }
  KeReleaseGuardedMutex(this + 3);
  return v8;
}
