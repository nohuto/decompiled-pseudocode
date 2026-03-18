/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x1408F25D8
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408F11A0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408F2408 (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

char PopPdcAreAllPhasesDisengaged()
{
  char result; // al

  result = 1;
  if ( qword_140C542B0 )
    return ((__int64 (*)(void))qword_140C542B0)();
  return result;
}
