/*
 * XREFs of PoIsRunningStopWatch @ 0x140361530
 * Callers:
 *     PopPausePowerRequestStats @ 0x14071CDE0 (PopPausePowerRequestStats.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsRunningStopWatch(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) != 0LL;
}
