/*
 * XREFs of ZwSetInformationThread @ 0x1403F3760
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140266C58 (ExpWorkerFactoryCreateThread.c)
 *     RtlAcquirePrivilege @ 0x1406FFFBC (RtlAcquirePrivilege.c)
 *     RtlImpersonateSelfEx @ 0x1407001F8 (RtlImpersonateSelfEx.c)
 *     RtlReleasePrivilege @ 0x140708BAC (RtlReleasePrivilege.c)
 *     BiReleasePrivilege @ 0x140773858 (BiReleasePrivilege.c)
 *     BiAcquirePrivilege @ 0x1407738B0 (BiAcquirePrivilege.c)
 *     DbgkUserReportWorkRoutine @ 0x140883C60 (DbgkUserReportWorkRoutine.c)
 *     EtwpCovSampCaptureContextStart @ 0x14093ED28 (EtwpCovSampCaptureContextStart.c)
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
