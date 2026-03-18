/*
 * XREFs of PopPdcAreAllPhasesDisengaged @ 0x1408EC9C8
 * Callers:
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EB590 (PopPowerAggregatorScreenOffExitStateHandler.c)
 *     PopArmIdlePhaseWatchdog @ 0x1408EC7F8 (PopArmIdlePhaseWatchdog.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

char PopPdcAreAllPhasesDisengaged()
{
  char result; // al

  result = 1;
  if ( qword_140C54230 )
    return ((__int64 (*)(void))qword_140C54230)();
  return result;
}
