/*
 * XREFs of MiDeleteVad @ 0x1402C08F0
 * Callers:
 *     MiFreeVadRange @ 0x140323314 (MiFreeVadRange.c)
 *     MiUnmapViewOfSection @ 0x140687D60 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x140688090 (MiUnmapVad.c)
 *     MiCleanVad @ 0x140688508 (MiCleanVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x140700864 (MiFreeToSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B860 (MiMapLockedPagesInUserSpace.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076DE5C (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C3128 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C8904 (MiCoalescePlaceholderAllocations.c)
 *     MiCreateEnclave @ 0x1408D293C (MiCreateEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D84E8 (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D9514 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x14020AFB0 (KeAbPostReleaseEx.c)
 *     MiIsVadLargePrivate @ 0x14022B870 (MiIsVadLargePrivate.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     MiDereferenceExtendInfo @ 0x14024DEB4 (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x140251BB8 (MiDereferenceControlArea.c)
 *     MiControlAreaRequiresCharge @ 0x14027C22C (MiControlAreaRequiresCharge.c)
 *     MiSetVadFlags @ 0x14027CE30 (MiSetVadFlags.c)
 *     MiDrainSystemAccessLog @ 0x14027D0F0 (MiDrainSystemAccessLog.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     MiVadMapsLargeImage @ 0x1402C1520 (MiVadMapsLargeImage.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402C1A70 (ExpAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x1402D9370 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiClearVadBits @ 0x140308D50 (MiClearVadBits.c)
 *     MiCaptureDeleteHierarchy @ 0x140309140 (MiCaptureDeleteHierarchy.c)
 *     MiUnlockVad @ 0x14031F3A8 (MiUnlockVad.c)
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x14031FE10 (MiDecrementSubsections.c)
 *     MiFinishVadDeletion @ 0x140321B10 (MiFinishVadDeletion.c)
 *     MiVadCommitCrossPartition @ 0x140322F8C (MiVadCommitCrossPartition.c)
 *     MiReturnFullProcessCharges @ 0x1403230C0 (MiReturnFullProcessCharges.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052AB64 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053185C (MiLogPerfMemoryRangeEvent.c)
 *     MiDecrementLargeSubsections @ 0x140540650 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x14055557C (MiReInsertPlaceholderVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiDereferencePerSessionProtos @ 0x14061B9CC (MiDereferencePerSessionProtos.c)
 *     MiRemoveSharedCommitNode @ 0x1407028C0 (MiRemoveSharedCommitNode.c)
 *     MiReturnPageTablePageCommitment @ 0x140705D70 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D65AC (MiRemoveUserPhysicalPagesView.c)
 *     MiReturnProcessPhysicalPages @ 0x1408D7820 (MiReturnProcessPhysicalPages.c)
 *     MiUnlockNestedVad @ 0x1408D9BF4 (MiUnlockNestedVad.c)
 *     MiDeleteEnclavePages @ 0x1409B1A90 (MiDeleteEnclavePages.c)
 */

__int64 __fastcall MiDeleteVad(_DWORD *P, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned int v5; // ebx
  __int64 v6; // r13
  int v7; // edx
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *v9; // rdi
  unsigned __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  struct _DMA_ADAPTER *v13; // rcx
  int v14; // ecx
  __int64 v15; // rcx
  unsigned int v16; // r15d
  LONG *v17; // rbp
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // r8
  _DWORD *v23; // r9
  bool v24; // zf
  int v25; // ecx
  __int64 v26; // rdx
  int v27; // esi
  __int128 *v28; // rdx
  _KPROCESS *v29; // rbp
  __int64 v30; // rbp
  __int64 v31; // r8
  unsigned __int64 v32; // r8
  _KPROCESS *v33; // rcx
  int v34; // ecx
  unsigned int v35; // esi
  int v36; // ecx
  int v37; // ebx
  unsigned int v38; // ecx
  int v39; // ebx
  struct _KTHREAD *v40; // rsi
  _KPROCESS *v41; // r15
  ULONG_PTR v42; // rax
  int v43; // eax
  LONG *v44; // rsi
  unsigned __int8 v45; // r12
  _DWORD *v46; // r9
  unsigned __int64 j; // rbp
  _DWORD *v48; // rax
  unsigned __int64 i; // rax
  _QWORD *k; // rsi
  _DWORD *v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // r12
  int v54; // r9d
  unsigned __int64 v55; // rbp
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned int SessionId; // eax
  char *v60; // r15
  __int64 v61; // rsi
  struct _KTHREAD *v62; // rax
  volatile signed __int64 *v63; // rbp
  __int64 v64; // rcx
  char **v65; // rax
  struct _KTHREAD *v66; // rsi
  __int64 result; // rax
  ULONG_PTR v68; // rdi
  __int64 v69; // rbx
  BOOL v70; // ebp
  KIRQL v71; // r14
  unsigned __int64 v72; // [rsp+40h] [rbp-B8h]
  __int64 v73; // [rsp+48h] [rbp-B0h]
  __int64 v74; // [rsp+50h] [rbp-A8h]
  struct _KTHREAD *v75; // [rsp+58h] [rbp-A0h]
  __int64 v76; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-90h] BYREF
  ULONG_PTR v78; // [rsp+70h] [rbp-88h]
  __int128 v79; // [rsp+78h] [rbp-80h] BYREF
  __int128 v80; // [rsp+88h] [rbp-70h]
  __int128 v81; // [rsp+98h] [rbp-60h]
  int v82; // [rsp+100h] [rbp+8h] BYREF
  __int64 v83; // [rsp+108h] [rbp+10h]
  int v84; // [rsp+110h] [rbp+18h]
  _KPROCESS *Process; // [rsp+118h] [rbp+20h]

  v84 = a3;
  v83 = a2;
  v4 = 0LL;
  v82 = 0;
  v79 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v80 = 0LL;
  v7 = 64;
  v81 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v72 = ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12;
  v10 = (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32);
  v75 = CurrentThread;
  v11 = P[12];
  Process = CurrentThread->ApcState.Process;
  v9 = Process;
  v73 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  BugCheckParameter2 = 0LL;
  v76 = 0LL;
  v74 = (v10 << 12) | 0xFFF;
  if ( (v11 & 0x100000) != 0 && ((v11 & 0x400000) != 0 || (v11 & 0xC0000u) >= 0x80000)
    || (unsigned int)MiVadMapsLargeImage(P) )
  {
    v5 = v7;
  }
  v12 = P[12];
  if ( (v12 & 0x100000) == 0 )
  {
    v13 = (struct _DMA_ADAPTER *)*((_QWORD *)P + 16);
    if ( v13 )
    {
      HalPutDmaAdapter(v13);
      v12 = P[12];
    }
  }
  LOBYTE(v14) = v12;
  if ( (v12 & 0x100000) != 0 && (v12 & 0x1000000) == 0 && (v12 & 0x2000000) != 0 )
  {
    MiDeleteEnclavePages(v9, P);
    v14 = P[12];
  }
  if ( (v14 & 0x70) == 0x30 )
    *(_QWORD *)&v81 = MiRemoveUserPhysicalPagesView(P);
  v15 = (unsigned int)P[13];
  LODWORD(v15) = v15 & 0x7FFFFFFF;
  if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v15) == 0x7FFFFFFFDLL && *((_QWORD *)P + 2) == -2LL )
    v5 |= 0x80u;
  --CurrentThread->SpecialApcDisable;
  v16 = v5;
  v78 = (ULONG_PTR)&v9[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v9[1].Affinity.Bitmap[8], 0LL);
  if ( (v9[1].IdealProcessorPadding[10] & 7) == 2 )
    v17 = &dword_140C4F7C0;
  else
    v17 = (LONG *)&v9[1].IdealNode[2];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v17, CurrentIrql);
  else
    ExpAcquireSpinLockExclusive(v17, CurrentIrql);
  v17[1] = 0;
  MiSetVadFlags((__int64)P, 2, 1);
  v20 = v73;
  MiUnlockWorkingSetExclusive(v73, CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v78, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v78);
  KeAbPostRelease(v78);
  v24 = v75->SpecialApcDisable++ == -1;
  if ( v24 && ($C459BD0D405E8E46662177FB3D0A143F *)v75->ApcState.ApcListHead[0].Flink != &v75->152 )
    KiCheckForKernelApcDelivery(v75, v21, v22, v23);
  v25 = P[12];
  if ( (v25 & 0x100000) != 0 )
  {
    v26 = 0LL;
    if ( (v25 & 0x70) == 0x30 && ((v25 & 0x1000000) != 0 || (v25 & 0x2000000) == 0) )
    {
      v26 = 16LL;
    }
    else if ( (v25 & 0x70) == 0x10 )
    {
      v26 = 32LL;
      if ( (v25 & 0x8000000) != 0 )
        v26 = 64LL;
    }
    if ( (v25 & 0x70) == 0x40 )
    {
      v26 = 8LL;
    }
    else if ( (v25 & 0x1000000) == 0 && (v25 & 0x4000000) != 0 )
    {
      LODWORD(v26) = v26 | 0x400;
    }
  }
  else
  {
    v26 = ((v84 >> 31) & 1u) + 2;
    if ( (v84 & 1) != 0 )
      v26 = (unsigned int)v26 | 4;
  }
  if ( (v25 & 0x100000) != 0 && ((v25 & 0x400000) != 0 || (v25 & 0xC0000u) >= 0x80000)
    || (unsigned int)MiVadMapsLargeImage(P) )
  {
    LODWORD(v26) = v26 | 0x800;
  }
  v27 = v26 | 0x1000;
  if ( (P[12] & 0x1100000) != 0x1100000 )
    v27 = v26;
  if ( v5 < 0x80 )
  {
    v28 = &v79;
    LOBYTE(v28) = 17;
    v29 = KeGetCurrentThread()->ApcState.Process;
    MiDeletePagablePteRange((_DWORD)v29 + 1664, (_DWORD)v28, v72, v74, 0, v27 | 0x80, (__int64)&v79);
    if ( *((_QWORD *)&v80 + 1) )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v29[1].Affinity.Bitmap[13], -*((_QWORD *)&v80 + 1));
    if ( (v27 & 0x800) != 0 )
    {
      v30 = *((_QWORD *)&v81 + 1);
      if ( *((_QWORD *)&v81 + 1) )
      {
        *((_QWORD *)&v81 + 1) = 0LL;
        if ( !(unsigned int)MiVadCommitCrossPartition(P) )
        {
          v31 = (unsigned int)P[13];
          LODWORD(v31) = v31 & 0x7FFFFFFF;
          v32 = (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v31) - v30;
          v33 = Process;
          P[13] ^= (P[13] ^ v32) & 0x7FFFFFFF;
          *((_BYTE *)P + 34) = v32 >> 31;
          MiReturnFullProcessCharges(v33, v30);
          MiReturnProcessPhysicalPages(Process, v30);
        }
      }
    }
    v20 = v73;
  }
  if ( (v27 & 2) != 0 )
  {
    v34 = P[12];
    v6 = **((_QWORD **)P + 9);
    if ( (v34 & 0x70) == 0x20 )
    {
      if ( (P[16] & 0x1000000) != 0 )
        v5 |= 0x18u;
    }
    else if ( *(_QWORD *)(v6 + 64) )
    {
      if ( (v34 & 0xF80) == 0x200 || (v34 & 0xF80) == 0x300 )
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 92));
      MiGetProtoPteAddress(
        P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        0LL,
        &BugCheckParameter2);
      v5 |= 0x20u;
      if ( (P[16] & 0x1000000) == 0 )
        v5 = v16;
      MiGetProtoPteAddress(P, (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32), 0LL, &v76);
    }
    v35 = v5;
    if ( (v5 & 8) == 0 )
    {
      if ( (P[12] & 0x70) != 0x50 )
      {
        MiDrainSystemAccessLog(v20, v26, v22, v23);
        v36 = P[12];
        if ( (v36 & 0x70) == 0x20 )
        {
          v37 = v5 | 2;
          if ( (*(_DWORD *)(v6 + 56) & 0x4000000) == 0 )
            v37 = v35;
          v5 = v37 | 4;
        }
        else if ( (v36 & 0x100000) == 0 && !*(_QWORD *)(v6 + 64) )
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
      v38 = v5;
      v39 = v5 | 1;
      if ( *((__int64 *)P + 15) >= 0 )
        v39 = v38;
      v5 = v39 | 8;
    }
  }
  v40 = KeGetCurrentThread();
  --v40->SpecialApcDisable;
  v41 = Process;
  v42 = KeAbPreAcquire((ULONG_PTR)&Process[1].Affinity.Bitmap[7], 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&v41[1].Affinity.Bitmap[7], 0LL) )
  {
    if ( v42 )
      KeAbPostReleaseEx((ULONG_PTR)&v41[1].Affinity.Bitmap[7], v42);
    v43 = 0;
  }
  else
  {
    if ( v42 )
      *(_BYTE *)(v42 + 26) |= 1u;
    v43 = 1;
  }
  if ( v43 )
  {
    LOBYTE(v40[1].Queue) |= 1u;
  }
  else
  {
    MiUnlockVad(v40, P);
    --v40->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v41[1].Affinity.Bitmap[7], 0LL);
    LOBYTE(v40[1].Queue) |= 1u;
    --v40->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 10), 0LL);
    LOBYTE(v40[1].Queue) |= 0x80u;
    KiLeaveGuardedRegionUnsafe(v40);
  }
  if ( v5 >= 0x80 )
  {
    v55 = v72;
  }
  else
  {
    --v75->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v41[1].Affinity.Bitmap[8], 0LL);
    v44 = &dword_140C4F7C0;
    if ( (v41[1].IdealProcessorPadding[10] & 7) != 2 )
      v44 = (LONG *)&v41[1].IdealNode[2];
    v45 = KeGetCurrentIrql();
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
    MiCaptureDeleteHierarchy(v72, v74, v45, &v82);
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
    RtlAvlRemoveNode(&v41[1].Spare2[15], P);
    if ( *(_DWORD **)&v41[1].Spare2[23] == P )
      *(_QWORD *)&v41[1].Spare2[23] = *(_QWORD *)&v41[1].Spare2[15];
    --*(_QWORD *)&v41[1].Spare2[31];
    *((_QWORD *)P + 2) = -2LL;
    if ( (unsigned int)MiIsVadLargePrivate((__int64)P) && (unsigned __int64)MiVadPageSizes[(P[12] >> 18) & 3] >= 0x200 )
      --HIDWORD(v41[1].EndPadding[5]);
    MiUnlockWorkingSetExclusive(&v41[1].ActiveProcessorsPadding[6], v45);
    v53 = v83;
    if ( !v83 )
      MiClearVadBits(v72, v74, j, k);
    v54 = j;
    v55 = v72;
    MiReturnPageTablePageCommitment(v72, v74, (_DWORD)v41, v54, (__int64)k, (__int64)P, (__int64)&v82);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v41[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&v41[1].Affinity.Bitmap[8]);
    KeAbPostRelease((ULONG_PTR)&v41[1].Affinity.Bitmap[8]);
    v24 = v75->SpecialApcDisable++ == -1;
    if ( v24 && ($C459BD0D405E8E46662177FB3D0A143F *)v75->ApcState.ApcListHead[0].Flink != &v75->152 )
      KiCheckForKernelApcDelivery(v75, v56, v57, v58);
    if ( v53 )
    {
      MiReInsertPlaceholderVad(v53);
      MiUnlockNestedVad(v53);
    }
    v4 = 0LL;
  }
  *((_QWORD *)P + 1) = *((_QWORD *)&v79 + 1);
  *(_QWORD *)P = v80;
  if ( (v5 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(
      v55,
      v41,
      26LL,
      ((unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32))
    - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
    + 1);
  if ( (v5 & 1) != 0 )
    MiDereferenceExtendInfo((__int64)P, v6);
  if ( (v5 & 8) != 0 )
  {
    if ( (v5 & 2) != 0 )
    {
      SessionId = MmGetSessionIdEx(v41);
      MiDereferencePerSessionProtos(v6, SessionId);
    }
    if ( (v5 & 4) != 0 && (MiControlAreaRequiresCharge(v6, 0LL) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v6);
    MiRemoveSharedCommitNode(v6, v41, 0LL);
    v60 = (char *)(P + 24);
    v61 = **((_QWORD **)P + 9);
    v62 = KeGetCurrentThread();
    --v62->SpecialApcDisable;
    v63 = (volatile signed __int64 *)(v61 + 104);
    ExAcquirePushLockExclusiveEx(v61 + 104, 0LL);
    if ( (*(_DWORD *)(v61 + 56) & 0x400) == 0 )
    {
      v64 = *(_QWORD *)v60;
      v65 = (char **)*((_QWORD *)P + 13);
      if ( *(char **)(*(_QWORD *)v60 + 8LL) != v60 || *v65 != v60 )
        __fastfail(3u);
      *v65 = (char *)v64;
      *(_QWORD *)(v64 + 8) = v65;
    }
    v66 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v63, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v63);
    KeAbPostRelease((ULONG_PTR)v63);
    KiLeaveGuardedRegionUnsafe(v66);
  }
  result = MiFinishVadDeletion(P);
  if ( v6 )
  {
    if ( (v5 & 0x10) != 0 )
    {
      return MiDereferenceControlArea(v6);
    }
    else
    {
      v68 = BugCheckParameter2;
      if ( BugCheckParameter2 && (v5 & 0x20) != 0 )
        MiDecrementLargeSubsections(BugCheckParameter2, v76);
      v69 = 0LL;
      v70 = *(_QWORD *)(v6 + 64) != 0LL;
      v71 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
      if ( v68 )
        v4 = MiDecrementSubsections(v68);
      --*(_QWORD *)(v6 + 40);
      --*(_QWORD *)(v6 + 48);
      if ( v4 )
        v69 = *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v6 + 60) & 0x3FF));
      result = MiCheckControlArea(v6, v71);
      if ( v4 )
        return MiReturnCrossPartitionSectionCharges(v69, v70, v4);
    }
  }
  return result;
}
