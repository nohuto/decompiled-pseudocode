/*
 * XREFs of ZwReleaseSemaphore @ 0x18009D740
 * Callers:
 *     TppCallbackEpilog @ 0x18004DD30 (TppCallbackEpilog.c)
 *     RtlReleaseResource @ 0x180066210 (RtlReleaseResource.c)
 *     RtlConvertSharedToExclusive @ 0x18007EDB0 (RtlConvertSharedToExclusive.c)
 *     RtlConvertExclusiveToShared @ 0x18008A610 (RtlConvertExclusiveToShared.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReleaseSemaphore(HANDLE SemaphoreHandle, LONG ReleaseCount, PLONG PreviousCount)
{
  NTSTATUS result; // eax

  result = 10;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
