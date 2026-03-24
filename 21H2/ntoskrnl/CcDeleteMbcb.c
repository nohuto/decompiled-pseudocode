/*
 * XREFs of CcDeleteMbcb @ 0x1402F293C
 * Callers:
 *     CcSetFileSizesEx @ 0x14022E120 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x1402F3DDC (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140252DE4 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseGuardedMutex @ 0x140265CD0 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDeallocateBcb @ 0x1402F5060 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x140312DEC (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x140313800 (CcGetPartition.c)
 *     ExAcquireFastMutex @ 0x14034A080 (ExAcquireFastMutex.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1)
{
  __int64 Partition; // rbx
  unsigned int *v3; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned int **v5; // rsi
  unsigned int *v6; // rbx
  __int64 v7; // rcx
  unsigned int **v8; // rax
  unsigned int *v9; // rdx
  PVOID *v10; // rax
  PVOID v11; // rcx
  PVOID *v12; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  bool v17; // zf
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  p_P = &P;
  P = &P;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Partition = CcGetPartition(a1);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v3 = *(unsigned int **)(a1 + 160);
  if ( v3 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDeductDirtyPages(a1, v3[2]);
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
          v16 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v17 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v5 = (unsigned int **)(v3 + 4);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == (unsigned int *)v5 )
        break;
      v7 = *(_QWORD *)v6;
      v8 = (unsigned int **)*((_QWORD *)v6 + 1);
      if ( *(unsigned int **)(*(_QWORD *)v6 + 8LL) != v6 || *v8 != v6 )
LABEL_20:
        __fastfail(3u);
      *v8 = (unsigned int *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      v9 = (unsigned int *)*((_QWORD *)v6 + 5);
      if ( v9 && v9 != v3 + 24 )
        ExFreeToNPagedLookasideList(&CcBitmapLookasideList, v9);
      if ( v6 < v3 || v6 >= v3 + 48 )
      {
        v10 = p_P;
        if ( *p_P != &P )
          goto LABEL_20;
        *((_QWORD *)v6 + 1) = p_P;
        *(_QWORD *)v6 = &P;
        *v10 = v6;
        p_P = (PVOID *)v6;
      }
    }
    *(_QWORD *)(a1 + 160) = 0LL;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
    while ( 1 )
    {
      v11 = P;
      if ( P == &P )
        break;
      v12 = *(PVOID **)P;
      if ( *((PVOID **)P + 1) != &P || v12[1] != P )
        goto LABEL_20;
      P = *(PVOID *)P;
      v12[1] = &P;
      ExFreePoolWithTag(v11, 0);
    }
    CcDeallocateBcb(v3);
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  }
}
