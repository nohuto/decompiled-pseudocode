/*
 * XREFs of ZwDuplicateObject @ 0x18009DDC0
 * Callers:
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     TppPoolUpdateTrimmedWorker @ 0x18004EEB0 (TppPoolUpdateTrimmedWorker.c)
 *     RtlReportSilentProcessExit @ 0x18005F440 (RtlReportSilentProcessExit.c)
 *     RtlCreateProcessReflection @ 0x1800D5BB0 (RtlCreateProcessReflection.c)
 *     RtlpProcessReflectionStartup @ 0x1800D6140 (RtlpProcessReflectionStartup.c)
 *     RtlQueryProcessDebugInformation @ 0x1800D78B0 (RtlQueryProcessDebugInformation.c)
 *     RtlWow64SuspendThread @ 0x1800DC4E0 (RtlWow64SuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DC728 (RtlpWow64OpenThreadProcess.c)
 *     RtlReportExceptionEx @ 0x1800DCB70 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DD040 (RtlReportExceptionHelper.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800F4174 (RtlpHeapPerformCrossProcessQuery.c)
 *     RtlGetUmsCompletionListEvent @ 0x1800F7590 (RtlGetUmsCompletionListEvent.c)
 *     PssNtFreeRemoteSnapshot @ 0x180114240 (PssNtFreeRemoteSnapshot.c)
 *     PsspWalkHandleTable @ 0x180116364 (PsspWalkHandleTable.c)
 *     PsspDuplicateSnapshotLocalToRemote @ 0x1801172B8 (PsspDuplicateSnapshotLocalToRemote.c)
 *     PsspDuplicateSnapshotRemoteToRemote @ 0x18011785C (PsspDuplicateSnapshotRemoteToRemote.c)
 * Callees:
 *     <none>
 */

__int64 ZwDuplicateObject()
{
  __int64 result; // rax

  result = 60LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
