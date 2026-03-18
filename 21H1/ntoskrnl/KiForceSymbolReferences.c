/*
 * XREFs of KiForceSymbolReferences @ 0x140A8F49C
 * Callers:
 *     KiInitSystem @ 0x140A5FFA0 (KiInitSystem.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402D80A0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 KiForceSymbolReferences()
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v1; // rdi
  __int64 v2; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v4; // dl
  int SessionId; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _DWORD *v9; // r9
  bool v10; // zf
  signed __int8 v11; // cf
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v16; // r8
  int v17; // eax
  __int64 result; // rax
  int v19; // [rsp+68h] [rbp+40h] BYREF
  signed __int32 v20; // [rsp+70h] [rbp+48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+50h] BYREF

  BugCheckParameter2 = 0LL;
  if ( KeGetPcr()->Prcb.Number )
    goto LABEL_24;
  v19 = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
  {
    v1 = 0LL;
    goto LABEL_4;
  }
  LOBYTE(v2) = CurrentThread->AbEntrySummary;
  if ( !(_BYTE)v2 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v1 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask[0]) & 0x200) == 0 )
        goto LABEL_4;
      EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, (__int64)&BugCheckParameter2);
      goto LABEL_9;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v2) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v4 = v2;
  _BitScanForward((unsigned int *)&v2, (unsigned __int8)v2);
  CurrentThread->AbEntrySummary = v4 & ~(1 << v2);
  v1 = (ULONG_PTR)&CurrentThread->LockEntries[v2];
LABEL_9:
  if ( v1 )
  {
    if ( (unsigned __int64)&BugCheckParameter2 >= 0xFFFF800000000000uLL
      && byte_140C4F908[(((unsigned __int64)&BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
    {
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    }
    else
    {
      SessionId = -1;
    }
    *(_DWORD *)(v1 + 40) = SessionId;
    *(_QWORD *)(v1 + 32) = &BugCheckParameter2;
    goto LABEL_17;
  }
LABEL_4:
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
LABEL_17:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&BugCheckParameter2, &v19);
  v10 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v10 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v7, v6, v8, v9);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter2, 0LL);
  if ( v1 )
  {
    if ( v11 )
      KeAbPostReleaseEx((ULONG_PTR)&BugCheckParameter2, v1);
    else
      *(_BYTE *)(v1 + 26) |= 1u;
  }
LABEL_24:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExTryAcquireSpinLockExclusiveAtDpcLevel(&v20);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && CurrentIrql <= 0xFu && v14 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v10 = (v17 & v16[5]) == 0;
        v16[5] &= v17;
        if ( v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
