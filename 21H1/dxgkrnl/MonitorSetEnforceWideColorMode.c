/*
 * XREFs of MonitorSetEnforceWideColorMode @ 0x1C02F0374
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00E73D0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009FB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C016C1D0 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 *     ?SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z @ 0x1C02F40E4 (-SetEnforceWideColorMode@DXGMONITOR@@QEAAJE@Z.c)
 */

__int64 __fastcall MonitorSetEnforceWideColorMode(struct HDXGMONITOR__ *a1, unsigned __int8 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGMONITOR *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  DXGMONITOR *v11; // rcx
  struct DXGMONITOR *v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v12 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v12);
  if ( (int)result >= 0 )
  {
    v6 = v12;
    if ( !v12 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v5, v4);
      WdLogEvent5_WdAssertion(v7);
      v10 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v10);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)v6 + 296), 1u);
    if ( !DXGMONITOR::EdidSupportsHDR(v6) )
      DXGMONITOR::SetEnforceWideColorMode(v11, a2);
    ExReleaseResourceLite((PERESOURCE)((char *)v6 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
