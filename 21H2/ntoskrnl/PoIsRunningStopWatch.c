/*
 * XREFs of PoIsRunningStopWatch @ 0x140272520
 * Callers:
 *     PopPausePowerRequestStats @ 0x140670A58 (PopPausePowerRequestStats.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsRunningStopWatch(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) != 0LL;
}
