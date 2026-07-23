/*
 * XREFs of ZwDisplayString @ 0x18009EC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDisplayString(PUNICODE_STRING String)
{
  NTSTATUS result; // eax

  result = 219;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
