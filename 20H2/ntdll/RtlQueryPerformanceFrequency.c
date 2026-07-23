/*
 * XREFs of RtlQueryPerformanceFrequency @ 0x180071250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LOGICAL __cdecl RtlQueryPerformanceFrequency(PLARGE_INTEGER PerformanceFrequency)
{
  PerformanceFrequency->QuadPart = MEMORY[0x7FFE0300];
  return 1;
}
