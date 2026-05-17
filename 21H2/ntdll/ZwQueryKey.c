/*
 * XREFs of ZwQueryKey @ 0x18009D900
 * Callers:
 *     RtlpValidateKeyTrust @ 0x1800463A8 (RtlpValidateKeyTrust.c)
 *     LdrpCodeAuthzInitialize @ 0x18007C370 (LdrpCodeAuthzInitialize.c)
 * Callees:
 *     <none>
 */

__int64 ZwQueryKey()
{
  __int64 result; // rax

  result = 22LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
