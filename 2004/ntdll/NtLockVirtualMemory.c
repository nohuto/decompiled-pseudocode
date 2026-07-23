/*
 * XREFs of NtLockVirtualMemory @ 0x18009EFA0
 * Callers:
 *     RtlExtendMemoryZone @ 0x180001A70 (RtlExtendMemoryZone.c)
 *     RtlLockMemoryZone @ 0x18005D4A0 (RtlLockMemoryZone.c)
 *     RtlpModuleEnumeratorCallback @ 0x18007F020 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockCurrentThread @ 0x180083490 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x180083548 (RtlpLockStack.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  NTSTATUS result; // eax

  result = 269;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
