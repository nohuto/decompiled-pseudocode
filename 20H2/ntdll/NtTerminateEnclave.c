/*
 * XREFs of NtTerminateEnclave @ 0x1800A0860
 * Callers:
 *     LdrInitializeEnclave @ 0x1800CCE60 (LdrInitializeEnclave.c)
 *     LdrpDeleteEnclave @ 0x1800CD42C (LdrpDeleteEnclave.c)
 * Callees:
 *     <none>
 */

__int64 NtTerminateEnclave()
{
  __int64 result; // rax

  result = 446LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
