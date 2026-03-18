/*
 * XREFs of ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209FFC
 * Callers:
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z @ 0x1C01E5394 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N0@Z.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C02099B0 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209C14 (-_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C03B11C4 (MonitorSetDefaultAdvancedColorParams.c)
 * Callees:
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C020A04C (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(DxgMonitor::MonitorColorState *this)
{
  *((_DWORD *)this + 78) = 5000;
  *((_DWORD *)this + 79) = 2700000;
  *((_DWORD *)this + 80) = 2700000;
  *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
  *((_DWORD *)this + 83) = 2700000;
  *((_DWORD *)this + 84) = 1;
  DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this);
}
