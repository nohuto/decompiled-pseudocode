/*
 * XREFs of ?_UpdateHDRParamsIfRequired@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209C14
 * Callers:
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x1C02099B0 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1C020A10C (-_RetrieveHDRParamDriverOverrides@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z @ 0x1C03B89A8 (-SetColorProfile@MonitorColorState@DxgMonitor@@QEAAJAEBUDISPLAY_COLOR_DATA_RAW@@KKK@Z.c)
 * Callees:
 *     ?EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ @ 0x1C0209C5C (-EdidSupportsHDR@MonitorColorState@DxgMonitor@@QEBA_NXZ.c)
 *     ?_GetColorPrimariesType@MonitorColorState@DxgMonitor@@AEBA?AW4ColorPrimaryType@12@XZ @ 0x1C0209C74 (-_GetColorPrimariesType@MonitorColorState@DxgMonitor@@AEBA-AW4ColorPrimaryType@12@XZ.c)
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C0209FFC (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C020A0A8 (-_SetColorPrimariesToBT709@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x1C03B8F00 (-_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DxgMonitor::MonitorColorState::_UpdateHDRParamsIfRequired(DxgMonitor::MonitorColorState *this)
{
  DxgMonitor::MonitorColorState *v2; // rcx
  unsigned int v3; // r9d

  DxgMonitor::MonitorColorState::_GetColorPrimariesType();
  if ( DxgMonitor::MonitorColorState::EdidSupportsHDR(this) )
  {
    if ( v3 <= 1 )
      DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(v2);
    if ( !*((_DWORD *)this + 79) )
      DxgMonitor::MonitorColorState::_SetLuminanceValuesToHDR(this);
  }
  else
  {
    if ( !v3 )
      DxgMonitor::MonitorColorState::_SetColorPrimariesToBT709(v2);
    if ( !*((_DWORD *)this + 79) )
      DxgMonitor::MonitorColorState::_SetLuminanceValuesToSDR(this);
  }
}
