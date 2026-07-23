/*
 * XREFs of NtQueryPerformanceCounter @ 0x18009D6D0
 * Callers:
 *     LdrpGenSecurityCookie @ 0x18001404C (LdrpGenSecurityCookie.c)
 *     RtlQueryPerformanceCounter @ 0x1800401A0 (RtlQueryPerformanceCounter.c)
 *     RtlHeapTrkInitialize @ 0x1800FDCA0 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800FE54C (RtlpHeapTrkGenerateHashRandoms.c)
 *     RtlpHeapTrkInterceptor @ 0x1800FE670 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter, PLARGE_INTEGER PerformanceFrequency)
{
  NTSTATUS result; // eax

  result = 49;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
