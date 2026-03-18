/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x140334A14
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignal @ 0x14033495C (AlpcpSignal.c)
 *     AlpcpCompleteDispatchMessage @ 0x14060DDF0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpAssociateIoCompletionPort @ 0x140676D04 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x140676F5C (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406E9E0C (AlpcpSignalPortAndUnlock.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     IoSetIoCompletionEx2 @ 0x140246460 (IoSetIoCompletionEx2.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall AlpcpQueueIoCompletionPort(__int64 a1, char a2, char a3, unsigned __int8 a4)
{
  __int64 v4; // rdi
  unsigned int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rsi
  int v12; // eax
  unsigned __int64 OldIrql; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v16; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4, &LockHandle);
  v9 = *(_DWORD *)(v4 + 12);
  if ( v9 >= *(_DWORD *)(v4 + 8) )
  {
    v11 = 0LL;
    if ( a2 )
      ++*(_DWORD *)(v4 + 20);
    else
      ++*(_DWORD *)(v4 + 16);
  }
  else
  {
    v10 = *(_QWORD **)(v4 + 32);
    if ( v10 )
    {
      *(_QWORD *)(v4 + 32) = *v10;
      v9 = *(_DWORD *)(v4 + 12);
    }
    v11 = v10[1];
    *(_DWORD *)(v4 + 12) = v9 + 1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  LOBYTE(v12) = KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      LOBYTE(v12) = KeGetCurrentIrql();
      if ( (unsigned __int8)v12 <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)v12 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v16 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v16 )
          LOBYTE(v12) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  if ( a3 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 352), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 352);
    LOBYTE(v12) = KeAbPostRelease(a1 + 352);
  }
  if ( v11 )
    LOBYTE(v12) = IoSetIoCompletionEx2(
                    *(_QWORD *)(a1 + 32),
                    *(_QWORD *)(a1 + 40),
                    -(__int64)(a2 != 0),
                    0LL,
                    0LL,
                    0,
                    v11,
                    a4);
  return v12;
}
