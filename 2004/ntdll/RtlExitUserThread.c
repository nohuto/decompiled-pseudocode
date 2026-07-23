/*
 * XREFs of RtlExitUserThread @ 0x1800545F0
 * Callers:
 *     RtlUserThreadStart @ 0x180052630 (RtlUserThreadStart.c)
 *     TppWorkerThread @ 0x180052AD0 (TppWorkerThread.c)
 *     EtwpLogger @ 0x180054FE0 (EtwpLogger.c)
 *     RtlUserFiberStart @ 0x18007FF00 (RtlUserFiberStart.c)
 *     DbgUiRemoteBreakin @ 0x1800CCA00 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D8C60 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D8EB0 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3960 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     TpCheckTerminateWorker @ 0x180054650 (TpCheckTerminateWorker.c)
 *     RtlExitUserProcess @ 0x18005D980 (RtlExitUserProcess.c)
 *     ZwQueryInformationThread @ 0x18009D2B0 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x18009D870 (NtTerminateThread.c)
 */

void __cdecl __noreturn RtlExitUserThread(NTSTATUS ExitStatus)
{
  int ThreadInformation; // [rsp+48h] [rbp+10h] BYREF

  ThreadInformation = 0;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread, &ThreadInformation, 4u, 0LL) >= 0 )
  {
    if ( ThreadInformation )
      RtlExitUserProcess(ExitStatus);
  }
  LdrShutdownThread();
}
