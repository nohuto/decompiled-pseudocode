/*
 * XREFs of AlpcpQueueIoCompletionPort @ 0x14035AB2C
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     AlpcpSignal @ 0x14035AA74 (AlpcpSignal.c)
 *     AlpcpSignalPortAndUnlock @ 0x14074B82C (AlpcpSignalPortAndUnlock.c)
 *     AlpcpCompleteDispatchMessage @ 0x1407AACC0 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpAssociateIoCompletionPort @ 0x1407D5884 (AlpcpAssociateIoCompletionPort.c)
 *     AlpcpAdjustCompletionListConcurrencyCount @ 0x1407F7428 (AlpcpAdjustCompletionListConcurrencyCount.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     AlpcpQueueIoCompletion @ 0x1402F6750 (AlpcpQueueIoCompletion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall AlpcpQueueIoCompletionPort(_QWORD *a1, char a2, char a3, char a4)
{
  __int64 v4; // rdi
  char v7; // r14
  unsigned int v9; // edx
  _QWORD *v10; // rcx
  _DWORD *v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax
  unsigned __int64 OldIrql; // r13
  char v20; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  unsigned __int64 v25; // rdi
  struct _KPRCB *v26; // r9
  _DWORD *v27; // r8
  __int64 v28; // [rsp+30h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-18h] BYREF

  v4 = a1[6];
  v28 = a1[4];
  v7 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4, &LockHandle);
  v9 = *(_DWORD *)(v4 + 12);
  if ( v9 >= *(_DWORD *)(v4 + 8) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( !a4 || (v20 = 1, a3) )
      v20 = 0;
    result = AlpcpQueueIoCompletion(v28, a1[5], -(__int64)(a2 != 0), 0LL, v20);
    if ( !(_DWORD)result )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v4, &LockHandle);
      if ( a2 )
        ++*(_DWORD *)(v4 + 20);
      else
        ++*(_DWORD *)(v4 + 16);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      result = (unsigned int)KiIrqlFlags;
      v25 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          result = KeGetCurrentIrql();
          if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v17 = ((unsigned int)result & v27[5]) == 0;
            v27[5] &= result;
            if ( v17 )
              result = KiRemoveSystemWorkPriorityKick(v26);
          }
        }
      }
      __writecr8(v25);
    }
    if ( a3 )
    {
      if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 44);
      return KeAbPostRelease((ULONG_PTR)(a1 + 44));
    }
  }
  else
  {
    v10 = *(_QWORD **)(v4 + 32);
    if ( v10 )
      *(_QWORD *)(v4 + 32) = *v10;
    v11 = (_DWORD *)v10[1];
    *(_DWORD *)(v4 + 12) = v9 + 1;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v12 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && LockHandle.OldIrql <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = v14->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v16 & v15[5]) == 0;
          v15[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(v14);
          v7 = a4;
        }
      }
    }
    __writecr8(v12);
    if ( a3 )
    {
      if ( _InterlockedCompareExchange64(a1 + 44, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 44);
      KeAbPostRelease((ULONG_PTR)(a1 + 44));
    }
    return AlpcpQueueIoCompletion(v28, a1[5], -(__int64)(a2 != 0), v11, v7);
  }
  return result;
}
