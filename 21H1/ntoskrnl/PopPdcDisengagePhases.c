/*
 * XREFs of PopPdcDisengagePhases @ 0x1408EB990
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408E9EF0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408EA310 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

__int64 PopPdcDisengagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C54320 )
    return ((__int64 (*)(void))qword_140C54320)();
  return result;
}
