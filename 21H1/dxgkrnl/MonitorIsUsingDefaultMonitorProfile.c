/*
 * XREFs of MonitorIsUsingDefaultMonitorProfile @ 0x1C02EF6E0
 * Callers:
 *     ?IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z @ 0x1C02DF0E0 (-IsUsingDefaultMonitorProfile@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXIPEAE@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009FB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorIsUsingDefaultMonitorProfile(struct HDXGMONITOR__ *a1, bool *a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGMONITOR *v6; // rdi
  __int64 v7; // rax
  struct DXGMONITOR *v8; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v8 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v8);
  if ( (int)result >= 0 )
  {
    v6 = v8;
    if ( !v8 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v7);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v6 + 296), 1u);
    *a2 = (*((_DWORD *)v6 + 10) & 8) != 0;
    ExReleaseResourceLite((PERESOURCE)((char *)v6 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
