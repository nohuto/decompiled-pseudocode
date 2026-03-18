/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C01B2BD8
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C01B2074 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareModeRegions @ 0x1C01B2B94 (BmlCompareModeRegions.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C01B5B6C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1C01BC66C (BmlCompareTargetModeWithVirtualRefreshRate.c)
 *     BmlCompareMonitorRegions @ 0x1C03AAF7C (BmlCompareMonitorRegions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BmlCompareValues<unsigned int>(unsigned int a1, unsigned int a2)
{
  if ( a1 > a2 )
    return 1LL;
  else
    return (unsigned int)-(a1 < a2);
}
