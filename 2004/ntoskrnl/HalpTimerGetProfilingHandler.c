/*
 * XREFs of HalpTimerGetProfilingHandler @ 0x1404BC948
 * Callers:
 *     HalpSetSystemInformation @ 0x1407211A0 (HalpSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (*HalpTimerGetProfilingHandler())(void)
{
  return HalpTimerProfilingCallback;
}
