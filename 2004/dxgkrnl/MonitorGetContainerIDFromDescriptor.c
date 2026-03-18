/*
 * XREFs of MonitorGetContainerIDFromDescriptor @ 0x1C01896F4
 * Callers:
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0189364 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0126488 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z @ 0x1C01897CC (-_GetMonitorContainerID@DXGMONITOR@@QEAAJPEAU_GUID@@@Z.c)
 */

__int64 __fastcall MonitorGetContainerIDFromDescriptor(__int64 a1, __int64 a2, struct _GUID *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  struct _FAST_MUTEX *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGMONITOR *v10; // rbx
  unsigned int MonitorContainerID; // eax
  struct _ERESOURCE *v12; // rcx
  unsigned int v13; // ebx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGMONITOR *v22; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v15 + 24) = -1073741811LL;
LABEL_12:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  if ( (_DWORD)a2 == -1 )
    return 3221226021LL;
  v6 = *(_QWORD *)(a1 + 2696);
  if ( !v6 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v17);
    v6 = *(_QWORD *)(a1 + 2696);
  }
  v7 = *(struct _FAST_MUTEX **)(v6 + 96);
  if ( !v7 )
  {
    v15 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v15 + 24) = a1;
    goto LABEL_12;
  }
  v22 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v7, (unsigned int)v3, 1, &v22) < 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdError(v9, v8);
    v16[3] = v3;
    v16[4] = a1;
    v16[5] = -1073741275LL;
    WdLogEvent5_WdError(v16);
    return 3221226021LL;
  }
  v10 = v22;
  if ( !v22 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v9, v8);
    WdLogEvent5_WdAssertion(v18);
    v21 = WdLogNewEntry5_WdAssertion(v20, v19);
    WdLogEvent5_WdAssertion(v21);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 296), 1u);
  MonitorContainerID = DXGMONITOR::_GetMonitorContainerID(v10, a3);
  v12 = (struct _ERESOURCE *)((char *)v10 + 296);
  v13 = MonitorContainerID;
  ExReleaseResourceLite(v12);
  KeLeaveCriticalRegion();
  return v13;
}
