/*
 * XREFs of ??$BmlCompareValues@I@@YA?AW4BML_COMPARISON_RESULT@@II@Z @ 0x1C0136388
 * Callers:
 *     BmlCompareSourceModesWithMonitors @ 0x1C0135A74 (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1C0137F8C (BmlCompareTargetModesWithConstraint.c)
 *     BmlCompareModeRegions @ 0x1C0167040 (BmlCompareModeRegions.c)
 *     BmlCompareMonitorRegions @ 0x1C02EB63C (BmlCompareMonitorRegions.c)
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
