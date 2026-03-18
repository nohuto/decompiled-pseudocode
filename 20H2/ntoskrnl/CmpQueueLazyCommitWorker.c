/*
 * XREFs of CmpQueueLazyCommitWorker @ 0x140875440
 * Callers:
 *     CmKtmNotification @ 0x1406A3E40 (CmKtmNotification.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 */

_QWORD *__fastcall CmpQueueLazyCommitWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // di
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  bool v6; // zf
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 48) &= ~0x40u;
  v4 = (_QWORD *)qword_140C47C68;
  v5 = (_QWORD *)(a1 + 32);
  if ( *(__int64 **)qword_140C47C68 != &CmpLazyCommitListHead )
    __fastfail(3u);
  v6 = CmpLazyCommitWorkItemActive == 0;
  *v5 = &CmpLazyCommitListHead;
  v5[1] = v4;
  *v4 = v5;
  qword_140C47C68 = (__int64)v5;
  if ( v6 )
  {
    v2 = 1;
    CmpLazyCommitWorkItemActive = 1;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v2 )
    return (_QWORD *)KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
  return result;
}
