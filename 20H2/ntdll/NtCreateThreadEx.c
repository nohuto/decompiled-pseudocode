/*
 * XREFs of NtCreateThreadEx @ 0x18009E8C0
 * Callers:
 *     RtlpCreateUserThreadEx @ 0x180056100 (RtlpCreateUserThreadEx.c)
 * Callees:
 *     <none>
 */

__int64 NtCreateThreadEx()
{
  __int64 result; // rax

  result = 193LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
