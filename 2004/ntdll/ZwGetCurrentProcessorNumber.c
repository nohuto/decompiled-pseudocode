/*
 * XREFs of ZwGetCurrentProcessorNumber @ 0x18009EC60
 * Callers:
 *     RtlGetCurrentProcessorNumber @ 0x1800A1A60 (RtlGetCurrentProcessorNumber.c)
 * Callees:
 *     <none>
 */

ULONG ZwGetCurrentProcessorNumber(void)
{
  ULONG result; // eax

  result = 243;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
