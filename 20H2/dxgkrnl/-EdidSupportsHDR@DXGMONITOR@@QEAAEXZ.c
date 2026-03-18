/*
 * XREFs of ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C01899BC
 * Callers:
 *     MonitorIsMonitorAndLinkHDRCapable @ 0x1C0127268 (MonitorIsMonitorAndLinkHDRCapable.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C0189920 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C018AB0C (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@PEAU_DXGK_DISPLAY_SCENARI.c)
 *     MonitorSetEnforceWideColorMode @ 0x1C02F3944 (MonitorSetEnforceWideColorMode.c)
 *     MonitorSetSDRWhiteLevel @ 0x1C02F3B8C (MonitorSetSDRWhiteLevel.c)
 * Callees:
 *     ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C00225E4 (-EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ.c)
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
