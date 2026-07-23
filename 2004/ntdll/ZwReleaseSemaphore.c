/*
 * XREFs of ZwReleaseSemaphore @ 0x18009CF50
 * Callers:
 *     TppCallbackEpilog @ 0x1800536F0 (TppCallbackEpilog.c)
 *     RtlReleaseResource @ 0x180064C10 (RtlReleaseResource.c)
 *     RtlConvertSharedToExclusive @ 0x18007E310 (RtlConvertSharedToExclusive.c)
 *     RtlConvertExclusiveToShared @ 0x180089F10 (RtlConvertExclusiveToShared.c)
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
