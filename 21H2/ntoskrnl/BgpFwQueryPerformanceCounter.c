/*
 * XREFs of BgpFwQueryPerformanceCounter @ 0x1403A7BD8
 * Callers:
 *     AnFwpProgressAnimationManual @ 0x140AAB478 (AnFwpProgressAnimationManual.c)
 *     LogFwReport @ 0x140AABB9C (LogFwReport.c)
 *     AnFwpProgressIndicatorTimer @ 0x140AACEA0 (AnFwpProgressIndicatorTimer.c)
 *     LogFwStat @ 0x140AACFEC (LogFwStat.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 */

LARGE_INTEGER __fastcall BgpFwQueryPerformanceCounter(LARGE_INTEGER *a1)
{
  return KeQueryPerformanceCounter(a1);
}
