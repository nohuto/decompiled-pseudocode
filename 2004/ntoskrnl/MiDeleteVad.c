/*
 * XREFs of MiDeleteVad @ 0x140212740
 * Callers:
 *     MiFreeVadRange @ 0x140252064 (MiFreeVadRange.c)
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 *     MiCleanVad @ 0x1406007B0 (MiCleanVad.c)
 *     MiUnmapViewOfSection @ 0x140600DD0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140601100 (MiUnmapVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406056FC (MiFreeToSubAllocatedRegion.c)
 *     MiMapLockedPagesInUserSpace @ 0x1407588D0 (MiMapLockedPagesInUserSpace.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14075B36C (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407B08C8 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C51A4 (MiCoalescePlaceholderAllocations.c)
 *     MiCreateEnclave @ 0x1408CF1DC (MiCreateEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D4D88 (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D5DB4 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiVadMapsLargeImage @ 0x140213440 (MiVadMapsLargeImage.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402135A0 (ExpAcquireSpinLockExclusive.c)
 *     MiFinishVadDeletion @ 0x1402209B0 (MiFinishVadDeletion.c)
 *     MiVadCommitCrossPartition @ 0x140224328 (MiVadCommitCrossPartition.c)
 *     MiReturnFullProcessCharges @ 0x140224460 (MiReturnFullProcessCharges.c)
 *     RtlAvlRemoveNode @ 0x14023DC90 (RtlAvlRemoveNode.c)
 *     MiDeletePagablePteRange @ 0x140242470 (MiDeletePagablePteRange.c)
 *     MiSetVadFlags @ 0x1402480E0 (MiSetVadFlags.c)
 *     MiDecrementSubsections @ 0x14024A2C0 (MiDecrementSubsections.c)
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     MiUnlockVad @ 0x14024AFC0 (MiUnlockVad.c)
 *     MiControlAreaRequiresCharge @ 0x14024B1C8 (MiControlAreaRequiresCharge.c)
 *     MiDrainSystemAccessLog @ 0x14024BBE0 (MiDrainSystemAccessLog.c)
 *     MiClearVadBits @ 0x140250CD0 (MiClearVadBits.c)
 *     MiCaptureDeleteHierarchy @ 0x140251E60 (MiCaptureDeleteHierarchy.c)
 *     KeAbPostReleaseEx @ 0x140272DF0 (KeAbPostReleaseEx.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiIsVadLargePrivate @ 0x14033B264 (MiIsVadLargePrivate.c)
 *     MiDereferenceExtendInfo @ 0x14035D3B8 (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x140360978 (MiDereferenceControlArea.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1403F2AD4 (EtwTraceAutoBoostEntryExhaustion.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140525454 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052C14C (MiLogPerfMemoryRangeEvent.c)
 *     MiDecrementLargeSubsections @ 0x14053AF40 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x14054FE9C (MiReInsertPlaceholderVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B0638 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiRemoveSharedCommitNode @ 0x1405FE430 (MiRemoveSharedCommitNode.c)
 *     MiReturnPageTablePageCommitment @ 0x1406084D0 (MiReturnPageTablePageCommitment.c)
 *     MiDereferencePerSessionProtos @ 0x14070A60C (MiDereferencePerSessionProtos.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D2E4C (MiRemoveUserPhysicalPagesView.c)
 *     MiReturnProcessPhysicalPages @ 0x1408D40C0 (MiReturnProcessPhysicalPages.c)
 *     MiUnlockNestedVad @ 0x1408D6494 (MiUnlockNestedVad.c)
 *     MiDeleteEnclavePages @ 0x1409ADCF0 (MiDeleteEnclavePages.c)
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
  LONG *v15; // r14
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  struct _KTHREAD *v18; // rcx
  bool v19; // zf
  int v20; // ecx
  __int64 v21; // rdx
  int v22; // esi
  unsigned int v23; // r14d
  __int128 *v24; // rdx
  _KPROCESS *v25; // r14
  __int64 v26; // r14
  __int64 v27; // r8
  unsigned __int64 v28; // r8
  int v29; // ecx
  unsigned int v30; // esi
  int v31; // ecx
  int v32; // ebx
  unsigned int v33; // ecx
  int v34; // ebx
  struct _KTHREAD *v35; // r12
  unsigned __int64 v36; // rcx
  struct _KTHREAD *v37; // rsi
  __int64 v38; // r14
  unsigned __int8 AbEntrySummary; // al
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v41; // rcx
  int SessionId; // eax
  int v43; // eax
  LONG *v44; // r14
  unsigned __int8 v45; // si
  _DWORD *v46; // r9
  unsigned __int64 j; // r14
  _DWORD *v48; // rax
  unsigned __int64 i; // rax
  _QWORD *k; // rsi
  _DWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // r12
  int v54; // r9d
  unsigned __int64 v55; // r14
  struct _KTHREAD *v56; // rcx
  unsigned int v57; // eax
  char *v58; // r12
  __int64 v59; // rsi
  struct _KTHREAD *v60; // rax
  volatile signed __int64 *v61; // r14
  __int64 v62; // rcx
  char **v63; // rax
  struct _KTHREAD *v64; // rsi
  __int64 v65; // r12
  __int64 result; // rax
  ULONG_PTR v67; // rdi
  __int64 v68; // rbx
  BOOL v69; // r14d
  KIRQL v70; // r15
  unsigned __int64 v71; // [rsp+48h] [rbp-61h]
  __int64 v72; // [rsp+50h] [rbp-59h]
  int v73; // [rsp+5Ch] [rbp-4Dh] BYREF
  unsigned __int64 *v74; // [rsp+60h] [rbp-49h]
  struct _KTHREAD *v75; // [rsp+68h] [rbp-41h]
  __int64 v76; // [rsp+70h] [rbp-39h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-31h] BYREF
  ULONG_PTR v78; // [rsp+80h] [rbp-29h]
  __int128 v79; // [rsp+88h] [rbp-21h] BYREF
  __int128 v80; // [rsp+98h] [rbp-11h]
  __int128 v81; // [rsp+A8h] [rbp-1h]
  ULONG_PTR v82; // [rsp+110h] [rbp+67h]
  unsigned __int8 v83; // [rsp+110h] [rbp+67h]
  int v86; // [rsp+128h] [rbp+7Fh] BYREF

  v86 = 0;
  v79 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v80 = 0LL;
  v6 = 64;
  v81 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v71 = ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12;
  v9 = (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32);
  v75 = CurrentThread;
  v10 = P[12];
  v74 = &Process[1].ActiveProcessorsPadding[6];
  BugCheckParameter2 = 0LL;
  v76 = 0LL;
  v72 = (v9 << 12) | 0xFFF;
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
    *(_QWORD *)&v81 = MiRemoveUserPhysicalPagesView(P);
  v14 = (unsigned int)P[13];
  LODWORD(v14) = v14 & 0x7FFFFFFF;
  if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v14) == 0x7FFFFFFFDLL && *((_QWORD *)P + 2) == -2LL )
    v4 |= 0x80u;
  --CurrentThread->SpecialApcDisable;
  v78 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  if ( (Process[1].IdealProcessorPadding[10] & 7) == 2 )
    v15 = &dword_140C4F580;
  else
    v15 = (LONG *)&Process[1].IdealNode[2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v15, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v15, CurrentIrql);
  v15[1] = 0;
  MiSetVadFlags(P, 2LL, 1LL);
  MiUnlockWorkingSetExclusive(v74, CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v78);
  KeAbPostRelease(v78);
  v18 = v75;
  v19 = v75->SpecialApcDisable++ == -1;
  if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v18->ApcState.ApcListHead[0].Flink != &v18->152 )
    KiCheckForKernelApcDelivery();
  v20 = P[12];
  if ( (v20 & 0x100000) != 0 )
  {
    v21 = 0LL;
    if ( (v20 & 0x70) == 0x30 && ((v20 & 0x1000000) != 0 || (v20 & 0x2000000) == 0) )
    {
      v21 = 16LL;
    }
    else if ( (v20 & 0x70) == 0x10 )
    {
      v21 = 32LL;
      if ( (v20 & 0x8000000) != 0 )
        v21 = 64LL;
    }
    if ( (v20 & 0x70) == 0x40 )
    {
      v21 = 8LL;
    }
    else if ( (v20 & 0x1000000) == 0 && (v20 & 0x4000000) != 0 )
    {
      LODWORD(v21) = v21 | 0x400;
    }
  }
  else
  {
    v21 = ((a3 >> 31) & 1u) + 2;
    if ( (a3 & 1) != 0 )
      v21 = (unsigned int)v21 | 4;
  }
  if ( (v20 & 0x100000) != 0 && ((v20 & 0x400000) != 0 || (v20 & 0xC0000u) >= 0x80000)
    || (unsigned int)MiVadMapsLargeImage(P, v21) )
  {
    LODWORD(v21) = v21 | 0x800;
  }
  v22 = v21 | 0x1000;
  v23 = v4;
  if ( (P[12] & 0x1100000) != 0x1100000 )
    v22 = v21;
  if ( v4 < 0x80 )
  {
    v24 = &v79;
    LOBYTE(v24) = 17;
    v25 = KeGetCurrentThread()->ApcState.Process;
    MiDeletePagablePteRange((_DWORD)v25 + 1664, (_DWORD)v24, v71, v72, 0, v22 | 0x80, (__int64)&v79);
    if ( *((_QWORD *)&v80 + 1) )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v25[1].Affinity.Bitmap[13], -*((_QWORD *)&v80 + 1));
    if ( (v22 & 0x800) != 0 )
    {
      v26 = *((_QWORD *)&v81 + 1);
      if ( *((_QWORD *)&v81 + 1) )
      {
        *((_QWORD *)&v81 + 1) = 0LL;
        if ( !(unsigned int)MiVadCommitCrossPartition(P) )
        {
          v27 = (unsigned int)P[13];
          LODWORD(v27) = v27 & 0x7FFFFFFF;
          v28 = (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v27) - v26;
          P[13] ^= (P[13] ^ v28) & 0x7FFFFFFF;
          *((_BYTE *)P + 34) = v28 >> 31;
          MiReturnFullProcessCharges(Process, v26);
          MiReturnProcessPhysicalPages(Process, v26);
        }
      }
    }
    v23 = v4;
  }
  if ( (v22 & 2) != 0 )
  {
    v29 = P[12];
    v5 = **((_QWORD **)P + 9);
    if ( (v29 & 0x70) == 0x20 )
    {
      if ( (P[16] & 0x1000000) != 0 )
        v4 |= 0x18u;
    }
    else if ( *(_QWORD *)(v5 + 64) )
    {
      if ( (v29 & 0xF80) == 0x200 || (v29 & 0xF80) == 0x300 )
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 92));
      MiGetProtoPteAddress(
        P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        0LL,
        &BugCheckParameter2);
      v4 = v23 | 0x20;
      if ( (P[16] & 0x1000000) == 0 )
        v4 = v23;
      MiGetProtoPteAddress(P, (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32), 0LL, &v76);
    }
    v30 = v4;
    if ( (v4 & 8) == 0 )
    {
      if ( (P[12] & 0x70) != 0x50 )
      {
        MiDrainSystemAccessLog(v74);
        v31 = P[12];
        if ( (v31 & 0x70) == 0x20 )
        {
          v32 = v4 | 2;
          if ( (*(_DWORD *)(v5 + 56) & 0x4000000) == 0 )
            v32 = v30;
          v4 = v32 | 4;
        }
        else if ( (v31 & 0x100000) == 0 && !*(_QWORD *)(v5 + 64) )
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
            &v76);
        }
      }
      v33 = v4;
      v34 = v4 | 1;
      if ( *((__int64 *)P + 15) >= 0 )
        v34 = v33;
      v4 = v34 | 8;
    }
  }
  v35 = KeGetCurrentThread();
  --v35->SpecialApcDisable;
  v73 = 0;
  v36 = (unsigned __int64)&Process[1].Affinity.Bitmap[7];
  v37 = KeGetCurrentThread();
  v82 = (ULONG_PTR)&Process[1].Affinity.Bitmap[7];
  --v37->SpecialApcDisable;
  if ( ++v37->AbAllocationRegionCount != 1 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&v37->116 + 1, 0x10u);
    v38 = 0LL;
    goto LABEL_101;
  }
  AbEntrySummary = v37->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_91;
  if ( v37->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v37->AbOrphanedEntrySummary;
    v37->AbOrphanedEntrySummary = 0;
    AbEntrySummary = v37->AbEntrySummary | AbOrphanedEntrySummary;
LABEL_91:
    _BitScanForward((unsigned int *)&v41, AbEntrySummary);
    v37->AbEntrySummary = AbEntrySummary & ~(1 << v41);
    v38 = (__int64)&v37->LockEntries[v41];
LABEL_92:
    v36 = (unsigned __int64)&Process[1].Affinity.Bitmap[7];
    goto LABEL_93;
  }
  v38 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
  {
    EtwTraceAutoBoostEntryExhaustion(v37, v36);
    goto LABEL_92;
  }
LABEL_93:
  if ( v38 )
  {
    if ( (unsigned int)MiGetSystemRegionType(v36) == 1 )
      SessionId = MmGetSessionIdEx((__int64)v37->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v38 + 40) = SessionId;
    v36 = (unsigned __int64)&Process[1].Affinity.Bitmap[7];
    *(_QWORD *)(v38 + 32) = v82 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&v37->116 + 1, 0x10u);
  }
LABEL_101:
  --v37->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v37, v36, &v73);
  v19 = v37->SpecialApcDisable++ == -1;
  if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
    KiCheckForKernelApcDelivery();
  if ( _interlockedbittestandset64((volatile signed __int32 *)v82, 0LL) )
  {
    if ( v38 )
      KeAbPostReleaseEx(v82);
    v43 = 0;
  }
  else
  {
    if ( v38 )
      *(_BYTE *)(v38 + 26) |= 1u;
    v43 = 1;
  }
  if ( v43 )
  {
    LOBYTE(v35[1].Queue) |= 1u;
  }
  else
  {
    MiUnlockVad(v35, P);
    --v35->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v82, 0LL);
    LOBYTE(v35[1].Queue) |= 1u;
    --v35->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 10), 0LL);
    LOBYTE(v35[1].Queue) |= 0x80u;
    KiLeaveGuardedRegionUnsafe((__int64)v35);
  }
  if ( v4 >= 0x80 )
  {
    v53 = (__int64)Process;
    v55 = v71;
  }
  else
  {
    --v75->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v78, 0LL);
    v44 = &dword_140C4F580;
    if ( (v74[23] & 7) != 2 )
      v44 = (LONG *)(v74 + 24);
    v45 = KeGetCurrentIrql();
    v83 = v45;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v45 <= 0xFu )
    {
      v46 = KeGetCurrentPrcb()->SchedulerAssist;
      v46[5] |= ~((unsigned __int8)(1LL << (v45 + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v44, v45);
    else
      ExpAcquireSpinLockExclusive(v44, v45);
    v44[1] = 0;
    MiCaptureDeleteHierarchy(v71, v72, v45, &v86);
    j = *(_QWORD *)P;
    v48 = P;
    if ( *(_QWORD *)P )
    {
      for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
        j = i;
    }
    else
    {
      for ( j = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_DWORD **)(j + 8) == v48 )
          break;
        v48 = (_DWORD *)j;
      }
    }
    k = (_QWORD *)*((_QWORD *)P + 1);
    v51 = P;
    if ( k )
    {
      v52 = (_QWORD *)*k;
      if ( *k )
      {
        do
        {
          k = v52;
          v52 = (_QWORD *)*v52;
        }
        while ( v52 );
      }
    }
    else
    {
      for ( k = (_QWORD *)(*((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_DWORD *)*k == v51 )
          break;
        v51 = k;
      }
    }
    v53 = (__int64)Process;
    RtlAvlRemoveNode(&Process[1].Spare2[15], P);
    if ( *(_DWORD **)&Process[1].Spare2[23] == P )
      *(_QWORD *)&Process[1].Spare2[23] = *(_QWORD *)&Process[1].Spare2[15];
    --*(_QWORD *)&Process[1].Spare2[31];
    *((_QWORD *)P + 2) = -2LL;
    if ( (unsigned int)MiIsVadLargePrivate(P) && (unsigned __int64)MiVadPageSizes[(P[12] >> 18) & 3] >= 0x200 )
      --HIDWORD(Process[1].EndPadding[5]);
    MiUnlockWorkingSetExclusive(&Process[1].ActiveProcessorsPadding[6], v83);
    if ( !a2 )
      MiClearVadBits(v71, v72, j, k);
    v54 = j;
    v55 = v71;
    MiReturnPageTablePageCommitment(v71, v72, (_DWORD)Process, v54, (__int64)k, (__int64)P, (__int64)&v86);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&Process[1].Affinity.Bitmap[8]);
    KeAbPostRelease((ULONG_PTR)&Process[1].Affinity.Bitmap[8]);
    v56 = v75;
    v19 = v75->SpecialApcDisable++ == -1;
    if ( v19 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v56->ApcState.ApcListHead[0].Flink != &v56->152 )
      KiCheckForKernelApcDelivery();
    if ( a2 )
    {
      MiReInsertPlaceholderVad(a2);
      MiUnlockNestedVad(a2);
    }
  }
  *((_QWORD *)P + 1) = *((_QWORD *)&v79 + 1);
  *(_QWORD *)P = v80;
  if ( (v4 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(
      v55,
      v53,
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
      v57 = MmGetSessionIdEx(v53);
      MiDereferencePerSessionProtos(v5, v57);
    }
    if ( (v4 & 4) != 0 && (MiControlAreaRequiresCharge(v5, 0LL) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v5);
    MiRemoveSharedCommitNode(v5, v53, 0LL);
    v58 = (char *)(P + 24);
    v59 = **((_QWORD **)P + 9);
    v60 = KeGetCurrentThread();
    --v60->SpecialApcDisable;
    v61 = (volatile signed __int64 *)(v59 + 104);
    ExAcquirePushLockExclusiveEx(v59 + 104, 0LL);
    if ( (*(_DWORD *)(v59 + 56) & 0x400) == 0 )
    {
      v62 = *(_QWORD *)v58;
      v63 = (char **)*((_QWORD *)P + 13);
      if ( *(char **)(*(_QWORD *)v58 + 8LL) != v58 || *v63 != v58 )
        __fastfail(3u);
      *v63 = (char *)v62;
      *(_QWORD *)(v62 + 8) = v63;
    }
    v64 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v61, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v61);
    KeAbPostRelease((ULONG_PTR)v61);
    KiLeaveGuardedRegionUnsafe((__int64)v64);
  }
  v65 = 0LL;
  result = MiFinishVadDeletion(P);
  if ( v5 )
  {
    if ( (v4 & 0x10) != 0 )
    {
      return MiDereferenceControlArea(v5);
    }
    else
    {
      v67 = BugCheckParameter2;
      if ( BugCheckParameter2 && (v4 & 0x20) != 0 )
        MiDecrementLargeSubsections(BugCheckParameter2, v76);
      v68 = 0LL;
      v69 = *(_QWORD *)(v5 + 64) != 0LL;
      v70 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v5 + 72));
      if ( v67 )
        v65 = MiDecrementSubsections(v67);
      --*(_QWORD *)(v5 + 40);
      --*(_QWORD *)(v5 + 48);
      if ( v65 )
        v68 = *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v5 + 60) & 0x3FF));
      result = MiCheckControlArea(v5, v70);
      if ( v65 )
        return MiReturnCrossPartitionSectionCharges(v68, v69, v65);
    }
  }
  return result;
}
