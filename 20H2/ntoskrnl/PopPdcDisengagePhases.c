/*
 * XREFs of PopPdcDisengagePhases @ 0x1408F2820
 * Callers:
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x1408F0D80 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 *     PopPowerAggregatorScreenOffExitStateHandler @ 0x1408F11A0 (PopPowerAggregatorScreenOffExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 PopPdcDisengagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C542A0 )
    return ((__int64 (*)(void))qword_140C542A0)();
  return result;
}
