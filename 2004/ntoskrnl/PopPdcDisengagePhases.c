/*
 * XREFs of PopPdcDisengagePhases @ 0x1408ECC10
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408EB170 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EB590 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 */

__int64 PopPdcDisengagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C54220 )
    return ((__int64 (*)(void))qword_140C54220)();
  return result;
}
