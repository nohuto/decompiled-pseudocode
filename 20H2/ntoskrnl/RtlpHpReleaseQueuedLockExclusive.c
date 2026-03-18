/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x14023BB80
 * Callers:
 *     ExAllocateHeapPool @ 0x140212080 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextAllocateInternal @ 0x1402147E0 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x140214BB0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x140215910 (RtlpHpVsContextFree.c)
 *     RtlpHpVsContextFreeList @ 0x14023B30C (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x14023B39C (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x14023B850 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextMultiAlloc @ 0x14023BAA4 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpVsContextAllocate @ 0x140309844 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B4374 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpReleaseQueuedLockExclusive(int a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rbp
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  ULONG_PTR SessionId; // r9
  unsigned __int8 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r8
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // rdx
  int v17; // eax
  struct _KPRCB *v18; // r10
  _DWORD *v19; // r9
  int v20; // edx
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v22; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 8);
  if ( a1 )
  {
    v4 = *(unsigned __int8 *)(a2 + 16);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v2, retaddr);
    else
      *(_DWORD *)v2 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = SchedulerAssist[6] - 1;
        SchedulerAssist[6] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = (unsigned int)KiIrqlFlags;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v4 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v18 = KeGetCurrentPrcb();
          result = -1LL << ((unsigned __int8)v4 + 1);
          v19 = v18->SchedulerAssist;
          v20 = ~(unsigned __int16)result;
          v13 = (v20 & v19[5]) == 0;
          v19[5] &= v20;
          if ( v13 )
            result = KiRemoveSystemWorkPriorityKick(v18);
        }
      }
    }
    __writecr8(v4);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    v22 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v10 = ++CurrentThread->AbAllocationRegionCount;
    LODWORD(v11) = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v12 = v2 & 0x7FFFFFFFFFFFFFFCLL;
    v13 = !_BitScanReverse((unsigned int *)&v14, v11);
    if ( v13 )
      goto LABEL_28;
    while ( 1 )
    {
      v15 = (__int64)&CurrentThread->LockEntries[v14];
      v11 = ~(1 << v14) & (unsigned int)v11;
      if ( (*(_BYTE *)(v15 + 26) & 1) != 0
        && (*(_DWORD *)(v15 + 32) & 1) == 0
        && (*(_QWORD *)(v15 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v12
        && *(_DWORD *)(v15 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v15 + 26) &= ~1u;
        if ( *(_QWORD *)(v15 + 32) )
          break;
      }
      v13 = !_BitScanReverse((unsigned int *)&v14, v11);
      if ( v13 )
        goto LABEL_28;
    }
    if ( !v15 )
    {
LABEL_28:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v15 + 32) |= 2u;
      if ( *(__int64 *)(v15 + 32) < 0 )
        KiAbEntryRemoveFromTree(v15, v11, v12);
      v22 = *(_DWORD *)(v15 + 88) & 0x1FFFF;
      *(_DWORD *)(v15 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v15 + 25) &= ~1u;
      *(_QWORD *)(v15 + 32) = 0LL;
      v16 = (signed __int64)(v15 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v10 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v16;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v16);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v22);
    v13 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v13 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return result;
}
