/*
 * XREFs of FlushLookUpTableBucket @ 0x140373178
 * Callers:
 *     LookUpTableFlushPartial @ 0x14074D5CC (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x1407C1320 (LookUpTableFlushComplete.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140274190 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     FlattenEventEntryTree @ 0x14037357C (FlattenEventEntryTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     FlushEventEntryList @ 0x14074D648 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // r15
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v5; // rdi
  KIRQL v6; // bp
  __int64 v7; // rcx
  unsigned int v8; // r12d
  char v9; // dl
  __int64 v10; // rsi
  int SessionId; // eax
  bool v12; // zf
  const EVENT_DESCRIPTOR *v13; // r13
  unsigned int v14; // eax
  unsigned int v15; // r15d
  char v16; // al
  struct _KTHREAD *v17; // rbx
  unsigned __int8 v18; // bp
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rsi
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  int v31; // [rsp+80h] [rbp+8h] BYREF
  int v32; // [rsp+88h] [rbp+10h]
  int v33; // [rsp+90h] [rbp+18h]
  int v34; // [rsp+98h] [rbp+20h] BYREF

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 272;
  v34 = 0;
  v6 = 0;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 272, KeGetCurrentIrql(), 0LL);
  LOBYTE(v7) = CurrentThread->AbEntrySummary;
  v8 = -1;
  v33 = 0;
  if ( !(_BYTE)v7 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v10 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v5);
      goto LABEL_42;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v7) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v9 = v7;
  _BitScanForward((unsigned int *)&v7, (unsigned __int8)v7);
  v33 = v7;
  CurrentThread->AbEntrySummary = v9 & ~(1 << v7);
  v10 = (__int64)&CurrentThread->LockEntries[v7];
  if ( !v10 )
  {
LABEL_42:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_9;
  }
  if ( v5 >= 0xFFFF800000000000uLL && byte_140C4F7C8[((v5 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v10 + 40) = SessionId;
  *(_QWORD *)(v10 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_9:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5, &v34);
  v12 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v12 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v10, v5);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( !*(_BYTE *)(a1 + 373) )
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v13 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v14 = FlattenEventEntryTree(v13);
  *(_DWORD *)(a1 + 256) -= v14;
  v15 = v14;
  if ( !*(_BYTE *)(a1 + 373) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 280));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v30 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v12 = (v30 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v30;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  v16 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v16 & 2) != 0 && (v16 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  v31 = 0;
  v17 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
    v8 = MmGetSessionIdEx((__int64)v17->ApcState.Process);
  --v17->SpecialApcDisable;
  v18 = ++v17->AbAllocationRegionCount;
  v19 = ((char)v17->AbEntrySummary | (char)v17->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v12 = !_BitScanReverse((unsigned int *)&v20, v19);
    v32 = v20;
    if ( v12 )
      break;
    v21 = (__int64)&v17->LockEntries[v20];
    v19 &= ~(1 << v20);
    if ( (*(_BYTE *)(v21 + 26) & 1) != 0
      && (*(_DWORD *)(v21 + 32) & 1) == 0
      && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v21 + 40) == v8 )
    {
      *(_BYTE *)(v21 + 26) &= ~1u;
      if ( *(_QWORD *)(v21 + 32) )
      {
        if ( v21 )
        {
          *(_BYTE *)(v21 + 32) |= 2u;
          if ( *(__int64 *)(v21 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
          v22 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
          v23 = *(_DWORD *)(v21 + 88) & 0xFFFE0000;
          *(_BYTE *)(v21 + 25) &= ~1u;
          v31 = v22;
          *(_DWORD *)(v21 + 88) = v23;
          *(_QWORD *)(v21 + 32) = 0LL;
          v24 = (signed __int64)(v21 - (unsigned __int64)v17->LockEntries) / 96;
          if ( v18 == 1 )
            v17->AbEntrySummary |= 1 << v24;
          else
            _InterlockedOr8((volatile signed __int8 *)&v17->AbOrphanedEntrySummary, 1 << v24);
          goto LABEL_36;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v17->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v17, v5, v8, 0LL);
LABEL_36:
  --v17->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v17, v5, &v31);
  v12 = v17->SpecialApcDisable++ == -1;
  if ( v12 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v17->ApcState.ApcListHead[0].Flink != &v17->152 )
    KiCheckForKernelApcDelivery(1LL);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL), v13);
  return v15;
}
