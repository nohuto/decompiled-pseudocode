/*
 * XREFs of ZwDuplicateObject @ 0x18009DD80
 * Callers:
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18004EEB0 (TppPoolUpdateTrimmedWorker.c)
 *     RtlReportSilentProcessExit @ 0x18005F440 (RtlReportSilentProcessExit.c)
 *     RtlCreateProcessReflection @ 0x1800D5B70 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6100 (RtlpProcessReflectionStartup.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D7870 (RtlQueryProcessDebugInformation.c)
 *     RtlWow64SuspendThread @ 0x1800DC4A0 (RtlWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DC6E8 (RtlpWow64OpenThreadProcess.c)
 *     RtlReportExceptionEx @ 0x1800DCB30 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DD000 (RtlReportExceptionHelper.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4134 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlGetUmsCompletionListEvent @ 0x1800F7550 (RtlGetUmsCompletionListEvent.c)
 *     PssNtFreeRemoteSnapshot @ 0x180114200 (PssNtFreeRemoteSnapshot.c)
 *     PsspWalkHandleTable @ 0x180116324 (PsspWalkHandleTable.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x180117278 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x1801177E4 (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwDuplicateObject(
        HANDLE SourceProcessHandle,
        HANDLE SourceHandle,
        HANDLE TargetProcessHandle,
        PHANDLE TargetHandle,
        ACCESS_MASK DesiredAccess,
        ULONG HandleAttributes,
        ULONG Options)
{
  NTSTATUS result; // eax

  result = 60;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
