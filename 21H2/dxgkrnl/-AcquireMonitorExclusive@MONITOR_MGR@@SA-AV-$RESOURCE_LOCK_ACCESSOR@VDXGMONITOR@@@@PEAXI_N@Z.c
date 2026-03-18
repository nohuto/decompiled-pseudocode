/*
 * XREFs of ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAXI_N@Z @ 0x1C001356C
 * Callers:
 *     MonitorSetLastWireformatAndColorspace @ 0x1C01BC270 (MonitorSetLastWireformatAndColorspace.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C03AFC58 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C03B013C (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableBoostRefreshRateEnabledByDefault @ 0x1C03B02CC (MonitorEnableBoostRefreshRateEnabledByDefault.c)
 *     MonitorSetPhysicalSizeOverride @ 0x1C03B1260 (MonitorSetPhysicalSizeOverride.c)
 *     MonitorSetScaleFactorOverride @ 0x1C03B13F0 (MonitorSetScaleFactorOverride.c)
 *     MonitorSetUsageClass @ 0x1C03B14A8 (MonitorSetUsageClass.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x1C03B62E0 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C00135F8 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C01A2ECC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 */

_QWORD *__fastcall MONITOR_MGR::AcquireMonitorExclusive(_QWORD *a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  MONITOR_MGR *v9; // rcx
  __int64 v10; // r8
  struct DXGMONITOR *v12; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 2792);
  if ( !v4 )
  {
    WdLogSingleEntry0(1LL);
    v4 = *(_QWORD *)(a2 + 2792);
  }
  v9 = *(MONITOR_MGR **)(v4 + 112);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, a2);
    goto LABEL_7;
  }
  v12 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorInstance(v9, a3, a4, &v12) < 0 )
  {
LABEL_7:
    *a1 = 0LL;
    return a1;
  }
  LOBYTE(v10) = 1;
  RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(a1, v12, v10);
  return a1;
}
