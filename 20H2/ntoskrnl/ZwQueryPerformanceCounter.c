/*
 * XREFs of ZwQueryPerformanceCounter @ 0x1403F8790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter, PLARGE_INTEGER PerformanceFrequency)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PerformanceCounter);
}
