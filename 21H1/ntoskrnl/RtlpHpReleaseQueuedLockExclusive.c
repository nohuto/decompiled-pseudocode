/*
 * XREFs of RtlpHpReleaseQueuedLockExclusive @ 0x14035E770
 * Callers:
 *     RtlpHpVsContextAllocateInternal @ 0x14024D020 (RtlpHpVsContextAllocateInternal.c)
 *     RtlpHpVsChunkSplit @ 0x14024D3F0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x14024E150 (RtlpHpVsContextFree.c)
 *     ExAllocateHeapPool @ 0x14024FF10 (ExAllocateHeapPool.c)
 *     RtlpHpVsContextFreeList @ 0x14035E0A0 (RtlpHpVsContextFreeList.c)
 *     RtlpHpVsContextFreeInternal @ 0x14035E130 (RtlpHpVsContextFreeInternal.c)
 *     RtlpHpVsChunkDecommit @ 0x14035E344 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsContextMultiAlloc @ 0x14035E694 (RtlpHpVsContextMultiAlloc.c)
 *     RtlpHpVsContextAllocate @ 0x14035EF84 (RtlpHpVsContextAllocate.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B00F4 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
  unsigned int v11; // edx
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _DWORD *v19; // r9
  int v20; // eax
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // edx
  void *retaddr; // [rsp+58h] [rbp+0h]
  int v25; // [rsp+70h] [rbp+18h] BYREF

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
        v20 = SchedulerAssist[6] - 1;
        SchedulerAssist[6] = v20;
        if ( !v20 )
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
          v21 = KeGetCurrentPrcb();
          result = -1LL << ((unsigned __int8)v4 + 1);
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)result;
          v12 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v12 )
            result = KiRemoveSystemWorkPriorityKick(v21);
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
    v25 = 0;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v2) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v10 = ++CurrentThread->AbAllocationRegionCount;
    v11 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    v12 = !_BitScanReverse((unsigned int *)&v13, v11);
    if ( v12 )
      goto LABEL_28;
    while ( 1 )
    {
      v14 = (__int64)&CurrentThread->LockEntries[v13];
      v11 &= ~(1 << v13);
      if ( (*(_BYTE *)(v14 + 26) & 1) != 0
        && (*(_DWORD *)(v14 + 32) & 1) == 0
        && (*(_QWORD *)(v14 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v14 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v14 + 26) &= ~1u;
        if ( *(_QWORD *)(v14 + 32) )
          break;
      }
      v12 = !_BitScanReverse((unsigned int *)&v13, v11);
      if ( v12 )
        goto LABEL_28;
    }
    if ( !v14 )
    {
LABEL_28:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v14 + 32) |= 2u;
      if ( *(__int64 *)(v14 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v14);
      v25 = *(_DWORD *)(v14 + 88) & 0x1FFFF;
      *(_DWORD *)(v14 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v14 + 25) &= ~1u;
      *(_QWORD *)(v14 + 32) = 0LL;
      v15 = (signed __int64)(v14 - (unsigned __int64)CurrentThread->LockEntries) / 96;
      if ( v10 == 1 )
        CurrentThread->AbEntrySummary |= 1 << v15;
      else
        _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v15);
    }
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, &v25);
    v12 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v12 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v17, v16, v18, v19);
    result = KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v16, v18, (__int64)v19);
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  return result;
}
