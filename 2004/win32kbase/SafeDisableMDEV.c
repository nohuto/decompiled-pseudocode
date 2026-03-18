/*
 * XREFs of SafeDisableMDEV @ 0x1C00CC7F0
 * Callers:
 *     xxxUserSetDisplayConfig @ 0x1C0062320 (xxxUserSetDisplayConfig.c)
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0848 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     UpdateGraphicsDeviceList @ 0x1C00B4A30 (UpdateGraphicsDeviceList.c)
 *     VideoPortCalloutThread @ 0x1C0121A54 (VideoPortCalloutThread.c)
 * Callees:
 *     DrvDisableMDEV @ 0x1C00B9430 (DrvDisableMDEV.c)
 */

__int64 __fastcall SafeDisableMDEV(unsigned int a1)
{
  if ( gbMDEVDisabled )
    return 1LL;
  if ( (unsigned int)DrvDisableMDEV(*(HDEV **)(gpDispInfo + 16), 1LL, a1) )
  {
    _InterlockedExchange(&gbMDEVDisabled, 1);
    return 1LL;
  }
  return 0LL;
}
