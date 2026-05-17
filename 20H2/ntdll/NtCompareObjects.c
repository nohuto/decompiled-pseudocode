/*
 * XREFs of NtCompareObjects @ 0x18009E400
 * Callers:
 *     RtlIsCurrentProcess @ 0x180074BE0 (RtlIsCurrentProcess.c)
 *     RtlIsCurrentThread @ 0x1800FF540 (RtlIsCurrentThread.c)
 * Callees:
 *     <none>
 */

__int64 NtCompareObjects()
{
  __int64 result; // rax

  result = 155LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
