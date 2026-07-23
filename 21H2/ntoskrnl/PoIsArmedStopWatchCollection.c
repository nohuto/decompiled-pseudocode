/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x140272658
 * Callers:
 *     PdcPoPowerRequestBlockingCallback @ 0x140670910 (PdcPoPowerRequestBlockingCallback.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F67F0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}
