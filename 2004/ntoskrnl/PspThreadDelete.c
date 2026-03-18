/*
 * XREFs of PspThreadDelete @ 0x14069AB30
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeInsertQueueDpc @ 0x140214C00 (KeInsertQueueDpc.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeCleanupThreadState @ 0x1402D2310 (KeCleanupThreadState.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402D233C (KiQueryUnbiasedInterruptTime.c)
 *     KeFoldProcessStatisticsThread @ 0x1402D23F4 (KeFoldProcessStatisticsThread.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     KeEnumerateKernelStackSegments @ 0x1402E54FC (KeEnumerateKernelStackSegments.c)
 *     KeBugCheck @ 0x1403F70B0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExMapHandleToPointer @ 0x140603450 (ExMapHandleToPointer.c)
 *     PspDeleteThreadSecurity @ 0x14069AF34 (PspDeleteThreadSecurity.c)
 *     ExDestroyHandle @ 0x14069AF88 (ExDestroyHandle.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  if ( result >= qword_140C4C450 )
  {
    v8 = qword_140C4C440;
    if ( qword_140C4C440 )
    {
      if ( (_DWORD)qword_140C4C458 )
      {
        v9 = 0LL;
        v10 = ObpObjectTypes;
        v11 = (unsigned int)qword_140C4C458;
        do
        {
          v12 = *v10;
          if ( ((*(unsigned __int8 *)(*v10 + 66) >> 6) & 1) != _bittest64(&qword_140C4C460, v9) && !qword_140C4C410 )
          {
            qword_140C4C410 = (unsigned int)__ROL4__(1207959560, 133);
            xmmword_140C4C418 = 0LL;
            qword_140C4C428 = 268LL;
            qword_140C4C430 = v12;
          }
          ++v9;
          ++v10;
          --v11;
        }
        while ( v11 );
        v8 = qword_140C4C440;
      }
      v13 = 64;
      v14 = (_QWORD *)(qword_140C4C480 + 112);
      v15 = (const char *)(qword_140C4C480 + 112);
      if ( qword_140C4C480 + 112 < (unsigned __int64)(qword_140C4C480 + 176) )
      {
        do
        {
          _mm_prefetch(v15, 0);
          v15 += 64;
        }
        while ( (unsigned __int64)v15 < qword_140C4C480 + 176 );
      }
      v16 = 8LL;
      do
      {
        v8 = __ROR8__(v8 - *v14++, qword_140C4C448);
        v13 -= 8;
        --v16;
      }
      while ( v16 );
      for ( ; v13; --v13 )
      {
        v17 = *(unsigned __int8 *)v14;
        v14 = (_QWORD *)((char *)v14 + 1);
        v8 = __ROR8__(v8 - v17, qword_140C4C448);
      }
      if ( qword_140C4C488 != v8 )
      {
        if ( qword_140C4C410 )
          goto LABEL_45;
        qword_140C4C410 = (unsigned int)__ROR4__(150994945, 152);
        xmmword_140C4C418 = 0LL;
        qword_140C4C428 = 268LL;
        qword_140C4C430 = qword_140C4C480;
      }
    }
    if ( !qword_140C4C410 )
    {
LABEL_31:
      result = KiQueryUnbiasedInterruptTime() + 41929663 * (__rdtsc() >> 4) % 0x12A05F2000LL + 288000000000LL;
      qword_140C4C450 = result;
      goto LABEL_32;
    }
LABEL_45:
    if ( (void (__fastcall __noreturn *)(struct _KDPC *, PVOID, PVOID, PVOID))stru_140C4C3D0.DeferredRoutine != KiScanQueues )
      KeInitializeDpc(&stru_140C4C3D0, (PKDEFERRED_ROUTINE)KiScanQueues, &stru_140C4C3D0);
    qword_140C4C438 = 1934400LL;
    KeInsertQueueDpc(&stru_140C4C3D0, 0LL, 0LL);
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
      ((void (__fastcall *)(ULONG_PTR))xmmword_140C1DDF0)(BugCheckParameter2);
    return ObfDereferenceObjectWithTag((PVOID)v18, 0x72437350u);
  }
  return result;
}
