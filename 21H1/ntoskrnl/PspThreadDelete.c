/*
 * XREFs of PspThreadDelete @ 0x1405F1620
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KeCleanupThreadState @ 0x14023F478 (KeCleanupThreadState.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14023F4A4 (KiQueryUnbiasedInterruptTime.c)
 *     KeFoldProcessStatisticsThread @ 0x14023F55C (KeFoldProcessStatisticsThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 *     KeEnumerateKernelStackSegments @ 0x14032A62C (KeEnumerateKernelStackSegments.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheck @ 0x1403F5E20 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PspDeleteThreadSecurity @ 0x1405F1A24 (PspDeleteThreadSecurity.c)
 *     ExDestroyHandle @ 0x1405F1A78 (ExDestroyHandle.c)
 *     ExMapHandleToPointer @ 0x140638490 (ExMapHandleToPointer.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // r9
  struct _KTHREAD *CurrentThread; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  void *v9; // rcx
  unsigned __int64 result; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  __int64 *v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // r9d
  _QWORD *v17; // r8
  const char *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  volatile signed __int64 *v21; // r14
  __int64 *v22; // rsi
  __int64 *v23; // rcx
  __int64 **v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9

  KeCleanupThreadState(BugCheckParameter2);
  if ( *(_DWORD *)(BugCheckParameter2 + 1372) )
    KeBugCheckEx(0x94u, 1uLL, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1372), 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1360) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1360), 0LL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1364) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1364), 1uLL, 0LL);
  if ( *(_DWORD *)(BugCheckParameter2 + 1368) )
    KeBugCheckEx(0x13Cu, BugCheckParameter2, *(unsigned int *)(BugCheckParameter2 + 1368), 2uLL, 0LL);
  v2 = *(_QWORD *)(BugCheckParameter2 + 1576);
  if ( v2 != BugCheckParameter2 + 1576 )
    KeBugCheckEx(0x1C6u, 0x14uLL, BugCheckParameter2, v2, 0LL);
  v3 = *(_QWORD *)(BugCheckParameter2 + 1600);
  if ( v3 != BugCheckParameter2 + 1600 )
    KeBugCheckEx(0x1C6u, 0x15uLL, BugCheckParameter2, v3, 0LL);
  if ( *(_QWORD *)(BugCheckParameter2 + 40) )
    KeEnumerateKernelStackSegments(
      BugCheckParameter2,
      (__int64 (__fastcall *)(__int64, _OWORD *, __int64))PspDeleteKernelStack,
      0LL);
  CurrentThread = KeGetCurrentThread();
  if ( *(_QWORD *)(BugCheckParameter2 + 1152) )
  {
    --CurrentThread->KernelApcDisable;
    v5 = ExMapHandleToPointer(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1152));
    if ( !v5 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1152), v5);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
  }
  PspDeleteThreadSecurity(BugCheckParameter2);
  v9 = *(void **)(BugCheckParameter2 + 1552);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x6D4E6854u);
  result = KiQueryUnbiasedInterruptTime();
  if ( result >= qword_140C4C5A0 )
  {
    v11 = qword_140C4C590;
    if ( qword_140C4C590 )
    {
      if ( (_DWORD)qword_140C4C5A8 )
      {
        v12 = 0LL;
        v13 = ObpObjectTypes;
        v14 = (unsigned int)qword_140C4C5A8;
        do
        {
          v15 = *v13;
          if ( ((*(unsigned __int8 *)(*v13 + 66) >> 6) & 1) != _bittest64(qword_140C4C5B0, v12) && !qword_140C4C560 )
          {
            qword_140C4C560 = (unsigned int)__ROL4__(1207959560, 133);
            xmmword_140C4C568 = 0LL;
            qword_140C4C578 = 268LL;
            qword_140C4C580 = v15;
          }
          ++v12;
          ++v13;
          --v14;
        }
        while ( v14 );
        v11 = qword_140C4C590;
      }
      v16 = 64;
      v17 = (_QWORD *)(qword_140C4C5D0 + 112);
      v18 = (const char *)(qword_140C4C5D0 + 112);
      if ( qword_140C4C5D0 + 112 < (unsigned __int64)(qword_140C4C5D0 + 176) )
      {
        do
        {
          _mm_prefetch(v18, 0);
          v18 += 64;
        }
        while ( (unsigned __int64)v18 < qword_140C4C5D0 + 176 );
      }
      v19 = 8LL;
      do
      {
        v11 = __ROR8__(v11 - *v17++, qword_140C4C598);
        v16 -= 8;
        --v19;
      }
      while ( v19 );
      for ( ; v16; --v16 )
      {
        v20 = *(unsigned __int8 *)v17;
        v17 = (_QWORD *)((char *)v17 + 1);
        v11 = __ROR8__(v11 - v20, qword_140C4C598);
      }
      if ( qword_140C4C5D8 != v11 )
      {
        if ( qword_140C4C560 )
          goto LABEL_45;
        qword_140C4C560 = (unsigned int)__ROR4__(150994945, 152);
        xmmword_140C4C568 = 0LL;
        qword_140C4C578 = 268LL;
        qword_140C4C580 = qword_140C4C5D0;
      }
    }
    if ( !qword_140C4C560 )
    {
LABEL_31:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140C4C5A0 = result;
      goto LABEL_32;
    }
LABEL_45:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))DeferredContext.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&DeferredContext, (PKDEFERRED_ROUTINE)KiScanQueues, &DeferredContext);
    qword_140C4C588 = 1934400LL;
    KeInsertQueueDpc(&DeferredContext, 0LL, 0LL);
    goto LABEL_31;
  }
LABEL_32:
  v21 = *(volatile signed __int64 **)(BugCheckParameter2 + 544);
  if ( v21 )
  {
    v22 = (__int64 *)(BugCheckParameter2 + 1256);
    if ( *(_QWORD *)(BugCheckParameter2 + 1256) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v21 + 135), 0LL);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v21 + 268), 0LL);
      KeFoldProcessStatisticsThread(BugCheckParameter2);
      v23 = (__int64 *)*v22;
      if ( *(__int64 **)(*v22 + 8) != v22 || (v24 = *(__int64 ***)(BugCheckParameter2 + 1264), *v24 != v22) )
        __fastfail(3u);
      *v24 = v23;
      v23[1] = (__int64)v24;
      if ( (_InterlockedExchangeAdd64(v21 + 268, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v21 + 268);
      KeAbPostRelease((ULONG_PTR)(v21 + 268));
      if ( (_InterlockedExchangeAdd64(v21 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v21 + 135);
      KeAbPostRelease((ULONG_PTR)(v21 + 135));
      KeLeaveCriticalRegionThread((__int64)CurrentThread, v25, v26, v27);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 1296) & 0x100000) != 0 )
      ((void (__fastcall *)(ULONG_PTR))xmmword_140C1DFD0)(BugCheckParameter2);
    return ObfDereferenceObjectWithTag((PVOID)v21, 0x72437350u);
  }
  return result;
}
