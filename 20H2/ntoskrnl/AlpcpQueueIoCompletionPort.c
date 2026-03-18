/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x14030D9FC
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignal @ 0x140208A70 (AlpcpSignal.c)
 *     AlpcpCompleteDispatchMessage @ 0x1405ECB50 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1406B9F10 (AlpcpAdjustCompletionListConcurrencyCount.c)
 *     AlpcpSignalPortAndUnlock @ 0x1406B9FAC (AlpcpSignalPortAndUnlock.c)
 *     AlpcpAssociateIoCompletionPort @ 0x14070D0E0 (AlpcpAssociateIoCompletionPort.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     IoSetIoCompletionEx2 @ 0x14028CF50 (IoSetIoCompletionEx2.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall AlpcpQueueIoCompletionPort(__int64 *a1, char a2, char a3, unsigned __int8 a4)
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

  v4 = a1[6];
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
    if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 44);
    LOBYTE(v12) = KeAbPostRelease((ULONG_PTR)(a1 + 44));
  }
  if ( v11 )
    LOBYTE(v12) = IoSetIoCompletionEx2(a1[4], a1[5], -(__int64)(a2 != 0), 0, 0LL, 0, v11, a4);
  return v12;
}
