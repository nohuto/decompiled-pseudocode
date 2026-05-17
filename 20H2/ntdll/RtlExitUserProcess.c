/*
 * XREFs of RtlExitUserProcess @ 0x18005D9D0
 * Callers:
 *     RtlExitUserThread @ 0x180054640 (RtlExitUserThread.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x18003E6A4 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E704 (LdrpAcquireLoaderLock.c)
 *     LdrShutdownProcess @ 0x18005DAA0 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x18005DF50 (RtlReportSilentProcessExit.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18005E0E0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlLockHeap @ 0x18005E4A0 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18005E540 (RtlUnlockHeap.c)
 *     LdrpDrainWorkQueue @ 0x18005EA04 (LdrpDrainWorkQueue.c)
 *     EtwpShutdownPrivateLoggers @ 0x1800816A0 (EtwpShutdownPrivateLoggers.c)
 *     ZwTerminateProcess @ 0x18009D630 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x18009DB10 (NtTerminateThread.c)
 */

__int64 __fastcall RtlExitUserProcess(unsigned int a1)
{
  void *UniqueThread; // rdx
  __int64 v3; // r8
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rcx

  EtwpShutdownPrivateLoggers();
  LdrpDrainWorkQueue((NtCurrentTeb()->SameTebFlags >> 12) & 1);
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((__int64)&FastPebLock);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( (int)ZwTerminateProcess(0LL, a1) < 0 )
  {
    RtlUnlockHeap(NtCurrentPeb()->ProcessHeap);
    RtlLeaveCriticalSection((__int64)&FastPebLock, v5, v6);
    LdrpReleaseLoaderLock(v7, 18LL, 0LL);
    return NtTerminateThread(-2LL, a1);
  }
  else
  {
    RtlUnlockProcessHeapOnProcessTerminate();
    UniqueThread = NtCurrentTeb()->ClientId.UniqueThread;
    qword_18016C0F8 = 0LL;
    qword_18016C0F0 = (__int64)UniqueThread;
    dword_18016C0E8 = -2;
    dword_18016C0EC = 1;
    RtlLeaveCriticalSection((__int64)&FastPebLock, (__int64)UniqueThread, v3);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
