/*
 * XREFs of ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C01BC350
 * Callers:
 *     MonitorSetLastWireformatAndColorspace @ 0x1C01BC270 (MonitorSetLastWireformatAndColorspace.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01E47F0 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C02099B0 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x1C03B89A8 (-SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1C03B8B10 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(
        DxgMonitor::MonitorColorState *this)
{
  int updated; // eax
  unsigned int v2; // ebx

  updated = ZwUpdateWnfStateData(&WNF_DX_DISPLAY_COLORIMETRY_DATA_CHANGED, 0LL, 0LL, 0LL, 0LL, 0, 0);
  v2 = updated;
  if ( updated < 0 )
    WdLogSingleEntry1(2LL, updated);
  return v2;
}
