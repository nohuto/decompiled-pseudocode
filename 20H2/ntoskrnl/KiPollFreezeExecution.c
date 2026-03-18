/*
 * XREFs of KiPollFreezeExecution @ 0x140331624
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140997B90 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
