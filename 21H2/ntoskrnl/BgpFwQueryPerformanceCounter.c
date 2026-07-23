/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x14039BFD0
 * Callers:
 *     LogFwReport @ 0x1409F2524 (LogFwReport.c)
 *     LogFwStat @ 0x1409F37D8 (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409F54C0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409F8288 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1402D0BC0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
