/*
 * XREFs of KiPollFreezeExecution @ 0x140322E08
 * Callers:
 *     KiCalibrateTimeAdjustment @ 0x140990BE0 (KiCalibrateTimeAdjustment.c)
 * Callees:
 *     <none>
 */

char KiPollFreezeExecution()
{
  _mm_pause();
  return 0;
}
