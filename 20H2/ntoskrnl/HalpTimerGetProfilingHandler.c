/*
 * XREFs of HalpTimerGetProfilingHandler @ 0x1404BFE68
 * Callers:
 *     HalpSetSystemInformation @ 0x14072F190 (HalpSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (*HalpTimerGetProfilingHandler())(void)
{
  return HalpTimerProfilingCallback;
}
