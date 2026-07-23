/*
 * XREFs of NtLockVirtualMemory @ 0x18009F240
 * Callers:
 *     RtlExtendMemoryZone @ 0x180001A70 (RtlExtendMemoryZone.c)
 *     RtlLockMemoryZone @ 0x18005D4F0 (RtlLockMemoryZone.c)
 *     RtlpModuleEnumeratorCallback @ 0x18007F120 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockCurrentThread @ 0x180083590 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x180083648 (RtlpLockStack.c)
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
