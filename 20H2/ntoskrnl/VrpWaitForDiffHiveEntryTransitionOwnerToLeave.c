/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140886CA0
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405D2EB8 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     KeInitializeEvent @ 0x14020D960 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1402202E0 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPreWait @ 0x140242040 (KeAbPreWait.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     RtlInsertHeadCircularList @ 0x14032B0F8 (RtlInsertHeadCircularList.c)
 */

void __fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  ULONG_PTR v7; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT v9[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(v9, 0, sizeof(v9));
  v9[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v9[1], SynchronizationEvent, 0);
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v9);
  v2 = a1 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24));
  KeAbPostRelease(a1 + 24);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v3 = a1 + 40;
  v4 = KeAbPreAcquire(v3, 0LL, 0LL);
  v7 = v4;
  if ( v4 )
    KeAbPreWait(v4, v5, v6);
  KeWaitForSingleObject(&v9[1], Executive, 0, 0, 0LL);
  if ( v7 )
  {
    KeAbPreAcquire(v3, v7, 0LL);
    KeAbPostReleaseEx(v3, v7);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v2, 0LL);
}
