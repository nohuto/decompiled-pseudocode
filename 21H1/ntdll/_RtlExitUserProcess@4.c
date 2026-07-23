/*
 * XREFs of _RtlExitUserProcess@4 @ 0x4B2DD5D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 *     _RtlReportSilentProcessExit@8 @ 0x4B2DD910 (_RtlReportSilentProcessExit@8.c)
 *     _RtlUnlockProcessHeapOnProcessTerminate@0 @ 0x4B2DD99E (_RtlUnlockProcessHeapOnProcessTerminate@0.c)
 *     _RtlUnlockHeap@4 @ 0x4B2DD9F0 (_RtlUnlockHeap@4.c)
 *     _RtlLockHeap@4 @ 0x4B2DDA90 (_RtlLockHeap@4.c)
 *     _EtwpStopUmLogger@16 @ 0x4B2ED853 (_EtwpStopUmLogger@16.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _ZwTerminateThread@8 @ 0x4B2F2EB0 (_ZwTerminateThread@8.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _EtwpDemuxUmTraceHandle@8 @ 0x4B381562 (_EtwpDemuxUmTraceHandle@8.c)
 */

void __cdecl __noreturn RtlExitUserProcess(NTSTATUS ExitStatus)
{
  int v1; // esi
  unsigned int v2; // ecx
  int v3; // edi
  int v4; // edx
  int v5; // ecx
  int v6; // ecx
  size_t v7; // [esp-4h] [ebp-CCh]
  unsigned int v8; // [esp+Ch] [ebp-BCh] BYREF
  _DWORD v9[45]; // [esp+10h] [ebp-B8h] BYREF

  if ( EtwpLoggerArray )
  {
    LODWORD(v7) = 176;
    memset(v9, 0, v7);
    v9[0] = 176;
    v1 = 0;
    v9[11] = 0x20000;
    while ( 1 )
    {
      v2 = v1 & 0xFFFF7FFF;
      v8 = v1 & 0xFFFF7FFF;
      if ( EtwpLoggerArray )
      {
        if ( v2 < 0x40 )
          goto LABEL_9;
        if ( !EtwpDemuxUmTraceHandle(v1, &v8) )
          break;
      }
LABEL_13:
      if ( (unsigned int)++v1 >= 0x40 )
        goto LABEL_2;
    }
    v2 = v8;
LABEL_9:
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
        v9[2] = v1;
        v9[3] = 0;
        EtwpStopUmLogger(v5, v9);
      }
    }
    goto LABEL_13;
  }
LABEL_2:
  LdrpDrainWorkQueue((void *)((NtCurrentTeb()->SameTebFlags >> 12) & 1));
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection(&FastPebLock);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( ZwTerminateProcess(0, ExitStatus) >= 0 )
  {
    RtlUnlockProcessHeapOnProcessTerminate();
    FastPebLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
    FastPebLock.LockCount = -2;
    FastPebLock.RecursionCount = 1;
    FastPebLock.LockSemaphore = 0;
    RtlLeaveCriticalSection(&FastPebLock);
    RtlReportSilentProcessExit((HANDLE)0xFFFFFFFF, ExitStatus);
    LdrShutdownProcess();
  }
  RtlUnlockHeap(NtCurrentPeb()->ProcessHeap);
  RtlLeaveCriticalSection(&FastPebLock);
  LdrpReleaseLoaderLock(v6, 18, 0, v6);
  ZwTerminateThread((HANDLE)0xFFFFFFFE, ExitStatus);
}
