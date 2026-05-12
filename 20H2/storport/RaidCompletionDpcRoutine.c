/*
 * XREFs of RaidCompletionDpcRoutine @ 0x1C0030740
 * Callers:
 *     <none>
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C0002B50 (RaidResumeUnitQueue.c)
 *     RaidAdapterFindUnit @ 0x1C00065E4 (RaidAdapterFindUnit.c)
 *     RaidRestartIoQueue @ 0x1C00078AC (RaidRestartIoQueue.c)
 *     RaidAdapterRestartQueues @ 0x1C001362C (RaidAdapterRestartQueues.c)
 *     RaidResumeAdapterQueue @ 0x1C0013704 (RaidResumeAdapterQueue.c)
 *     McTemplateK0pzqqxxtt_EtwWriteTransfer @ 0x1C002A620 (McTemplateK0pzqqxxtt_EtwWriteTransfer.c)
 *     StorPurgeEventQueue @ 0x1C0034634 (StorPurgeEventQueue.c)
 */

void __fastcall RaidCompletionDpcRoutine(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 v4; // rdi
  int v5; // r14d
  unsigned int v6; // r13d
  LARGE_INTEGER v7; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 *v11; // r12
  int v12; // ecx
  LARGE_INTEGER v13; // rax
  LARGE_INTEGER v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // r8
  unsigned __int64 v17; // rtt
  __int64 v18; // r8
  unsigned __int64 v19; // rtt
  __int64 Unit; // rax
  __int64 v21; // rbx
  __int64 v22; // [rsp+28h] [rbp-58h]
  __int64 v23; // [rsp+30h] [rbp-50h]
  __int64 v24; // [rsp+48h] [rbp-38h]
  __int64 v25; // [rsp+50h] [rbp-30h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-18h] BYREF
  int v27; // [rsp+C8h] [rbp+48h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+D0h] [rbp+50h] BYREF
  PVOID v29; // [rsp+D8h] [rbp+58h]

  v29 = SystemArgument2;
  v4 = DeferredContext[8];
  HIBYTE(v27) = 0;
  v5 = (int)SystemArgument1;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = 0;
  v7.QuadPart = 0LL;
  if ( StorEtwLoggingEnabled && (byte_1C0069843 & 4) != 0 )
  {
    if ( UseQPCTime )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    else
      PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
    v7 = PerformanceCounter;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 128), &LockHandle);
  v10 = v4 + 136;
  v11 = *(__int64 **)(v4 + 136);
  while ( v11 != (__int64 *)v10 )
  {
    v12 = *((_DWORD *)v11 + 10);
    HIBYTE(v27) = HIBYTE(v12);
    if ( (BYTE2(v5) == 0xFF || BYTE2(v5) == (_BYTE)v12)
      && (BYTE1(v5) == 0xFF || BYTE1(v5) == BYTE1(v12))
      && ((_BYTE)v5 == 0xFF || (_BYTE)v5 == BYTE2(v12)) )
    {
      v6 = StorPurgeEventQueue(v11[56], v9, v29);
    }
    if ( StorEtwLoggingEnabled && (byte_1C0069843 & 4) != 0 && v6 >= 0x19 )
    {
      PerformanceFrequency.QuadPart = 1LL;
      if ( UseQPCTime )
        v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
      else
        v13.QuadPart = KeQueryUnbiasedInterruptTime();
      if ( v13.QuadPart <= 0 || v13.QuadPart >= v7.QuadPart )
        v15 = v13.QuadPart - v7.QuadPart;
      else
        v15 = v13.QuadPart - v7.QuadPart - 1;
      if ( UseQPCTime )
      {
        v14 = PerformanceFrequency;
        v16 = 0LL;
        if ( PerformanceFrequency.QuadPart && v15 )
        {
          v17 = 1000 * (v15 % PerformanceFrequency.QuadPart);
          v18 = 10000 * (v17 / PerformanceFrequency.QuadPart + 1000 * (v15 / PerformanceFrequency.QuadPart));
          v19 = 10000 * (v17 % PerformanceFrequency.QuadPart);
          v9 = v19 % PerformanceFrequency.QuadPart;
          v16 = v19 / PerformanceFrequency.QuadPart + v18;
        }
      }
      else
      {
        v16 = v15;
      }
      if ( (byte_1C0069843 & 4) != 0 )
      {
        LODWORD(v25) = 0;
        LODWORD(v24) = 0;
        LODWORD(v23) = v6;
        LODWORD(v22) = *(_DWORD *)(v4 + 56);
        McTemplateK0pzqqxxtt_EtwWriteTransfer(
          v14.QuadPart,
          v9,
          v16,
          RaidCompletionDpcRoutine,
          L"RaidCompletionDpcRoutine",
          v22,
          v23,
          v15,
          v16,
          v24,
          v25);
      }
    }
    v11 = (__int64 *)*v11;
    v10 = v4 + 136;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( BYTE2(v5) == 0xFF || BYTE1(v5) == 0xFF || (_BYTE)v5 == 0xFF )
  {
    RaidResumeAdapterQueue(v4);
    RaidAdapterRestartQueues(v4);
  }
  else
  {
    LOBYTE(v27) = BYTE2(v5);
    BYTE1(v27) = BYTE1(v5);
    BYTE2(v27) = v5;
    Unit = RaidAdapterFindUnit(v4, v27);
    v21 = Unit;
    if ( Unit )
    {
      RaidResumeUnitQueue(Unit);
      RaidRestartIoQueue(v21);
    }
  }
}
