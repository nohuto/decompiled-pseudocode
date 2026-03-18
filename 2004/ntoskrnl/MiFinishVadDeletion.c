/*
 * XREFs of MiFinishVadDeletion @ 0x1402209B0
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402135A0 (ExpAcquireSpinLockExclusive.c)
 *     MiDereferenceVad @ 0x14022104C (MiDereferenceVad.c)
 *     MiUnlockVad @ 0x14024AFC0 (MiUnlockVad.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x140556930 (MiUnlockAndDereferenceNestedVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiReturnVadQuota @ 0x1405F8B20 (MiReturnVadQuota.c)
 *     MiRemoveVadCharges @ 0x1405F8D70 (MiRemoveVadCharges.c)
 *     MiDeleteImageHotPatchState @ 0x1408C651C (MiDeleteImageHotPatchState.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  __int64 v24; // r8
  _DWORD *SchedulerAssist; // r9
  _QWORD *v26; // r13
  __int64 **v27; // r12
  _KPROCESS *v28; // rbx
  LONG *v29; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 *v31; // rcx
  __int64 v32; // r12
  unsigned int v33; // ecx
  int v34; // eax
  struct _KTHREAD *v35; // r14
  struct _KTHREAD *v36; // rdi
  ULONG_PTR v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rbx
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  __int64 *v44; // rdx
  _QWORD *v45; // rbx
  int v46; // [rsp+30h] [rbp-68h] BYREF
  int v47; // [rsp+34h] [rbp-64h]
  int v48; // [rsp+38h] [rbp-60h] BYREF
  int v49; // [rsp+3Ch] [rbp-5Ch]
  struct _KTHREAD *v50; // [rsp+40h] [rbp-58h]
  unsigned __int64 v51; // [rsp+48h] [rbp-50h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+A0h] [rbp+8h]
  int v53; // [rsp+A8h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v5 = P[12];
  v50 = CurrentThread;
  v8 = 0;
  Process = CurrentThread->ApcState.Process;
  if ( (v5 & 4) != 0 )
  {
    v10 = 1;
    v53 = 1;
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
    v53 = 0;
  }
  if ( a3 <= Process[1].ActiveProcessors.Bitmap[5] && (a4 & 1) == 0 )
  {
    Process[1].Affinity.Bitmap[1] -= a3 - a2 + 1;
    v5 = P[12];
  }
  v12 = Process[1].ActiveProcessorsPadding[8];
  v51 = v12;
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
  v46 = 0;
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
    v46 = *(_DWORD *)(v22 + 88) & 0x1FFFF;
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
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, v14, &v46);
  v20 = v15->SpecialApcDisable++ == -1;
  if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery();
  v20 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v26 = 0LL;
  if ( v53 == 1 )
  {
    v27 = (__int64 **)(P + 14);
    v28 = KeGetCurrentThread()->ApcState.Process;
    if ( (v28[1].IdealProcessorPadding[10] & 7) == 2 )
      v29 = &dword_140C4F580;
    else
      v29 = (LONG *)&v28[1].IdealNode[2];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v24 = (unsigned int)SchedulerAssist[5];
      SchedulerAssist[5] = v24 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v29, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v29, CurrentIrql, v24, (__int64)SchedulerAssist);
    v29[1] = 0;
    v31 = *v27;
    if ( *v27 )
    {
      do
      {
        v44 = (__int64 *)*v31;
        if ( (v31[8] & 1) != 0 )
        {
          *v31 = (__int64)v26;
          v26 = v31;
          *v27 = v44;
        }
        else
        {
          v27 = (__int64 **)v31;
        }
        v31 = v44;
      }
      while ( v44 );
    }
    MiUnlockWorkingSetExclusive((__int64)&v28[1].ActiveProcessorsPadding[6], CurrentIrql);
    v32 = (__int64)v50;
    *((_QWORD *)P + 2) = -1LL;
    if ( v26 )
      --*(_WORD *)(v32 + 484);
    v33 = P[12];
    if ( (v33 & 0x100000) == 0 && (v33 & 0x70) == 0x20 && (v33 & 0x400000) != 0 )
    {
      MiUnlockVad(v32, P);
      MiDeleteImageHotPatchState(P);
      --*(_WORD *)(v32 + 486);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 10), 0LL);
      *(_BYTE *)(v32 + 1304) |= 0x80u;
    }
  }
  if ( (a4 & 2) != 0 )
  {
    MiUnlockAndDereferenceNestedVad(P);
  }
  else
  {
    v34 = MiDereferenceVad(P);
    v35 = KeGetCurrentThread();
    v49 = v34;
    LOBYTE(v35[1].Queue) &= ~0x80u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(P + 10);
    v48 = 0;
    v36 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(P + 10)) == 1 )
      v37 = (unsigned int)MmGetSessionIdEx((__int64)v36->ApcState.Process);
    else
      v37 = 0xFFFFFFFFLL;
    --v36->SpecialApcDisable;
    ++v36->AbAllocationRegionCount;
    LODWORD(v38) = ((char)v36->AbEntrySummary | (char)v36->AbOrphanedEntrySummary) ^ 0x3F;
    AbAllocationRegionCount = v36->AbAllocationRegionCount;
    v39 = (unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL;
    v20 = !_BitScanReverse((unsigned int *)&v40, v38);
    v47 = v40;
    if ( v20 )
      goto LABEL_82;
    while ( 1 )
    {
      v41 = (__int64)&v36->LockEntries[v40];
      v38 = ~(1 << v40) & (unsigned int)v38;
      if ( (*(_BYTE *)(v41 + 26) & 1) != 0
        && (*(_DWORD *)(v41 + 32) & 1) == 0
        && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v39
        && *(_DWORD *)(v41 + 40) == (_DWORD)v37 )
      {
        *(_BYTE *)(v41 + 26) &= ~1u;
        if ( *(_QWORD *)(v41 + 32) )
          break;
      }
      v20 = !_BitScanReverse((unsigned int *)&v40, v38);
      v47 = v40;
      if ( v20 )
        goto LABEL_82;
    }
    if ( !v41 )
    {
LABEL_82:
      if ( (*((_DWORD *)&v36->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v36, (ULONG_PTR)(P + 10), v37, 0LL);
    }
    else
    {
      *(_BYTE *)(v41 + 32) |= 2u;
      if ( *(__int64 *)(v41 + 32) < 0 )
        KiAbEntryRemoveFromTree(v41, v38, v39);
      v48 = *(_DWORD *)(v41 + 88) & 0x1FFFF;
      *(_DWORD *)(v41 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v41 + 25) &= ~1u;
      *(_QWORD *)(v41 + 32) = 0LL;
      v42 = (signed __int64)(v41 - (unsigned __int64)v36->LockEntries) / 96;
      if ( AbAllocationRegionCount == 1 )
        v36->AbEntrySummary |= 1 << v42;
      else
        _InterlockedOr8((volatile signed __int8 *)&v36->AbOrphanedEntrySummary, 1 << v42);
    }
    --v36->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v36, (__int64)(P + 10), &v48);
    v20 = v36->SpecialApcDisable++ == -1;
    if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v36->ApcState.ApcListHead[0].Flink != &v36->152 )
      KiCheckForKernelApcDelivery();
    v20 = v35->SpecialApcDisable++ == -1;
    if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v35->ApcState.ApcListHead[0].Flink != &v35->152 )
      KiCheckForKernelApcDelivery();
    if ( v49 == 1 )
      ExFreePoolWithTag(P, 0);
  }
  if ( v26 )
  {
    do
    {
      v45 = (_QWORD *)*v26;
      KeSignalGate(v26 + 1, 1LL);
      v26 = v45;
    }
    while ( v45 );
    KeLeaveCriticalRegionThread((__int64)v50);
  }
  if ( v53 == 1 )
  {
    v43 = v51;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v51 + 280), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v43 + 312), 0, 0);
  }
}
