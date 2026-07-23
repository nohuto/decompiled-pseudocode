/*
 * XREFs of RtlExitUserThread @ 0x180054640
 * Callers:
 *     RtlUserThreadStart @ 0x180052680 (RtlUserThreadStart.c)
 *     TppWorkerThread @ 0x180052B20 (TppWorkerThread.c)
 *     EtwpLogger @ 0x180055030 (EtwpLogger.c)
 *     RtlUserFiberStart @ 0x180080000 (RtlUserFiberStart.c)
 *     DbgUiRemoteBreakin @ 0x1800CCBE0 (DbgUiRemoteBreakin.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D9000 (RtlpQueryProcessDebugInformationRemote.c)
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D9250 (RtlpSetProcessDebugInformationRemote.c)
 *     RtlpExtendedHeapInformationWorkerThread @ 0x1800F3E70 (RtlpExtendedHeapInformationWorkerThread.c)
 * Callees:
 *     LdrShutdownThread @ 0x180017450 (LdrShutdownThread.c)
 *     TpCheckTerminateWorker @ 0x1800546A0 (TpCheckTerminateWorker.c)
 *     RtlExitUserProcess @ 0x18005D9D0 (RtlExitUserProcess.c)
 *     ZwQueryInformationThread @ 0x18009D550 (ZwQueryInformationThread.c)
 *     NtTerminateThread @ 0x18009DB10 (NtTerminateThread.c)
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
