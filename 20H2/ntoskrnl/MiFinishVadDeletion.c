/*
 * XREFs of MiFinishVadDeletion @ 0x14022EE20
 * Callers:
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiDereferenceVad @ 0x14022F4BC (MiDereferenceVad.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiUnlockAndDereferenceNestedVad @ 0x14055A300 (MiUnlockAndDereferenceNestedVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiRemoveVadCharges @ 0x1406247E0 (MiRemoveVadCharges.c)
 *     MiReturnVadQuota @ 0x140625D80 (MiReturnVadQuota.c)
 *     MiDeleteImageHotPatchState @ 0x1408CC35C (MiDeleteImageHotPatchState.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  unsigned int v18; // edx
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rbx
  unsigned __int8 v22; // al
  __int64 v23; // r8
  _QWORD *v24; // r13
  __int64 **v25; // r12
  _KPROCESS *v26; // rbx
  LONG *v27; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 *v29; // rcx
  __int64 v30; // r12
  unsigned int v31; // ecx
  int v32; // eax
  struct _KTHREAD *v33; // r14
  struct _KTHREAD *v34; // rdi
  ULONG_PTR v35; // r9
  unsigned int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rdx
  unsigned __int64 v40; // rcx
  _DWORD *SchedulerAssist; // r9
  __int64 *v42; // rdx
  _QWORD *v43; // rbx
  int v44; // [rsp+30h] [rbp-68h] BYREF
  int v45; // [rsp+34h] [rbp-64h]
  int v46; // [rsp+38h] [rbp-60h] BYREF
  int v47; // [rsp+3Ch] [rbp-5Ch]
  struct _KTHREAD *v48; // [rsp+40h] [rbp-58h]
  unsigned __int64 v49; // [rsp+48h] [rbp-50h]
  unsigned __int8 AbAllocationRegionCount; // [rsp+A0h] [rbp+8h]
  int v51; // [rsp+A8h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  v5 = P[12];
  v48 = CurrentThread;
  v8 = 0;
  Process = CurrentThread->ApcState.Process;
  if ( (v5 & 4) != 0 )
  {
    v10 = 1;
    v51 = 1;
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
    v51 = 0;
  }
  if ( a3 <= Process[1].ActiveProcessors.Bitmap[5] && (a4 & 1) == 0 )
  {
    Process[1].Affinity.Bitmap[1] -= a3 - a2 + 1;
    v5 = P[12];
  }
  v12 = Process[1].ActiveProcessorsPadding[8];
  v49 = v12;
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
  v44 = 0;
  v15 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)&Process[1].Affinity.Bitmap[7]) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx((__int64)v15->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v15->SpecialApcDisable;
  v17 = ++v15->AbAllocationRegionCount;
  v18 = ((char)v15->AbEntrySummary | (char)v15->AbOrphanedEntrySummary) ^ 0x3F;
  v19 = !_BitScanReverse((unsigned int *)&v20, v18);
  if ( v19 )
    goto LABEL_79;
  while ( 1 )
  {
    v21 = (__int64)&v15->LockEntries[v20];
    v18 &= ~(1 << v20);
    if ( (*(_BYTE *)(v21 + 26) & 1) != 0
      && (*(_DWORD *)(v21 + 32) & 1) == 0
      && (*(_QWORD *)(v21 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v14 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v21 + 40) == (_DWORD)SessionId )
    {
      *(_BYTE *)(v21 + 26) &= ~1u;
      if ( *(_QWORD *)(v21 + 32) )
        break;
    }
    v19 = !_BitScanReverse((unsigned int *)&v20, v18);
    if ( v19 )
      goto LABEL_79;
  }
  if ( !v21 )
  {
LABEL_79:
    if ( (*((_DWORD *)&v15->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v15, v14, SessionId, 0LL);
  }
  else
  {
    *(_BYTE *)(v21 + 32) |= 2u;
    if ( *(__int64 *)(v21 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v21);
    v44 = *(_DWORD *)(v21 + 88) & 0x1FFFF;
    *(_DWORD *)(v21 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v21 + 25) &= ~1u;
    *(_QWORD *)(v21 + 32) = 0LL;
    v22 = 1 << ((signed __int64)(v21 - (unsigned __int64)v15->LockEntries) / 96);
    if ( v17 == 1 )
      v15->AbEntrySummary |= v22;
    else
      _InterlockedOr8((volatile signed __int8 *)&v15->AbOrphanedEntrySummary, v22);
  }
  --v15->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v15, v14, &v44);
  v19 = v15->SpecialApcDisable++ == -1;
  if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v15->ApcState.ApcListHead[0].Flink != &v15->152 )
    KiCheckForKernelApcDelivery();
  v19 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  v24 = 0LL;
  if ( v51 == 1 )
  {
    v25 = (__int64 **)(P + 14);
    v26 = KeGetCurrentThread()->ApcState.Process;
    if ( (v26[1].IdealProcessorPadding[10] & 7) == 2 )
      v27 = &dword_140C4F600;
    else
      v27 = (LONG *)&v26[1].IdealNode[2];
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v23 = (unsigned int)SchedulerAssist[5];
      SchedulerAssist[5] = v23 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v27, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v27, CurrentIrql, v23);
    v27[1] = 0;
    v29 = *v25;
    if ( *v25 )
    {
      do
      {
        v42 = (__int64 *)*v29;
        if ( (v29[8] & 1) != 0 )
        {
          *v29 = (__int64)v24;
          v24 = v29;
          *v25 = v42;
        }
        else
        {
          v25 = (__int64 **)v29;
        }
        v29 = v42;
      }
      while ( v42 );
    }
    MiUnlockWorkingSetExclusive(&v26[1].ActiveProcessorsPadding[6], CurrentIrql);
    v30 = (__int64)v48;
    *((_QWORD *)P + 2) = -1LL;
    if ( v24 )
      --*(_WORD *)(v30 + 484);
    v31 = P[12];
    if ( (v31 & 0x100000) == 0 && (v31 & 0x70) == 0x20 && (v31 & 0x400000) != 0 )
    {
      MiUnlockVad(v30, P);
      MiDeleteImageHotPatchState(P);
      --*(_WORD *)(v30 + 486);
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 10), 0LL);
      *(_BYTE *)(v30 + 1304) |= 0x80u;
    }
  }
  if ( (a4 & 2) != 0 )
  {
    MiUnlockAndDereferenceNestedVad(P);
  }
  else
  {
    v32 = MiDereferenceVad(P);
    v33 = KeGetCurrentThread();
    v47 = v32;
    LOBYTE(v33[1].Queue) &= ~0x80u;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)P + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(P + 10);
    v46 = 0;
    v34 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)(P + 10)) == 1 )
      v35 = (unsigned int)MmGetSessionIdEx((__int64)v34->ApcState.Process);
    else
      v35 = 0xFFFFFFFFLL;
    --v34->SpecialApcDisable;
    ++v34->AbAllocationRegionCount;
    v36 = ((char)v34->AbEntrySummary | (char)v34->AbOrphanedEntrySummary) ^ 0x3F;
    AbAllocationRegionCount = v34->AbAllocationRegionCount;
    v19 = !_BitScanReverse((unsigned int *)&v37, v36);
    v45 = v37;
    if ( v19 )
      goto LABEL_82;
    while ( 1 )
    {
      v38 = (__int64)&v34->LockEntries[v37];
      v36 &= ~(1 << v37);
      if ( (*(_BYTE *)(v38 + 26) & 1) != 0
        && (*(_DWORD *)(v38 + 32) & 1) == 0
        && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == ((unsigned __int64)(P + 10) & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v38 + 40) == (_DWORD)v35 )
      {
        *(_BYTE *)(v38 + 26) &= ~1u;
        if ( *(_QWORD *)(v38 + 32) )
          break;
      }
      v19 = !_BitScanReverse((unsigned int *)&v37, v36);
      v45 = v37;
      if ( v19 )
        goto LABEL_82;
    }
    if ( !v38 )
    {
LABEL_82:
      if ( (*((_DWORD *)&v34->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)v34, (ULONG_PTR)(P + 10), v35, 0LL);
    }
    else
    {
      *(_BYTE *)(v38 + 32) |= 2u;
      if ( *(__int64 *)(v38 + 32) < 0 )
        KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
      v46 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
      *(_DWORD *)(v38 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v38 + 25) &= ~1u;
      *(_QWORD *)(v38 + 32) = 0LL;
      v39 = (signed __int64)(v38 - (unsigned __int64)v34->LockEntries) / 96;
      if ( AbAllocationRegionCount == 1 )
        v34->AbEntrySummary |= 1 << v39;
      else
        _InterlockedOr8((volatile signed __int8 *)&v34->AbOrphanedEntrySummary, 1 << v39);
    }
    --v34->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v34, (__int64)(P + 10), &v46);
    v19 = v34->SpecialApcDisable++ == -1;
    if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
      KiCheckForKernelApcDelivery();
    v19 = v33->SpecialApcDisable++ == -1;
    if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
      KiCheckForKernelApcDelivery();
    if ( v47 == 1 )
      ExFreePoolWithTag(P, 0);
  }
  if ( v24 )
  {
    do
    {
      v43 = (_QWORD *)*v24;
      KeSignalGate(v24 + 1, 1LL);
      v24 = v43;
    }
    while ( v43 );
    KeLeaveCriticalRegionThread((__int64)v48);
  }
  if ( v51 == 1 )
  {
    v40 = v49;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v49 + 280), 0xFFFFFFFF) == 1 )
      KeSetEvent(*(PRKEVENT *)(v40 + 312), 0, 0);
  }
}
