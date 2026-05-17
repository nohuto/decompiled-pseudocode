/*
 * XREFs of NtGetCurrentProcessorNumberEx @ 0x18009F4D0
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x1800A2320 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     <none>
 */

__int64 NtGetCurrentProcessorNumberEx()
{
  __int64 result; // rax

  result = 245LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
