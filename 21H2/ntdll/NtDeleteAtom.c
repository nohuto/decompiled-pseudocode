/*
 * XREFs of NtDeleteAtom @ 0x18009EFF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtDeleteAtom(RTL_ATOM Atom)
{
  NTSTATUS result; // eax

  result = 208;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
