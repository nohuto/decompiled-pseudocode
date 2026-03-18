/*
 * XREFs of MonitorSetLastWireformatAndColorspace @ 0x1C00DEA28
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00DE364 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_ClearColorSpaceTransform@DXGMONITOR@@AEAAXXZ @ 0x1C01579C0 (-_ClearColorSpaceTransform@DXGMONITOR@@AEAAXXZ.c)
 */

__int64 __fastcall MonitorSetLastWireformatAndColorspace(__int64 a1, __int64 a2, int a3, int a4)
{
  unsigned int v6; // esi
  __int64 v8; // rax
  MONITOR_MGR *v9; // rcx
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGMONITOR *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  struct DXGMONITOR *v20; // [rsp+30h] [rbp+8h] BYREF

  v6 = a2;
  if ( !a1 || (_DWORD)a2 == -1 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a1 + 2672);
  if ( !v8 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
    v8 = *(_QWORD *)(a1 + 2672);
  }
  v9 = *(MONITOR_MGR **)(v8 + 96);
  if ( !v9 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  v20 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v9, v6, 0, &v20);
  if ( (int)result >= 0 )
  {
    v13 = v20;
    if ( !v20 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v16);
      v19 = WdLogNewEntry5_WdAssertion(v18, v17);
      WdLogEvent5_WdAssertion(v19);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v13 + 296), 1u);
    *((_DWORD *)v13 + 188) = a3;
    *((_DWORD *)v13 + 187) = a4;
    DXGMONITOR::_ClearColorSpaceTransform(v13);
    ExReleaseResourceLite((PERESOURCE)((char *)v13 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
