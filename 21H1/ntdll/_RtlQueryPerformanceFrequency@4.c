/*
 * XREFs of _RtlQueryPerformanceFrequency@4 @ 0x4B2E4D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlQueryPerformanceFrequency(_DWORD *a1)
{
  *a1 = MEMORY[0x7FFE0300];
  a1[1] = MEMORY[0x7FFE0304];
  return 1;
}
