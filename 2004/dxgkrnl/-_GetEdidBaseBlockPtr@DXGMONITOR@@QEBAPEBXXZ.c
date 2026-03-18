/*
 * XREFs of ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C0126C10
 * Callers:
 *     ?_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z @ 0x1C00097C4 (-_GetMonitorNativeFlags@DXGMONITOR@@QEBAJPEAE00@Z.c)
 *     MonitorGetDpiInfoFromDescriptor @ 0x1C0141C4C (MonitorGetDpiInfoFromDescriptor.c)
 *     MonitorIsMonitorEdidless @ 0x1C0162C7C (MonitorIsMonitorEdidless.c)
 *     ?_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z @ 0x1C0166EE8 (-_GetEdidBlockPtr@DXGMONITOR@@QEBAPEBXI@Z.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x1C01892F0 (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C02F379C (MonitorGetEdidBaseBlockPtr.c)
 * Callees:
 *     <none>
 */

const void *__fastcall DXGMONITOR::_GetEdidBaseBlockPtr(DXGMONITOR *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 18);
  if ( v1 && *(_QWORD *)(v1 + 16) >= 0x80uLL )
    return (const void *)(v1 + 24);
  else
    return 0LL;
}
