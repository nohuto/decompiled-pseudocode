/*
 * XREFs of MiDeleteVad @ 0x14027E4D0
 * Callers:
 *     MiFreeVadRange @ 0x1402308B8 (MiFreeVadRange.c)
 *     MiReserveUserMemory @ 0x140625E30 (MiReserveUserMemory.c)
 *     MiFreeToSubAllocatedRegion @ 0x140658E00 (MiFreeToSubAllocatedRegion.c)
 *     MiCleanVad @ 0x14068551C (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x140685830 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140685B60 (MiUnmapVad.c)
 *     MiMapLockedPagesInUserSpace @ 0x140767510 (MiMapLockedPagesInUserSpace.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x140769C5C (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407BE808 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408CAFE4 (MiCoalescePlaceholderAllocations.c)
 *     MiCreateEnclave @ 0x1408D501C (MiCreateEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408DABC8 (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x1408DBBF4 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140202870 (KeAbPostReleaseEx.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     MiDecrementSubsections @ 0x14022BE70 (MiDecrementSubsections.c)
 *     MiSetVadFlags @ 0x14022D480 (MiSetVadFlags.c)
 *     MiFinishVadDeletion @ 0x14022EE20 (MiFinishVadDeletion.c)
 *     MiVadCommitCrossPartition @ 0x14023029C (MiVadCommitCrossPartition.c)
 *     MiReturnFullProcessCharges @ 0x1402303D0 (MiReturnFullProcessCharges.c)
 *     MiUnlockVad @ 0x1402306B0 (MiUnlockVad.c)
 *     MiControlAreaRequiresCharge @ 0x140232D6C (MiControlAreaRequiresCharge.c)
 *     MiDrainSystemAccessLog @ 0x1402330C0 (MiDrainSystemAccessLog.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiClearVadBits @ 0x140250320 (MiClearVadBits.c)
 *     MiCaptureDeleteHierarchy @ 0x140250710 (MiCaptureDeleteHierarchy.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiVadMapsLargeImage @ 0x14027F1D0 (MiVadMapsLargeImage.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     MiCheckControlArea @ 0x14029BE20 (MiCheckControlArea.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiDeletePagablePteRange @ 0x1402BA840 (MiDeletePagablePteRange.c)
 *     RtlAvlRemoveNode @ 0x1402C3340 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     MiIsVadLargePrivate @ 0x14030DCC4 (MiIsVadLargePrivate.c)
 *     MiDereferenceControlArea @ 0x14031EF2C (MiDereferenceControlArea.c)
 *     MiDereferenceExtendInfo @ 0x14032DE10 (MiDereferenceExtendInfo.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F74E8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140528E24 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052FB1C (MiLogPerfMemoryRangeEvent.c)
 *     MiDecrementLargeSubsections @ 0x14053E910 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x14055386C (MiReInsertPlaceholderVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiRemoveSharedCommitNode @ 0x140623DA0 (MiRemoveSharedCommitNode.c)
 *     MiReturnPageTablePageCommitment @ 0x1406265B0 (MiReturnPageTablePageCommitment.c)
 *     MiDereferencePerSessionProtos @ 0x1406DC9FC (MiDereferencePerSessionProtos.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D8C8C (MiRemoveUserPhysicalPagesView.c)
 *     MiReturnProcessPhysicalPages @ 0x1408D9F00 (MiReturnProcessPhysicalPages.c)
 *     MiUnlockNestedVad @ 0x1408DC2D4 (MiUnlockNestedVad.c)
 *     MiDeleteEnclavePages @ 0x1409B3C60 (MiDeleteEnclavePages.c)
 */

void __fastcall MiDeleteVad(_DWORD *P, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r13
  int v6; // edx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 Process; // rdi
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
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _KTHREAD *v22; // rcx
  bool v23; // zf
  int v24; // ecx
  int v25; // edx
  int v26; // esi
  unsigned int v27; // r14d
  __int128 *v28; // rdx
  _KPROCESS *v29; // r14
  __int64 v30; // r14
  __int64 v31; // r8
  unsigned __int64 v32; // r8
  int v33; // ecx
  unsigned int v34; // esi
  int v35; // ecx
  int v36; // ebx
  unsigned int v37; // ecx
  int v38; // ebx
  struct _KTHREAD *v39; // r12
  unsigned __int64 v40; // rcx
  struct _KTHREAD *v41; // rsi
  ULONG_PTR v42; // r14
  unsigned __int8 AbEntrySummary; // al
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v45; // rcx
  int SessionId; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // eax
  __int64 v52; // r8
  LONG *v53; // r14
  unsigned __int8 v54; // si
  _DWORD *v55; // r9
  __int64 j; // r14
  _DWORD *v57; // rax
  __int64 i; // rax
  _QWORD *k; // rsi
  _DWORD *v60; // rax
  _QWORD *v61; // rax
  __int64 v62; // r12
  int v63; // r9d
  unsigned __int64 v64; // r14
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 v67; // r9
  struct _KTHREAD *v68; // rcx
  unsigned int v69; // eax
  char *v70; // r12
  __int64 v71; // rsi
  struct _KTHREAD *v72; // rax
  volatile signed __int64 *v73; // r14
  __int64 v74; // rcx
  char **v75; // rax
  struct _KTHREAD *v76; // rsi
  __int64 v77; // r12
  char v78; // al
  char v79; // r9
  ULONG_PTR v80; // rdi
  __int64 v81; // rsi
  __int64 v82; // rbx
  BOOL v83; // r14d
  KIRQL v84; // r15
  unsigned __int64 v85; // [rsp+48h] [rbp-61h]
  unsigned __int64 v86; // [rsp+50h] [rbp-59h]
  int v87; // [rsp+5Ch] [rbp-4Dh] BYREF
  __int64 v88; // [rsp+60h] [rbp-49h]
  struct _KTHREAD *v89; // [rsp+68h] [rbp-41h]
  __int64 v90; // [rsp+70h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-31h] BYREF
  ULONG_PTR v92; // [rsp+80h] [rbp-29h]
  __int128 v93; // [rsp+88h] [rbp-21h] BYREF
  __int128 v94; // [rsp+98h] [rbp-11h]
  __int128 v95; // [rsp+A8h] [rbp-1h]
  ULONG_PTR v96; // [rsp+110h] [rbp+67h]
  unsigned __int8 v97; // [rsp+110h] [rbp+67h]
  int v100; // [rsp+128h] [rbp+7Fh] BYREF

  v100 = 0;
  v93 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v94 = 0LL;
  v6 = 64;
  v95 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v85 = ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12;
  v9 = (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32);
  v89 = CurrentThread;
  v10 = P[12];
  v88 = Process + 1664;
  BugCheckParameter2 = 0LL;
  v90 = 0LL;
  v86 = (v9 << 12) | 0xFFF;
  if ( (v10 & 0x100000) != 0 && ((v10 & 0x400000) != 0 || (v10 & 0xC0000u) >= 0x80000)
    || (unsigned int)MiVadMapsLargeImage(P) )
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
    *(_QWORD *)&v95 = MiRemoveUserPhysicalPagesView(P);
  v14 = (unsigned int)P[13];
  LODWORD(v14) = v14 & 0x7FFFFFFF;
  if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v14) == 0x7FFFFFFFDLL && *((_QWORD *)P + 2) == -2LL )
    v4 |= 0x80u;
  --CurrentThread->SpecialApcDisable;
  v92 = Process + 1232;
  ExAcquirePushLockExclusiveEx(Process + 1232, 0LL);
  if ( (*(_BYTE *)(Process + 1848) & 7) == 2 )
    v16 = &dword_140C4F600;
  else
    v16 = (LONG *)(Process + 1856);
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
  MiSetVadFlags((__int64)P, 2, 1);
  MiUnlockWorkingSetExclusive(v88, CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v92, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v92);
  KeAbPostRelease(v92);
  v22 = v89;
  v23 = v89->SpecialApcDisable++ == -1;
  if ( v23 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
    KiCheckForKernelApcDelivery(v22, v19, v20, v21);
  v24 = P[12];
  if ( (v24 & 0x100000) != 0 )
  {
    v25 = 0;
    if ( (v24 & 0x70) == 0x30 && ((v24 & 0x1000000) != 0 || (v24 & 0x2000000) == 0) )
    {
      v25 = 16;
    }
    else if ( (v24 & 0x70) == 0x10 )
    {
      v25 = 32;
      if ( (v24 & 0x8000000) != 0 )
        v25 = 64;
    }
    if ( (v24 & 0x70) == 0x40 )
    {
      v25 = 8;
    }
    else if ( (v24 & 0x1000000) == 0 && (v24 & 0x4000000) != 0 )
    {
      v25 |= 0x400u;
    }
  }
  else
  {
    v25 = ((a3 >> 31) & 1) + 2;
    if ( (a3 & 1) != 0 )
      v25 |= 4u;
  }
  if ( (v24 & 0x100000) != 0 && ((v24 & 0x400000) != 0 || (v24 & 0xC0000u) >= 0x80000)
    || (unsigned int)MiVadMapsLargeImage(P) )
  {
    v25 |= 0x800u;
  }
  v26 = v25 | 0x1000;
  v27 = v4;
  if ( (P[12] & 0x1100000) != 0x1100000 )
    v26 = v25;
  if ( v4 < 0x80 )
  {
    v28 = &v93;
    LOBYTE(v28) = 17;
    v29 = KeGetCurrentThread()->ApcState.Process;
    MiDeletePagablePteRange((_DWORD)v29 + 1664, (_DWORD)v28, v85, v86, 0, v26 | 0x80, (__int64)&v93);
    if ( *((_QWORD *)&v94 + 1) )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v29[1].Affinity.Bitmap[13], -*((_QWORD *)&v94 + 1));
    if ( (v26 & 0x800) != 0 )
    {
      v30 = *((_QWORD *)&v95 + 1);
      if ( *((_QWORD *)&v95 + 1) )
      {
        *((_QWORD *)&v95 + 1) = 0LL;
        if ( !(unsigned int)MiVadCommitCrossPartition((__int64)P) )
        {
          v31 = (unsigned int)P[13];
          LODWORD(v31) = v31 & 0x7FFFFFFF;
          v32 = (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v31) - v30;
          P[13] ^= (P[13] ^ v32) & 0x7FFFFFFF;
          *((_BYTE *)P + 34) = v32 >> 31;
          MiReturnFullProcessCharges(Process, v30);
          MiReturnProcessPhysicalPages(Process, v30);
        }
      }
    }
    v27 = v4;
  }
  if ( (v26 & 2) != 0 )
  {
    v33 = P[12];
    v5 = **((_QWORD **)P + 9);
    if ( (v33 & 0x70) == 0x20 )
    {
      if ( (P[16] & 0x1000000) != 0 )
        v4 |= 0x18u;
    }
    else if ( *(_QWORD *)(v5 + 64) )
    {
      if ( (v33 & 0xF80) == 0x200 || (v33 & 0xF80) == 0x300 )
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 92));
      MiGetProtoPteAddress(
        P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        0LL,
        &BugCheckParameter2);
      v4 = v27 | 0x20;
      if ( (P[16] & 0x1000000) == 0 )
        v4 = v27;
      MiGetProtoPteAddress(P, (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32), 0LL, &v90);
    }
    v34 = v4;
    if ( (v4 & 8) == 0 )
    {
      if ( (P[12] & 0x70) != 0x50 )
      {
        MiDrainSystemAccessLog(v88);
        v35 = P[12];
        if ( (v35 & 0x70) == 0x20 )
        {
          v36 = v4 | 2;
          if ( (*(_DWORD *)(v5 + 56) & 0x4000000) == 0 )
            v36 = v34;
          v4 = v36 | 4;
        }
        else if ( (v35 & 0x100000) == 0 && !*(_QWORD *)(v5 + 64) )
        {
          MiGetProtoPteAddress(
            P,
            (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
            0LL,
            &BugCheckParameter2);
          MiGetProtoPteAddress(
            P,
            (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
            0LL,
            &v90);
        }
      }
      v37 = v4;
      v38 = v4 | 1;
      if ( *((__int64 *)P + 15) >= 0 )
        v38 = v37;
      v4 = v38 | 8;
    }
  }
  v39 = KeGetCurrentThread();
  --v39->SpecialApcDisable;
  v87 = 0;
  v40 = Process + 1224;
  v41 = KeGetCurrentThread();
  v96 = Process + 1224;
  --v41->SpecialApcDisable;
  if ( ++v41->AbAllocationRegionCount != 1 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v41->116 + 1, 0x10u);
    v42 = 0LL;
    goto LABEL_101;
  }
  AbEntrySummary = v41->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_91;
  if ( v41->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v41->AbOrphanedEntrySummary;
    v41->AbOrphanedEntrySummary = 0;
    AbEntrySummary = v41->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_91:
    _BitScanForward((unsigned int *)&v45, AbEntrySummary);
    v41->AbEntrySummary = AbEntrySummary & ~(1 << v45);
    v42 = (ULONG_PTR)&v41->LockEntries[v45];
LABEL_92:
    v40 = Process + 1224;
    goto LABEL_93;
  }
  v42 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
  {
    EtwTraceAutoBoostEntryExhaustion(v41, v40);
    goto LABEL_92;
  }
LABEL_93:
  if ( v42 )
  {
    if ( (unsigned int)MiGetSystemRegionType(v40) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v41->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v42 + 40) = SessionId;
    v40 = Process + 1224;
    *(_QWORD *)(v42 + 32) = v96 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v41->116 + 1, 0x10u);
  }
LABEL_101:
  --v41->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v41, v40, &v87);
  v23 = v41->SpecialApcDisable++ == -1;
  if ( v23 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v41->ApcState.ApcListHead[0].Flink != &v41->152 )
    KiCheckForKernelApcDelivery(v48, v47, v49, v50);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v96, 0LL) )
  {
    if ( v42 )
      KeAbPostReleaseEx(v96, v42);
    v51 = 0;
  }
  else
  {
    if ( v42 )
      *(_BYTE *)(v42 + 26) |= 1u;
    v51 = 1;
  }
  if ( v51 )
  {
    LOBYTE(v39[1].Queue) |= 1u;
  }
  else
  {
    MiUnlockVad((__int64)v39, (__int64)P);
    --v39->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v96, 0LL);
    LOBYTE(v39[1].Queue) |= 1u;
    --v39->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 10), 0LL);
    LOBYTE(v39[1].Queue) |= 0x80u;
    KiLeaveGuardedRegionUnsafe((__int64)v39);
  }
  if ( v4 >= 0x80 )
  {
    v62 = Process;
    v64 = v85;
  }
  else
  {
    --v89->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v92, 0LL);
    v53 = &dword_140C4F600;
    if ( (*(_BYTE *)(v88 + 184) & 7) != 2 )
      v53 = (LONG *)(v88 + 192);
    v54 = KeGetCurrentIrql();
    v97 = v54;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v54 <= 0xFu )
    {
      v55 = KeGetCurrentPrcb()->SchedulerAssist;
      v52 = (unsigned int)v55[5];
      v55[5] = v52 | ~((unsigned __int8)(1LL << (v54 + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v53, v54);
    else
      ExpAcquireSpinLockExclusive(v53, v54, v52);
    v53[1] = 0;
    MiCaptureDeleteHierarchy(v85, v86, v54, &v100);
    j = *(_QWORD *)P;
    v57 = P;
    if ( *(_QWORD *)P )
    {
      for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
        j = i;
    }
    else
    {
      for ( j = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_DWORD **)(j + 8) == v57 )
          break;
        v57 = (_DWORD *)j;
      }
    }
    k = (_QWORD *)*((_QWORD *)P + 1);
    v60 = P;
    if ( k )
    {
      v61 = (_QWORD *)*k;
      if ( *k )
      {
        do
        {
          k = v61;
          v61 = (_QWORD *)*v61;
        }
        while ( v61 );
      }
    }
    else
    {
      for ( k = (_QWORD *)(*((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_DWORD *)*k == v60 )
          break;
        v60 = k;
      }
    }
    v62 = Process;
    RtlAvlRemoveNode(Process + 2008);
    if ( *(_DWORD **)(Process + 2016) == P )
      *(_QWORD *)(Process + 2016) = *(_QWORD *)(Process + 2008);
    --*(_QWORD *)(Process + 2024);
    *((_QWORD *)P + 2) = -2LL;
    if ( (unsigned int)MiIsVadLargePrivate(P) && (unsigned __int64)MiVadPageSizes[(P[12] >> 18) & 3] >= 0x200 )
      --*(_DWORD *)(Process + 2140);
    MiUnlockWorkingSetExclusive(Process + 1664, v97);
    if ( !a2 )
      MiClearVadBits(v85, v86, j, (__int64)k);
    v63 = j;
    v64 = v85;
    MiReturnPageTablePageCommitment(v85, v86, Process, v63, (__int64)k, (__int64)P, (__int64)&v100);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(Process + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(Process + 1232));
    KeAbPostRelease(Process + 1232);
    v68 = v89;
    v23 = v89->SpecialApcDisable++ == -1;
    if ( v23 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v68->ApcState.ApcListHead[0].Flink != &v68->152 )
      KiCheckForKernelApcDelivery(v68, v65, v66, v67);
    if ( a2 )
    {
      MiReInsertPlaceholderVad(a2);
      MiUnlockNestedVad(a2);
    }
  }
  *((_QWORD *)P + 1) = *((_QWORD *)&v93 + 1);
  *(_QWORD *)P = v94;
  if ( (v4 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(
      v64,
      v62,
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
      v69 = MmGetSessionIdEx(v62);
      MiDereferencePerSessionProtos(v5, v69);
    }
    if ( (v4 & 4) != 0 && (MiControlAreaRequiresCharge(v5) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v5);
    MiRemoveSharedCommitNode(v5, v62, 0LL);
    v70 = (char *)(P + 24);
    v71 = **((_QWORD **)P + 9);
    v72 = KeGetCurrentThread();
    --v72->SpecialApcDisable;
    v73 = (volatile signed __int64 *)(v71 + 104);
    ExAcquirePushLockExclusiveEx(v71 + 104, 0LL);
    if ( (*(_DWORD *)(v71 + 56) & 0x400) == 0 )
    {
      v74 = *(_QWORD *)v70;
      v75 = (char **)*((_QWORD *)P + 13);
      if ( *(char **)(*(_QWORD *)v70 + 8LL) != v70 || *v75 != v70 )
        __fastfail(3u);
      *v75 = (char *)v74;
      *(_QWORD *)(v74 + 8) = v75;
    }
    v76 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v73, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v73);
    KeAbPostRelease((ULONG_PTR)v73);
    KiLeaveGuardedRegionUnsafe((__int64)v76);
  }
  v77 = 0LL;
  v78 = 0;
  if ( a2 || v4 >= 0x80 )
    v78 = 1;
  v79 = v78 | 2;
  if ( (a3 & 0x40000000) == 0 )
    v79 = v78;
  MiFinishVadDeletion(P, v85, v86, v79);
  if ( v5 )
  {
    if ( (v4 & 0x10) != 0 )
    {
      MiDereferenceControlArea(v5);
    }
    else
    {
      v80 = BugCheckParameter2;
      v81 = v90;
      if ( BugCheckParameter2 && (v4 & 0x20) != 0 )
        MiDecrementLargeSubsections(BugCheckParameter2, v90);
      v82 = 0LL;
      v83 = *(_QWORD *)(v5 + 64) != 0LL;
      v84 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
      if ( v80 )
        v77 = MiDecrementSubsections(v80, v81, 8u);
      --*(_QWORD *)(v5 + 40);
      --*(_QWORD *)(v5 + 48);
      if ( v77 )
        v82 = *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF));
      MiCheckControlArea(v5, v84);
      if ( v77 )
        MiReturnCrossPartitionSectionCharges(v82, v83, v77);
    }
  }
}
