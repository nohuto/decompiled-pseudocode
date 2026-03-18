/*
 * XREFs of KiPollFreezeExecution @ 0x140360A88
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140991B20 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
