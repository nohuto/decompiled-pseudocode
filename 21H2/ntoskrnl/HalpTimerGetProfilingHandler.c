/*
 * XREFs of HalpTimerGetProfilingHandler @ 0x1404C1838
 * Callers:
 *     HalpSetSystemInformation @ 0x1407333E0 (HalpSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (*HalpTimerGetProfilingHandler())(void)
{
  return HalpTimerProfilingCallback;
}
