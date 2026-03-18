/*
 * XREFs of ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C001E350
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     MonitorSendAdjustedColorimetryToDriver @ 0x1C01E52F4 (MonitorSendAdjustedColorimetryToDriver.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C03B03A8 (MonitorEnableDisableAdvancedColor.c)
 *     MonitorSetAdvancedColorParams @ 0x1C03B0D88 (MonitorSetAdvancedColorParams.c)
 *     MonitorSetAppOverride @ 0x1C03B0ED4 (MonitorSetAppOverride.c)
 *     MonitorSetAutoColorManagementSupported @ 0x1C03B1114 (MonitorSetAutoColorManagementSupported.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C03B11C4 (MonitorSetDefaultAdvancedColorParams.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C03B1328 (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C0011D60 (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1C00135F8 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 */

_QWORD *__fastcall MONITOR_MGR::AcquireMonitorExclusive(_QWORD *a1, struct HDXGMONITOR__ *a2)
{
  struct DXGMONITOR *v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0LL;
  if ( (int)MONITOR_MGR::_GetMonitorFromHandle(a2, &v4) < 0 )
    *a1 = 0LL;
  else
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(a1, (__int64)v4, 1);
  return a1;
}
