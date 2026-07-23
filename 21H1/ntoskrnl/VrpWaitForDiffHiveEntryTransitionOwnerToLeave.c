/*
 * XREFs of VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14087FE60
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405CB488 (VrpLoadDifferencingHive.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     RtlInsertHeadCircularList @ 0x14031C9A4 (RtlInsertHeadCircularList.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     KeAbPreWait @ 0x14035A260 (KeAbPreWait.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 */

void __fastcall VrpWaitForDiffHiveEntryTransitionOwnerToLeave(__int64 a1)
{
  ULONG_PTR v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  ULONG_PTR v6; // rsi
  __int64 v7; // rax
  ULONG_PTR v8; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT v10[2]; // [rsp+30h] [rbp-38h] BYREF

  memset(v10, 0, sizeof(v10));
  v10[0].Header.WaitListHead.Blink = (struct _LIST_ENTRY *)KeGetCurrentThread();
  KeInitializeEvent(&v10[1], SynchronizationEvent, 0);
  RtlInsertHeadCircularList((__int64 *)(a1 + 48), v10);
  v2 = a1 + 24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 24);
  KeAbPostRelease(a1 + 24);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v3, v4, v5);
  v6 = a1 + 40;
  v7 = KeAbPreAcquire(v6, 0LL, 0);
  v8 = v7;
  if ( v7 )
    KeAbPreWait(v7);
  KeWaitForSingleObject(&v10[1], Executive, 0, 0, 0LL);
  if ( v8 )
  {
    KeAbPreAcquire(v6, v8, 0);
    KeAbPostReleaseEx(v6, v8);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(v2, 0LL);
}
