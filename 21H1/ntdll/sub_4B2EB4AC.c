/*
 * XREFs of sub_4B2EB4AC @ 0x4B2EB4AC
 * Callers:
 *     <none>
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _LdrShutdownProcess@0 @ 0x4B2DD6A0 (_LdrShutdownProcess@0.c)
 *     _RtlReportSilentProcessExit@8 @ 0x4B2DD910 (_RtlReportSilentProcessExit@8.c)
 *     _RtlUnlockProcessHeapOnProcessTerminate@0 @ 0x4B2DD99E (_RtlUnlockProcessHeapOnProcessTerminate@0.c)
 *     _RtlLockHeap@4 @ 0x4B2DDA90 (_RtlLockHeap@4.c)
 *     _TpCheckTerminateWorker@4 @ 0x4B2EB4D0 (_TpCheckTerminateWorker@4.c)
 *     _EtwpStopUmLogger@16 @ 0x4B2ED853 (_EtwpStopUmLogger@16.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _ZwTerminateThread@8 @ 0x4B2F2EB0 (_ZwTerminateThread@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _EtwpDemuxUmTraceHandle@8 @ 0x4B381562 (_EtwpDemuxUmTraceHandle@8.c)
 */

void __userpurge sub_4B2EB4AC(void *a1@<ebx>, NTSTATUS a2@<edi>, int a3)
{
  unsigned int v3; // esi
  unsigned int v4; // ecx
  int v5; // ebx
  int v6; // edx
  int v7; // ecx
  void *v8; // ecx
  size_t v9; // [esp-D8h] [ebp-D8h]
  unsigned int v10; // [esp-C4h] [ebp-C4h] BYREF
  _DWORD v11[47]; // [esp-BCh] [ebp-BCh] BYREF

  TpCheckTerminateWorker(a1);
  ZwTerminateThread(a1, a2);
  if ( (void *)EtwpLoggerArray == a1 )
    goto LABEL_13;
  LODWORD(v9) = 176;
  memset(v11, (int)a1, v9);
  v11[0] = 176;
  v11[11] = 0x20000;
  v3 = (unsigned int)a1;
  while ( 1 )
  {
    v4 = v3 & 0xFFFF7FFF;
    v10 = v3 & 0xFFFF7FFF;
    if ( EtwpLoggerArray )
    {
      if ( v4 < 0x40 )
        goto LABEL_7;
      if ( !EtwpDemuxUmTraceHandle(v3, &v10) )
        break;
    }
LABEL_11:
    if ( ++v3 >= 0x40 )
    {
      a1 = 0;
LABEL_13:
      LdrpDrainWorkQueue((void *)((NtCurrentTeb()->SameTebFlags >> 12) & 1));
      LdrpAcquireLoaderLock();
      RtlEnterCriticalSection(&FastPebLock);
      RtlLockHeap(NtCurrentPeb()->ProcessHeap);
      if ( ZwTerminateProcess(a1, a2) >= 0 )
      {
        RtlUnlockProcessHeapOnProcessTerminate(v8);
        FastPebLock.OwningThread = NtCurrentTeb()->ClientId.UniqueThread;
        FastPebLock.LockCount = -2;
        FastPebLock.RecursionCount = 1;
        FastPebLock.LockSemaphore = a1;
        RtlLeaveCriticalSection(&FastPebLock);
        RtlReportSilentProcessExit((HANDLE)0xFFFFFFFF, a2);
        LdrShutdownProcess();
      }
      JUMPOUT(0x4B32712D);
    }
  }
  v4 = v10;
LABEL_7:
  _InterlockedIncrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v4 + 4));
  if ( (*(_DWORD *)(EtwpLoggerArray + 8 * v4) & 1) != 0 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v4 + 4));
  }
  else
  {
    v5 = *(_DWORD *)(EtwpLoggerArray + 8 * v4);
    v6 = *(_DWORD *)(v5 + 212);
    v7 = *(_DWORD *)(v5 + 20);
    _InterlockedDecrement((volatile signed __int32 *)(EtwpLoggerArray + 8 * v7 + 4));
    if ( (v6 & 0x400) == 0 )
    {
      v11[3] = 0;
      v11[2] = v3;
      EtwpStopUmLogger(v7, v11);
    }
  }
  goto LABEL_11;
}
