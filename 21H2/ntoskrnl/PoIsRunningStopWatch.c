/*
 * XREFs of PoIsRunningStopWatch @ 0x14026434C
 * Callers:
 *     PopPausePowerRequestStats @ 0x14062BE30 (PopPausePowerRequestStats.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsRunningStopWatch(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) != 0LL;
}
