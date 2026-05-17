/*
 * XREFs of NtGetCachedSigningLevel @ 0x18009EEA0
 * Callers:
 *     LdrpSetModuleSigningLevel @ 0x180089558 (LdrpSetModuleSigningLevel.c)
 * Callees:
 *     <none>
 */

__int64 NtGetCachedSigningLevel()
{
  __int64 result; // rax

  result = 240LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
