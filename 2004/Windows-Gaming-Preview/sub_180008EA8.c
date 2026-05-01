/*
 * XREFs of sub_180008EA8 @ 0x180008EA8
 * Callers:
 *     sub_180006E34 @ 0x180006E34 (sub_180006E34.c)
 *     sub_180007048 @ 0x180007048 (sub_180007048.c)
 *     sub_180007894 @ 0x180007894 (sub_180007894.c)
 *     sub_180008BE0 @ 0x180008BE0 (sub_180008BE0.c)
 *     sub_180008CD4 @ 0x180008CD4 (sub_180008CD4.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_180008EA8(PTP_TIMER pti)
{
  SetThreadpoolTimer(pti, 0LL, 0, 0);
  WaitForThreadpoolTimerCallbacks(pti, 1);
  CloseThreadpoolTimer(pti);
}
