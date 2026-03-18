/*
 * XREFs of MonitorGetLinkInfoFromMonitor @ 0x1C018532C
 * Callers:
 *     ?SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z @ 0x1C0023B5C (-SetConnectedMonitor@DMMVIDEOPRESENTTARGET@@QEAAXPEAUHDXGMONITOR__@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009FB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetLinkInfoFromMonitor(struct HDXGMONITOR__ *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGMONITOR *v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  struct DXGMONITOR *v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( !a1 )
    return 3221225485LL;
  v13 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v13);
  if ( (int)result >= 0 )
  {
    v7 = v13;
    if ( !v13 )
    {
      v9 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v9);
      v12 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v12);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v7 + 296), 1u);
    if ( (*((_DWORD *)v7 + 10) & 0x400) != 0 )
    {
      *(_QWORD *)a2 = *(_QWORD *)((char *)v7 + 468);
      v8 = *((_DWORD *)v7 + 119);
    }
    else
    {
      v8 = 0;
      v2 = -1073741275;
      *(_QWORD *)a2 = 0LL;
    }
    *(_DWORD *)(a2 + 8) = v8;
    ExReleaseResourceLite((PERESOURCE)((char *)v7 + 296));
    KeLeaveCriticalRegion();
    return v2;
  }
  return result;
}
