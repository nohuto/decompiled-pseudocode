/*
 * XREFs of PopBatteryCapacityToRate @ 0x1405723A8
 * Callers:
 *     PopCalculateCsSummary @ 0x14056E490 (PopCalculateCsSummary.c)
 *     PopDripsWatchdogUpdateMetrics @ 0x1408F1F20 (PopDripsWatchdogUpdateMetrics.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopBatteryCapacityToRate(unsigned int a1, unsigned __int64 a2)
{
  if ( a2 )
    return 3600000000u * (unsigned __int64)a1 / a2;
  else
    return 0LL;
}
