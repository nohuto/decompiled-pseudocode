/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x1402DC3C0
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x140289C90 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsContextFree @ 0x14028A9F0 (RtlpHpVsContextFree.c)
 *     RtlpHpVsChunkDecommit @ 0x1402DBD14 (RtlpHpVsChunkDecommit.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402135A0 (ExpAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1405B0814 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _DWORD *SchedulerAssist,
        int a5)
{
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // rcx
  volatile signed __int64 *v10; // rsi
  unsigned int v11; // ebp
  __int64 v12; // r14
  __int64 v13; // r12
  unsigned __int8 CurrentIrql; // bp
  volatile signed __int32 *v15; // rcx
  unsigned __int8 v16; // al
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  int v19; // ebp
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *v21; // rdx
  unsigned __int8 v22; // di
  struct _KTHREAD *v24; // rdi
  unsigned int SessionId; // r8d
  unsigned __int8 v26; // r14
  unsigned int v27; // edx
  bool v28; // zf
  __int64 v29; // rcx
  __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v34; // eax
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  int v38; // eax
  int v39; // [rsp+34h] [rbp-64h]
  unsigned __int8 v40; // [rsp+50h] [rbp-48h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v42; // [rsp+A8h] [rbp+10h] BYREF

  v6 = (unsigned int)SchedulerAssist;
  _BitScanForward64(&v7, a3);
  _BitScanReverse64(&v9, a3);
  v10 = (volatile signed __int64 *)(a2 + 24);
  v39 = v9 - v7 + 1;
  v11 = v39 << 12;
  v12 = ((1LL << v39) - 1) << v7;
  v13 = a2 + (unsigned int)((_DWORD)v7 << 12);
  if ( *(_DWORD *)(a1 + 8) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    v15 = (volatile signed __int32 *)(a2 + 24);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v15, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v15, CurrentIrql, a3, (__int64)SchedulerAssist);
    v16 = CurrentIrql;
    v11 = v39 << 12;
    v40 = v16;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v40 = 0;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
  }
  v17 = a1 ^ *(_QWORD *)(a1 + 128);
  if ( !a5 )
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 160)))(v17, v13, v11);
    *(_QWORD *)(a2 + 16) &= ~v12;
    v18 = -(int)v6;
LABEL_8:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v18);
    v19 = 0;
    goto LABEL_9;
  }
  v19 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
          v17,
          v13,
          v11);
  if ( v19 >= 0 )
  {
    *(_QWORD *)(a2 + 16) |= v12;
    v18 = v6;
    goto LABEL_8;
  }
LABEL_9:
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a2 + 24, retaddr);
    else
      *(_DWORD *)v10 = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v21 = CurrentPrcb->SchedulerAssist;
    if ( v21 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v34 = v21[6] - 1;
        v21[6] = v34;
        if ( !v34 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v35 = KeGetCurrentIrql(), v35 <= 0xFu) )
    {
      v22 = v40;
      if ( v40 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = v36->SchedulerAssist;
        v22 = v40;
        v38 = ~(unsigned __int16)(-1LL << (v40 + 1));
        v28 = (v38 & v37[5]) == 0;
        v37[5] &= v38;
        if ( v28 )
          KiRemoveSystemWorkPriorityKick(v36);
      }
    }
    else
    {
      v22 = v40;
    }
    __writecr8(v22);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 24));
    v42 = 0;
    v24 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a2 + 24) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v24->ApcState.Process);
    else
      SessionId = -1;
    --v24->SpecialApcDisable;
    v26 = ++v24->AbAllocationRegionCount;
    v27 = ((char)v24->AbEntrySummary | (char)v24->AbOrphanedEntrySummary) ^ 0x3F;
    v28 = !_BitScanReverse((unsigned int *)&v29, v27);
    if ( v28 )
      goto LABEL_39;
    while ( 1 )
    {
      v30 = (__int64)&v24->LockEntries[v29];
      v27 &= ~(1 << v29);
      if ( (*(_BYTE *)(v30 + 26) & 1) != 0
        && (*(_DWORD *)(v30 + 32) & 1) == 0
        && (*(_QWORD *)(v30 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)v10 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v30 + 40) == SessionId )
      {
        *(_BYTE *)(v30 + 26) &= ~1u;
        if ( *(_QWORD *)(v30 + 32) )
          break;
      }
      v28 = !_BitScanReverse((unsigned int *)&v29, v27);
      if ( v28 )
        goto LABEL_39;
    }
    if ( !v30 )
    {
LABEL_39:
      if ( (*((_DWORD *)&v24->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v24, a2 + 24, SessionId, 0LL);
    }
    else
    {
      *(_BYTE *)(v30 + 32) |= 2u;
      if ( *(__int64 *)(v30 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v30);
      v42 = *(_DWORD *)(v30 + 88) & 0x1FFFF;
      *(_DWORD *)(v30 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v30 + 25) &= ~1u;
      *(_QWORD *)(v30 + 32) = 0LL;
      v31 = (signed __int64)(v30 - (unsigned __int64)v24->LockEntries) / 96;
      if ( v26 == 1 )
        v24->AbEntrySummary |= 1 << v31;
      else
        _InterlockedOr8((volatile signed __int8 *)&v24->AbOrphanedEntrySummary, 1 << v31);
    }
    --v24->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v24, a2 + 24, &v42);
    v28 = v24->SpecialApcDisable++ == -1;
    if ( v28 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
      KiCheckForKernelApcDelivery(v32);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)v19;
}
