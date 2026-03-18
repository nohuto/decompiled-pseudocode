/*
 * XREFs of CcDeleteMbcb @ 0x1402C8B10
 * Callers:
 *     CcSetFileSizesEx @ 0x1402C0280 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x1402C655C (CcDeleteSharedCacheMap.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140269FBC (ExFreeToNPagedLookasideList.c)
 *     CcDeductDirtyPages @ 0x1402BE9CC (CcDeductDirtyPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartition @ 0x1402C15A0 (CcGetPartition.c)
 *     CcDeallocateBcb @ 0x1402C3E30 (CcDeallocateBcb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 Partition; // rbx
  unsigned __int64 v6; // rdi
  unsigned __int64 OldIrql; // rbx
  PVOID ***v8; // rsi
  PVOID **v9; // rbx
  PVOID *v10; // rcx
  PVOID ***v11; // rax
  PVOID *v12; // rdx
  PVOID *v13; // rax
  PVOID v14; // rcx
  PVOID *v15; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  p_P = &P;
  P = &P;
  memset(&LockHandle, 0, sizeof(LockHandle));
  Partition = CcGetPartition((_QWORD *)a1, a2, a3, a4);
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v6 = *(_QWORD *)(a1 + 160);
  if ( v6 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDeductDirtyPages(a1, *(_DWORD *)(v6 + 8));
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
          v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v20 = (v19 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v19;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v8 = (PVOID ***)(v6 + 16);
    while ( 1 )
    {
      v9 = *v8;
      if ( *v8 == (PVOID **)v8 )
        break;
      v10 = *v9;
      v11 = (PVOID ***)v9[1];
      if ( (*v9)[1] != v9 || *v11 != v9 )
LABEL_20:
        __fastfail(3u);
      *v11 = (PVOID **)v10;
      v10[1] = v11;
      v12 = v9[5];
      if ( v12 && v12 != (PVOID *)(v6 + 96) )
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&CcBitmapLookasideList, v12);
      if ( (unsigned __int64)v9 < v6 || (unsigned __int64)v9 >= v6 + 192 )
      {
        v13 = p_P;
        if ( *p_P != &P )
          goto LABEL_20;
        v9[1] = p_P;
        *v9 = &P;
        *v13 = v9;
        p_P = (PVOID *)v9;
      }
    }
    *(_QWORD *)(a1 + 160) = 0LL;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
    while ( 1 )
    {
      v14 = P;
      if ( P == &P )
        break;
      v15 = *(PVOID **)P;
      if ( *((PVOID **)P + 1) != &P || v15[1] != P )
        goto LABEL_20;
      P = *(PVOID *)P;
      v15[1] = &P;
      ExFreePoolWithTag(v14, 0);
    }
    CcDeallocateBcb((char *)v6);
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  }
}
