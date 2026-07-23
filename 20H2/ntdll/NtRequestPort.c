/*
 * XREFs of NtRequestPort @ 0x18009FF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtRequestPort(HANDLE PortHandle, PPORT_MESSAGE RequestMessage)
{
  NTSTATUS result; // eax

  result = 375;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
