/*
 * XREFs of NtExtendSection @ 0x18009F250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtExtendSection(HANDLE SectionHandle, PLARGE_INTEGER NewSectionSize)
{
  NTSTATUS result; // eax

  result = 227;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
