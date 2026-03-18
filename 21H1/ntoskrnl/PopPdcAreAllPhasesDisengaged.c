/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x1408EB748
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EA310 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408EB578 (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

char PopPdcAreAllPhasesDisengaged()
{
  char result; // al

  result = 1;
  if ( qword_140C54330 )
    return ((__int64 (*)(void))qword_140C54330)();
  return result;
}
