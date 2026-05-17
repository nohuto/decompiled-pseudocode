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

int __stdcall RtlExitUserProcess(int a1)
{
  int v2; // esi
  unsigned int v3; // ecx
  int v4; // edi
  int v5; // edx
  int v6; // ecx
  int v7; // ecx
  unsigned int v8; // [esp+Ch] [ebp-BCh] BYREF
  _DWORD v9[45]; // [esp+10h] [ebp-B8h] BYREF

  if ( EtwpLoggerArray )
  {
    memset(v9, 0, 0xB0u);
    v9[0] = 176;
    v2 = 0;
    v9[11] = 0x20000;
    while ( 1 )
    {
      v3 = v2 & 0xFFFF7FFF;
      v8 = v2 & 0xFFFF7FFF;
      if ( EtwpLoggerArray )
      {
        if ( v3 < 0x40 )
          goto LABEL_9;
        if ( !EtwpDemuxUmTraceHandle(v2, &v8) )
          break;
      }
LABEL_13:
      if ( (unsigned int)++v2 >= 0x40 )
        goto LABEL_2;
    }
    v3 = v8;
LABEL_9:
    _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v3 + 4));
    if ( (*(_DWORD *)(EtwpLoggerArray + 8 * v3) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v3 + 4));
    }
    else
    {
      v4 = *(_DWORD *)(EtwpLoggerArray + 8 * v3);
      v5 = *(_DWORD *)(v4 + 212);
      v6 = *(_DWORD *)(v4 + 20);
      _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v6 + 4));
      if ( (v5 & 0x400) == 0 )
      {
        v9[2] = v2;
        v9[3] = 0;
        EtwpStopUmLogger(v6, v9);
      }
    }
    goto LABEL_13;
  }
LABEL_2:
  LdrpDrainWorkQueue((void *)((NtCurrentTeb()->SameTebFlags >> 12) & 1));
  LdrpAcquireLoaderLock();
  RtlEnterCriticalSection((int)&FastPebLock);
  RtlLockHeap(NtCurrentPeb()->ProcessHeap);
  if ( (int)ZwTerminateProcess(0, a1) < 0 )
  {
    RtlUnlockHeap(NtCurrentPeb()->ProcessHeap);
    RtlLeaveCriticalSection((int)&FastPebLock);
    LdrpReleaseLoaderLock(v7, 18, 0, v7);
    return ZwTerminateThread(-2, a1);
  }
  else
  {
    RtlUnlockProcessHeapOnProcessTerminate();
    dword_4B3A5B4C = (int)NtCurrentTeb()->ClientId.UniqueThread;
    dword_4B3A5B44 = -2;
    dword_4B3A5B48 = 1;
    dword_4B3A5B50 = 0;
    RtlLeaveCriticalSection((int)&FastPebLock);
    RtlReportSilentProcessExit(-1, a1);
    LdrShutdownProcess();
    return ZwTerminateProcess(-1, a1);
  }
}
