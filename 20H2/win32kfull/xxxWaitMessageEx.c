/*
 * XREFs of xxxWaitMessageEx @ 0x1C01E23E8
 * Callers:
 *     xxxOldNextWindow @ 0x1C01F45DC (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0212444 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0234598 (xxxMNLoop.c)
 *     xxxHelpLoop @ 0x1C024FBFC (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C0052630 (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x1C00ECC40 (ClientWaitMessageExMPH.c)
 */

__int64 __fastcall xxxWaitMessageEx(__int64 a1, unsigned int a2, enum SLEEP_STATUS *a3)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 20LL) <= 0 )
    return xxxSleepThread2(a1, a2, 1, 0, a3);
  else
    return ClientWaitMessageExMPH(a1, a2);
}
