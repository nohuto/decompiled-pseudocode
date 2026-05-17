/*
 * XREFs of ZwInitializeEnclave @ 0x18009F610
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CCE20 (LdrInitializeEnclave.c)
 * Callees:
 *     <none>
 */

__int64 ZwInitializeEnclave()
{
  __int64 result; // rax

  result = 255LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
