/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140881150
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405CC858 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140207360 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     KeWaitForSingleObject @ 0x14020B3A0 (KeWaitForSingleObject.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x1402745C0 (KeAbPreWait.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140290DE0 (KeInitializeEvent.c)
 *     RtlInsertHeadCircularList @ 0x14035A584 (RtlInsertHeadCircularList.c)
 */

void __fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  ULONG_PTR v2; // rdi
  ULONG_PTR v3; // rsi
  __int64 v4; // rax
  ULONG_PTR v5; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT v7[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(v7, 0, sizeof(v7));
  v7[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v7[1], SynchronizationEvent, 0);
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v7);
  v2 = a1 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 24));
  KeAbPostRelease(a1 + 24);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v3 = a1 + 40;
  v4 = KeAbPreAcquire(v3, 0LL, 0);
  v5 = v4;
  if ( v4 )
    KeAbPreWait(v4);
  KeWaitForSingleObject(&v7[1], Executive, 0, 0, 0LL);
  if ( v5 )
  {
    KeAbPreAcquire(v3, v5, 0);
    KeAbPostReleaseEx(v3, v5);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v2, 0LL);
}
