/*
 * XREFs of MiAllocateCombineProto @ 0x140367FC0
 * Callers:
 *     MiSharePages @ 0x140368510 (MiSharePages.c)
 *     MiProcessCrcList @ 0x140726FD0 (MiProcessCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiInsertNewCombineBlocks @ 0x14036BA08 (MiInsertNewCombineBlocks.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x1405B5FEC (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateCombineProto(__int64 a1, unsigned __int64 a2, unsigned int a3, _QWORD *a4, int a5)
{
  __int64 inserted; // r13
  __int64 v10; // rbx
  volatile LONG *v11; // rbp
  unsigned __int64 v12; // r12
  __int64 *v13; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  unsigned int v18; // eax
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 *v21; // rcx
  _QWORD *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 OldIrql; // rbx
  int v25; // esi
  char *Pool; // rax
  void *v27; // rbx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r9
  _DWORD *v30; // r8
  int v31; // eax
  bool v32; // zf
  int v33; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r9
  _DWORD *v40; // r8
  int v41; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]
  unsigned int v44; // [rsp+40h] [rbp-38h]
  int v45; // [rsp+44h] [rbp-34h]
  _QWORD *v46; // [rsp+48h] [rbp-30h]
  void *retaddr; // [rsp+78h] [rbp+0h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    return 0LL;
  inserted = 0LL;
  v10 = a2 & 0xF;
  v11 = (volatile LONG *)(16 * v10 + a1 + 104);
  v12 = ExAcquireSpinLockShared(v11);
  v45 = 0;
  v43 = a2;
  v44 = a3;
  v46 = a4;
  v13 = *(__int64 **)(a1 + 16 * (v10 + 6));
  if ( !v13 )
  {
LABEL_8:
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      ExpReleaseSpinLockSharedFromDpcLevelInstrumented(v11, retaddr);
    }
    else
    {
      _InterlockedAnd(v11, 0xBFFFFFFF);
      _InterlockedDecrement(v11);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v33 = SchedulerAssist[6] - 1;
        SchedulerAssist[6] = v33;
        if ( !v33 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          v32 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
    }
    __writecr8(v12);
    if ( !a5 )
      return 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
    v21 = *(__int64 **)(a1 + 72);
    v22 = (_QWORD *)(a1 + 72);
    if ( v21 != (__int64 *)(a1 + 72) )
    {
      inserted = *(_QWORD *)(a1 + 72);
      v23 = *v21;
      if ( *(_QWORD **)(inserted + 8) != v22 || *(_QWORD *)(v23 + 8) != inserted )
        __fastfail(3u);
      *v22 = v23;
      *(_QWORD *)(v23 + 8) = v22;
      ++*(_DWORD *)((inserted & 0xFFFFFFFFFFFFF000uLL) + 8);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v38 = KeGetCurrentIrql();
        if ( v38 <= 0xFu && LockHandle.OldIrql <= 0xFu && v38 >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = v39->SchedulerAssist;
          v41 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v32 = (v41 & v40[5]) == 0;
          v40[5] &= v41;
          if ( v32 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
    }
    __writecr8(OldIrql);
    if ( inserted )
    {
LABEL_30:
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 388), 1u);
      v25 = (*(_DWORD *)(inserted + 40) ^ a3) & 0x1F;
      *(_QWORD *)(inserted + 32) = 1LL;
      *(_DWORD *)(inserted + 40) ^= v25;
      *(_QWORD *)(inserted + 64) = *a4;
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 392), 1u);
      return inserted;
    }
    Pool = (char *)MiAllocatePool(274, 0x1000uLL, 0x6D75534Du);
    v27 = Pool;
    if ( Pool )
    {
      *((_DWORD *)Pool + 2) = 1;
      *((_QWORD *)Pool + 2) = a1;
      inserted = MiInsertNewCombineBlocks(a1, Pool + 72);
      if ( inserted )
        goto LABEL_30;
      ExFreePoolWithTag(v27, 0);
    }
    return 0LL;
  }
  while ( 1 )
  {
    if ( a2 > v13[3] )
    {
LABEL_6:
      v13 = (__int64 *)v13[1];
      goto LABEL_7;
    }
    if ( a2 >= v13[3] )
    {
      v18 = v13[5] & 0x1F;
      if ( a3 >= v18 )
      {
        if ( a3 > v18 )
          goto LABEL_6;
        if ( !a4 )
          break;
        if ( *a4 > (unsigned __int64)v13[8] )
          goto LABEL_6;
        if ( *a4 >= (unsigned __int64)v13[8] )
          break;
      }
    }
    v13 = (__int64 *)*v13;
LABEL_7:
    if ( !v13 )
      goto LABEL_8;
  }
  v19 = v13[4];
  if ( !v19 )
  {
LABEL_35:
    a5 = 0;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v20 = v19;
    v19 = _InterlockedCompareExchange64(v13 + 4, v19 + 1, v19);
    if ( v20 == v19 )
      break;
    if ( !v19 )
      goto LABEL_35;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v11);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v28 = KeGetCurrentIrql();
      if ( v28 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v32 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
  }
  __writecr8(v12);
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 392), 1u);
  return (__int64)v13;
}
