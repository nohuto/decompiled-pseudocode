/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x14033EB58
 * Callers:
 *     PdcPoPowerRequestBlockingCallback @ 0x1406FF890 (PdcPoPowerRequestBlockingCallback.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F1FB0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}
