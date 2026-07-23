/*
 * XREFs of ZwSetInformationThread @ 0x1403F8310
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x14035CA08 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1406D329C (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1406D34D8 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x1406DB348 (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x140781E58 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x140781EB0 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x1408897B0 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x140944AE8 (EtwpCovSampCaptureContextStart.c)
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
