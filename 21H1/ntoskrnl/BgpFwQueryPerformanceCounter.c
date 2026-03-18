/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x140398960
 * Callers:
 *     LogFwReport @ 0x1409EE718 (LogFwReport.c)
 *     LogFwStat @ 0x1409EF7D8 (LogFwStat.c)
 *     AnFwpProgressIndicatorTimer @ 0x1409F14C0 (AnFwpProgressIndicatorTimer.c)
 *     AnFwpProgressAnimationManual @ 0x1409F4288 (AnFwpProgressAnimationManual.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x140240CA0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
