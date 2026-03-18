/*
 * XREFs of ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C020A04C
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01E47F0 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C02099B0 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209FFC (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C020A10C (-_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x1C03B89A8 (-SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x1C03B8B10 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 *     ?_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C03B8F00 (-_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(
        DxgMonitor::MonitorColorState *this)
{
  int v2; // edx
  int v3; // eax
  unsigned int v5; // ecx
  float v6; // xmm2_4

  if ( (unsigned int)(80 * *((_DWORD *)this + 98)) < 0x3E8 )
    WdLogSingleEntry0(1LL);
  v2 = *((_DWORD *)this + 97);
  if ( !v2 )
  {
    v3 = *((_DWORD *)this + 80);
    *(_QWORD *)((char *)this + 324) = *((_QWORD *)this + 39);
    *((_DWORD *)this + 83) = v3;
    return 0LL;
  }
  v5 = 80 * *((_DWORD *)this + 98);
  if ( v5 >= 0x3E8 )
  {
    v6 = (float)v2 / (float)(v5 / 0x3E8);
    *((_DWORD *)this + 82) = (int)(float)((float)((float)((float)*((int *)this + 79) / 10000.0) / v6) * 10000.0);
    *((_DWORD *)this + 83) = (int)(float)((float)((float)((float)*((int *)this + 80) / 10000.0) / v6) * 10000.0);
    *((_DWORD *)this + 81) = (int)(float)((float)((float)((float)*((int *)this + 78) / 10000.0) / v6) * 10000.0);
    return 0LL;
  }
  return 3221225473LL;
}
