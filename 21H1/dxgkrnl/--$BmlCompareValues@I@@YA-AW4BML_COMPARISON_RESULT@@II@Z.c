/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C00E5C4C
 * Callers:
 *     BmlCompareTargetModesWithConstraint @ 0x1C00E1920 (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1C00E5338 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareModeRegions @ 0x1C0157420 (BmlCompareModeRegions.c)
 *     BmlCompareMonitorRegions @ 0x1C02E70CC (BmlCompareMonitorRegions.c)
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
