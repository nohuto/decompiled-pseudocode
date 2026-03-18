/*
 * XREFs of HalpTimerGetProfilingHandler @ 0x1404BC268
 * Callers:
 *     HalpSetSystemInformation @ 0x14071F2E0 (HalpSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 (*HalpTimerGetProfilingHandler())(void)
{
  return HalpTimerProfilingCallback;
}
