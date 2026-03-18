/*
 * XREFs of PoIsRunningStopWatch @ 0x140278230
 * Callers:
 *     PopPausePowerRequestStats @ 0x14064DF40 (PopPausePowerRequestStats.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsRunningStopWatch(__int64 a1)
{
  return *(_QWORD *)(a1 + 24) != 0LL;
}
