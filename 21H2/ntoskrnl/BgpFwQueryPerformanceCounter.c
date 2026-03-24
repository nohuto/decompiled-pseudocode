/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x14039BE80
 * Callers:
 *     LogFwReport @ 0x1409F1524 (LogFwReport.c)
 *     LogFwStat @ 0x1409F27D8 (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409F44C0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409F7288 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022C340 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
