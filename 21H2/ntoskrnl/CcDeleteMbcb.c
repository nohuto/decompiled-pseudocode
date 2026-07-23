/*
 * XREFs of CcDeleteMbcb @ 0x1402FD68C
 * Callers:
 *     CcSetFileSizesEx @ 0x1402D2970 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x1402FEB2C (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeallocateBcb @ 0x1402FFDB0 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14031DB3C (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x14031E550 (CcGetPartition.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1, char a2, char a3)
{
  __int64 Partition; // rbx
  unsigned int *v5; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned int **v7; // rsi
  unsigned int *v8; // rbx
  __int64 v9; // rcx
  unsigned int **v10; // rax
  unsigned int *v11; // rdx
  PVOID *v12; // rax
  PVOID v13; // rcx
  PVOID *v14; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  p_P = &P;
  P = &P;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Partition = CcGetPartition(a1, a2, a3);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v5 = *(unsigned int **)(a1 + 160);
  if ( v5 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDeductDirtyPages(a1, v5[2]);
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
          v18 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v19 = (v18 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v18;
          if ( v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v7 = (unsigned int **)(v5 + 4);
    while ( 1 )
    {
      v8 = *v7;
      if ( *v7 == (unsigned int *)v7 )
        break;
      v9 = *(_QWORD *)v8;
      v10 = (unsigned int **)*((_QWORD *)v8 + 1);
      if ( *(unsigned int **)(*(_QWORD *)v8 + 8LL) != v8 || *v10 != v8 )
LABEL_20:
        __fastfail(3u);
      *v10 = (unsigned int *)v9;
      *(_QWORD *)(v9 + 8) = v10;
      v11 = (unsigned int *)*((_QWORD *)v8 + 5);
      if ( v11 && v11 != v5 + 24 )
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&CcBitmapLookasideList, v11);
      if ( v8 < v5 || v8 >= v5 + 48 )
      {
        v12 = p_P;
        if ( *p_P != &P )
          goto LABEL_20;
        *((_QWORD *)v8 + 1) = p_P;
        *(_QWORD *)v8 = &P;
        *v12 = v8;
        p_P = (PVOID *)v8;
      }
    }
    *(_QWORD *)(a1 + 160) = 0LL;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
    while ( 1 )
    {
      v13 = P;
      if ( P == &P )
        break;
      v14 = *(PVOID **)P;
      if ( *((PVOID **)P + 1) != &P || v14[1] != P )
        goto LABEL_20;
      P = *(PVOID *)P;
      v14[1] = &P;
      ExFreePoolWithTag(v13, 0);
    }
    CcDeallocateBcb(v5);
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  }
}
