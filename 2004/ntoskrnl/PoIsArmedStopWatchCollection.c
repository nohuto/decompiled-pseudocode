/*
 * XREFs of PoIsArmedStopWatchCollection @ 0x140278368
 * Callers:
 *     PdcPoPowerRequestBlockingCallback @ 0x14064DD30 (PdcPoPowerRequestBlockingCallback.c)
 *     PopStatsNotifyPowerRequestCsState @ 0x1408F32A0 (PopStatsNotifyPowerRequestCsState.c)
 * Callees:
 *     <none>
 */

bool __fastcall PoIsArmedStopWatchCollection(__int64 a1)
{
  return *(_QWORD *)(a1 + 16) != 0LL;
}
