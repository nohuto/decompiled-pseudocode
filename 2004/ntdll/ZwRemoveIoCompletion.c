/*
 * XREFs of ZwRemoveIoCompletion @ 0x18009CF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwRemoveIoCompletion(
        HANDLE IoCompletionHandle,
        PVOID *KeyContext,
        PVOID *ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER Timeout)
{
  NTSTATUS result; // eax

  result = 9;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
