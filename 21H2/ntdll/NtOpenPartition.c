/*
 * XREFs of NtOpenPartition @ 0x18009FB10
 * Callers:
 *     LdrpInitializeProcessHeap @ 0x1800D400C (LdrpInitializeProcessHeap.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenPartition()
{
  __int64 result; // rax

  result = 295LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
