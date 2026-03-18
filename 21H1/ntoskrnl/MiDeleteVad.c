/*
 * XREFs of MiDeleteVad @ 0x14026B790
 * Callers:
 *     MiFreeVadRange @ 0x1402AB094 (MiFreeVadRange.c)
 *     MiReserveUserMemory @ 0x1406343A0 (MiReserveUserMemory.c)
 *     MiCleanVad @ 0x1406357F0 (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x140635E10 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140636140 (MiUnmapVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x14063A73C (MiFreeToSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x140756C50 (MiMapLockedPagesInUserSpace.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x1407594EC (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407AD768 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C3E54 (MiCoalescePlaceholderAllocations.c)
 *     MiCreateEnclave @ 0x1408CDE8C (MiCreateEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D3A38 (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D4A64 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiVadMapsLargeImage @ 0x14026C490 (MiVadMapsLargeImage.c)
 *     ExpAcquireSpinLockExclusive @ 0x14026C5F0 (ExpAcquireSpinLockExclusive.c)
 *     MiFinishVadDeletion @ 0x140279A00 (MiFinishVadDeletion.c)
 *     MiVadCommitCrossPartition @ 0x14027D378 (MiVadCommitCrossPartition.c)
 *     MiReturnFullProcessCharges @ 0x14027D4B0 (MiReturnFullProcessCharges.c)
 *     RtlAvlRemoveNode @ 0x140296CC0 (RtlAvlRemoveNode.c)
 *     MiDeletePagablePteRange @ 0x14029B4A0 (MiDeletePagablePteRange.c)
 *     MiSetVadFlags @ 0x1402A1110 (MiSetVadFlags.c)
 *     MiDecrementSubsections @ 0x1402A32F0 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiUnlockVad @ 0x1402A3FF0 (MiUnlockVad.c)
 *     MiControlAreaRequiresCharge @ 0x1402A41F8 (MiControlAreaRequiresCharge.c)
 *     MiDrainSystemAccessLog @ 0x1402A4C10 (MiDrainSystemAccessLog.c)
 *     MiClearVadBits @ 0x1402A9D00 (MiClearVadBits.c)
 *     MiCaptureDeleteHierarchy @ 0x1402AAE90 (MiCaptureDeleteHierarchy.c)
 *     MiIsVadLargePrivate @ 0x1402FE744 (MiIsVadLargePrivate.c)
 *     MiDereferenceExtendInfo @ 0x14031F914 (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x140323908 (MiDereferenceControlArea.c)
 *     KeAbPostReleaseEx @ 0x140340F60 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F1844 (EtwTraceAutoBoostEntryExhaustion.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140524E04 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052BAFC (MiLogPerfMemoryRangeEvent.c)
 *     MiDecrementLargeSubsections @ 0x14053A8F0 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x14054F84C (MiReInsertPlaceholderVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405AFF18 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiRemoveSharedCommitNode @ 0x140633470 (MiRemoveSharedCommitNode.c)
 *     MiReturnPageTablePageCommitment @ 0x14063D620 (MiReturnPageTablePageCommitment.c)
 *     MiDereferencePerSessionProtos @ 0x1406E678C (MiDereferencePerSessionProtos.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D1AFC (MiRemoveUserPhysicalPagesView.c)
 *     MiReturnProcessPhysicalPages @ 0x1408D2D70 (MiReturnProcessPhysicalPages.c)
 *     MiUnlockNestedVad @ 0x1408D5144 (MiUnlockNestedVad.c)
 *     MiDeleteEnclavePages @ 0x1409ACE90 (MiDeleteEnclavePages.c)
 */

__int64 __fastcall MiDeleteVad(_DWORD *P, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r13
  int v6; // edx
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rdi
  unsigned __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  struct _DMA_ADAPTER *v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // r8
  LONG *v16; // r14
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  struct _KTHREAD *v19; // rcx
  bool v20; // zf
  int v21; // ecx
  __int64 v22; // rdx
  int v23; // esi
  unsigned int v24; // r14d
  __int128 *v25; // rdx
  _KPROCESS *v26; // r14
  __int64 v27; // r14
  __int64 v28; // r8
  unsigned __int64 v29; // r8
  int v30; // ecx
  unsigned int v31; // esi
  int v32; // ecx
  int v33; // ebx
  unsigned int v34; // ecx
  int v35; // ebx
  struct _KTHREAD *v36; // r12
  unsigned __int64 v37; // rcx
  struct _KTHREAD *v38; // rsi
  __int64 v39; // r14
  unsigned __int8 AbEntrySummary; // al
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v42; // rcx
  int SessionId; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  LONG *v50; // r14
  unsigned __int8 v51; // si
  _DWORD *v52; // r9
  unsigned __int64 j; // r14
  _DWORD *v54; // rax
  unsigned __int64 i; // rax
  _QWORD *k; // rsi
  _DWORD *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // r12
  int v60; // r9d
  unsigned __int64 v61; // r14
  struct _KTHREAD *v62; // rcx
  unsigned int v63; // eax
  char *v64; // r12
  __int64 v65; // rsi
  struct _KTHREAD *v66; // rax
  volatile signed __int64 *v67; // r14
  __int64 v68; // rcx
  char **v69; // rax
  struct _KTHREAD *v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // r12
  __int64 result; // rax
  ULONG_PTR v76; // rdi
  __int64 v77; // rbx
  BOOL v78; // r14d
  KIRQL v79; // r15
  unsigned __int64 v80; // [rsp+48h] [rbp-61h]
  __int64 v81; // [rsp+50h] [rbp-59h]
  int v82; // [rsp+5Ch] [rbp-4Dh] BYREF
  unsigned __int64 *v83; // [rsp+60h] [rbp-49h]
  struct _KTHREAD *v84; // [rsp+68h] [rbp-41h]
  __int64 v85; // [rsp+70h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-31h] BYREF
  ULONG_PTR v87; // [rsp+80h] [rbp-29h]
  __int128 v88; // [rsp+88h] [rbp-21h] BYREF
  __int128 v89; // [rsp+98h] [rbp-11h]
  __int128 v90; // [rsp+A8h] [rbp-1h]
  ULONG_PTR v91; // [rsp+110h] [rbp+67h]
  unsigned __int8 v92; // [rsp+110h] [rbp+67h]
  int v95; // [rsp+128h] [rbp+7Fh] BYREF

  v95 = 0;
  v88 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v89 = 0LL;
  v6 = 64;
  v90 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v80 = ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12;
  v9 = (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32);
  v84 = CurrentThread;
  v10 = P[12];
  v83 = &Process[1].ActiveProcessorsPadding[6];
  BugCheckParameter2 = 0LL;
  v85 = 0LL;
  v81 = (v9 << 12) | 0xFFF;
  if ( (v10 & 0x100000) != 0 && ((v10 & 0x400000) != 0 || (v10 & 0xC0000u) >= 0x80000)
    || (unsigned int)MiVadMapsLargeImage(P, 64LL) )
  {
    v4 = v6;
  }
  v11 = P[12];
  if ( (v11 & 0x100000) == 0 )
  {
    v12 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 16);
    if ( v12 )
    {
      HalPutDmaAdapter(v12);
      v11 = P[12];
    }
  }
  LOBYTE(v13) = v11;
  if ( (v11 & 0x100000) != 0 && (v11 & 0x1000000) == 0 && (v11 & 0x2000000) != 0 )
  {
    MiDeleteEnclavePages(Process, P);
    v13 = P[12];
  }
  if ( (v13 & 0x70) == 0x30 )
    *(_QWORD *)&v90 = MiRemoveUserPhysicalPagesView(P);
  v14 = (unsigned int)P[13];
  LODWORD(v14) = v14 & 0x7FFFFFFF;
  if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v14) == 0x7FFFFFFFDLL && *((_QWORD *)P + 2) == -2LL )
    v4 |= 0x80u;
  --CurrentThread->SpecialApcDisable;
  v87 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  if ( (Process[1].IdealProcessorPadding[10] & 7) == 2 )
    v16 = &dword_140C4F6C0;
  else
    v16 = (LONG *)&Process[1].IdealNode[2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    v15 = (-1 << (CurrentIrql + 1)) & 4u | SchedulerAssist[5];
    SchedulerAssist[5] = v15;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v16, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v16, CurrentIrql, v15);
  v16[1] = 0;
  MiSetVadFlags(P, 2LL, 1LL);
  MiUnlockWorkingSetExclusive(v83, CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v87, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v87);
  KeAbPostRelease(v87);
  v19 = v84;
  v20 = v84->SpecialApcDisable++ == -1;
  if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v19->ApcState.ApcListHead[0].Flink != &v19->152 )
    KiCheckForKernelApcDelivery(v19);
  v21 = P[12];
  if ( (v21 & 0x100000) != 0 )
  {
    v22 = 0LL;
    if ( (v21 & 0x70) == 0x30 && ((v21 & 0x1000000) != 0 || (v21 & 0x2000000) == 0) )
    {
      v22 = 16LL;
    }
    else if ( (v21 & 0x70) == 0x10 )
    {
      v22 = 32LL;
      if ( (v21 & 0x8000000) != 0 )
        v22 = 64LL;
    }
    if ( (v21 & 0x70) == 0x40 )
    {
      v22 = 8LL;
    }
    else if ( (v21 & 0x1000000) == 0 && (v21 & 0x4000000) != 0 )
    {
      LODWORD(v22) = v22 | 0x400;
    }
  }
  else
  {
    v22 = ((a3 >> 31) & 1u) + 2;
    if ( (a3 & 1) != 0 )
      v22 = (unsigned int)v22 | 4;
  }
  if ( (v21 & 0x100000) != 0 && ((v21 & 0x400000) != 0 || (v21 & 0xC0000u) >= 0x80000)
    || (unsigned int)MiVadMapsLargeImage(P, v22) )
  {
    LODWORD(v22) = v22 | 0x800;
  }
  v23 = v22 | 0x1000;
  v24 = v4;
  if ( (P[12] & 0x1100000) != 0x1100000 )
    v23 = v22;
  if ( v4 < 0x80 )
  {
    v25 = &v88;
    LOBYTE(v25) = 17;
    v26 = KeGetCurrentThread()->ApcState.Process;
    MiDeletePagablePteRange((_DWORD)v26 + 1664, (_DWORD)v25, v80, v81, 0, v23 | 0x80, (__int64)&v88);
    if ( *((_QWORD *)&v89 + 1) )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v26[1].Affinity.Bitmap[13], -*((_QWORD *)&v89 + 1));
    if ( (v23 & 0x800) != 0 )
    {
      v27 = *((_QWORD *)&v90 + 1);
      if ( *((_QWORD *)&v90 + 1) )
      {
        *((_QWORD *)&v90 + 1) = 0LL;
        if ( !(unsigned int)MiVadCommitCrossPartition(P) )
        {
          v28 = (unsigned int)P[13];
          LODWORD(v28) = v28 & 0x7FFFFFFF;
          v29 = (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v28) - v27;
          P[13] ^= (P[13] ^ v29) & 0x7FFFFFFF;
          *((_BYTE *)P + 34) = v29 >> 31;
          MiReturnFullProcessCharges(Process, v27);
          MiReturnProcessPhysicalPages(Process, v27);
        }
      }
    }
    v24 = v4;
  }
  if ( (v23 & 2) != 0 )
  {
    v30 = P[12];
    v5 = **((_QWORD **)P + 9);
    if ( (v30 & 0x70) == 0x20 )
    {
      if ( (P[16] & 0x1000000) != 0 )
        v4 |= 0x18u;
    }
    else if ( *(_QWORD *)(v5 + 64) )
    {
      if ( (v30 & 0xF80) == 0x200 || (v30 & 0xF80) == 0x300 )
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 92));
      MiGetProtoPteAddress(
        (__int64)P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        0,
        &BugCheckParameter2);
      v4 = v24 | 0x20;
      if ( (P[16] & 0x1000000) == 0 )
        v4 = v24;
      MiGetProtoPteAddress(
        (__int64)P,
        (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
        0,
        &v85);
    }
    v31 = v4;
    if ( (v4 & 8) == 0 )
    {
      if ( (P[12] & 0x70) != 0x50 )
      {
        MiDrainSystemAccessLog(v83);
        v32 = P[12];
        if ( (v32 & 0x70) == 0x20 )
        {
          v33 = v4 | 2;
          if ( (*(_DWORD *)(v5 + 56) & 0x4000000) == 0 )
            v33 = v31;
          v4 = v33 | 4;
        }
        else if ( (v32 & 0x100000) == 0 && !*(_QWORD *)(v5 + 64) )
        {
          MiGetProtoPteAddress(
            (__int64)P,
            (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
            0,
            &BugCheckParameter2);
          MiGetProtoPteAddress(
            (__int64)P,
            (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
            0,
            &v85);
        }
      }
      v34 = v4;
      v35 = v4 | 1;
      if ( *((__int64 *)P + 15) >= 0 )
        v35 = v34;
      v4 = v35 | 8;
    }
  }
  v36 = KeGetCurrentThread();
  --v36->SpecialApcDisable;
  v82 = 0;
  v37 = (unsigned __int64)&Process[1].Affinity.Bitmap[7];
  v38 = KeGetCurrentThread();
  v91 = (ULONG_PTR)&Process[1].Affinity.Bitmap[7];
  --v38->SpecialApcDisable;
  if ( ++v38->AbAllocationRegionCount != 1 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v38->116 + 1, 0x10u);
    v39 = 0LL;
    goto LABEL_101;
  }
  AbEntrySummary = v38->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_91;
  if ( v38->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v38->AbOrphanedEntrySummary;
    v38->AbOrphanedEntrySummary = 0;
    AbEntrySummary = v38->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_91:
    _BitScanForward((unsigned int *)&v42, AbEntrySummary);
    v38->AbEntrySummary = AbEntrySummary & ~(1 << v42);
    v39 = (__int64)&v38->LockEntries[v42];
LABEL_92:
    v37 = (unsigned __int64)&Process[1].Affinity.Bitmap[7];
    goto LABEL_93;
  }
  v39 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
  {
    EtwTraceAutoBoostEntryExhaustion(v38, v37);
    goto LABEL_92;
  }
LABEL_93:
  if ( v39 )
  {
    if ( (unsigned int)MiGetSystemRegionType(v37) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v38->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v39 + 40) = SessionId;
    v37 = (unsigned __int64)&Process[1].Affinity.Bitmap[7];
    *(_QWORD *)(v39 + 32) = v91 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v38->116 + 1, 0x10u);
  }
LABEL_101:
  --v38->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v38, v37, &v82);
  v20 = v38->SpecialApcDisable++ == -1;
  if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v38->ApcState.ApcListHead[0].Flink != &v38->152 )
    KiCheckForKernelApcDelivery(v44);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v91, 0LL) )
  {
    if ( v39 )
      KeAbPostReleaseEx(v91);
    v45 = 0;
  }
  else
  {
    if ( v39 )
      *(_BYTE *)(v39 + 26) |= 1u;
    v45 = 1;
  }
  if ( v45 )
  {
    LOBYTE(v36[1].Queue) |= 1u;
  }
  else
  {
    MiUnlockVad(v36, P);
    --v36->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v91, 0LL);
    LOBYTE(v36[1].Queue) |= 1u;
    --v36->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 10), 0LL);
    LOBYTE(v36[1].Queue) |= 0x80u;
    KiLeaveGuardedRegionUnsafe((__int64)v36, v46, v47, v48);
  }
  if ( v4 >= 0x80 )
  {
    v59 = (__int64)Process;
    v61 = v80;
  }
  else
  {
    --v84->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v87, 0LL);
    v50 = &dword_140C4F6C0;
    if ( (v83[23] & 7) != 2 )
      v50 = (LONG *)(v83 + 24);
    v51 = KeGetCurrentIrql();
    v92 = v51;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v51 <= 0xFu )
    {
      v52 = KeGetCurrentPrcb()->SchedulerAssist;
      v49 = (unsigned int)v52[5];
      v52[5] = v49 | ~((unsigned __int8)(1LL << (v51 + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v50, v51);
    else
      ExpAcquireSpinLockExclusive(v50, v51, v49);
    v50[1] = 0;
    MiCaptureDeleteHierarchy(v80, v81, v51, &v95);
    j = *(_QWORD *)P;
    v54 = P;
    if ( *(_QWORD *)P )
    {
      for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
        j = i;
    }
    else
    {
      for ( j = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_DWORD **)(j + 8) == v54 )
          break;
        v54 = (_DWORD *)j;
      }
    }
    k = (_QWORD *)*((_QWORD *)P + 1);
    v57 = P;
    if ( k )
    {
      v58 = (_QWORD *)*k;
      if ( *k )
      {
        do
        {
          k = v58;
          v58 = (_QWORD *)*v58;
        }
        while ( v58 );
      }
    }
    else
    {
      for ( k = (_QWORD *)(*((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_DWORD *)*k == v57 )
          break;
        v57 = k;
      }
    }
    v59 = (__int64)Process;
    RtlAvlRemoveNode(&Process[1].Spare2[15]);
    if ( *(_DWORD **)&Process[1].Spare2[23] == P )
      *(_QWORD *)&Process[1].Spare2[23] = *(_QWORD *)&Process[1].Spare2[15];
    --*(_QWORD *)&Process[1].Spare2[31];
    *((_QWORD *)P + 2) = -2LL;
    if ( (unsigned int)MiIsVadLargePrivate(P) && (unsigned __int64)MiVadPageSizes[(P[12] >> 18) & 3] >= 0x200 )
      --HIDWORD(Process[1].EndPadding[5]);
    MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessorsPadding[6], v92);
    if ( !a2 )
      MiClearVadBits(v80, v81, j, k);
    v60 = j;
    v61 = v80;
    MiReturnPageTablePageCommitment(v80, v81, (_DWORD)Process, v60, (__int64)k, (__int64)P, (__int64)&v95);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[8]);
    KeAbPostRelease((ULONG_PTR)&Process[1].Affinity.Bitmap[8]);
    v62 = v84;
    v20 = v84->SpecialApcDisable++ == -1;
    if ( v20 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v62->ApcState.ApcListHead[0].Flink != &v62->152 )
      KiCheckForKernelApcDelivery(v62);
    if ( a2 )
    {
      MiReInsertPlaceholderVad(a2);
      MiUnlockNestedVad(a2);
    }
  }
  *((_QWORD *)P + 1) = *((_QWORD *)&v88 + 1);
  *(_QWORD *)P = v89;
  if ( (v4 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(
      v61,
      v59,
      26LL,
      ((unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32))
    - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
    + 1);
  if ( (v4 & 1) != 0 )
    MiDereferenceExtendInfo(P, v5);
  if ( (v4 & 8) != 0 )
  {
    if ( (v4 & 2) != 0 )
    {
      v63 = MmGetSessionIdEx(v59);
      MiDereferencePerSessionProtos(v5, v63);
    }
    if ( (v4 & 4) != 0 && (MiControlAreaRequiresCharge(v5, 0LL) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v5);
    MiRemoveSharedCommitNode(v5, v59, 0LL);
    v64 = (char *)(P + 24);
    v65 = **((_QWORD **)P + 9);
    v66 = KeGetCurrentThread();
    --v66->SpecialApcDisable;
    v67 = (volatile signed __int64 *)(v65 + 104);
    ExAcquirePushLockExclusiveEx(v65 + 104, 0LL);
    if ( (*(_DWORD *)(v65 + 56) & 0x400) == 0 )
    {
      v68 = *(_QWORD *)v64;
      v69 = (char **)*((_QWORD *)P + 13);
      if ( *(char **)(*(_QWORD *)v64 + 8LL) != v64 || *v69 != v64 )
        __fastfail(3u);
      *v69 = (char *)v68;
      *(_QWORD *)(v68 + 8) = v69;
    }
    v70 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v67, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v67);
    KeAbPostRelease((ULONG_PTR)v67);
    KiLeaveGuardedRegionUnsafe((__int64)v70, v71, v72, v73);
  }
  v74 = 0LL;
  result = MiFinishVadDeletion(P);
  if ( v5 )
  {
    if ( (v4 & 0x10) != 0 )
    {
      return MiDereferenceControlArea(v5);
    }
    else
    {
      v76 = BugCheckParameter2;
      if ( BugCheckParameter2 && (v4 & 0x20) != 0 )
        MiDecrementLargeSubsections(BugCheckParameter2, v85);
      v77 = 0LL;
      v78 = *(_QWORD *)(v5 + 64) != 0LL;
      v79 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
      if ( v76 )
        v74 = MiDecrementSubsections(v76);
      --*(_QWORD *)(v5 + 40);
      --*(_QWORD *)(v5 + 48);
      if ( v74 )
        v77 = *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF));
      result = MiCheckControlArea(v5, v79);
      if ( v74 )
        return MiReturnCrossPartitionSectionCharges(v77, v78, v74);
    }
  }
  return result;
}
