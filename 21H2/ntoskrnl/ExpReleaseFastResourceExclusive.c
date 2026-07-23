/*
 * XREFs of ExpReleaseFastResourceExclusive @ 0x14038FD10
 * Callers:
 *     ExReleaseFastResource @ 0x14038EA40 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceExclusive @ 0x1405B4670 (ExReleaseFastResourceExclusive.c)
 *     ExReleaseFastResourceShared @ 0x1405B47A0 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     KeWakeWaitChain @ 0x14023896C (KeWakeWaitChain.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14038EC98 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x14038FEE8 (ExpPrepareToWakeResourceExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpReleaseFastResourceExclusive(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rsi
  volatile __int64 *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v23; // r8
  int v24; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  int v26; // [rsp+88h] [rbp+48h] BYREF
  __int64 v27; // [rsp+90h] [rbp+50h] BYREF
  __int64 v28; // [rsp+98h] [rbp+58h] BYREF

  v28 = 0LL;
  v27 = 0LL;
  v26 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( *(_BYTE *)(a2 + 18) )
  {
    v5 = (_QWORD *)(a2 + 40);
    LockHandle.LockQueue.Next = 0LL;
    v6 = (volatile __int64 *)(BugCheckParameter2 + 96);
    LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(BugCheckParameter2 + 96);
    if ( (_QWORD *)*v5 == v5 )
    {
      KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
      ExpPrepareToWakeResourceExclusive(
        BugCheckParameter2,
        &v28,
        &v27,
        &v26,
        LockHandle.LockQueue.Next,
        LockHandle.LockQueue.Lock,
        *(_QWORD *)&LockHandle.OldIrql);
      v7 = (_QWORD *)(a2 + 56);
      v8 = *(_QWORD *)(a2 + 56);
      v9 = *(_QWORD **)(a2 + 64);
      if ( *(_QWORD *)(v8 + 8) == a2 + 56 && (_QWORD *)*v9 == v7 )
      {
        *v9 = v8;
        *(_QWORD *)(v8 + 8) = v9;
        *v7 = 0LL;
        *(_QWORD *)(a2 + 64) = 0LL;
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        KeWakeWaitChain(&v28, 0, 2 * (v27 != 0) + 1);
        *(_BYTE *)(a2 + 18) = 0;
        v10 = *(_QWORD *)a2;
        v11 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v11 == a2 )
        {
          *v11 = v10;
          *(_QWORD *)(v10 + 8) = v11;
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *v5 = 0LL;
          *(_QWORD *)(a2 + 48) = 0LL;
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v21 = KeGetCurrentIrql();
              if ( v21 <= 0xFu && CurrentIrql <= 0xFu && v21 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v23 = CurrentPrcb->SchedulerAssist;
                v24 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                v20 = (v24 & v23[5]) == 0;
                v23[5] &= v24;
                if ( v20 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(CurrentIrql);
          result = *(unsigned __int8 *)(a2 + 16);
          if ( (_BYTE)result )
            result = KeAbPostReleaseEx(BugCheckParameter2, *(unsigned __int8 *)(a2 + 16));
          goto LABEL_11;
        }
      }
LABEL_18:
      __fastfail(3u);
    }
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v6);
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v13 = *(_QWORD *)a2;
    v14 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v14 != a2 )
      goto LABEL_18;
  }
  else
  {
    v13 = *(_QWORD *)a2;
    v14 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v14 != a2 )
      goto LABEL_18;
  }
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && CurrentIrql <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = v17->SchedulerAssist;
        v19 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v20 = (v19 & v18[5]) == 0;
        v18[5] &= v19;
        if ( v20 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_11:
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}
