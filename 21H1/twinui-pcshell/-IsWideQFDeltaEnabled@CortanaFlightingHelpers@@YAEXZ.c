/*
 * XREFs of ?IsWideQFDeltaEnabled@CortanaFlightingHelpers@@YAEXZ @ 0x1801B00F8
 * Callers:
 *     ?ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x18001C4F4 (-ApplyCortanaWindowRegion@SearchAppDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@.c)
 *     ?PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ @ 0x1801B0ED0 (-PlayTransitionToCortana@CStartExperienceManager@@UEAAJXZ.c)
 *     ?ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z @ 0x1801E6AF0 (-ApplyCortanaWindowRegion@CortanaDesktopExperienceView@@AEAAJUtagRECT@@000_N1PEAUHMONITOR__@@@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1801ECB08 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z @ 0x1801EE510 (-ShowBorder@CortanaDesktopExperienceView@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x18001BDA4 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 */

bool __fastcall CortanaFlightingHelpers::IsWideQFDeltaEnabled(CortanaFlightingHelpers *this)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x38, (__int64)&v2);
  return v2 != 0;
}
