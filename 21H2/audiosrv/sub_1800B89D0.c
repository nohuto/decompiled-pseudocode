/*
 * XREFs of sub_1800B89D0 @ 0x1800B89D0
 * Callers:
 *     sub_180068DF0 @ 0x180068DF0 (sub_180068DF0.c)
 *     sub_1800B838C @ 0x1800B838C (sub_1800B838C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1800B89D0(PTP_TIMER pti)
{
  SetThreadpoolTimer(pti, 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(pti, 1);
  CloseThreadpoolTimer(pti);
}
