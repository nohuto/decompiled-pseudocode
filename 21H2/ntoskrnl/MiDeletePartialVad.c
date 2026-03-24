/*
 * XREFs of MiDeletePartialVad @ 0x1402FD8DC
 * Callers:
 *     MiFreeVadRange @ 0x1403185C4 (MiFreeVadRange.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402056A0 (ObfReferenceObjectWithTag.c)
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAE0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x14024A6E0 (KiCheckForKernelApcDelivery.c)
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     MiDrainSystemAccessLog @ 0x14025BB80 (MiDrainSystemAccessLog.c)
 *     MiCountSharedPages @ 0x14028C460 (MiCountSharedPages.c)
 *     KiAbEntryRemoveFromTree @ 0x14028F490 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MiClearVadBits @ 0x1402FE000 (MiClearVadBits.c)
 *     MiLocateLockedVadEvent @ 0x1402FE3CC (MiLocateLockedVadEvent.c)
 *     MiCaptureDeleteHierarchy @ 0x1402FE3F0 (MiCaptureDeleteHierarchy.c)
 *     MiDeleteVirtualAddresses @ 0x1402FE580 (MiDeleteVirtualAddresses.c)
 *     MiAdvanceVadView @ 0x1402FE5F4 (MiAdvanceVadView.c)
 *     MiComputePageCommitment @ 0x14030CB60 (MiComputePageCommitment.c)
 *     MiManageSubsectionView @ 0x140311100 (MiManageSubsectionView.c)
 *     MiDecrementSubsections @ 0x1403150C0 (MiDecrementSubsections.c)
 *     MiInsertVad @ 0x140316330 (MiInsertVad.c)
 *     MiFinishVadDeletion @ 0x140316DC0 (MiFinishVadDeletion.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x140318370 (MiReturnFullProcessCharges.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140318410 (PsReturnProcessPagedPoolQuota.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x14034AD00 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     MiUpControlAreaRefs @ 0x14052AB70 (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405550EC (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x14055533C (MiReInsertPlaceholderVad.c)
 *     MiResidentPagesForSpan @ 0x1406B5F44 (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x1406BD8A0 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x1406C3E08 (MiFreePlaceholderStorage.c)
 *     MiRemoveSharedCommitNode @ 0x1406EB4E0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406EB750 (MiInsertSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x1406ECC70 (MiInsertVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x1406EE990 (MiReturnPageTablePageCommitment.c)
 *     MiFreeRotateView @ 0x1408C857C (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x1408D82D8 (MiCreatePlaceholderStorage.c)
 *     MiLockNestedVad @ 0x1408D9A78 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x1408D9A94 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePartialVad(
        _QWORD *BugCheckParameter4,
        unsigned __int64 a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5)
{
  unsigned int *v7; // rsi
  int v8; // r12d
  _KPROCESS *Process; // r14
  int v10; // eax
  SIZE_T v11; // r13
  int v12; // edx
  int v13; // r15d
  int v14; // ecx
  unsigned __int64 v15; // r12
  _DWORD *v16; // r9
  __int64 v17; // r14
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // r13
  LONG *v21; // rbx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // bl
  _QWORD *v25; // r14
  _QWORD *v26; // r15
  LONG *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // r8
  _QWORD *v30; // rcx
  ULONG_PTR v31; // r14
  struct _KTHREAD *v32; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v34; // r15
  unsigned int v35; // edx
  __int64 v36; // r9
  bool v37; // zf
  __int64 v38; // rcx
  __int64 v39; // r14
  unsigned __int8 v40; // al
  __int64 v41; // rcx
  _KPROCESS *v42; // r14
  __int64 v43; // r13
  __int64 v44; // rbx
  ULONG_PTR v45; // rbx
  __int64 i; // r15
  LONG *SharedVm; // rbx
  int v49; // r9d
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  _QWORD *v54; // rcx
  __int64 k; // r14
  _QWORD *j; // rax
  __int64 v57; // r8
  unsigned int *Pool; // rax
  int PlaceholderStorage; // ebx
  __int64 v60; // rax
  unsigned int v61; // edx
  char v62; // al
  unsigned __int64 v63; // r14
  __int64 v64; // rcx
  unsigned int v65; // eax
  unsigned __int64 v66; // rcx
  LONG *v67; // rbx
  KIRQL v68; // al
  unsigned __int64 v69; // r15
  unsigned __int64 v70; // rax
  unsigned __int64 v71; // rcx
  int v72; // r9d
  __int64 v73; // rcx
  unsigned __int64 v74; // r15
  __int64 v75; // rbx
  _DWORD *v76; // r9
  LONG *v77; // rbx
  KIRQL v78; // al
  int v79; // edx
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // r8
  unsigned __int64 v82; // r14
  __int64 v83; // rcx
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // r12
  __int64 v86; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v89; // eax
  __int64 v90; // r13
  __int64 v91; // rdi
  BOOL v92; // r15d
  unsigned __int64 v93; // rsi
  __int64 v94; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v96; // r8
  _DWORD *SchedulerAssist; // r9
  int v98; // eax
  bool v99; // [rsp+48h] [rbp-81h]
  __int64 v100; // [rsp+50h] [rbp-79h]
  ULONG_PTR v101; // [rsp+58h] [rbp-71h] BYREF
  __int64 v102; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int64 *v103; // [rsp+68h] [rbp-61h]
  _KPROCESS *v104; // [rsp+70h] [rbp-59h]
  unsigned int v105; // [rsp+78h] [rbp-51h]
  int v106; // [rsp+7Ch] [rbp-4Dh] BYREF
  int v107; // [rsp+80h] [rbp-49h]
  int v108; // [rsp+84h] [rbp-45h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-41h]
  __int64 v110; // [rsp+90h] [rbp-39h]
  unsigned __int64 v111; // [rsp+98h] [rbp-31h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-29h]
  __int128 v113; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v114; // [rsp+B8h] [rbp-11h]
  __int128 v115; // [rsp+C8h] [rbp-1h]
  KIRQL v116; // [rsp+128h] [rbp+5Fh]

  v106 = 0;
  v113 = 0LL;
  v101 = 0LL;
  v114 = 0LL;
  v7 = 0LL;
  v102 = 0LL;
  v8 = 0;
  v115 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v111 = (a3 - a2 + 1) >> 12;
  v99 = 0;
  Process = CurrentThread->ApcState.Process;
  v110 = 0LL;
  v105 = 0;
  v104 = Process;
  v103 = &Process[1].ActiveProcessorsPadding[6];
  v10 = *((_DWORD *)BugCheckParameter4 + 12);
  if ( (v10 & 0x100000) != 0 )
  {
    v11 = 64LL;
    v100 = 64LL;
    v12 = 8;
    if ( (v10 & 0x70) != 0x40 )
      v12 = 0;
    v105 = v12;
  }
  else
  {
    v11 = 136LL;
    v100 = 136LL;
    v57 = *(_QWORD *)BugCheckParameter4[9];
    v110 = v57;
    if ( *(_QWORD *)(v57 + 64) )
    {
      if ( (__int64)BugCheckParameter4[15] < 0 )
        return 3221225505LL;
      v99 = (*(_DWORD *)(v57 + 56) & 0x420) == 0;
    }
  }
  v13 = 2147483645;
  if ( a4 != 3 )
    goto LABEL_6;
  Pool = (unsigned int *)MiAllocatePool(64, v11, 0x46646156u);
  v7 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  memmove(Pool, BugCheckParameter4, v11);
  v7[9] = 0;
  *((_QWORD *)v7 + 2) = -2LL;
  *((_QWORD *)v7 + 7) = 0LL;
  v60 = *((unsigned int *)BugCheckParameter4 + 13);
  LODWORD(v60) = v60 & 0x7FFFFFFF;
  v61 = v7[13] & 0x80000000;
  if ( (v60 | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31)) == 0x7FFFFFFFDLL )
  {
    v62 = 15;
    v61 |= 0x7FFFFFFDu;
  }
  else
  {
    v62 = 0;
  }
  v7[13] = v61;
  *((_BYTE *)v7 + 34) = v62;
  *((_QWORD *)v7 + 5) = 0LL;
  v63 = ((a3 + 1) >> 12)
      - (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32));
  if ( (v7[12] & 0x70) == 0x40 && !(unsigned int)MiCreateRotateView(v7) )
  {
    PlaceholderStorage = -1073741670;
LABEL_105:
    MiFreeRotateView(v7);
    MiFreePlaceholderStorage(v7);
    ExFreePoolWithTag(v7, 0);
    return (unsigned int)PlaceholderStorage;
  }
  if ( MiLocateLockedVadEvent(BugCheckParameter4, 128LL) )
  {
    PlaceholderStorage = MiCreatePlaceholderStorage(v7);
    if ( PlaceholderStorage < 0 )
      goto LABEL_105;
  }
  MiLockNestedVad(v7);
  MiAdvanceVadView(v7, v63);
  MiUnlockNestedVad(v7);
  Process = v104;
  if ( v11 != 64 )
  {
    v64 = v110;
    v65 = v7[16] & 0xFDFFFFFF;
    *((_QWORD *)v7 + 15) = 0LL;
    v7[16] = v65;
    PlaceholderStorage = MiInsertSharedCommitNode(v64, Process, 0LL);
    if ( PlaceholderStorage < 0 )
      goto LABEL_105;
    v8 = 1;
  }
  PlaceholderStorage = MiInsertVadCharges(v7, Process);
  if ( PlaceholderStorage < 0 )
  {
    if ( v8 )
      MiRemoveSharedCommitNode(v110, Process, 0LL);
    goto LABEL_105;
  }
  v66 = Process[1].ActiveProcessorsPadding[8];
  if ( v11 == 64 )
  {
    if ( MiVadPageSizes[(v7[12] >> 18) & 3] == 16 )
      ++*(_QWORD *)(v66 + 424);
  }
  else
  {
    if ( *((_QWORD *)v7 + 16) )
    {
      ObfReferenceObjectWithTag(*((PVOID *)v7 + 16), 0x746C6644u);
    }
    else if ( MiVadPageSizes[(v7[12] >> 18) & 3] == 16 )
    {
      ++*(_QWORD *)(v66 + 432);
    }
    MiUpControlAreaRefs(v7, 1LL);
  }
LABEL_6:
  v14 = *((_DWORD *)BugCheckParameter4 + 12);
  v15 = 0LL;
  if ( (v14 & 0x70) == 0x10 || (v14 & 0x70) == 0x40 )
    v15 = MiResidentPagesForSpan(
            (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32)) << 12,
            ((*((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32)) << 12) | 0xFFF,
            0LL);
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = (ULONG_PTR)&Process[1].Affinity.Bitmap[8];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].Affinity.Bitmap[8], 0LL);
  v17 = *((unsigned int *)BugCheckParameter4 + 13);
  LODWORD(v17) = v17 & 0x7FFFFFFF;
  v18 = ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | v17;
  if ( v18 != 0x7FFFFFFFDLL && v18 )
  {
    if ( v100 == 64 )
    {
      SharedVm = MiGetSharedVm((__int64)v103);
      LOBYTE(v49) = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v116 = v49;
      v20 = MiComputePageCommitment(a2, a3, (_DWORD)BugCheckParameter4, v49, 4, 0LL);
    }
    else
    {
      v20 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
          - MiCountSharedPages(
              (__int64)BugCheckParameter4,
              ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              v16)
          + 1;
      v67 = MiGetSharedVm((__int64)v103);
      v68 = ExAcquireSpinLockExclusive(v67);
      v67[1] = 0;
      v116 = v68;
    }
  }
  else
  {
    v19 = 0LL;
    if ( v18 != 0x7FFFFFFFDLL )
      v19 = v18;
    v20 = 0LL;
    v18 = v19;
    v21 = MiGetSharedVm((__int64)v103);
    v116 = ExAcquireSpinLockExclusive(v21);
    v21[1] = 0;
  }
  if ( a4 == 1 )
  {
    if ( v100 != 64 && v99 )
      MiGetProtoPteAddress(
        BugCheckParameter4,
        *((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32),
        0LL,
        &v101);
    v22 = v18 - v20;
    if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | *((_DWORD *)BugCheckParameter4 + 13) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v23) = 15;
    }
    else
    {
      v23 = v22 >> 31;
      v13 = v22 & 0x7FFFFFFF;
    }
    *((_DWORD *)BugCheckParameter4 + 13) = *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000 | v13;
    *((_BYTE *)BugCheckParameter4 + 34) = v23;
    MiAdvanceVadView(
      BugCheckParameter4,
      ((a3 + 1) >> 12)
    - (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32)));
    if ( v100 != 64 && v99 )
      MiGetProtoPteAddress(
        BugCheckParameter4,
        *((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32),
        0LL,
        &v102);
    v24 = v116;
    v25 = BugCheckParameter4;
    v26 = 0LL;
  }
  else
  {
    v50 = v18 - v20;
    if ( a4 == 2 )
    {
      if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | *((_DWORD *)BugCheckParameter4 + 13) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
      {
        LOBYTE(v51) = 15;
      }
      else
      {
        v51 = v50 >> 31;
        v13 = v50 & 0x7FFFFFFF;
      }
      *((_DWORD *)BugCheckParameter4 + 13) = v13 | *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000;
      *((_BYTE *)BugCheckParameter4 + 34) = v51;
      if ( v100 != 64 && v99 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          *((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32),
          0LL,
          &v102);
        v102 = *(_QWORD *)(v102 + 16);
      }
      v52 = (a2 - 1) >> 44;
      v53 = (a2 - 1) >> 12;
      *((_DWORD *)BugCheckParameter4 + 7) = v53;
      *((_BYTE *)BugCheckParameter4 + 33) = v52;
      if ( v100 != 64 && v99 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          (unsigned int)v53 | ((unsigned __int64)(unsigned __int8)v52 << 32),
          0LL,
          &v101);
        v101 = *(_QWORD *)(v101 + 16);
        MiAdvanceVadView(BugCheckParameter4, 0LL);
      }
      v24 = v116;
      v25 = 0LL;
    }
    else
    {
      if ( v100 != 64 && v99 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          *((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32),
          0LL,
          &v102);
        v102 = *(_QWORD *)(v102 + 16);
      }
      v69 = a2 - 1;
      v70 = (a2 - 1) >> 12;
      v71 = (a2 - 1) >> 44;
      *((_DWORD *)BugCheckParameter4 + 7) = v70;
      *((_BYTE *)BugCheckParameter4 + 33) = v71;
      if ( v100 != 64 && v99 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          (unsigned int)v70 | ((unsigned __int64)(unsigned __int8)v71 << 32),
          0LL,
          &v101);
        v101 = *(_QWORD *)(v101 + 16);
        MiAdvanceVadView(BugCheckParameter4, 0LL);
      }
      v111 += (v7[7] | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32))
            - (v7[6] | ((unsigned __int64)*((unsigned __int8 *)v7 + 32) << 32))
            + 1;
      MiInsertVad(v7, v104, 2LL);
      v73 = *((unsigned int *)BugCheckParameter4 + 13);
      LODWORD(v73) = v73 & 0x7FFFFFFF;
      if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | v73) == 0x7FFFFFFFDLL )
      {
        v24 = v116;
        v74 = 0x7FFFFFFFDLL;
      }
      else if ( v100 == 64 )
      {
        v24 = v116;
        LOBYTE(v72) = v116;
        v74 = MiComputePageCommitment(
                *((_DWORD *)BugCheckParameter4 + 6) << 12,
                v69,
                (_DWORD)BugCheckParameter4,
                v72,
                4,
                0LL);
      }
      else
      {
        MiUnlockWorkingSetExclusive((__int64)v103, v116);
        v75 = 8
            * ((*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4
                                                                               + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v74 = ((__int64)(((v69 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v75) >> 3)
            - MiCountSharedPages((__int64)BugCheckParameter4, v75, ((v69 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v76)
            + 1;
        v77 = MiGetSharedVm((__int64)v103);
        v78 = ExAcquireSpinLockExclusive(v77);
        v77[1] = 0;
        v24 = v78;
        v116 = v78;
      }
      v79 = v74 & 0x7FFFFFFF;
      v80 = v74 & 0x7FFFFFFF | *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000;
      v81 = v74 >> 31;
      *((_DWORD *)BugCheckParameter4 + 13) = v80;
      LODWORD(v80) = v80 & 0x7FFFFFFF;
      *((_BYTE *)BugCheckParameter4 + 34) = v74 >> 31;
      if ( (((unsigned __int64)(unsigned __int8)(v74 >> 31) << 31) | v80) != 0x7FFFFFFFDLL )
      {
        v82 = v50 - v74;
        v81 = v82 >> 31;
        v79 = v82 & 0x7FFFFFFF;
      }
      v25 = v7;
      v7[13] = v7[13] & 0x80000000 | v79;
      *((_BYTE *)v7 + 34) = v81;
    }
    v26 = BugCheckParameter4;
  }
  MiUnlockWorkingSetExclusive((__int64)v103, v24);
  MiDeleteVirtualAddresses(a2, a3, v105, &v113);
  v27 = MiGetSharedVm((__int64)v103);
  ExAcquireSpinLockExclusive(v27);
  v27[1] = 0;
  if ( v101 )
    MiDrainSystemAccessLog((__int64)v103, v28, v29);
  LOBYTE(v29) = v116;
  MiCaptureDeleteHierarchy(a2, a3, v29, &v106);
  MiUnlockWorkingSetExclusive((__int64)v103, v116);
  if ( !v26 )
  {
    v26 = (_QWORD *)*BugCheckParameter4;
    v30 = BugCheckParameter4;
    if ( *BugCheckParameter4 )
    {
      for ( ; v26[1]; v26 = (_QWORD *)v26[1] )
        ;
    }
    else
    {
      for ( i = BugCheckParameter4[2]; ; i = v26[2] )
      {
        v26 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v26 || (_QWORD *)v26[1] == v30 )
          break;
        v30 = v26;
      }
    }
  }
  if ( !v25 )
  {
    v25 = (_QWORD *)BugCheckParameter4[1];
    v54 = BugCheckParameter4;
    if ( v25 )
    {
      for ( j = (_QWORD *)*v25; j; j = (_QWORD *)*j )
        v25 = j;
    }
    else
    {
      for ( k = BugCheckParameter4[2]; ; k = v25[2] )
      {
        v25 = (_QWORD *)(k & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v25 || (_QWORD *)*v25 == v54 )
          break;
        v54 = v25;
      }
    }
  }
  if ( !a5 )
    MiClearVadBits(a2, a3, v26, v25);
  MiReturnPageTablePageCommitment(
    a2,
    a3,
    (_DWORD)v104,
    (_DWORD)v26,
    (__int64)v25,
    (__int64)BugCheckParameter4,
    (__int64)&v106);
  v31 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v31);
  v108 = 0;
  v32 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v31) == 1 )
    SessionId = MmGetSessionIdEx(v32->ApcState.Process);
  else
    SessionId = -1;
  --v32->SpecialApcDisable;
  v34 = ++v32->AbAllocationRegionCount;
  v35 = ((char)v32->AbEntrySummary | (char)v32->AbOrphanedEntrySummary) ^ 0x3F;
  v36 = v31 & 0x7FFFFFFFFFFFFFFCLL;
  v37 = !_BitScanReverse((unsigned int *)&v38, v35);
  v107 = v38;
  if ( v37 )
  {
LABEL_65:
    if ( (*((_DWORD *)&v32->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v32, v31, SessionId, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v39 = (__int64)&v32->LockEntries[v38];
      v35 &= ~(1 << v38);
      if ( (*(_BYTE *)(v39 + 26) & 1) != 0
        && (*(_DWORD *)(v39 + 32) & 1) == 0
        && (*(_QWORD *)(v39 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v36
        && *(_DWORD *)(v39 + 40) == SessionId )
      {
        *(_BYTE *)(v39 + 26) &= ~1u;
        if ( *(_QWORD *)(v39 + 32) )
          break;
      }
      v37 = !_BitScanReverse((unsigned int *)&v38, v35);
      v107 = v38;
      if ( v37 )
        goto LABEL_64;
    }
    if ( !v39 )
    {
LABEL_64:
      v31 = BugCheckParameter2;
      goto LABEL_65;
    }
    *(_BYTE *)(v39 + 32) |= 2u;
    if ( *(__int64 *)(v39 + 32) < 0 )
      KiAbEntryRemoveFromTree(v39);
    v108 = *(_DWORD *)(v39 + 88) & 0x1FFFF;
    *(_DWORD *)(v39 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v39 + 25) &= ~1u;
    *(_QWORD *)(v39 + 32) = 0LL;
    v40 = 1 << ((signed __int64)(v39 - (unsigned __int64)v32->LockEntries) / 96);
    if ( v34 == 1 )
      v32->AbEntrySummary |= v40;
    else
      _InterlockedOr8((volatile signed __int8 *)&v32->AbOrphanedEntrySummary, v40);
  }
  --v32->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v32);
  v37 = v32->SpecialApcDisable++ == -1;
  if ( v37 && ($C459BD0D405E8E46662177FB3D0A143F *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
    KiCheckForKernelApcDelivery(v41);
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( a5 )
  {
    MiReInsertPlaceholderVad(a5);
    MiUnlockNestedVad(a5);
  }
  v42 = v104;
  if ( v7 && (v7[12] & 0x100000) == 0 )
  {
    v83 = *((_QWORD *)v7 + 9);
    *((_QWORD *)v7 + 14) = (unsigned __int64)v104 | 1;
    MiManageSubsectionView(v83, v7 + 24, 3LL);
  }
  v43 = v20 - v114;
  v44 = v43 - *((_QWORD *)&v113 + 1);
  if ( v43 )
    MiReturnFullProcessCharges(v42, v43);
  if ( v44 )
    MiReturnCommit(*(_QWORD *)(qword_140C4E648 + 8LL * v42[1].IdealProcessorPadding[5]), v44);
  if ( v100 != 64 )
    PsReturnProcessPagedPoolQuota(v42, 8 * v111);
  if ( v15 )
  {
    v84 = MiResidentPagesForSpan(
            (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32)) << 12,
            ((*((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32)) << 12) | 0xFFF,
            0LL);
    if ( v84 < v15 )
    {
      v85 = v15 - v84;
      v86 = *(_QWORD *)(qword_140C4E648 + 8LL * v42[1].IdealProcessorPadding[5]);
      if ( (ULONG_PTR *)v86 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v85 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v85 >= 0x80000 )
                break;
              v89 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      v85 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v37 = (_DWORD)CachedResidentAvailable == v89;
              LODWORD(CachedResidentAvailable) = v89;
              if ( v37 )
                goto LABEL_56;
            }
            while ( v89 != -1 && v85 + v89 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v85 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v85 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v86 + 7168), v85);
    }
  }
LABEL_56:
  MiFinishVadDeletion(BugCheckParameter4);
  v45 = v101;
  if ( v101 && v101 != v102 )
  {
    v90 = v110;
    v91 = 0LL;
    v92 = *(_QWORD *)(v110 + 64) != 0LL;
    v93 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v110 + 72));
    do
    {
      v94 = MiDecrementSubsections(v45);
      v45 = *(_QWORD *)(v45 + 16);
      v91 += v94;
    }
    while ( v45 != v102 );
    v101 = v45;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v90 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v93 <= 0xFu && CurrentIrql >= 2u )
        {
          v96 = KeGetCurrentPrcb();
          SchedulerAssist = v96->SchedulerAssist;
          v98 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v93 + 1));
          v37 = (v98 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v98;
          if ( v37 )
            KiRemoveSystemWorkPriorityKick(v96);
        }
      }
    }
    __writecr8(v93);
    if ( v91 )
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_140C4E648 + 8LL * (*(_WORD *)(v90 + 60) & 0x3FF)),
        v92,
        v91);
  }
  return 0LL;
}
