/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A0FD0
 * Callers:
 *     RtlUnlockMemoryZone @ 0x18005E430 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x18005EA20 (RtlLockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x18005EC00 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x180083CA0 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x1800872C0 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x180087350 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

__int64 ZwUnlockVirtualMemory()
{
  __int64 result; // rax

  result = 461LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
