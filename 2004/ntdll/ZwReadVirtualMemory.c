/*
 * XREFs of ZwReadVirtualMemory @ 0x18009D5F0
 * Callers:
 *     RtlWow64GetSharedInfoProcess @ 0x180079A40 (RtlWow64GetSharedInfoProcess.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7760 (RtlQueryProcessDebugInformation.c)
 *     RtlpQueryReadVirtualMemory @ 0x1800D8E60 (RtlpQueryReadVirtualMemory.c)
 *     RtlQueryCriticalSectionOwner @ 0x1800E8B60 (RtlQueryCriticalSectionOwner.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F3DD4 (RtlpHeapPerformCrossProcessQuery.c)
 *     PssNtFreeRemoteSnapshot @ 0x180113E90 (PssNtFreeRemoteSnapshot.c)
 *     PsspCaptureAuxiliaryPages @ 0x180114CDC (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureImageInformation @ 0x180114F64 (PsspCaptureImageInformation.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x180117470 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwReadVirtualMemory()
{
  __int64 result; // rax

  result = 63LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
