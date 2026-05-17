/*
 * XREFs of ZwAreMappedFilesTheSame @ 0x18009E260
 * Callers:
 *     LdrpFindLoadedDllByMappingLockHeld @ 0x1800144C0 (LdrpFindLoadedDllByMappingLockHeld.c)
 * Callees:
 *     <none>
 */

__int64 ZwAreMappedFilesTheSame()
{
  __int64 result; // rax

  result = 142LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
