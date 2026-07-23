/*
 * XREFs of FlushLookUpTableBucket @ 0x140372368
 * Callers:
 *     LookUpTableFlushPartial @ 0x1407491AC (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x1407BE100 (LookUpTableFlushComplete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     FlattenEventEntryTree @ 0x14037276C (FlattenEventEntryTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     FlushEventEntryList @ 0x140749228 (FlushEventEntryList.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  _DWORD *v14; // r9
  bool v15; // zf
  const EVENT_DESCRIPTOR *v16; // r13
  unsigned int v17; // eax
  unsigned int v18; // r15d
  char v19; // al
  struct _KTHREAD *v20; // rbx
  unsigned __int8 v21; // bp
  unsigned int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // rsi
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // r8
  _DWORD *v30; // r9
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v36; // eax
  int v37; // [rsp+80h] [rbp+8h] BYREF
  int v38; // [rsp+88h] [rbp+10h]
  int v39; // [rsp+90h] [rbp+18h]
  int v40; // [rsp+98h] [rbp+20h] BYREF

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v5 = a1 + 272;
  v40 = 0;
  v6 = 0;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 272, KeGetCurrentIrql(), 0LL);
  LOBYTE(v7) = CurrentThread->AbEntrySummary;
  v8 = -1;
  v39 = 0;
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
  v39 = v7;
  CurrentThread->AbEntrySummary = v9 & ~(1 << v7);
  v10 = (__int64)&CurrentThread->LockEntries[v7];
  if ( !v10 )
  {
LABEL_42:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_9;
  }
  if ( v5 >= 0xFFFF800000000000uLL && byte_140C4F908[((v5 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v10 + 40) = SessionId;
  *(_QWORD *)(v10 + 32) = v5 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_9:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v5, &v40);
  v15 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v15 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(1LL, v12, v13, v14);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v5, v10, v5);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( !*(_BYTE *)(a1 + 373) )
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v16 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v17 = FlattenEventEntryTree(v16);
  *(_DWORD *)(a1 + 256) -= v17;
  v18 = v17;
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
          v36 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v15 = (v36 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v36;
          if ( v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v6);
  }
  v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
    ExfTryToWakePushLock(v5);
  v37 = 0;
  v20 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v5) == 1 )
    v8 = MmGetSessionIdEx((__int64)v20->ApcState.Process);
  --v20->SpecialApcDisable;
  v21 = ++v20->AbAllocationRegionCount;
  v22 = ((char)v20->AbEntrySummary | (char)v20->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v15 = !_BitScanReverse((unsigned int *)&v23, v22);
    v38 = v23;
    if ( v15 )
      break;
    v24 = (__int64)&v20->LockEntries[v23];
    v22 &= ~(1 << v23);
    if ( (*(_BYTE *)(v24 + 26) & 1) != 0
      && (*(_DWORD *)(v24 + 32) & 1) == 0
      && (*(_QWORD *)(v24 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v24 + 40) == v8 )
    {
      *(_BYTE *)(v24 + 26) &= ~1u;
      if ( *(_QWORD *)(v24 + 32) )
      {
        if ( v24 )
        {
          *(_BYTE *)(v24 + 32) |= 2u;
          if ( *(__int64 *)(v24 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v24);
          v25 = *(_DWORD *)(v24 + 88) & 0x1FFFF;
          v26 = *(_DWORD *)(v24 + 88) & 0xFFFE0000;
          *(_BYTE *)(v24 + 25) &= ~1u;
          v37 = v25;
          *(_DWORD *)(v24 + 88) = v26;
          *(_QWORD *)(v24 + 32) = 0LL;
          v27 = (signed __int64)(v24 - (unsigned __int64)v20->LockEntries) / 96;
          if ( v21 == 1 )
            v20->AbEntrySummary |= 1 << v27;
          else
            _InterlockedOr8((volatile signed __int8 *)&v20->AbOrphanedEntrySummary, 1 << v27);
          goto LABEL_36;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v20->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v20, v5, v8, 0LL);
LABEL_36:
  --v20->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v20, v5, &v37);
  v15 = v20->SpecialApcDisable++ == -1;
  if ( v15 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v20->ApcState.ApcListHead[0].Flink != &v20->152 )
    KiCheckForKernelApcDelivery(1LL, v28, v29, v30);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL), v16);
  return v18;
}
