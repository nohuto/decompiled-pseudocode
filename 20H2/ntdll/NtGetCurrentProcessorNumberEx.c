/*
 * XREFs of NtGetCurrentProcessorNumberEx @ 0x18009EF20
 * Callers:
 *     RtlGetCurrentProcessorNumberEx @ 0x1800A1D40 (RtlGetCurrentProcessorNumberEx.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl NtGetCurrentProcessorNumberEx(PPROCESSOR_NUMBER ProcessorNumber)
{
  ULONG result; // eax

  result = 244;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
