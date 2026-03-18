/*
 * XREFs of KiPollFreezeExecution @ 0x14038B894
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140A48E70 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
