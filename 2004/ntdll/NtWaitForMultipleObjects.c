/*
 * XREFs of NtWaitForMultipleObjects @ 0x18009D960
 * Callers:
 *     TpTrimPools @ 0x180063BD0 (TpTrimPools.c)
 *     RtlCreateProcessReflection @ 0x1800D5A60 (RtlCreateProcessReflection.c)
 *     WerpWaitForCrashReporting @ 0x1800DDBA0 (WerpWaitForCrashReporting.c)
 *     RtlpHeapTrkSyncWithDiagnoser @ 0x1800FE628 (RtlpHeapTrkSyncWithDiagnoser.c)
 * Callees:
 *     <none>
 */

__int64 NtWaitForMultipleObjects()
{
  __int64 result; // rax

  result = 91LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
