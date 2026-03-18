/*
 * XREFs of ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F1654
 * Callers:
 *     MonitorRebuildMonitorModeListCache @ 0x1C02F3E6C (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0126488 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0188BF4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 */

__int64 __fastcall RebuildMonitorModeListCacheHelper(
        struct DXGADAPTER *a1,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rax
  __int64 v6; // rdi
  int MonitorInstance; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGMONITOR *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rax
  int updated; // eax
  struct _ERESOURCE *v14; // rcx
  DXGMONITOR *v16; // [rsp+30h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a1 + 337);
  v16 = 0LL;
  v6 = (unsigned int)a2;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(*(struct _FAST_MUTEX **)(v3 + 96), a2, 0, &v16);
  v10 = (DXGMONITOR *)MonitorInstance;
  if ( MonitorInstance >= 0 )
  {
    v10 = v16;
    if ( !v16 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v12);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v10 + 296), 1u);
    updated = DXGMONITOR::_UpdateEDIDBaseBlock(v10, a3, 1);
    v14 = (struct _ERESOURCE *)((char *)v10 + 296);
    LODWORD(v10) = updated;
    ExReleaseResourceLite(v14);
    KeLeaveCriticalRegion();
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v9, v8);
    v11[3] = a1;
    v11[4] = v6;
    v11[5] = v10;
    WdLogEvent5_WdDmmEvent(v11);
  }
  return (unsigned int)v10;
}
