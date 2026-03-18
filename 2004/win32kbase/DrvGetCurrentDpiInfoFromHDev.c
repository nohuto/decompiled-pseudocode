/*
 * XREFs of DrvGetCurrentDpiInfoFromHDev @ 0x1C003E070
 * Callers:
 *     ?GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z @ 0x1C0013168 (-GetMonitorDpiInfo@@YAXPEAUHDEV__@@HPEAUtagRECT@@PEAU_DPI_INFORMATION@@@Z.c)
 *     ?GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C0013248 (-GetMonitorPhysicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     ?GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z @ 0x1C00132A8 (-GetMonitorLogicalDPI@@YAGPEAUHDEV__@@@Z.c)
 *     DrvGetCurrentDpiInfo @ 0x1C003DE94 (DrvGetCurrentDpiInfo.c)
 *     CitGetMonitorInfo @ 0x1C004A1F0 (CitGetMonitorInfo.c)
 *     NtUserGetDpiForMonitor @ 0x1C0078AB0 (NtUserGetDpiForMonitor.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C013C294 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z @ 0x1C0147EFC (-DrvGetCurrentDpiInfoFromHDC@@YAJPEAUHDC__@@QEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetCurrentDpiInfoFromHDev(__int64 a1, __int64 a2)
{
  if ( !a1 )
    return 3221225480LL;
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 2456);
  *(_OWORD *)(a2 + 16) = *(_OWORD *)(a1 + 2472);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)(a1 + 2488);
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 2504);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 2520);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 2536);
  return *(_DWORD *)(a2 + 8) == 0 ? 0xC0000001 : 0;
}
