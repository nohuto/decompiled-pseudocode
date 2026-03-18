/*
 * XREFs of PoIsRunningStopWatch @ 0x14033EA20
 * Callers:
 *     PopPausePowerRequestStats @ 0x140700AEC (PopPausePowerRequestStats.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsRunningStopWatch(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) != 0LL;
}
