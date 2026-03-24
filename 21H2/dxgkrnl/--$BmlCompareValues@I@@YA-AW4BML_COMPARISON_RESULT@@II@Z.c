/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C0139A28
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C0139114 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C013B62C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareModeRegions @ 0x1C016C1D0 (BmlCompareModeRegions.c)
 *     BmlCompareMonitorRegions @ 0x1C02EB99C (BmlCompareMonitorRegions.c)
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
