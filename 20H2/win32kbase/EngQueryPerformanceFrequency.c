/*
 * XREFs of EngQueryPerformanceFrequency @ 0x1C014C730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngQueryPerformanceFrequency(LONGLONG *pFrequency)
{
  KeQueryPerformanceCounter((PLARGE_INTEGER)pFrequency);
}
