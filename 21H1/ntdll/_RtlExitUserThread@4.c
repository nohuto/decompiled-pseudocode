/*
 * XREFs of _RtlExitUserThread@4 @ 0x4B2EB460
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 *     ___RtlUserThreadStart@8 @ 0x4B2E7A1F (___RtlUserThreadStart@8.c)
 *     _EtwpLogger@4 @ 0x4B2F2270 (_EtwpLogger@4.c)
 *     _RtlUserFiberStart@0 @ 0x4B2F2730 (_RtlUserFiberStart@0.c)
 *     _DbgUiRemoteBreakin@4 @ 0x4B32DB60 (_DbgUiRemoteBreakin@4.c)
 *     _RtlpQueryProcessDebugInformationRemote@4 @ 0x4B337A60 (_RtlpQueryProcessDebugInformationRemote@4.c)
 *     _RtlpSetProcessDebugInformationRemote@4 @ 0x4B337C70 (_RtlpSetProcessDebugInformationRemote@4.c)
 *     _RtlpExtendedHeapInformationWorkerThread@4 @ 0x4B357D30 (_RtlpExtendedHeapInformationWorkerThread@4.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _LdrShutdownThread@0 @ 0x4B2CF610 (_LdrShutdownThread@0.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 *     _RtlReportSilentProcessExit@8 @ 0x4B2DD910 (_RtlReportSilentProcessExit@8.c)
 *     _RtlUnlockProcessHeapOnProcessTerminate@0 @ 0x4B2DD99E (_RtlUnlockProcessHeapOnProcessTerminate@0.c)
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 *     _RtlLockHeap@4 @ 0x4B2DDA90 (_RtlLockHeap@4.c)
 *     _TpCheckTerminateWorker@4 @ 0x4B2EB4D0 (_TpCheckTerminateWorker@4.c)
 *     _EtwpStopUmLogger@16 @ 0x4B2ED853 (_EtwpStopUmLogger@16.c)
 *     _NtQueryInformationThread@20 @ 0x4B2F2BD0 (_NtQueryInformationThread@20.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _ZwTerminateThread@8 @ 0x4B2F2EB0 (_ZwTerminateThread@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _EtwpDemuxUmTraceHandle@8 @ 0x4B381562 (_EtwpDemuxUmTraceHandle@8.c)
 */

void __stdcall __noreturn RtlExitUserThread(int a1)
{
  int v1; // esi
  unsigned int v2; // ecx
  int v3; // ebx
  int v4; // edx
  int v5; // ecx
  void *v6; // ecx
  int v7; // ecx
  unsigned int v8; // [esp+10h] [ebp-C0h] BYREF
  int ThreadInformation; // [esp+14h] [ebp-BCh] BYREF
  _DWORD v10[45]; // [esp+18h] [ebp-B8h] BYREF

  ThreadInformation = 0;
  if ( NtQueryInformationThread((HANDLE)0xFFFFFFFE, (THREADINFOCLASS)12, &ThreadInformation, 4u, 0) < 0
    || !ThreadInformation )
  {
    LdrShutdownThread();
    TpCheckTerminateWorker(0);
    ZwTerminateThread(0, a1);
  }
  if ( !EtwpLoggerArray )
  {
LABEL_15:
    LdrpDrainWorkQueue((void *)((NtCurrentTeb()->SameTebFlags >> 12) & 1));
    LdrpAcquireLoaderLock();
    RtlEnterCriticalSection((int)&FastPebLock);
    RtlLockHeap((int)NtCurrentPeb()->ProcessHeap);
    if ( (int)ZwTerminateProcess(0, a1) >= 0 )
    {
      RtlUnlockProcessHeapOnProcessTerminate(v6);
      dword_4B3A5B4C = (int)NtCurrentTeb()->ClientId.UniqueThread;
      dword_4B3A5B44 = -2;
      dword_4B3A5B48 = 1;
      dword_4B3A5B50 = 0;
      RtlLeaveCriticalSection((int)&FastPebLock);
      RtlReportSilentProcessExit(-1, a1);
      LdrShutdownProcess();
      ZwTerminateProcess(-1, a1);
    }
    RtlUnlockHeap(v6, (int)NtCurrentPeb()->ProcessHeap);
    RtlLeaveCriticalSection((int)&FastPebLock);
    LdrpReleaseLoaderLock(v7, 18, 0, v7);
    ZwTerminateThread(-2, a1);
    __debugbreak();
  }
  memset(v10, 0, 0xB0u);
  v10[0] = 176;
  v10[11] = 0x20000;
  v1 = 0;
  while ( 1 )
  {
    v2 = v1 & 0xFFFF7FFF;
    v8 = v1 & 0xFFFF7FFF;
    if ( EtwpLoggerArray )
    {
      if ( v2 < 0x40 )
        goto LABEL_10;
      if ( !EtwpDemuxUmTraceHandle(v1, &v8) )
        break;
    }
LABEL_14:
    if ( (unsigned int)++v1 >= 0x40 )
      goto LABEL_15;
  }
  v2 = v8;
LABEL_10:
  _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v2 + 4));
  if ( (*(_DWORD *)(EtwpLoggerArray + 8 * v2) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v2 + 4));
  }
  else
  {
    v3 = *(_DWORD *)(EtwpLoggerArray + 8 * v2);
    v4 = *(_DWORD *)(v3 + 212);
    v5 = *(_DWORD *)(v3 + 20);
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v5 + 4));
    if ( (v4 & 0x400) == 0 )
    {
      v10[3] = 0;
      v10[2] = v1;
      EtwpStopUmLogger(v5, v10);
    }
  }
  goto LABEL_14;
}
