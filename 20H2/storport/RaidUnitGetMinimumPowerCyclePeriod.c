/*
 * XREFs of RaidUnitGetMinimumPowerCyclePeriod @ 0x1C000608C
 * Callers:
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0002108 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     RaidUnitAdaptiveIdleTimeout @ 0x1C0005E38 (RaidUnitAdaptiveIdleTimeout.c)
 *     StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged @ 0x1C0012B2C (StorpTelemetryLogUnitS4WhenAdaptiveIdleEngaged.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidUnitGetMinimumPowerCyclePeriod(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1744);
  if ( !v1 )
    return 300000LL;
  v2 = *(_DWORD **)(v1 + 8);
  if ( !v2 )
    return 300000LL;
  if ( *v2 != 3 )
    return 300000LL;
  result = (unsigned int)v2[5];
  if ( !(_DWORD)result )
    return 300000LL;
  return result;
}
