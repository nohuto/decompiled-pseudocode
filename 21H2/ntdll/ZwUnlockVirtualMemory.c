/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A0F90
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

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 461;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
