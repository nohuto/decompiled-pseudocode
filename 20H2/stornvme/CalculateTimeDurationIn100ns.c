/*
 * XREFs of CalculateTimeDurationIn100ns @ 0x1C000484C
 * Callers:
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C00047A8 (NVMeIsAllowedWithinThrottleLimit.c)
 *     NVMeHwAdapterControl @ 0x1C0004A90 (NVMeHwAdapterControl.c)
 *     IoQueuesCreation @ 0x1C000AA18 (IoQueuesCreation.c)
 *     IoQueuesCreationAsync @ 0x1C000AB9C (IoQueuesCreationAsync.c)
 *     RecordCommandTimingHistory @ 0x1C001B7B0 (RecordCommandTimingHistory.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CalculateTimeDurationIn100ns(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8

  v2 = 0LL;
  if ( a2 )
    return 10000 * (1000 * (a1 % a2) % a2) / a2 + 10000 * (1000 * (a1 % a2) / a2 + 1000 * (a1 / a2));
  return v2;
}
