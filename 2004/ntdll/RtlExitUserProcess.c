/*
 * XREFs of RtlExitUserProcess @ 0x18005D980
 * Callers:
 *     RtlExitUserThread @ 0x1800545F0 (RtlExitUserThread.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpReleaseLoaderLock @ 0x18003E654 (LdrpReleaseLoaderLock.c)
 *     LdrpAcquireLoaderLock @ 0x18003E6B4 (LdrpAcquireLoaderLock.c)
 *     LdrShutdownProcess @ 0x18005DA50 (LdrShutdownProcess.c)
 *     RtlReportSilentProcessExit @ 0x18005DE40 (RtlReportSilentProcessExit.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x18005DFD0 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlLockHeap @ 0x18005E390 (RtlLockHeap.c)
 *     RtlUnlockHeap @ 0x18005E430 (RtlUnlockHeap.c)
 *     LdrpDrainWorkQueue @ 0x18005E8F4 (LdrpDrainWorkQueue.c)
 *     EtwpShutdownPrivateLoggers @ 0x1800815A0 (EtwpShutdownPrivateLoggers.c)
 *     ZwTerminateProcess @ 0x18009D390 (ZwTerminateProcess.c)
 *     NtTerminateThread @ 0x18009D870 (NtTerminateThread.c)
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
    qword_18016A0F8 = 0LL;
    qword_18016A0F0 = (__int64)UniqueThread;
    dword_18016A0E8 = -2;
    dword_18016A0EC = 1;
    RtlLeaveCriticalSection((__int64)&FastPebLock, (__int64)UniqueThread, v3);
    RtlReportSilentProcessExit(-1LL, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1LL, a1);
  }
}
