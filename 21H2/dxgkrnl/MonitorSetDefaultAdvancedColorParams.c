/*
 * XREFs of MonitorSetDefaultAdvancedColorParams @ 0x1C03B11C4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01A0EB0 (DxgkDisplayConfigDeviceInfo.c)
 * Callees:
 *     ?AcquireMonitorExclusive@MONITOR_MGR@@SA?AV?$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONITOR__@@@Z @ 0x1C001E350 (-AcquireMonitorExclusive@MONITOR_MGR@@SA-AV-$RESOURCE_LOCK_ACCESSOR@VDXGMONITOR@@@@PEAUHDXGMONIT.c)
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209FFC (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C020A0A8 (-_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1C03B8B10 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 */

__int64 __fastcall MonitorSetDefaultAdvancedColorParams(struct HDXGMONITOR__ *a1)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  DxgMonitor::MonitorColorState *v4; // rdi
  DxgMonitor::MonitorColorState *v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorExclusive(&v6, a1);
  v2 = v6;
  if ( v6 )
  {
    v4 = *(DxgMonitor::MonitorColorState **)(v6 + 224);
    DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(v4);
    DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(v5);
    v3 = DxgMonitor::MonitorColorState::SetSDRWhiteLevel(v4, 0x3E8u);
    ExReleaseResourceLite((PERESOURCE)(v2 + 24));
    KeLeaveCriticalRegion();
  }
  else
  {
    v3 = -1073741275;
    WdLogSingleEntry1(2LL, -1073741275LL);
  }
  return v3;
}
