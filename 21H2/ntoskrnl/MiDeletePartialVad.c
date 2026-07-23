/*
 * XREFs of MiDeletePartialVad @ 0x14030862C
 * Callers:
 *     MiFreeVadRange @ 0x140323314 (MiFreeVadRange.c)
 * Callees:
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     KiAbEntryRemoveFromTree @ 0x14020C630 (KiAbEntryRemoveFromTree.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiDrainSystemAccessLog @ 0x14027D0F0 (MiDrainSystemAccessLog.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiClearVadBits @ 0x140308D50 (MiClearVadBits.c)
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 *     MiCaptureDeleteHierarchy @ 0x140309140 (MiCaptureDeleteHierarchy.c)
 *     MiDeleteVirtualAddresses @ 0x1403092D0 (MiDeleteVirtualAddresses.c)
 *     MiAdvanceVadView @ 0x140309344 (MiAdvanceVadView.c)
 *     MiComputePageCommitment @ 0x1403178B0 (MiComputePageCommitment.c)
 *     MiManageSubsectionView @ 0x14031BE50 (MiManageSubsectionView.c)
 *     MiDecrementSubsections @ 0x14031FE10 (MiDecrementSubsections.c)
 *     MiInsertVad @ 0x140321080 (MiInsertVad.c)
 *     MiFinishVadDeletion @ 0x140321B10 (MiFinishVadDeletion.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1403230C0 (MiReturnFullProcessCharges.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140323160 (PsReturnProcessPagedPoolQuota.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140355A50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiUpControlAreaRefs @ 0x14052ADB0 (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x14055557C (MiReInsertPlaceholderVad.c)
 *     MiResidentPagesForSpan @ 0x140615404 (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x14061CAB0 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x1406229E8 (MiFreePlaceholderStorage.c)
 *     MiRemoveSharedCommitNode @ 0x1407028C0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140702B30 (MiInsertSharedCommitNode.c)
 *     MiInsertVadCharges @ 0x140704050 (MiInsertVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x140705D70 (MiReturnPageTablePageCommitment.c)
 *     MiFreeRotateView @ 0x1408C86DC (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x1408D8438 (MiCreatePlaceholderStorage.c)
 *     MiLockNestedVad @ 0x1408D9BD8 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x1408D9BF4 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
  __int64 v16; // r14
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  __int64 v19; // r13
  LONG *v20; // rbx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rax
  unsigned __int8 v23; // bl
  _QWORD *v24; // r14
  _QWORD *v25; // r15
  LONG *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  _DWORD *v29; // r9
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
  __int64 v41; // r8
  __int64 v42; // r9
  _KPROCESS *v43; // r14
  __int64 v44; // r13
  __int64 v45; // rbx
  ULONG_PTR v46; // rbx
  __int64 i; // r15
  LONG *SharedVm; // rbx
  int v50; // r9d
  unsigned __int64 v51; // r14
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  _QWORD *v55; // rcx
  __int64 k; // r14
  _QWORD *j; // rax
  __int64 v58; // r8
  unsigned int *Pool; // rax
  int PlaceholderStorage; // ebx
  __int64 v61; // rax
  unsigned int v62; // edx
  char v63; // al
  unsigned __int64 v64; // r14
  __int64 v65; // rcx
  unsigned int v66; // eax
  unsigned __int64 v67; // rcx
  LONG *v68; // rbx
  KIRQL v69; // al
  unsigned __int64 v70; // r15
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rcx
  int v73; // r9d
  __int64 v74; // rcx
  unsigned __int64 v75; // r15
  unsigned __int64 v76; // rbx
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
  ULONG_PTR BugCheckParameter4a; // [rsp+28h] [rbp-A1h]
  __int64 v100; // [rsp+30h] [rbp-99h]
  bool v101; // [rsp+48h] [rbp-81h]
  __int64 v102; // [rsp+50h] [rbp-79h]
  ULONG_PTR v103; // [rsp+58h] [rbp-71h] BYREF
  __int64 v104; // [rsp+60h] [rbp-69h] BYREF
  unsigned __int64 *v105; // [rsp+68h] [rbp-61h]
  _KPROCESS *v106; // [rsp+70h] [rbp-59h]
  unsigned int v107; // [rsp+78h] [rbp-51h]
  int v108; // [rsp+7Ch] [rbp-4Dh] BYREF
  int v109; // [rsp+80h] [rbp-49h]
  int v110; // [rsp+84h] [rbp-45h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-41h]
  __int64 v112; // [rsp+90h] [rbp-39h]
  unsigned __int64 v113; // [rsp+98h] [rbp-31h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-29h]
  __int128 v115; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v116; // [rsp+B8h] [rbp-11h]
  __int128 v117; // [rsp+C8h] [rbp-1h]
  KIRQL v118; // [rsp+128h] [rbp+5Fh]

  v108 = 0;
  v115 = 0LL;
  v103 = 0LL;
  v116 = 0LL;
  v7 = 0LL;
  v104 = 0LL;
  v8 = 0;
  v117 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v113 = (a3 - a2 + 1) >> 12;
  v101 = 0;
  Process = CurrentThread->ApcState.Process;
  v112 = 0LL;
  v107 = 0;
  v106 = Process;
  v105 = &Process[1].ActiveProcessorsPadding[6];
  v10 = *((_DWORD *)BugCheckParameter4 + 12);
  if ( (v10 & 0x100000) != 0 )
  {
    v11 = 64LL;
    v102 = 64LL;
    v12 = 8;
    if ( (v10 & 0x70) != 0x40 )
      v12 = 0;
    v107 = v12;
  }
  else
  {
    v11 = 136LL;
    v102 = 136LL;
    v58 = *(_QWORD *)BugCheckParameter4[9];
    v112 = v58;
    if ( *(_QWORD *)(v58 + 64) )
    {
      if ( (__int64)BugCheckParameter4[15] < 0 )
        return 3221225505LL;
      v101 = (*(_DWORD *)(v58 + 56) & 0x420) == 0;
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
  v61 = *((unsigned int *)BugCheckParameter4 + 13);
  LODWORD(v61) = v61 & 0x7FFFFFFF;
  v62 = v7[13] & 0x80000000;
  if ( (v61 | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31)) == 0x7FFFFFFFDLL )
  {
    v63 = 15;
    v62 |= 0x7FFFFFFDu;
  }
  else
  {
    v63 = 0;
  }
  v7[13] = v62;
  *((_BYTE *)v7 + 34) = v63;
  *((_QWORD *)v7 + 5) = 0LL;
  v64 = ((a3 + 1) >> 12)
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
  if ( MiLocateLockedVadEvent(BugCheckParameter4) )
  {
    PlaceholderStorage = MiCreatePlaceholderStorage(v7);
    if ( PlaceholderStorage < 0 )
      goto LABEL_105;
  }
  MiLockNestedVad(v7);
  MiAdvanceVadView(v7, v64);
  MiUnlockNestedVad(v7);
  Process = v106;
  if ( v11 != 64 )
  {
    v65 = v112;
    v66 = v7[16] & 0xFDFFFFFF;
    *((_QWORD *)v7 + 15) = 0LL;
    v7[16] = v66;
    PlaceholderStorage = MiInsertSharedCommitNode(v65, Process, 0LL);
    if ( PlaceholderStorage < 0 )
      goto LABEL_105;
    v8 = 1;
  }
  PlaceholderStorage = MiInsertVadCharges(v7, Process);
  if ( PlaceholderStorage < 0 )
  {
    if ( v8 )
      MiRemoveSharedCommitNode(v112, Process, 0LL);
    goto LABEL_105;
  }
  v67 = Process[1].ActiveProcessorsPadding[8];
  if ( v11 == 64 )
  {
    if ( MiVadPageSizes[(v7[12] >> 18) & 3] == 16 )
      ++*(_QWORD *)(v67 + 424);
  }
  else
  {
    if ( *((_QWORD *)v7 + 16) )
    {
      ObfReferenceObjectWithTag(*((PVOID *)v7 + 16), 0x746C6644u);
    }
    else if ( MiVadPageSizes[(v7[12] >> 18) & 3] == 16 )
    {
      ++*(_QWORD *)(v67 + 432);
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
  v16 = *((unsigned int *)BugCheckParameter4 + 13);
  LODWORD(v16) = v16 & 0x7FFFFFFF;
  v17 = ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | v16;
  if ( v17 != 0x7FFFFFFFDLL && v17 )
  {
    if ( v102 == 64 )
    {
      SharedVm = MiGetSharedVm((__int64)v105);
      LOBYTE(v50) = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v118 = v50;
      v19 = MiComputePageCommitment(a2, a3, (_DWORD)BugCheckParameter4, v50, 4, 0LL);
    }
    else
    {
      v19 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
          - MiCountSharedPages(
              (__int64)BugCheckParameter4,
              ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
          + 1;
      v68 = MiGetSharedVm((__int64)v105);
      v69 = ExAcquireSpinLockExclusive(v68);
      v68[1] = 0;
      v118 = v69;
    }
  }
  else
  {
    v18 = 0LL;
    if ( v17 != 0x7FFFFFFFDLL )
      v18 = v17;
    v19 = 0LL;
    v17 = v18;
    v20 = MiGetSharedVm((__int64)v105);
    v118 = ExAcquireSpinLockExclusive(v20);
    v20[1] = 0;
  }
  if ( a4 == 1 )
  {
    if ( v102 != 64 && v101 )
      MiGetProtoPteAddress(
        BugCheckParameter4,
        *((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32),
        0LL,
        &v103);
    v21 = v17 - v19;
    if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | *((_DWORD *)BugCheckParameter4 + 13) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v22) = 15;
    }
    else
    {
      v22 = v21 >> 31;
      v13 = v21 & 0x7FFFFFFF;
    }
    *((_DWORD *)BugCheckParameter4 + 13) = *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000 | v13;
    *((_BYTE *)BugCheckParameter4 + 34) = v22;
    MiAdvanceVadView(
      BugCheckParameter4,
      ((a3 + 1) >> 12)
    - (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32)));
    if ( v102 != 64 && v101 )
      MiGetProtoPteAddress(
        BugCheckParameter4,
        *((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32),
        0LL,
        &v104);
    v23 = v118;
    v24 = BugCheckParameter4;
    v25 = 0LL;
  }
  else
  {
    v51 = v17 - v19;
    if ( a4 == 2 )
    {
      if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | *((_DWORD *)BugCheckParameter4 + 13) & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
      {
        LOBYTE(v52) = 15;
      }
      else
      {
        v52 = v51 >> 31;
        v13 = v51 & 0x7FFFFFFF;
      }
      *((_DWORD *)BugCheckParameter4 + 13) = v13 | *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000;
      *((_BYTE *)BugCheckParameter4 + 34) = v52;
      if ( v102 != 64 && v101 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          *((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32),
          0LL,
          &v104);
        v104 = *(_QWORD *)(v104 + 16);
      }
      v53 = (a2 - 1) >> 44;
      v54 = (a2 - 1) >> 12;
      *((_DWORD *)BugCheckParameter4 + 7) = v54;
      *((_BYTE *)BugCheckParameter4 + 33) = v53;
      if ( v102 != 64 && v101 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          (unsigned int)v54 | ((unsigned __int64)(unsigned __int8)v53 << 32),
          0LL,
          &v103);
        v103 = *(_QWORD *)(v103 + 16);
        MiAdvanceVadView(BugCheckParameter4, 0LL);
      }
      v23 = v118;
      v24 = 0LL;
    }
    else
    {
      if ( v102 != 64 && v101 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          *((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32),
          0LL,
          &v104);
        v104 = *(_QWORD *)(v104 + 16);
      }
      v70 = a2 - 1;
      v71 = (a2 - 1) >> 12;
      v72 = (a2 - 1) >> 44;
      *((_DWORD *)BugCheckParameter4 + 7) = v71;
      *((_BYTE *)BugCheckParameter4 + 33) = v72;
      if ( v102 != 64 && v101 )
      {
        MiGetProtoPteAddress(
          BugCheckParameter4,
          (unsigned int)v71 | ((unsigned __int64)(unsigned __int8)v72 << 32),
          0LL,
          &v103);
        v103 = *(_QWORD *)(v103 + 16);
        MiAdvanceVadView(BugCheckParameter4, 0LL);
      }
      v113 += (v7[7] | ((unsigned __int64)*((unsigned __int8 *)v7 + 33) << 32))
            - (v7[6] | ((unsigned __int64)*((unsigned __int8 *)v7 + 32) << 32))
            + 1;
      MiInsertVad(v7, v106, 2LL);
      v74 = *((unsigned int *)BugCheckParameter4 + 13);
      LODWORD(v74) = v74 & 0x7FFFFFFF;
      if ( (((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 34) << 31) | v74) == 0x7FFFFFFFDLL )
      {
        v23 = v118;
        v75 = 0x7FFFFFFFDLL;
      }
      else if ( v102 == 64 )
      {
        v23 = v118;
        LOBYTE(v73) = v118;
        v75 = MiComputePageCommitment(
                *((_DWORD *)BugCheckParameter4 + 6) << 12,
                v70,
                (_DWORD)BugCheckParameter4,
                v73,
                4,
                0LL);
      }
      else
      {
        MiUnlockWorkingSetExclusive((__int64)v105, v118);
        v76 = 8
            * ((*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4
                                                                               + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v75 = ((__int64)(((v70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v76) >> 3)
            - MiCountSharedPages((__int64)BugCheckParameter4, v76, ((v70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            + 1;
        v77 = MiGetSharedVm((__int64)v105);
        v78 = ExAcquireSpinLockExclusive(v77);
        v77[1] = 0;
        v23 = v78;
        v118 = v78;
      }
      v79 = v75 & 0x7FFFFFFF;
      v80 = v75 & 0x7FFFFFFF | *((_DWORD *)BugCheckParameter4 + 13) & 0x80000000;
      v81 = v75 >> 31;
      *((_DWORD *)BugCheckParameter4 + 13) = v80;
      LODWORD(v80) = v80 & 0x7FFFFFFF;
      *((_BYTE *)BugCheckParameter4 + 34) = v75 >> 31;
      if ( (((unsigned __int64)(unsigned __int8)(v75 >> 31) << 31) | v80) != 0x7FFFFFFFDLL )
      {
        v82 = v51 - v75;
        v81 = v82 >> 31;
        v79 = v82 & 0x7FFFFFFF;
      }
      v24 = v7;
      v7[13] = v7[13] & 0x80000000 | v79;
      *((_BYTE *)v7 + 34) = v81;
    }
    v25 = BugCheckParameter4;
  }
  MiUnlockWorkingSetExclusive((__int64)v105, v23);
  MiDeleteVirtualAddresses(a2, a3, v107, &v115, BugCheckParameter4a, v100);
  v26 = MiGetSharedVm((__int64)v105);
  ExAcquireSpinLockExclusive(v26);
  v26[1] = 0;
  if ( v103 )
    MiDrainSystemAccessLog((__int64)v105, v27, v28, v29);
  LOBYTE(v28) = v118;
  MiCaptureDeleteHierarchy(a2, a3, v28, &v108);
  MiUnlockWorkingSetExclusive((__int64)v105, v118);
  if ( !v25 )
  {
    v25 = (_QWORD *)*BugCheckParameter4;
    v30 = BugCheckParameter4;
    if ( *BugCheckParameter4 )
    {
      for ( ; v25[1]; v25 = (_QWORD *)v25[1] )
        ;
    }
    else
    {
      for ( i = BugCheckParameter4[2]; ; i = v25[2] )
      {
        v25 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v25 || (_QWORD *)v25[1] == v30 )
          break;
        v30 = v25;
      }
    }
  }
  if ( !v24 )
  {
    v24 = (_QWORD *)BugCheckParameter4[1];
    v55 = BugCheckParameter4;
    if ( v24 )
    {
      for ( j = (_QWORD *)*v24; j; j = (_QWORD *)*j )
        v24 = j;
    }
    else
    {
      for ( k = BugCheckParameter4[2]; ; k = v24[2] )
      {
        v24 = (_QWORD *)(k & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v24 || (_QWORD *)*v24 == v55 )
          break;
        v55 = v24;
      }
    }
  }
  if ( !a5 )
    MiClearVadBits(a2, a3, v25, v24);
  MiReturnPageTablePageCommitment(
    a2,
    a3,
    (_DWORD)v106,
    (_DWORD)v25,
    (__int64)v24,
    (__int64)BugCheckParameter4,
    (__int64)&v108);
  v31 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v31);
  v110 = 0;
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
  v109 = v38;
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
      v109 = v38;
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
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v39);
    v110 = *(_DWORD *)(v39 + 88) & 0x1FFFF;
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
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe(CurrentThread);
  if ( a5 )
  {
    MiReInsertPlaceholderVad(a5);
    MiUnlockNestedVad(a5);
  }
  v43 = v106;
  if ( v7 && (v7[12] & 0x100000) == 0 )
  {
    v83 = *((_QWORD *)v7 + 9);
    *((_QWORD *)v7 + 14) = (unsigned __int64)v106 | 1;
    MiManageSubsectionView(v83, v7 + 24, 3LL);
  }
  v44 = v19 - v116;
  v45 = v44 - *((_QWORD *)&v115 + 1);
  if ( v44 )
    MiReturnFullProcessCharges(v43, v44);
  if ( v45 )
    MiReturnCommit(*(_QWORD *)(qword_140C4E688 + 8LL * v43[1].IdealProcessorPadding[5]), v45, v41, v42);
  if ( v102 != 64 )
    PsReturnProcessPagedPoolQuota(v43, 8 * v113);
  if ( v15 )
  {
    v84 = MiResidentPagesForSpan(
            (*((unsigned int *)BugCheckParameter4 + 6) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 32) << 32)) << 12,
            ((*((unsigned int *)BugCheckParameter4 + 7) | ((unsigned __int64)*((unsigned __int8 *)BugCheckParameter4 + 33) << 32)) << 12) | 0xFFF,
            0LL);
    if ( v84 < v15 )
    {
      v85 = v15 - v84;
      v86 = *(_QWORD *)(qword_140C4E688 + 8LL * v43[1].IdealProcessorPadding[5]);
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
  v46 = v103;
  if ( v103 && v103 != v104 )
  {
    v90 = v112;
    v91 = 0LL;
    v92 = *(_QWORD *)(v112 + 64) != 0LL;
    v93 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v112 + 72));
    do
    {
      v94 = MiDecrementSubsections(v46);
      v46 = *(_QWORD *)(v46 + 16);
      v91 += v94;
    }
    while ( v46 != v104 );
    v103 = v46;
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
        *(_QWORD *)(qword_140C4E688 + 8LL * (*(_WORD *)(v90 + 60) & 0x3FF)),
        v92,
        v91);
  }
  return 0LL;
}
