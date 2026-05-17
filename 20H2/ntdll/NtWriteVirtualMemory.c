/*
 * XREFs of NtWriteVirtualMemory @ 0x18009D7F0
 * Callers:
 *     RtlpProcessReflectionStartup @ 0x1800D6390 (RtlpProcessReflectionStartup.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F42E4 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlRemoteCall @ 0x1800FF260 (RtlRemoteCall.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180117418 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180117980 (PsspDuplicateSnapshotRemoteToRemote.c)
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
