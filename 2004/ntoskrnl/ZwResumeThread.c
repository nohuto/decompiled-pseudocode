/*
 * XREFs of ZwResumeThread @ 0x1403F4000
 * Callers:
 *     ExpWorkerFactoryCreateThread @ 0x140266C58 (ExpWorkerFactoryCreateThread.c)
 *     DbgkUserReportWorkRoutine @ 0x140883C60 (DbgkUserReportWorkRoutine.c)
 *     StartFirstUserProcess @ 0x140A44218 (StartFirstUserProcess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwResumeThread(HANDLE ThreadHandle, PULONG PreviousSuspendCount)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle);
}
