/*
 * XREFs of KiForceSymbolReferences @ 0x140A925EC
 * Callers:
 *     KiInitSystem @ 0x140A689D0 (KiInitSystem.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F9348 (EtwTraceAutoBoostEntryExhaustion.c)
 */

__int64 KiForceSymbolReferences()
{
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v1; // rdi
  __int64 v2; // rcx
  unsigned __int8 AbOrphanedEntrySummary; // al
  char v4; // dl
  int SessionId; // eax
  bool v6; // zf
  signed __int8 v7; // cf
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v12; // r8
  int v13; // eax
  __int64 result; // rax
  unsigned int v15; // [rsp+68h] [rbp+40h] BYREF
  signed __int32 v16; // [rsp+70h] [rbp+48h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp+50h] BYREF

  BugCheckParameter2 = 0LL;
  if ( KeGetPcr()->Prcb.Number )
    goto LABEL_24;
  v15 = 0;
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
      && byte_140C4FA08[(((unsigned __int64)&BugCheckParameter2 >> 39) & 0x1FF) - 256] == 1 )
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
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, (__int64)&BugCheckParameter2, &v15);
  v6 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v6 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter2, 0LL);
  if ( v1 )
  {
    if ( v7 )
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
  ExTryAcquireSpinLockExclusiveAtDpcLevel(&v16);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v10 = KeGetCurrentIrql();
      if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v12 = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v6 = (v13 & v12[5]) == 0;
        v12[5] &= v13;
        if ( v6 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
