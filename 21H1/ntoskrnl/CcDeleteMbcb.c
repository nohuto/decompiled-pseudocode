/*
 * XREFs of CcDeleteMbcb @ 0x140235CE0
 * Callers:
 *     CcSetFileSizesEx @ 0x14022D450 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x14023372C (CcDeleteSharedCacheMap.c)
 * Callees:
 *     CcDeductDirtyPages @ 0x14022BD4C (CcDeductDirtyPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x14022E770 (CcGetPartition.c)
 *     CcDeallocateBcb @ 0x140231000 (CcDeallocateBcb.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x1402D7298 (ExFreeToNPagedLookasideList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1)
{
  __int64 Partition; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int64 OldIrql; // rbx
  PVOID ***v5; // rsi
  PVOID **v6; // rbx
  PVOID *v7; // rcx
  PVOID ***v8; // rax
  PVOID *v9; // rdx
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
  Partition = CcGetPartition((_QWORD *)a1);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v3 = *(_QWORD *)(a1 + 160);
  if ( v3 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDeductDirtyPages(a1, *(_DWORD *)(v3 + 8));
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
    v5 = (PVOID ***)(v3 + 16);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == (PVOID **)v5 )
        break;
      v7 = *v6;
      v8 = (PVOID ***)v6[1];
      if ( (*v6)[1] != v6 || *v8 != v6 )
LABEL_20:
        __fastfail(3u);
      *v8 = (PVOID **)v7;
      v7[1] = v8;
      v9 = v6[5];
      if ( v9 && v9 != (PVOID *)(v3 + 96) )
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&CcBitmapLookasideList, v9);
      if ( (unsigned __int64)v6 < v3 || (unsigned __int64)v6 >= v3 + 192 )
      {
        v10 = p_P;
        if ( *p_P != &P )
          goto LABEL_20;
        v6[1] = p_P;
        *v6 = &P;
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
    CcDeallocateBcb((char *)v3);
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  }
}
