/*
 * XREFs of MonitorGetUsageClass @ 0x1C013B0D4
 * Callers:
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C013AED0 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0184FA8 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     DxgkIsMonitorConnected @ 0x1C021FE30 (DxgkIsMonitorConnected.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009FB4 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MonitorGetUsageClass(struct HDXGMONITOR__ *a1, _DWORD *a2, _BYTE *a3)
{
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGMONITOR *v8; // rbx
  BOOL v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  struct DXGMONITOR *v17; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v17 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v17);
  if ( (int)result >= 0 )
  {
    v8 = v17;
    if ( !v17 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v7, v6);
      WdLogEvent5_WdAssertion(v12);
      v15 = WdLogNewEntry5_WdAssertion(v14, v13);
      WdLogEvent5_WdAssertion(v15);
    }
    KeEnterCriticalRegion();
    v9 = 1;
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v8 + 296), 1u);
    if ( *((_DWORD *)v8 + 108) != 1 )
      v9 = *((_DWORD *)v8 + 148) == 0;
    if ( !v9 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v16);
    }
    *a2 = *((_DWORD *)v8 + 148);
    *a3 = *((_BYTE *)v8 + 596);
    ExReleaseResourceLite((PERESOURCE)((char *)v8 + 296));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  return result;
}
