/*
 * XREFs of ZwSuspendProcess @ 0x1800A0D90
 * Callers:
 *     RtlWow64SuspendProcess @ 0x1800DC330 (RtlWow64SuspendProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSuspendProcess(HANDLE ProcessHandle)
{
  NTSTATUS result; // eax

  result = 445;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
