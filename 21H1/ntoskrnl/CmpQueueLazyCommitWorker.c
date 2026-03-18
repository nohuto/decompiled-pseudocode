/*
 * XREFs of CmpQueueLazyCommitWorker @ 0x14086DE30
 * Callers:
 *     CmKtmNotification @ 0x140658680 (CmKtmNotification.c)
 * Callees:
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 */

_QWORD *__fastcall CmpQueueLazyCommitWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // di
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  bool v6; // zf
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *result; // rax

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  *(_DWORD *)(a1 + 48) &= ~0x40u;
  v4 = (_QWORD *)qword_140C47DE8;
  v5 = (_QWORD *)(a1 + 32);
  if ( *(__int64 **)qword_140C47DE8 != &CmpLazyCommitListHead )
    __fastfail(3u);
  v6 = CmpLazyCommitWorkItemActive == 0;
  *v5 = &CmpLazyCommitListHead;
  v5[1] = v4;
  *v4 = v5;
  qword_140C47DE8 = (__int64)v5;
  if ( v6 )
  {
    v2 = 1;
    CmpLazyCommitWorkItemActive = 1;
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  result = KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  if ( v2 )
    return (_QWORD *)KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
  return result;
}
