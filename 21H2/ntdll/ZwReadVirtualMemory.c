/*
 * XREFs of ZwReadVirtualMemory @ 0x18009DDE0
 * Callers:
 *     RtlWow64GetSharedInfoProcess @ 0x18007AB70 (RtlWow64GetSharedInfoProcess.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7870 (RtlQueryProcessDebugInformation.c)
 *     RtlpQueryReadVirtualMemory @ 0x1800D8F70 (RtlpQueryReadVirtualMemory.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E8EB0 (RtlQueryCriticalSectionOwner.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4134 (RtlpHeapPerformCrossProcessQuery.c)
 *     PssNtFreeRemoteSnapshot @ 0x180114200 (PssNtFreeRemoteSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011504C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureImageInformation @ 0x1801152D4 (PsspCaptureImageInformation.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801177E4 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  NTSTATUS result; // eax

  result = 63;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
