/*
 * XREFs of MonitorSetPhysicalSizeOverride @ 0x1C02F045C
 * Callers:
 *     DxgkIddHandleSetDisplayConfig @ 0x1C0256B4C (DxgkIddHandleSetDisplayConfig.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00EFE18 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorSetPhysicalSizeOverride(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  __int64 v5; // rdi
  int v6; // ebp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  struct _FAST_MUTEX *v13; // rcx
  __int64 v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGMONITOR *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  struct DXGMONITOR *v23; // [rsp+30h] [rbp+8h] BYREF

  v4 = a4;
  v5 = (unsigned int)a2;
  v6 = a3;
  v8 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = v5;
  *(_QWORD *)(v8 + 32) = a1;
  if ( !a1 || (_DWORD)v5 == -1 )
    return 3221225485LL;
  v11 = *(_QWORD *)(a1 + 2672);
  if ( !v11 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10, v9);
    WdLogEvent5_WdAssertion(v12);
    v11 = *(_QWORD *)(a1 + 2672);
  }
  v13 = *(struct _FAST_MUTEX **)(v11 + 96);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(0LL, v9);
    *(_QWORD *)(v14 + 24) = a1;
    WdLogEvent5_WdError(v14);
    return 3221225485LL;
  }
  v23 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v13, (unsigned int)v5, 0, &v23) < 0 )
    return 3221225485LL;
  v18 = v23;
  if ( !v23 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v17, v16);
    WdLogEvent5_WdAssertion(v19);
    v22 = WdLogNewEntry5_WdAssertion(v21, v20);
    WdLogEvent5_WdAssertion(v22);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v18 + 296), 1u);
  *((_DWORD *)v18 + 189) = v6;
  *((_DWORD *)v18 + 190) = v4;
  ExReleaseResourceLite((PERESOURCE)((char *)v18 + 296));
  KeLeaveCriticalRegion();
  return 0LL;
}
