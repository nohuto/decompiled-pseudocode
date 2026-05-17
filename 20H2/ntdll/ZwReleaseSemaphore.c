/*
 * XREFs of ZwReleaseSemaphore @ 0x18009D1F0
 * Callers:
 *     TppCallbackEpilog @ 0x180053740 (TppCallbackEpilog.c)
 *     RtlReleaseResource @ 0x180064D20 (RtlReleaseResource.c)
 *     RtlConvertSharedToExclusive @ 0x18007E410 (RtlConvertSharedToExclusive.c)
 *     RtlConvertExclusiveToShared @ 0x18008A010 (RtlConvertExclusiveToShared.c)
 * Callees:
 *     <none>
 */

__int64 ZwReleaseSemaphore()
{
  __int64 result; // rax

  result = 10LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
