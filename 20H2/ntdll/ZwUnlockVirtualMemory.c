/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1800A0A00
 * Callers:
 *     RtlUnlockMemoryZone @ 0x18005CF00 (RtlUnlockMemoryZone.c)
 *     RtlLockMemoryZone @ 0x18005D4F0 (RtlLockMemoryZone.c)
 *     RtlUnlockModuleSection @ 0x18005D6D0 (RtlUnlockModuleSection.c)
 *     RtlLockCurrentThread @ 0x180083590 (RtlLockCurrentThread.c)
 *     RtlUnlockCurrentThread @ 0x180086CC0 (RtlUnlockCurrentThread.c)
 *     RtlpUnlockStack @ 0x180086D50 (RtlpUnlockStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwUnlockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 459;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
