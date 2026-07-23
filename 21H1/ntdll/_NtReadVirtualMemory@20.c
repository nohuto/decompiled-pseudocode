/*
 * XREFs of _NtReadVirtualMemory@20 @ 0x4B2F2D70
 * Callers:
 *     RtlpQueryReadVirtualMemory @ 0x4B337BF0 (RtlpQueryReadVirtualMemory.c)
 *     _RtlWow64GetSharedInfoProcess@12 @ 0x4B33A200 (_RtlWow64GetSharedInfoProcess@12.c)
 *     _RtlQueryCriticalSectionOwner@8 @ 0x4B34A6A0 (_RtlQueryCriticalSectionOwner@8.c)
 *     _RtlpHeapPerformCrossProcessQuery@8 @ 0x4B358165 (_RtlpHeapPerformCrossProcessQuery@8.c)
 *     _PssNtFreeRemoteSnapshot@8 @ 0x4B386950 (_PssNtFreeRemoteSnapshot@8.c)
 *     _PsspCaptureAuxiliaryPages@20 @ 0x4B38738C (_PsspCaptureAuxiliaryPages@20.c)
 *     _PsspCaptureImageInformation@12 @ 0x4B3875C8 (_PsspCaptureImageInformation@12.c)
 *     _PsspDuplicateSnapshotRemoteToRemote@20 @ 0x4B389365 (_PsspDuplicateSnapshotRemoteToRemote@20.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtReadVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        PVOID Buffer,
        SIZE_T BufferSize,
        PSIZE_T NumberOfBytesRead)
{
  return Wow64SystemServiceCall();
}
