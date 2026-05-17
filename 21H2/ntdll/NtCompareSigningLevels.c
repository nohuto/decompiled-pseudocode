/*
 * XREFs of NtCompareSigningLevels @ 0x18009E9B0
 * Callers:
 *     LdrpValidateIntegrityContinuity @ 0x180061B68 (LdrpValidateIntegrityContinuity.c)
 *     LdrpSetModuleSigningLevel @ 0x180089B58 (LdrpSetModuleSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 NtCompareSigningLevels()
{
  __int64 result; // rax

  result = 156LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
