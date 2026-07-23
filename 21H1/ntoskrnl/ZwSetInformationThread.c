/*
 * XREFs of ZwSetInformationThread @ 0x1403F24D0
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x1402BFC88 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1406DD35C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406DD598 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1406E4FD0 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x140771448 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407714A0 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140882940 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093DAA8 (EtwpCovSampCaptureContextStart.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
