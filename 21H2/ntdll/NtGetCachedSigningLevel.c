/*
 * XREFs of NtGetCachedSigningLevel @ 0x18009F450
 * Callers:
 *     LdrpSetModuleSigningLevel @ 0x180089B58 (LdrpSetModuleSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 NtGetCachedSigningLevel()
{
  __int64 result; // rax

  result = 241LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
