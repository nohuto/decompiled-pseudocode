/*
 * XREFs of MiAllocateCombineProto @ 0x14026AB70
 * Callers:
 *     MiSharePages @ 0x140314BA0 (MiSharePages.c)
 *     MiProcessCrcList @ 0x1406F2C30 (MiProcessCrcList.c)
 * Callees:
 *     MiInsertNewCombineBlocks @ 0x140245D28 (MiInsertNewCombineBlocks.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140366A20 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140461B20 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14063D8E0 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiAllocateCombineProto(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        _QWORD *a4,
        int a5)
{
  __int64 v9; // rbx
  _DWORD *v10; // r14
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *v13; // rcx
  signed __int32 v14; // ett
  unsigned __int64 inserted; // rsi
  __int64 *v16; // rbx
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  unsigned int v21; // eax
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  __int64 *v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rcx
  unsigned __int64 OldIrql; // rbx
  char v28; // al
  __int64 Pool; // rax
  void *v30; // rbx
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  _DWORD *v33; // rcx
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  bool v39; // zf
  int v40; // eax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v50; // [rsp+38h] [rbp-40h]
  unsigned int v51; // [rsp+40h] [rbp-38h]
  int v52; // [rsp+44h] [rbp-34h]
  _QWORD *v53; // [rsp+48h] [rbp-30h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    return 0LL;
  v9 = a2 & 0xF;
  v10 = (_DWORD *)(16 * v9 + a1 + 104);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v10, CurrentIrql);
  }
  else
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = CurrentPrcb->SchedulerAssist;
    if ( v13 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v32 = v13[6];
        v13[6] = v32 + 1;
        if ( v32 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    _m_prefetchw(v10);
    v14 = *v10 & 0x7FFFFFFF;
    if ( v14 != _InterlockedCompareExchange(v10, v14 + 1, v14) )
    {
      v33 = CurrentPrcb->SchedulerAssist;
      if ( v33 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v34 = v33[6] - 1;
          v33[6] = v34;
          if ( !v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      ExpWaitForSpinLockSharedAndAcquire(v10, CurrentIrql);
    }
  }
  v50 = a2;
  v51 = a3;
  inserted = 0LL;
  v53 = a4;
  v52 = 0;
  v16 = *(__int64 **)(a1 + 16 * (v9 + 6));
  if ( !v16 )
  {
LABEL_12:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v10, retaddr);
    }
    else
    {
      _InterlockedAnd(v10, 0xBFFFFFFF);
      _InterlockedDecrement(v10);
    }
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v40 = v19[6] - 1;
        v19[6] = v40;
        if ( !v40 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v41 = KeGetCurrentIrql();
        if ( v41 <= 0xFu && CurrentIrql <= 0xFu && v41 >= 2u )
        {
          v42 = KeGetCurrentPrcb();
          v43 = v42->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v39 = (v44 & v43[5]) == 0;
          v43[5] &= v44;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
    }
    __writecr8(CurrentIrql);
    if ( !a5 )
      return 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
    v24 = *(__int64 **)(a1 + 72);
    v25 = (_QWORD *)(a1 + 72);
    if ( v24 != (__int64 *)(a1 + 72) )
    {
      inserted = *(_QWORD *)(a1 + 72);
      v26 = *v24;
      if ( *(_QWORD **)(inserted + 8) != v25 || *(_QWORD *)(v26 + 8) != inserted )
        __fastfail(3u);
      *v25 = v26;
      *(_QWORD *)(v26 + 8) = v25;
      ++*(_DWORD *)((inserted & 0xFFFFFFFFFFFFF000uLL) + 8);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v45 = KeGetCurrentIrql();
        if ( v45 <= 0xFu && LockHandle.OldIrql <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v39 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
    }
    __writecr8(OldIrql);
    if ( inserted )
    {
LABEL_34:
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 388), 1u);
      v28 = a3 ^ *(_DWORD *)(inserted + 40);
      *(_QWORD *)(inserted + 32) = 1LL;
      *(_DWORD *)(inserted + 40) ^= v28 & 0x1F;
      *(_QWORD *)(inserted + 64) = *a4;
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 392), 1u);
      return inserted;
    }
    Pool = MiAllocatePool(274LL, 4096LL, 1836405581LL);
    v30 = (void *)Pool;
    if ( Pool )
    {
      *(_DWORD *)(Pool + 8) = 1;
      *(_QWORD *)(Pool + 16) = a1;
      inserted = (unsigned __int64)MiInsertNewCombineBlocks(a1, (_QWORD *)(Pool + 72));
      if ( inserted )
        goto LABEL_34;
      ExFreePoolWithTag(v30, 0);
    }
    return 0LL;
  }
  while ( 1 )
  {
    if ( a2 > v16[3] )
    {
LABEL_10:
      v16 = (__int64 *)v16[1];
      goto LABEL_11;
    }
    if ( a2 >= v16[3] )
    {
      v21 = v16[5] & 0x1F;
      if ( a3 >= v21 )
      {
        if ( a3 > v21 )
          goto LABEL_10;
        if ( !a4 )
          break;
        if ( *a4 > (unsigned __int64)v16[8] )
          goto LABEL_10;
        if ( *a4 >= (unsigned __int64)v16[8] )
          break;
      }
    }
    v16 = (__int64 *)*v16;
LABEL_11:
    if ( !v16 )
      goto LABEL_12;
  }
  v22 = v16[4];
  if ( !v22 )
  {
LABEL_51:
    a5 = 0;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v23 = v22;
    v22 = _InterlockedCompareExchange64(v16 + 4, v22 + 1, v22);
    if ( v23 == v22 )
      break;
    if ( !v22 )
      goto LABEL_51;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v10);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && CurrentIrql <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v38 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v39 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v39 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
  }
  __writecr8(CurrentIrql);
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 392), 1u);
  return (unsigned __int64)v16;
}
