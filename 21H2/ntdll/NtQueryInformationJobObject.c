/*
 * XREFs of NtQueryInformationJobObject @ 0x18009FF90
 * Callers:
 *     TppJobpRundownJob @ 0x18007FCD8 (TppJobpRundownJob.c)
 *     RtlGetSessionProperties @ 0x1800E65D0 (RtlGetSessionProperties.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryInformationJobObject()
{
  __int64 result; // rax

  result = 331LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
