/*
 * XREFs of ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C016C1D0
 * Callers:
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C00EDE64 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C016C134 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C016CC0C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     MonitorSetEnforceWideColorMode @ 0x1C02F0374 (MonitorSetEnforceWideColorMode.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C02F05BC (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C0021A68 (-EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ.c)
 */

unsigned __int8 __fastcall DXGMONITOR::EdidSupportsHDR(DXGMONITOR *this)
{
  char v1; // r8

  v1 = 0;
  if ( *((_BYTE *)this + 700)
    && (*((_BYTE *)this + 627) || *((_BYTE *)this + 626))
    && DXGMONITOR::EdidColorDepthMoreThanSDR(this) )
  {
    return 1;
  }
  return v1;
}
