/*
 * XREFs of NtDebugContinue @ 0x18009EA60
 * Callers:
 *     DbgUiContinue @ 0x1800CC7F0 (DbgUiContinue.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDebugContinue(HANDLE DebugObjectHandle, PCLIENT_ID ClientId, NTSTATUS ContinueStatus)
{
  NTSTATUS result; // eax

  result = 206;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
