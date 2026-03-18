/*
 * XREFs of ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02F6B60
 * Callers:
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C01590C4 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C016A008 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C016C134 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02F024C (MonitorSetDefaultAdvancedColorParams.c)
 *     ?_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C02F5E14 (-_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGMONITOR::_SetColorPrimariesToBT709(DXGMONITOR *this)
{
  *((_DWORD *)this + 157) = 655;
  *((_DWORD *)this + 158) = 338;
  *((_DWORD *)this + 159) = 307;
  *((_DWORD *)this + 160) = 614;
  *((_DWORD *)this + 161) = 153;
  *((_DWORD *)this + 162) = 61;
  *((_DWORD *)this + 163) = 320;
  *((_DWORD *)this + 164) = 337;
  *((_DWORD *)this + 165) = 3;
}
