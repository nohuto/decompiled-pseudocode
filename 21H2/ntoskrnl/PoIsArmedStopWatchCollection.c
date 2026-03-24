/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x1402D332C
 * Callers:
 *     PdcPoPowerRequestBlockingCallback @ 0x14062BD40 (PdcPoPowerRequestBlockingCallback.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F6690 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}
