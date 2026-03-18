/*
 * XREFs of MonitorSetScaleFactorOverride @ 0x1C02F4C4C
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C025AE4C (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0126488 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorSetScaleFactorOverride(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  struct _FAST_MUTEX *v12; // rcx
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGMONITOR *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  v4 = a3;
  v5 = (unsigned int)a2;
  v7 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v7 + 24) = v5;
  *(_QWORD *)(v7 + 32) = a1;
  if ( !a1 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 2696);
  if ( !v10 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v11);
    v10 = *(_QWORD *)(a1 + 2696);
  }
  v12 = *(struct _FAST_MUTEX **)(v10 + 96);
  if ( !v12 )
  {
    v13 = WdLogNewEntry5_WdError(0LL, v8);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
  v22 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v12, (unsigned int)v5, 0, &v22) < 0 )
    return 3221225485LL;
  v17 = v22;
  if ( !v22 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v18);
    v21 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v21);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v17 + 296), 1u);
  *((_DWORD *)v17 + 147) = v4;
  ExReleaseResourceLite((PERESOURCE)((char *)v17 + 296));
  KeLeaveCriticalRegion();
  return 0LL;
}
