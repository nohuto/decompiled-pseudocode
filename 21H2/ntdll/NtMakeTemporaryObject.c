/*
 * XREFs of NtMakeTemporaryObject @ 0x18009F830
 * Callers:
 *     LdrVerifyImageMatchesChecksumEx @ 0x18008B190 (LdrVerifyImageMatchesChecksumEx.c)
 * Callees:
 *     <none>
 */

__int64 NtMakeTemporaryObject()
{
  __int64 result; // rax

  result = 272LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
