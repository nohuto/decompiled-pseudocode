/*
 * XREFs of MiFinishVadDeletion @ 0x140279A00
 * Callers:
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14026C5F0 (ExpAcquireSpinLockExclusive.c)
 *     MiDereferenceVad @ 0x14027A09C (MiDereferenceVad.c)
 *     MiUnlockVad @ 0x1402A3FF0 (MiUnlockVad.c)
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x1405562E0 (MiUnlockAndDereferenceNestedVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReturnVadQuota @ 0x14062DB60 (MiReturnVadQuota.c)
 *     MiRemoveVadCharges @ 0x14062DDB0 (MiRemoveVadCharges.c)
 *     MiDeleteImageHotPatchState @ 0x1408C51CC (MiDeleteImageHotPatchState.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFinishVadDeletion(unsigned int *P, __int64 a2, unsigned __int64 a3, char a4)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v5; // r10d
  unsigned int v8; // edx
  _KPROCESS *Process; // rbx
  int v10; // ecx
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  unsigned int v13; // ecx
  ULONG_PTR v14; // r14
  struct _KTHREAD *v15; // rdi
  ULONG_PTR SessionId; // r9
  unsigned __int8 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r8
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rbx
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  __int64 v25; // r8
  _DWORD *SchedulerAssist; // r9
  _QWORD *v27; // r13
  __int64 **v28; // r12
  _KPROCESS *v29; // rbx
  LONG *v30; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 *v32; // rcx
  __int64 v33; // r12
  unsigned int v34; // ecx
  int v35; // eax
  struct _KTHREAD *v36; // r14
  struct _KTHREAD *v37; // rdi
  ULONG_PTR v38; // r9
  __int64 v39; // rdx
  unsigned __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  __int64 *v46; // rdx
  _QWORD *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // [rsp+30h] [rbp-68h] BYREF
  int v52; // [rsp+34h] [rbp-64h]
  int v53; // [rsp+38h] [rbp-60h] BYREF
  int v54; // [rsp+3Ch] [rbp-5Ch]
  struct _KTHREAD *v55; // [rsp+40h] [rbp-58h]
  unsigned __int64 v56; // [rsp+48h] [rbp-50h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+A0h] [rbp+8h]
  int v58; // [rsp+A8h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v5 = P[12];
  v55 = CurrentThread;
  v8 = 0;
  Process = CurrentThread->ApcState.Process;
  if ( (v5 & 4) != 0 )
  {
    v10 = 1;
    v58 = 1;
    if ( (v5 & 0x100000) == 0 )
    {
      v11 = P[13];
      LODWORD(v11) = v11 & 0x7FFFFFFF;
      if ( (v11 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) < 0x7FFFFFFFDLL )
        v8 = 1;
      v10 = 1;
    }
  }
  else
  {
    v10 = 0;
    v58 = 0;
  }
  if ( a3 <= Process[1].ActiveProcessors.Bitmap[5] && (a4 & 1) == 0 )
  {
    Process[1].Affinity.Bitmap[1] -= a3 - a2 + 1;
    v5 = P[12];
  }
  v12 = Process[1].ActiveProcessorsPadding[8];
  v56 = v12;
  if ( (v5 & 0x100000) == 0 && (v5 & 0x70) == 0x20 && (v5 & 0x200000) != 0 )
    --*(_QWORD *)(v12 + 384);
  if ( v10 == 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 280));
    v13 = P[12];
    if ( MiVadPageSizes[(v13 >> 18) & 3] == 16 )
    {
      if ( (v13 & 0x100000) != 0 )
        --*(_QWORD *)(v12 + 424);
      else
        --*(_QWORD *)(v12 + 432);
    }
    MiReturnVadQuota(P, Process, v8);
    MiRemoveVadCharges(P, Process);
  }
  LOBYTE(CurrentThread[1].Queue) &= ~1u;
  v14 = (ULONG_PTR)&Process[1].Affinity.Bitmap[7];
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[7], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[7]);
  v51 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[1].Affinity.Bitmap[7]) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v15->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v15->SpecialApcDisable;
  v17 = ++v15->AbAllocationRegionCount;
  LODWORD(v18) = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  v19 = v14 & 0x7FFFFFFFFFFFFFFCLL;
  v20 = !_BitScanReverse((unsigned int *)&v21, v18);
  if ( v20 )
    goto LABEL_79;
  while ( 1 )
  {
    v22 = (__int64)&v15->LockEntries[v21];
    v18 = ~(1 << v21) & (unsigned int)v18;
    if ( (*(_BYTE *)(v22 + 26) & 1) != 0
      && (*(_DWORD *)(v22 + 32) & 1) == 0
      && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v19
      && *(_DWORD *)(v22 + 40) == (_DWORD)SessionId )
    {
      *(_BYTE *)(v22 + 26) &= ~1u;
      if ( *(_QWORD *)(v22 + 32) )
        break;
    }
    v20 = !_BitScanReverse((unsigned int *)&v21, v18);
    if ( v20 )
      goto LABEL_79;
  }
  if ( !v22 )
  {
LABEL_79:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, SessionId, 0LL);
  }
  else
  {
    *(_BYTE *)(v22 + 32) |= 2u;
    if ( *(__int64 *)(v22 + 32) < 0 )
      KiAbEntryRemoveFromTree(v22, v18, v19);
    v51 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
    *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v22 + 25) &= ~1u;
    *(_QWORD *)(v22 + 32) = 0LL;
    v23 = 1 << ((signed __int64)(v22 - (unsigned __int64)v15->LockEntries) / 96);
    if ( v17 == 1 )
      v15->AbEntrySummary |= v23;
    else
      _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, v23);
  }
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, v14, &v51);
  v20 = v15->SpecialApcDisable++ == -1;
  if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery(v24);
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery(v24);
  v27 = 0LL;
  if ( v58 == 1 )
  {
    v28 = (__int64 **)(P + 14);
    v29 = KeGetCurrentThread()->ApcState.Process;
    if ( (v29[1].IdealProcessorPadding[10] & 7) == 2 )
      v30 = &dword_140C4F6C0;
    else
      v30 = (LONG *)&v29[1].IdealNode[2];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v25 = (unsigned int)SchedulerAssist[5];
      SchedulerAssist[5] = v25 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v30, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v30, CurrentIrql, v25, SchedulerAssist);
    v30[1] = 0;
    v32 = *v28;
    if ( *v28 )
    {
      do
      {
        v46 = (__int64 *)*v32;
        if ( (v32[8] & 1) != 0 )
        {
          *v32 = (__int64)v27;
          v27 = v32;
          *v28 = v46;
        }
        else
        {
          v28 = (__int64 **)v32;
        }
        v32 = v46;
      }
      while ( v46 );
    }
    MiUnlockWorkingSetExclusive((__int64)&v29[1].ActiveProcessorsPadding[6], CurrentIrql);
    v33 = (__int64)v55;
    *((_QWORD *)P + 2) = -1LL;
    if ( v27 )
      --*(_WORD *)(v33 + 484);
    v34 = P[12];
    if ( (v34 & 0x100000) == 0 && (v34 & 0x70) == 0x20 && (v34 & 0x400000) != 0 )
    {
      MiUnlockVad(v33, P);
      MiDeleteImageHotPatchState(P);
      --*(_WORD *)(v33 + 486);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 10), 0LL);
      *(_BYTE *)(v33 + 1304) |= 0x80u;
    }
  }
  if ( (a4 & 2) != 0 )
  {
    MiUnlockAndDereferenceNestedVad(P);
  }
  else
  {
    v35 = MiDereferenceVad(P);
    v36 = KeGetCurrentThread();
    v54 = v35;
    LOBYTE(v36[1].Queue) &= ~0x80u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(P + 10);
    v53 = 0;
    v37 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(P + 10)) == 1 )
      v38 = (unsigned int)MmGetSessionIdEx((__int64)v37->ApcState.Process);
    else
      v38 = 0xFFFFFFFFLL;
    --v37->SpecialApcDisable;
    ++v37->AbAllocationRegionCount;
    LODWORD(v39) = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
    AbAllocationRegionCount = v37->AbAllocationRegionCount;
    v40 = (unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL;
    v20 = !_BitScanReverse((unsigned int *)&v41, v39);
    v52 = v41;
    if ( v20 )
      goto LABEL_82;
    while ( 1 )
    {
      v42 = (__int64)&v37->LockEntries[v41];
      v39 = ~(1 << v41) & (unsigned int)v39;
      if ( (*(_BYTE *)(v42 + 26) & 1) != 0
        && (*(_DWORD *)(v42 + 32) & 1) == 0
        && (*(_QWORD *)(v42 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v40
        && *(_DWORD *)(v42 + 40) == (_DWORD)v38 )
      {
        *(_BYTE *)(v42 + 26) &= ~1u;
        if ( *(_QWORD *)(v42 + 32) )
          break;
      }
      v20 = !_BitScanReverse((unsigned int *)&v41, v39);
      v52 = v41;
      if ( v20 )
        goto LABEL_82;
    }
    if ( !v42 )
    {
LABEL_82:
      if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v37, (ULONG_PTR)(P + 10), v38, 0LL);
    }
    else
    {
      *(_BYTE *)(v42 + 32) |= 2u;
      if ( *(__int64 *)(v42 + 32) < 0 )
        KiAbEntryRemoveFromTree(v42, v39, v40);
      v53 = *(_DWORD *)(v42 + 88) & 0x1FFFF;
      *(_DWORD *)(v42 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v42 + 25) &= ~1u;
      *(_QWORD *)(v42 + 32) = 0LL;
      v43 = (signed __int64)(v42 - (unsigned __int64)v37->LockEntries) / 96;
      if ( AbAllocationRegionCount == 1 )
        v37->AbEntrySummary |= 1 << v43;
      else
        _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v43);
    }
    --v37->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v37, (__int64)(P + 10), &v53);
    v20 = v37->SpecialApcDisable++ == -1;
    if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
      KiCheckForKernelApcDelivery(v44);
    v20 = v36->SpecialApcDisable++ == -1;
    if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
      KiCheckForKernelApcDelivery(v44);
    if ( v54 == 1 )
      ExFreePoolWithTag(P, 0);
  }
  if ( v27 )
  {
    do
    {
      v47 = (_QWORD *)*v27;
      KeSignalGate(v27 + 1, 1LL);
      v27 = v47;
    }
    while ( v47 );
    KeLeaveCriticalRegionThread((__int64)v55, v48, v49, v50);
  }
  if ( v58 == 1 )
  {
    v45 = v56;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v56 + 280), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v45 + 312), 0, 0);
  }
}
