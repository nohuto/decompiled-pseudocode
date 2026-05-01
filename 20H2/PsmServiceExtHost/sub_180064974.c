/*
 * XREFs of sub_180064974 @ 0x180064974
 * Callers:
 *     sub_1800375E8 @ 0x1800375E8 (sub_1800375E8.c)
 *     sub_180064258 @ 0x180064258 (sub_180064258.c)
 *     sub_180064440 @ 0x180064440 (sub_180064440.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180064974(PTP_TIMER pti)
{
  SetThreadpoolTimer(pti, 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(pti, 1);
  CloseThreadpoolTimer(pti);
}
