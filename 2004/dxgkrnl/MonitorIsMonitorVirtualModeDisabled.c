/*
 * XREFs of MonitorIsMonitorVirtualModeDisabled @ 0x1C02F3AD0
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0128950 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0126488 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ @ 0x1C0126C38 (-_IsVirtualModeSuportDisabled@DXGMONITOR@@QEAA_NXZ.c)
 */

__int64 __fastcall MonitorIsMonitorVirtualModeDisabled(__int64 a1, __int64 a2, char *a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  struct _FAST_MUTEX *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  struct DXGMONITOR *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  struct DXGMONITOR *v17; // [rsp+30h] [rbp+8h] BYREF

  v3 = (unsigned int)a2;
  if ( !a1 || (_DWORD)a2 == -1 || !a3 )
    return 3221225485LL;
  v6 = *(_QWORD *)(a1 + 2696);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v7);
    v6 = *(_QWORD *)(a1 + 2696);
  }
  v8 = *(struct _FAST_MUTEX **)(v6 + 96);
  if ( !v8 )
  {
    v9 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v9 + 24) = a1;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  v17 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v8, (unsigned int)v3, 1, &v17);
  if ( (_DWORD)result == -1073741275 )
  {
    v13 = WdLogNewEntry5_WdDmmEvent(v12, v11);
    *(_QWORD *)(v13 + 24) = v3;
    *(_QWORD *)(v13 + 32) = a1;
    WdLogEvent5_WdDmmEvent(v13);
    return 3221225664LL;
  }
  else if ( (int)result >= 0 )
  {
    v14 = v17;
    if ( !v17 || *((_DWORD *)v17 + 108) != 1 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v15);
    }
    if ( !v14 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v12, v11);
      WdLogEvent5_WdAssertion(v16);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v14 + 296), 1u);
    *a3 = DXGMONITOR::_IsVirtualModeSuportDisabled(v14);
    ExReleaseResourceLite((PERESOURCE)((char *)v14 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
