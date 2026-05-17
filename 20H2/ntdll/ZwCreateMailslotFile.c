/*
 * XREFs of ZwCreateMailslotFile @ 0x18009E6E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 ZwCreateMailslotFile()
{
  __int64 result; // rax

  result = 178LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
