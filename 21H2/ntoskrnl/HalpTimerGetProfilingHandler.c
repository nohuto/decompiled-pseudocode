/*
 * XREFs of HalpTimerGetProfilingHandler @ 0x1404C1A78
 * Callers:
 *     HalpSetSystemInformation @ 0x1407335A0 (HalpSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (*HalpTimerGetProfilingHandler())(void)
{
  return HalpTimerProfilingCallback;
}
