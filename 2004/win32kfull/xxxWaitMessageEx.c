/*
 * XREFs of xxxWaitMessageEx @ 0x1C01E30A8
 * Callers:
 *     xxxOldNextWindow @ 0x1C01F524C (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C02132C4 (xxxMoveSize.c)
 *     xxxMNLoop @ 0x1C0235428 (xxxMNLoop.c)
 *     xxxHelpLoop @ 0x1C025120C (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C0096960 (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x1C00F23D0 (ClientWaitMessageExMPH.c)
 */

__int64 __fastcall xxxWaitMessageEx(__int64 a1, unsigned int a2, enum SLEEP_STATUS *a3)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 440LL) + 20LL) <= 0 )
    return xxxSleepThread2(a1, a2, 1, 0, a3);
  else
    return ClientWaitMessageExMPH(a1, a2);
}
