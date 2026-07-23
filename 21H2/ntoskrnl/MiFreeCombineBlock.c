/*
 * XREFs of MiFreeCombineBlock @ 0x14036B8E0
 * Callers:
 *     MiDecrementCombinedPte @ 0x140367074 (MiDecrementCombinedPte.c)
 *     MiDemoteCombinedPte @ 0x14036B410 (MiDemoteCombinedPte.c)
 *     MiProcessCrcList @ 0x140726FD0 (MiProcessCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeCombineBlock(__int64 a1)
{
  __int64 v1; // r13
  unsigned __int64 v2; // r14
  __int64 v4; // rsi
  __int64 v5; // r13
  __int64 v6; // rbx
  unsigned __int64 v7; // r15
  bool v8; // zf
  _QWORD *v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v16; // eax
  _QWORD *v17; // rax
  unsigned int i; // ecx
  __int64 v19; // r8
  _QWORD *v20; // rdx
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 24);
  v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v4 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( v1 )
  {
    v5 = v1 & 0xF;
    v6 = 16LL * (unsigned int)v5;
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + v4 + 104));
    RtlAvlRemoveNode((unsigned __int64 *)(v4 + 16 * (v5 + 6)), (unsigned __int64 *)a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + v4 + 104));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v8 = (v16 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v16;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFE0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 88), &LockHandle);
  v8 = (*(_DWORD *)(v2 + 8))-- == 1;
  if ( v8 )
  {
    v17 = (_QWORD *)(v2 + 72);
    for ( i = 0; i < 0x37; ++i )
    {
      if ( v17 != (_QWORD *)a1 )
      {
        v19 = *v17;
        v20 = (_QWORD *)v17[1];
        if ( *(_QWORD **)(*v17 + 8LL) != v17 || (_QWORD *)*v20 != v17 )
          goto LABEL_23;
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
      }
      v17 += 9;
    }
    *(_QWORD *)v2 = *(_QWORD *)(v4 + 24);
    *(_QWORD *)(v4 + 24) = v2;
    if ( !*(_QWORD *)v2 )
    {
      *(_QWORD *)(v4 + 32) = 0LL;
      *(_QWORD *)(v4 + 48) = MiFreeCombinePool;
      *(_QWORD *)(v4 + 56) = v4;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v4 + 32), DelayedWorkQueue);
    }
  }
  else
  {
    v9 = (_QWORD *)(v4 + 72);
    v10 = *(_QWORD *)(v4 + 72);
    if ( *(_QWORD *)(v10 + 8) != v4 + 72 )
LABEL_23:
      __fastfail(3u);
    *(_QWORD *)a1 = v10;
    *(_QWORD *)(a1 + 8) = v9;
    *(_QWORD *)(v10 + 8) = a1;
    *v9 = a1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = (unsigned int)KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && LockHandle.OldIrql <= 0xFu && (unsigned __int8)result >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v8 = ((unsigned int)result & v22[5]) == 0;
        v22[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(v21);
      }
    }
  }
  __writecr8(OldIrql);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 388), 0xFFFFFFFF);
  return result;
}
