/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x14039B5B0
 * Callers:
 *     LogFwReport @ 0x1409F4718 (LogFwReport.c)
 *     LogFwStat @ 0x1409F57D8 (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409F74C0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409FA288 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140266AF0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
