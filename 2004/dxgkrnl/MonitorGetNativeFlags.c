/*
 * XREFs of MonitorGetNativeFlags @ 0x1C0126894
 * Callers:
 *     DxgkGetAdapterDeviceDesc @ 0x1C01112C0 (DxgkGetAdapterDeviceDesc.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C01192D0 (DxgkGetMonitorInternalInfo.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C01950EC (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0009754 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C00097C4 (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 */

__int64 __fastcall MonitorGetNativeFlags(struct HDXGMONITOR__ *a1, unsigned __int8 *a2, bool *a3, bool *a4)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGMONITOR *v10; // rbx
  unsigned int MonitorNativeFlags; // eax
  struct _ERESOURCE *v12; // rcx
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  DXGMONITOR *v18; // [rsp+48h] [rbp+10h] BYREF

  if ( !a2 || !a3 || !a4 )
    return 3221225485LL;
  v18 = 0LL;
  result = MONITOR_MGR::_GetMonitorFromHandle(a1, &v18);
  if ( (int)result >= 0 )
  {
    v10 = v18;
    if ( !v18 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9, v8);
      WdLogEvent5_WdAssertion(v14);
      v17 = WdLogNewEntry5_WdAssertion(v16, v15);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)((char *)v10 + 296), 1u);
    MonitorNativeFlags = DXGMONITOR::_GetMonitorNativeFlags(v10, a2, a3, a4);
    v12 = (struct _ERESOURCE *)((char *)v10 + 296);
    v13 = MonitorNativeFlags;
    ExReleaseResourceLite(v12);
    KeLeaveCriticalRegion();
    return v13;
  }
  return result;
}
