/*
 * XREFs of NtLockVirtualMemory @ 0x18009F7F0
 * Callers:
 *     RtlExtendMemoryZone @ 0x180001A70 (RtlExtendMemoryZone.c)
 *     RtlLockMemoryZone @ 0x18005EA20 (RtlLockMemoryZone.c)
 *     RtlpModuleEnumeratorCallback @ 0x18007FA40 (RtlpModuleEnumeratorCallback.c)
 *     RtlLockCurrentThread @ 0x180083CA0 (RtlLockCurrentThread.c)
 *     RtlpLockStack @ 0x180083D58 (RtlpLockStack.c)
 * Callees:
 *     <none>
 */

__int64 NtLockVirtualMemory()
{
  __int64 result; // rax

  result = 270LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
