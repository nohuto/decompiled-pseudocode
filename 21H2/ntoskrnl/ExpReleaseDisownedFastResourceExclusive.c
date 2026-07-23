/*
 * XREFs of ExpReleaseDisownedFastResourceExclusive @ 0x1405B4CC0
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x14038E6C0 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceExclusive @ 0x1405B4440 (ExReleaseDisownedFastResourceExclusive.c)
 *     ExReleaseDisownedFastResourceShared @ 0x1405B4550 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWakeWaitChain @ 0x14023896C (KeWakeWaitChain.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     KeAbCrossThreadRelease @ 0x14038E970 (KeAbCrossThreadRelease.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x14038EC98 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x14038FEE8 (ExpPrepareToWakeResourceExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceExclusive(__int64 a1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  __int64 v6; // r13
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // r14
  volatile __int64 *v10; // rdx
  unsigned __int8 v11; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v13; // r8
  int v14; // eax
  bool v15; // zf
  LONG_PTR result; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rax
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r10
  _DWORD *v24; // r9
  int v25; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v27; // [rsp+38h] [rbp-18h] BYREF
  int v28; // [rsp+98h] [rbp+48h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v30; // [rsp+A8h] [rbp+58h] BYREF

  v30 = 0LL;
  v29 = 0LL;
  v28 = 0;
  *(_QWORD *)&v27.OldIrql = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v6 = *(_QWORD *)(a2 + 32);
  v27.LockQueue.Next = 0LL;
  v27.LockQueue.Lock = (unsigned __int64 *volatile)(v6 + 1592);
  KxAcquireQueuedSpinLock((__int64)&v27, (volatile __int64 *)(v6 + 1592));
  if ( !*(_BYTE *)(a2 + 18) )
  {
    v7 = *(_QWORD *)a2;
    v8 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v8 != a2 )
      goto LABEL_8;
    goto LABEL_12;
  }
  v9 = (_QWORD *)(a2 + 40);
  LockHandle.LockQueue.Next = 0LL;
  v10 = (volatile __int64 *)(a1 + 96);
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(a1 + 96);
  if ( (_QWORD *)*v9 != v9 )
  {
    KxAcquireQueuedSpinLock((__int64)&LockHandle, v10);
    ExpRotateFastOwnerEntrySublistHead(a1, a2, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v7 = *(_QWORD *)a2;
    v8 = *(_QWORD **)(a2 + 8);
    if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v8 == a2 )
    {
LABEL_12:
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *(_QWORD *)a2 = 0LL;
      *(_QWORD *)(a2 + 8) = 0LL;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v27);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v11 = KeGetCurrentIrql();
          if ( v11 <= 0xFu && CurrentIrql <= 0xFu && v11 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v13 = CurrentPrcb->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v15 = (v14 & v13[5]) == 0;
            v13[5] &= v14;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      goto LABEL_34;
    }
LABEL_8:
    __fastfail(3u);
  }
  KxAcquireQueuedSpinLock((__int64)&LockHandle, v10);
  ExpPrepareToWakeResourceExclusive(a1, &v30, &v29, &v28);
  v17 = (_QWORD *)(a2 + 56);
  v18 = *(_QWORD *)(a2 + 56);
  v19 = *(_QWORD **)(a2 + 64);
  if ( *(_QWORD *)(v18 + 8) != a2 + 56 )
    goto LABEL_8;
  if ( (_QWORD *)*v19 != v17 )
    goto LABEL_8;
  *v19 = v18;
  *(_QWORD *)(v18 + 8) = v19;
  *v17 = 0LL;
  *(_QWORD *)(a2 + 64) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  *(_BYTE *)(a2 + 18) = 0;
  v20 = *(_QWORD *)a2;
  v21 = *(_QWORD **)(a2 + 8);
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || *v21 != a2 )
    goto LABEL_8;
  *v21 = v20;
  *(_QWORD *)(v20 + 8) = v21;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *v9 = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v27);
  KeWakeWaitChain(&v30, 0, 2 * (v29 != 0) + 1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v15 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick((__int64)v23);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( *(_BYTE *)(a2 + 16) )
    KeAbCrossThreadRelease(a1, *(unsigned __int8 *)(a2 + 16), v6);
  result = ObfDereferenceObjectWithTag(*(PVOID *)(a2 + 32), 0x746C6644u);
LABEL_34:
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}
