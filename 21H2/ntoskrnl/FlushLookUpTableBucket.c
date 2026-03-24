/*
 * XREFs of FlushLookUpTableBucket @ 0x140375A48
 * Callers:
 *     LookUpTableFlushPartial @ 0x14076083C (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x1407D3FA0 (LookUpTableFlushComplete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402F2C90 (ExfAcquirePushLockExclusiveEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     FlattenEventEntryTree @ 0x140375E4C (FlattenEventEntryTree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F921C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     FlushEventEntryList @ 0x1407608B8 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r15
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR v7; // rdi
  KIRQL v8; // bp
  __int64 v9; // rcx
  unsigned int v10; // r12d
  char v11; // dl
  __int64 v12; // rsi
  int SessionId; // eax
  bool v14; // zf
  const EVENT_DESCRIPTOR *v15; // r13
  unsigned int v16; // eax
  unsigned int v17; // r15d
  char v18; // al
  struct _KTHREAD *v19; // rbx
  unsigned __int8 v20; // bp
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rsi
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdx
  unsigned __int8 AbOrphanedEntrySummary; // al
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v32; // eax
  int v33; // [rsp+80h] [rbp+8h] BYREF
  int v34; // [rsp+88h] [rbp+10h]
  int v35; // [rsp+90h] [rbp+18h]
  int v36; // [rsp+98h] [rbp+20h] BYREF

  v4 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  v7 = a1 + 272;
  v36 = 0;
  v8 = 0;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, a1 + 272, KeGetCurrentIrql(), 0LL);
  LOBYTE(v9) = CurrentThread->AbEntrySummary;
  v10 = -1;
  v35 = 0;
  if ( !(_BYTE)v9 )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v12 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v7);
      goto LABEL_42;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    LOBYTE(v9) = AbOrphanedEntrySummary | CurrentThread->AbEntrySummary;
  }
  v11 = v9;
  _BitScanForward((unsigned int *)&v9, (unsigned __int8)v9);
  v35 = v9;
  CurrentThread->AbEntrySummary = v11 & ~(1 << v9);
  v12 = (__int64)&CurrentThread->LockEntries[v9];
  if ( !v12 )
  {
LABEL_42:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    goto LABEL_9;
  }
  if ( v7 >= 0xFFFF800000000000uLL && byte_140C4F9C8[((v7 >> 39) & 0x1FF) - 256] == 1 )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *(_DWORD *)(v12 + 40) = SessionId;
  *(_QWORD *)(v12 + 32) = v7 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_9:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v7, (__int64)&v36, a4);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(1LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v7, v12, v7);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( !*(_BYTE *)(a1 + 373) )
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v15 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v4);
  *(_QWORD *)(a1 + 8 * v4) = 0LL;
  v16 = FlattenEventEntryTree(v15);
  *(_DWORD *)(a1 + 256) -= v16;
  v17 = v16;
  if ( !*(_BYTE *)(a1 + 373) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 280));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (v8 + 1));
          v14 = (v32 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v32;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
  }
  v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
    ExfTryToWakePushLock(v7);
  v33 = 0;
  v19 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v7) == 1 )
    v10 = MmGetSessionIdEx((__int64)v19->ApcState.Process);
  --v19->SpecialApcDisable;
  v20 = ++v19->AbAllocationRegionCount;
  v21 = ((char)v19->AbEntrySummary | (char)v19->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v14 = !_BitScanReverse((unsigned int *)&v22, v21);
    v34 = v22;
    if ( v14 )
      break;
    v23 = (__int64)&v19->LockEntries[v22];
    v21 &= ~(1 << v22);
    if ( (*(_BYTE *)(v23 + 26) & 1) != 0
      && (*(_DWORD *)(v23 + 32) & 1) == 0
      && (*(_QWORD *)(v23 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v23 + 40) == v10 )
    {
      *(_BYTE *)(v23 + 26) &= ~1u;
      if ( *(_QWORD *)(v23 + 32) )
      {
        if ( v23 )
        {
          *(_BYTE *)(v23 + 32) |= 2u;
          if ( *(__int64 *)(v23 + 32) < 0 )
            KiAbEntryRemoveFromTree(v23);
          v24 = *(_DWORD *)(v23 + 88) & 0x1FFFF;
          v25 = *(_DWORD *)(v23 + 88) & 0xFFFE0000;
          *(_BYTE *)(v23 + 25) &= ~1u;
          v33 = v24;
          *(_DWORD *)(v23 + 88) = v25;
          *(_QWORD *)(v23 + 32) = 0LL;
          v26 = (signed __int64)(v23 - (unsigned __int64)v19->LockEntries) / 96;
          if ( v20 == 1 )
            v19->AbEntrySummary |= 1 << v26;
          else
            _InterlockedOr8((volatile signed __int8 *)&v19->AbOrphanedEntrySummary, 1 << v26);
          goto LABEL_36;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v19->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v19, v7, v10, 0LL);
LABEL_36:
  --v19->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v19, v7, (__int64)&v33, (_DWORD *)1);
  v14 = v19->SpecialApcDisable++ == -1;
  if ( v14 && ($C459BD0D405E8E46662177FB3D0A143F *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery(1LL);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL), v15);
  return v17;
}
