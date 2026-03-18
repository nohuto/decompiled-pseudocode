/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x140361200
 * Callers:
 *     PdcPoPowerRequestBlockingCallback @ 0x14071D020 (PdcPoPowerRequestBlockingCallback.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F8EB0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}
