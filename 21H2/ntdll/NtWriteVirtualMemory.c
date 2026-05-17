/*
 * XREFs of NtWriteVirtualMemory @ 0x18009DD80
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D6140 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4174 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800FF100 (RtlRemoteCall.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1801172B8 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011785C (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 NtWriteVirtualMemory()
{
  __int64 result; // rax

  result = 58LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
