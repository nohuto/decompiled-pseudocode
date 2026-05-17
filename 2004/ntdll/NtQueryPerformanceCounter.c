/*
 * XREFs of NtQueryPerformanceCounter @ 0x18009D430
 * Callers:
 *     LdrpGenSecurityCookie @ 0x18001404C (LdrpGenSecurityCookie.c)
 *     RtlQueryPerformanceCounter @ 0x180040150 (RtlQueryPerformanceCounter.c)
 *     RtlHeapTrkInitialize @ 0x1800FD790 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800FE03C (RtlpHeapTrkGenerateHashRandoms.c)
 *     RtlpHeapTrkInterceptor @ 0x1800FE160 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryPerformanceCounter()
{
  __int64 result; // rax

  result = 49LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
