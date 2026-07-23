/*
 * XREFs of _RtlpFcWnfCallback@28 @ 0x4B369980
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpFcUpdateLocalConfiguration@16 @ 0x4B2E4FCD (_RtlpFcUpdateLocalConfiguration@16.c)
 *     _RtlpFcCallChangeCallbacks@4 @ 0x4B369846 (_RtlpFcCallChangeCallbacks@4.c)
 */

int __stdcall RtlpFcWnfCallback(int a1, int a2, int a3, int a4, PRTL_SRWLOCK SRWLock, int a6, int a7)
{
  while ( MEMORY[0x7FFE0714] != MEMORY[0x7FFE0718] )
    _mm_pause();
  RtlpFcUpdateLocalConfiguration(SRWLock, 1, MEMORY[0x7FFE0710]);
  RtlpFcCallChangeCallbacks(SRWLock);
  return 0;
}
