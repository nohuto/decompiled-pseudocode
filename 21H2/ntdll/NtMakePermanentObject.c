/*
 * XREFs of NtMakePermanentObject @ 0x18009F7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtMakePermanentObject(HANDLE Handle)
{
  NTSTATUS result; // eax

  result = 271;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
