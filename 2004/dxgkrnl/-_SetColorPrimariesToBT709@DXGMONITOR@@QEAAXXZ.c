/*
 * XREFs of ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02FB0D0
 * Callers:
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C0168A54 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C01889A4 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C018AAD0 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     MonitorSetDefaultAdvancedColorParams @ 0x1C02F47BC (MonitorSetDefaultAdvancedColorParams.c)
 *     ?_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C02FA384 (-_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
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
