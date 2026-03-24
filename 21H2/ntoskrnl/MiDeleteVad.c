/*
 * XREFs of MiDeleteVad @ 0x14021BFF0
 * Callers:
 *     MiFreeVadRange @ 0x1403185C4 (MiFreeVadRange.c)
 *     MiUnmapViewOfSection @ 0x14061E0F0 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14061E420 (MiUnmapVad.c)
 *     MiCleanVad @ 0x14061E898 (MiCleanVad.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406E9484 (MiFreeToSubAllocatedRegion.c)
 *     MiReserveUserMemory @ 0x1406EA4D0 (MiReserveUserMemory.c)
 *     MiMapLockedPagesInUserSpace @ 0x14076B6A0 (MiMapLockedPagesInUserSpace.c)
 *     MiUnmapLockedPagesInUserSpace @ 0x14076DC9C (MiUnmapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x1407C2C08 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C87A4 (MiCoalescePlaceholderAllocations.c)
 *     MiCreateEnclave @ 0x1408D27DC (MiCreateEnclave.c)
 *     MiFinishPlaceholderVadReplacement @ 0x1408D8388 (MiFinishPlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x1408D93B4 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     MiVadMapsLargeImage @ 0x14021CC20 (MiVadMapsLargeImage.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusive @ 0x14021D170 (ExpAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x140234B20 (RtlAvlRemoveNode.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     MiControlAreaRequiresCharge @ 0x14025ACBC (MiControlAreaRequiresCharge.c)
 *     MiSetVadFlags @ 0x14025B8C0 (MiSetVadFlags.c)
 *     MiDrainSystemAccessLog @ 0x14025BB80 (MiDrainSystemAccessLog.c)
 *     KeAbPostReleaseEx @ 0x14028DE10 (KeAbPostReleaseEx.c)
 *     MiIsVadLargePrivate @ 0x1402AD514 (MiIsVadLargePrivate.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     MiDereferenceExtendInfo @ 0x1402CFB34 (MiDereferenceExtendInfo.c)
 *     MiDereferenceControlArea @ 0x1402D38B8 (MiDereferenceControlArea.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiClearVadBits @ 0x1402FE000 (MiClearVadBits.c)
 *     MiCaptureDeleteHierarchy @ 0x1402FE3F0 (MiCaptureDeleteHierarchy.c)
 *     MiUnlockVad @ 0x140314658 (MiUnlockVad.c)
 *     MiCheckControlArea @ 0x140314AB0 (MiCheckControlArea.c)
 *     MiDecrementSubsections @ 0x1403150C0 (MiDecrementSubsections.c)
 *     MiFinishVadDeletion @ 0x140316DC0 (MiFinishVadDeletion.c)
 *     MiVadCommitCrossPartition @ 0x14031823C (MiVadCommitCrossPartition.c)
 *     MiReturnFullProcessCharges @ 0x140318370 (MiReturnFullProcessCharges.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     MiDeletePagablePteRange @ 0x140337360 (MiDeletePagablePteRange.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x14034A230 (KeAbPreAcquire.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052A924 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053161C (MiLogPerfMemoryRangeEvent.c)
 *     MiDecrementLargeSubsections @ 0x140540410 (MiDecrementLargeSubsections.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405550EC (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x14055533C (MiReInsertPlaceholderVad.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5BA8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiDereferencePerSessionProtos @ 0x1406BC7FC (MiDereferencePerSessionProtos.c)
 *     MiRemoveSharedCommitNode @ 0x1406EB4E0 (MiRemoveSharedCommitNode.c)
 *     MiReturnPageTablePageCommitment @ 0x1406EE990 (MiReturnPageTablePageCommitment.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1408D644C (MiRemoveUserPhysicalPagesView.c)
 *     MiReturnProcessPhysicalPages @ 0x1408D76C0 (MiReturnProcessPhysicalPages.c)
 *     MiUnlockNestedVad @ 0x1408D9A94 (MiUnlockNestedVad.c)
 *     MiDeleteEnclavePages @ 0x1409B0B60 (MiDeleteEnclavePages.c)
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
  unsigned __int64 *v20; // rbp
  bool v21; // zf
  int v22; // ecx
  __int64 v23; // rdx
  int v24; // esi
  __int128 *v25; // rdx
  _KPROCESS *v26; // rbp
  __int64 v27; // rbp
  __int64 v28; // r8
  unsigned __int64 v29; // r8
  _KPROCESS *v30; // rcx
  int v31; // ecx
  unsigned int v32; // esi
  int v33; // ecx
  int v34; // ebx
  unsigned int v35; // ecx
  int v36; // ebx
  struct _KTHREAD *v37; // rsi
  _KPROCESS *v38; // r15
  __int64 v39; // rax
  int v40; // eax
  LONG *v41; // rsi
  unsigned __int8 v42; // r12
  _DWORD *v43; // r9
  unsigned __int64 j; // rbp
  _DWORD *v45; // rax
  unsigned __int64 i; // rax
  _QWORD *k; // rsi
  _DWORD *v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // r12
  int v51; // r9d
  unsigned __int64 v52; // rbp
  unsigned int SessionId; // eax
  char *v54; // r15
  __int64 v55; // rsi
  struct _KTHREAD *v56; // rax
  volatile signed __int64 *v57; // rbp
  __int64 v58; // rcx
  char **v59; // rax
  struct _KTHREAD *v60; // rsi
  __int64 result; // rax
  ULONG_PTR v62; // rdi
  __int64 v63; // rbx
  BOOL v64; // ebp
  KIRQL v65; // r14
  unsigned __int64 v66; // [rsp+40h] [rbp-B8h]
  unsigned __int64 *v67; // [rsp+48h] [rbp-B0h]
  __int64 v68; // [rsp+50h] [rbp-A8h]
  struct _KTHREAD *v69; // [rsp+58h] [rbp-A0h]
  __int64 v70; // [rsp+60h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-90h] BYREF
  ULONG_PTR v72; // [rsp+70h] [rbp-88h]
  __int128 v73; // [rsp+78h] [rbp-80h] BYREF
  __int128 v74; // [rsp+88h] [rbp-70h]
  __int128 v75; // [rsp+98h] [rbp-60h]
  int v76; // [rsp+100h] [rbp+8h] BYREF
  __int64 v77; // [rsp+108h] [rbp+10h]
  int v78; // [rsp+110h] [rbp+18h]
  _KPROCESS *Process; // [rsp+118h] [rbp+20h]

  v78 = a3;
  v77 = a2;
  v4 = 0LL;
  v76 = 0;
  v73 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v74 = 0LL;
  v7 = 64;
  v75 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v66 = ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12;
  v10 = (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32);
  v69 = CurrentThread;
  v11 = P[12];
  Process = CurrentThread->ApcState.Process;
  v9 = Process;
  v67 = &Process[1].ActiveProcessorsPadding[6];
  BugCheckParameter2 = 0LL;
  v70 = 0LL;
  v68 = (v10 << 12) | 0xFFF;
  if ( (v11 & 0x100000) != 0 && ((v11 & 0x400000) != 0 || (v11 & 0xC0000u) >= 0x80000)
    || (unsigned int)MiVadMapsLargeImage(P, 64LL) )
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
    *(_QWORD *)&v75 = MiRemoveUserPhysicalPagesView(P);
  v15 = (unsigned int)P[13];
  LODWORD(v15) = v15 & 0x7FFFFFFF;
  if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v15) == 0x7FFFFFFFDLL && *((_QWORD *)P + 2) == -2LL )
    v5 |= 0x80u;
  --CurrentThread->SpecialApcDisable;
  v16 = v5;
  v72 = (ULONG_PTR)&v9[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v9[1].Affinity.Bitmap[8], 0LL);
  if ( (v9[1].IdealProcessorPadding[10] & 7) == 2 )
    v17 = &dword_140C4F780;
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
  MiSetVadFlags(P, 2LL, 1LL);
  v20 = v67;
  MiUnlockWorkingSetExclusive(v67, CurrentIrql);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v72, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v72);
  KeAbPostRelease(v72);
  v21 = v69->SpecialApcDisable++ == -1;
  if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)v69->ApcState.ApcListHead[0].Flink != &v69->152 )
    KiCheckForKernelApcDelivery();
  v22 = P[12];
  if ( (v22 & 0x100000) != 0 )
  {
    v23 = 0LL;
    if ( (v22 & 0x70) == 0x30 && ((v22 & 0x1000000) != 0 || (v22 & 0x2000000) == 0) )
    {
      v23 = 16LL;
    }
    else if ( (v22 & 0x70) == 0x10 )
    {
      v23 = 32LL;
      if ( (v22 & 0x8000000) != 0 )
        v23 = 64LL;
    }
    if ( (v22 & 0x70) == 0x40 )
    {
      v23 = 8LL;
    }
    else if ( (v22 & 0x1000000) == 0 && (v22 & 0x4000000) != 0 )
    {
      LODWORD(v23) = v23 | 0x400;
    }
  }
  else
  {
    v23 = ((v78 >> 31) & 1u) + 2;
    if ( (v78 & 1) != 0 )
      v23 = (unsigned int)v23 | 4;
  }
  if ( (v22 & 0x100000) != 0 && ((v22 & 0x400000) != 0 || (v22 & 0xC0000u) >= 0x80000)
    || (unsigned int)MiVadMapsLargeImage(P, v23) )
  {
    LODWORD(v23) = v23 | 0x800;
  }
  v24 = v23 | 0x1000;
  if ( (P[12] & 0x1100000) != 0x1100000 )
    v24 = v23;
  if ( v5 < 0x80 )
  {
    v25 = &v73;
    LOBYTE(v25) = 17;
    v26 = KeGetCurrentThread()->ApcState.Process;
    MiDeletePagablePteRange((_DWORD)v26 + 1664, (_DWORD)v25, v66, v68, 0, v24 | 0x80, (__int64)&v73);
    if ( *((_QWORD *)&v74 + 1) )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v26[1].Affinity.Bitmap[13], -*((_QWORD *)&v74 + 1));
    if ( (v24 & 0x800) != 0 )
    {
      v27 = *((_QWORD *)&v75 + 1);
      if ( *((_QWORD *)&v75 + 1) )
      {
        *((_QWORD *)&v75 + 1) = 0LL;
        if ( !(unsigned int)MiVadCommitCrossPartition(P) )
        {
          v28 = (unsigned int)P[13];
          LODWORD(v28) = v28 & 0x7FFFFFFF;
          v29 = (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v28) - v27;
          v30 = Process;
          P[13] ^= (P[13] ^ v29) & 0x7FFFFFFF;
          *((_BYTE *)P + 34) = v29 >> 31;
          MiReturnFullProcessCharges(v30, v27);
          MiReturnProcessPhysicalPages(Process, v27);
        }
      }
    }
    v20 = v67;
  }
  if ( (v24 & 2) != 0 )
  {
    v31 = P[12];
    v6 = **((_QWORD **)P + 9);
    if ( (v31 & 0x70) == 0x20 )
    {
      if ( (P[16] & 0x1000000) != 0 )
        v5 |= 0x18u;
    }
    else if ( *(_QWORD *)(v6 + 64) )
    {
      if ( (v31 & 0xF80) == 0x200 || (v31 & 0xF80) == 0x300 )
        _InterlockedDecrement((volatile signed __int32 *)(v6 + 92));
      MiGetProtoPteAddress(
        P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        0LL,
        &BugCheckParameter2);
      v5 |= 0x20u;
      if ( (P[16] & 0x1000000) == 0 )
        v5 = v16;
      MiGetProtoPteAddress(P, (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32), 0LL, &v70);
    }
    v32 = v5;
    if ( (v5 & 8) == 0 )
    {
      if ( (P[12] & 0x70) != 0x50 )
      {
        MiDrainSystemAccessLog(v20);
        v33 = P[12];
        if ( (v33 & 0x70) == 0x20 )
        {
          v34 = v5 | 2;
          if ( (*(_DWORD *)(v6 + 56) & 0x4000000) == 0 )
            v34 = v32;
          v5 = v34 | 4;
        }
        else if ( (v33 & 0x100000) == 0 && !*(_QWORD *)(v6 + 64) )
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
            &v70);
        }
      }
      v35 = v5;
      v36 = v5 | 1;
      if ( *((__int64 *)P + 15) >= 0 )
        v36 = v35;
      v5 = v36 | 8;
    }
  }
  v37 = KeGetCurrentThread();
  --v37->SpecialApcDisable;
  v38 = Process;
  v39 = KeAbPreAcquire((ULONG_PTR)&Process[1].Affinity.Bitmap[7]);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&v38[1].Affinity.Bitmap[7], 0LL) )
  {
    if ( v39 )
      KeAbPostReleaseEx((ULONG_PTR)&v38[1].Affinity.Bitmap[7]);
    v40 = 0;
  }
  else
  {
    if ( v39 )
      *(_BYTE *)(v39 + 26) |= 1u;
    v40 = 1;
  }
  if ( v40 )
  {
    LOBYTE(v37[1].Queue) |= 1u;
  }
  else
  {
    MiUnlockVad(v37, P);
    --v37->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v38[1].Affinity.Bitmap[7], 0LL);
    LOBYTE(v37[1].Queue) |= 1u;
    --v37->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(P + 10), 0LL);
    LOBYTE(v37[1].Queue) |= 0x80u;
    KiLeaveGuardedRegionUnsafe(v37);
  }
  if ( v5 >= 0x80 )
  {
    v52 = v66;
  }
  else
  {
    --v69->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v38[1].Affinity.Bitmap[8], 0LL);
    v41 = &dword_140C4F780;
    if ( (v38[1].IdealProcessorPadding[10] & 7) != 2 )
      v41 = (LONG *)&v38[1].IdealNode[2];
    v42 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v42 <= 0xFu )
    {
      v43 = KeGetCurrentPrcb()->SchedulerAssist;
      v43[5] |= ~((unsigned __int8)(1LL << (v42 + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v41, v42);
    else
      ExpAcquireSpinLockExclusive(v41, v42);
    v41[1] = 0;
    MiCaptureDeleteHierarchy(v66, v68, v42, &v76);
    j = *(_QWORD *)P;
    v45 = P;
    if ( *(_QWORD *)P )
    {
      for ( i = *(_QWORD *)(j + 8); i; i = *(_QWORD *)(i + 8) )
        j = i;
    }
    else
    {
      for ( j = *((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_DWORD **)(j + 8) == v45 )
          break;
        v45 = (_DWORD *)j;
      }
    }
    k = (_QWORD *)*((_QWORD *)P + 1);
    v48 = P;
    if ( k )
    {
      v49 = (_QWORD *)*k;
      if ( *k )
      {
        do
        {
          k = v49;
          v49 = (_QWORD *)*v49;
        }
        while ( v49 );
      }
    }
    else
    {
      for ( k = (_QWORD *)(*((_QWORD *)P + 2) & 0xFFFFFFFFFFFFFFFCuLL); k; k = (_QWORD *)(k[2] & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_DWORD *)*k == v48 )
          break;
        v48 = k;
      }
    }
    RtlAvlRemoveNode(&v38[1].Spare2[15], P);
    if ( *(_DWORD **)&v38[1].Spare2[23] == P )
      *(_QWORD *)&v38[1].Spare2[23] = *(_QWORD *)&v38[1].Spare2[15];
    --*(_QWORD *)&v38[1].Spare2[31];
    *((_QWORD *)P + 2) = -2LL;
    if ( (unsigned int)MiIsVadLargePrivate(P) && (unsigned __int64)MiVadPageSizes[(P[12] >> 18) & 3] >= 0x200 )
      --HIDWORD(v38[1].EndPadding[5]);
    MiUnlockWorkingSetExclusive(&v38[1].ActiveProcessorsPadding[6], v42);
    v50 = v77;
    if ( !v77 )
      MiClearVadBits(v66, v68, j, k);
    v51 = j;
    v52 = v66;
    MiReturnPageTablePageCommitment(v66, v68, (_DWORD)v38, v51, (__int64)k, (__int64)P, (__int64)&v76);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v38[1].Affinity.Bitmap[8], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&v38[1].Affinity.Bitmap[8]);
    KeAbPostRelease((ULONG_PTR)&v38[1].Affinity.Bitmap[8]);
    v21 = v69->SpecialApcDisable++ == -1;
    if ( v21 && ($C459BD0D405E8E46662177FB3D0A143F *)v69->ApcState.ApcListHead[0].Flink != &v69->152 )
      KiCheckForKernelApcDelivery();
    if ( v50 )
    {
      MiReInsertPlaceholderVad(v50);
      MiUnlockNestedVad(v50);
    }
    v4 = 0LL;
  }
  *((_QWORD *)P + 1) = *((_QWORD *)&v73 + 1);
  *(_QWORD *)P = v74;
  if ( (v5 & 0x40) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(
      v52,
      v38,
      26LL,
      ((unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32))
    - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32))
    + 1);
  if ( (v5 & 1) != 0 )
    MiDereferenceExtendInfo(P, v6);
  if ( (v5 & 8) != 0 )
  {
    if ( (v5 & 2) != 0 )
    {
      SessionId = MmGetSessionIdEx(v38);
      MiDereferencePerSessionProtos(v6, SessionId);
    }
    if ( (v5 & 4) != 0 && (MiControlAreaRequiresCharge(v6, 0LL) & 0xFFFFFFFD) == 0 )
      MiReturnCrossPartitionControlAreaCharges(v6);
    MiRemoveSharedCommitNode(v6, v38, 0LL);
    v54 = (char *)(P + 24);
    v55 = **((_QWORD **)P + 9);
    v56 = KeGetCurrentThread();
    --v56->SpecialApcDisable;
    v57 = (volatile signed __int64 *)(v55 + 104);
    ExAcquirePushLockExclusiveEx(v55 + 104, 0LL);
    if ( (*(_DWORD *)(v55 + 56) & 0x400) == 0 )
    {
      v58 = *(_QWORD *)v54;
      v59 = (char **)*((_QWORD *)P + 13);
      if ( *(char **)(*(_QWORD *)v54 + 8LL) != v54 || *v59 != v54 )
        __fastfail(3u);
      *v59 = (char *)v58;
      *(_QWORD *)(v58 + 8) = v59;
    }
    v60 = KeGetCurrentThread();
    if ( (_InterlockedExchangeAdd64(v57, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v57);
    KeAbPostRelease((ULONG_PTR)v57);
    KiLeaveGuardedRegionUnsafe(v60);
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
      v62 = BugCheckParameter2;
      if ( BugCheckParameter2 && (v5 & 0x20) != 0 )
        MiDecrementLargeSubsections(BugCheckParameter2, v70);
      v63 = 0LL;
      v64 = *(_QWORD *)(v6 + 64) != 0LL;
      v65 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 72));
      if ( v62 )
        v4 = MiDecrementSubsections(v62);
      --*(_QWORD *)(v6 + 40);
      --*(_QWORD *)(v6 + 48);
      if ( v4 )
        v63 = *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v6 + 60) & 0x3FF));
      result = MiCheckControlArea(v6, v65);
      if ( v4 )
        return MiReturnCrossPartitionSectionCharges(v63, v64, v4);
    }
  }
  return result;
}
