/*
 * XREFs of PspThreadDelete @ 0x140666EA0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140221210 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeCleanupThreadState @ 0x140264CF8 (KeCleanupThreadState.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140264D24 (KiQueryUnbiasedInterruptTime.c)
 *     KeFoldProcessStatisticsThread @ 0x140264DDC (KeFoldProcessStatisticsThread.c)
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 *     KeEnumerateKernelStackSegments @ 0x14033596C (KeEnumerateKernelStackSegments.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 *     KeBugCheck @ 0x1403FBC80 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     ExMapHandleToPointer @ 0x140628CB0 (ExMapHandleToPointer.c)
 *     PspDeleteThreadSecurity @ 0x1406672A4 (PspDeleteThreadSecurity.c)
 *     ExDestroyHandle @ 0x1406672F8 (ExDestroyHandle.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall PspThreadDelete(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // r9
  ULONG_PTR v3; // r9
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v5; // rax
  void *v6; // rcx
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 *v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // r9d
  _QWORD *v14; // r8
  const char *v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  volatile signed __int64 *v18; // r14
  __int64 *v19; // rsi
  __int64 *v20; // rcx
  __int64 **v21; // rax

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
    v5 = ExMapHandleToPointer((unsigned int *)PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1152));
    if ( !v5 )
      KeBugCheck(0x17u);
    ExDestroyHandle(PspCidTable, *(_QWORD *)(BugCheckParameter2 + 1152), v5);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
  }
  PspDeleteThreadSecurity(BugCheckParameter2);
  v6 = *(void **)(BugCheckParameter2 + 1552);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x6D4E6854u);
  result = KiQueryUnbiasedInterruptTime();
  if ( result >= qword_140C4C4D0 )
  {
    v8 = qword_140C4C4C0;
    if ( qword_140C4C4C0 )
    {
      if ( (_DWORD)qword_140C4C4D8 )
      {
        v9 = 0LL;
        v10 = ObpObjectTypes;
        v11 = (unsigned int)qword_140C4C4D8;
        do
        {
          v12 = *v10;
          if ( ((*(unsigned __int8 *)(*v10 + 66) >> 6) & 1) != _bittest64(&qword_140C4C4E0, v9) && !qword_140C4C490 )
          {
            qword_140C4C490 = (unsigned int)__ROL4__(1207959560, 133);
            xmmword_140C4C498 = 0LL;
            qword_140C4C4A8 = 268LL;
            qword_140C4C4B0 = v12;
          }
          ++v9;
          ++v10;
          --v11;
        }
        while ( v11 );
        v8 = qword_140C4C4C0;
      }
      v13 = 64;
      v14 = (_QWORD *)(qword_140C4C500 + 112);
      v15 = (const char *)(qword_140C4C500 + 112);
      if ( qword_140C4C500 + 112 < (unsigned __int64)(qword_140C4C500 + 176) )
      {
        do
        {
          _mm_prefetch(v15, 0);
          v15 += 64;
        }
        while ( (unsigned __int64)v15 < qword_140C4C500 + 176 );
      }
      v16 = 8LL;
      do
      {
        v8 = __ROR8__(v8 - *v14++, qword_140C4C4C8);
        v13 -= 8;
        --v16;
      }
      while ( v16 );
      for ( ; v13; --v13 )
      {
        v17 = *(unsigned __int8 *)v14;
        v14 = (_QWORD *)((char *)v14 + 1);
        v8 = __ROR8__(v8 - v17, qword_140C4C4C8);
      }
      if ( qword_140C4C508 != v8 )
      {
        if ( qword_140C4C490 )
          goto LABEL_45;
        qword_140C4C490 = (unsigned int)__ROR4__(150994945, 152);
        xmmword_140C4C498 = 0LL;
        qword_140C4C4A8 = 268LL;
        qword_140C4C4B0 = qword_140C4C500;
      }
    }
    if ( !qword_140C4C490 )
    {
LABEL_31:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140C4C4D0 = result;
      goto LABEL_32;
    }
LABEL_45:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))stru_140C4C450.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&stru_140C4C450, (PKDEFERRED_ROUTINE)KiScanQueues, &stru_140C4C450);
    qword_140C4C4B8 = 1934400LL;
    KeInsertQueueDpc(&stru_140C4C450, 0LL, 0LL);
    goto LABEL_31;
  }
LABEL_32:
  v18 = *(volatile signed __int64 **)(BugCheckParameter2 + 544);
  if ( v18 )
  {
    v19 = (__int64 *)(BugCheckParameter2 + 1256);
    if ( *(_QWORD *)(BugCheckParameter2 + 1256) )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 135), 0LL);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(v18 + 268), 0LL);
      KeFoldProcessStatisticsThread(BugCheckParameter2);
      v20 = (__int64 *)*v19;
      if ( *(__int64 **)(*v19 + 8) != v19 || (v21 = *(__int64 ***)(BugCheckParameter2 + 1264), *v21 != v19) )
        __fastfail(3u);
      *v21 = v20;
      v20[1] = (__int64)v21;
      if ( (_InterlockedExchangeAdd64(v18 + 268, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v18 + 268);
      KeAbPostRelease((ULONG_PTR)(v18 + 268));
      if ( (_InterlockedExchangeAdd64(v18 + 135, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v18 + 135);
      KeAbPostRelease((ULONG_PTR)(v18 + 135));
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    if ( (*(_DWORD *)(BugCheckParameter2 + 1296) & 0x100000) != 0 )
      ((void (__fastcall *)(ULONG_PTR))xmmword_140C1DEB0)(BugCheckParameter2);
    return ObfDereferenceObjectWithTag((PVOID)v18, 0x72437350u);
  }
  return result;
}
