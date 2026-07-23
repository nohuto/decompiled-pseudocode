/*
 * XREFs of MiDeletePartialVad @ 0x1402AA764
 * Callers:
 *     MiFreeVadRange @ 0x1402AB094 (MiFreeVadRange.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiManageSubsectionView @ 0x14022A510 (MiManageSubsectionView.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140260D50 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140279990 (PsReturnProcessPagedPoolQuota.c)
 *     MiFinishVadDeletion @ 0x140279A00 (MiFinishVadDeletion.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x14027D4B0 (MiReturnFullProcessCharges.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MiInsertVad @ 0x1402A2A00 (MiInsertVad.c)
 *     MiDecrementSubsections @ 0x1402A32F0 (MiDecrementSubsections.c)
 *     MiDrainSystemAccessLog @ 0x1402A4C10 (MiDrainSystemAccessLog.c)
 *     MiClearVadBits @ 0x1402A9D00 (MiClearVadBits.c)
 *     MiLocateLockedVadEvent @ 0x1402AA0CC (MiLocateLockedVadEvent.c)
 *     MiCaptureDeleteHierarchy @ 0x1402AAE90 (MiCaptureDeleteHierarchy.c)
 *     MiDeleteVirtualAddresses @ 0x1402AB020 (MiDeleteVirtualAddresses.c)
 *     MiComputePageCommitment @ 0x1402AD4B0 (MiComputePageCommitment.c)
 *     MiAdvanceVadView @ 0x140311C08 (MiAdvanceVadView.c)
 *     KiAbEntryRemoveFromTree @ 0x1403410E0 (KiAbEntryRemoveFromTree.c)
 *     MiCountSharedPages @ 0x1403420A0 (MiCountSharedPages.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MiUpControlAreaRefs @ 0x140525050 (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x14054F84C (MiReInsertPlaceholderVad.c)
 *     MiInsertVadCharges @ 0x140633090 (MiInsertVadCharges.c)
 *     MiRemoveSharedCommitNode @ 0x140633470 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406336E0 (MiInsertSharedCommitNode.c)
 *     MiReturnPageTablePageCommitment @ 0x14063D620 (MiReturnPageTablePageCommitment.c)
 *     MiResidentPagesForSpan @ 0x1406E1514 (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x1406E7820 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x1406EDC98 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x1408C3C2C (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x1408D3988 (MiCreatePlaceholderStorage.c)
 *     MiLockNestedVad @ 0x1408D5128 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x1408D5144 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePartialVad(_DWORD *P, unsigned __int64 a2, unsigned __int64 a3, int a4, __int64 a5)
{
  __int64 v7; // rsi
  int v8; // r12d
  __int64 Process; // r14
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
  _DWORD *v21; // r9
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rax
  unsigned __int8 v24; // bl
  _QWORD *v25; // r14
  _QWORD *v26; // r15
  LONG *v27; // rbx
  __int64 v28; // r8
  _DWORD *v29; // rcx
  ULONG_PTR v30; // r14
  struct _KTHREAD *v31; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v33; // r15
  unsigned int v34; // edx
  __int64 v35; // r9
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // r14
  unsigned __int8 v39; // al
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // r14
  __int64 v45; // r13
  __int64 v46; // rbx
  ULONG_PTR v47; // rbx
  __int64 i; // r15
  LONG *SharedVm; // rbx
  int v51; // r9d
  unsigned __int64 v52; // r14
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  _DWORD *v56; // rcx
  __int64 k; // r14
  _QWORD *j; // rax
  __int64 v59; // r8
  PVOID Pool; // rax
  int PlaceholderStorage; // ebx
  __int64 v62; // rax
  unsigned int v63; // edx
  char v64; // al
  unsigned __int64 v65; // r14
  __int64 v66; // rcx
  unsigned int v67; // eax
  __int64 v68; // rcx
  LONG *v69; // rbx
  KIRQL v70; // al
  unsigned __int64 v71; // r15
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rcx
  int v74; // r9d
  __int64 v75; // rcx
  unsigned __int64 v76; // r15
  unsigned __int64 v77; // rbx
  LONG *v78; // rbx
  KIRQL v79; // al
  int v80; // edx
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // r8
  unsigned __int64 v83; // r14
  __int64 *v84; // rcx
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // r12
  __int64 v87; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v90; // eax
  __int64 v91; // r13
  __int64 v92; // rdi
  BOOL v93; // r15d
  unsigned __int64 v94; // rsi
  __int64 v95; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v97; // r8
  _DWORD *SchedulerAssist; // r9
  int v99; // eax
  bool v100; // [rsp+48h] [rbp-81h]
  __int64 v101; // [rsp+50h] [rbp-79h]
  ULONG_PTR v102; // [rsp+58h] [rbp-71h] BYREF
  __int64 v103; // [rsp+60h] [rbp-69h] BYREF
  __int64 v104; // [rsp+68h] [rbp-61h]
  __int64 v105; // [rsp+70h] [rbp-59h]
  unsigned int v106; // [rsp+78h] [rbp-51h]
  int v107; // [rsp+7Ch] [rbp-4Dh] BYREF
  int v108; // [rsp+80h] [rbp-49h]
  int v109; // [rsp+84h] [rbp-45h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-41h]
  __int64 v111; // [rsp+90h] [rbp-39h]
  unsigned __int64 v112; // [rsp+98h] [rbp-31h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-29h]
  __int128 v114; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v115; // [rsp+B8h] [rbp-11h]
  __int128 v116; // [rsp+C8h] [rbp-1h]
  KIRQL v117; // [rsp+128h] [rbp+5Fh]

  v107 = 0;
  v114 = 0LL;
  v102 = 0LL;
  v115 = 0LL;
  v7 = 0LL;
  v103 = 0LL;
  v8 = 0;
  v116 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v112 = (a3 - a2 + 1) >> 12;
  v100 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v111 = 0LL;
  v106 = 0;
  v105 = Process;
  v104 = Process + 1664;
  v10 = P[12];
  if ( (v10 & 0x100000) != 0 )
  {
    v11 = 64LL;
    v101 = 64LL;
    v12 = 8;
    if ( (v10 & 0x70) != 0x40 )
      v12 = 0;
    v106 = v12;
  }
  else
  {
    v11 = 136LL;
    v101 = 136LL;
    v59 = **((_QWORD **)P + 9);
    v111 = v59;
    if ( *(_QWORD *)(v59 + 64) )
    {
      if ( *((__int64 *)P + 15) < 0 )
        return 3221225505LL;
      v100 = (*(_DWORD *)(v59 + 56) & 0x420) == 0;
    }
  }
  v13 = 2147483645;
  if ( a4 != 3 )
    goto LABEL_6;
  Pool = MiAllocatePool(64, v11, 0x46646156u);
  v7 = (__int64)Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  memmove(Pool, P, v11);
  *(_DWORD *)(v7 + 36) = 0;
  *(_QWORD *)(v7 + 16) = -2LL;
  *(_QWORD *)(v7 + 56) = 0LL;
  v62 = (unsigned int)P[13];
  LODWORD(v62) = v62 & 0x7FFFFFFF;
  v63 = *(_DWORD *)(v7 + 52) & 0x80000000;
  if ( (v62 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) == 0x7FFFFFFFDLL )
  {
    v64 = 15;
    v63 |= 0x7FFFFFFDu;
  }
  else
  {
    v64 = 0;
  }
  *(_DWORD *)(v7 + 52) = v63;
  *(_BYTE *)(v7 + 34) = v64;
  *(_QWORD *)(v7 + 40) = 0LL;
  v65 = ((a3 + 1) >> 12) - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32));
  if ( (*(_DWORD *)(v7 + 48) & 0x70) == 0x40 && !(unsigned int)MiCreateRotateView(v7) )
  {
    PlaceholderStorage = -1073741670;
LABEL_105:
    MiFreeRotateView(v7);
    MiFreePlaceholderStorage(v7);
    ExFreePoolWithTag((PVOID)v7, 0);
    return (unsigned int)PlaceholderStorage;
  }
  if ( MiLocateLockedVadEvent((__int64)P, 128) )
  {
    PlaceholderStorage = MiCreatePlaceholderStorage(v7);
    if ( PlaceholderStorage < 0 )
      goto LABEL_105;
  }
  MiLockNestedVad(v7);
  MiAdvanceVadView(v7, v65);
  MiUnlockNestedVad(v7);
  Process = v105;
  if ( v11 != 64 )
  {
    v66 = v111;
    v67 = *(_DWORD *)(v7 + 64) & 0xFDFFFFFF;
    *(_QWORD *)(v7 + 120) = 0LL;
    *(_DWORD *)(v7 + 64) = v67;
    PlaceholderStorage = MiInsertSharedCommitNode(v66, Process, 0LL);
    if ( PlaceholderStorage < 0 )
      goto LABEL_105;
    v8 = 1;
  }
  PlaceholderStorage = MiInsertVadCharges(v7, Process);
  if ( PlaceholderStorage < 0 )
  {
    if ( v8 )
      MiRemoveSharedCommitNode(v111, Process, 0LL);
    goto LABEL_105;
  }
  v68 = *(_QWORD *)(Process + 1680);
  if ( v11 == 64 )
  {
    if ( MiVadPageSizes[(*(_DWORD *)(v7 + 48) >> 18) & 3] == 16 )
      ++*(_QWORD *)(v68 + 424);
  }
  else
  {
    if ( *(_QWORD *)(v7 + 128) )
    {
      ObfReferenceObjectWithTag(*(PVOID *)(v7 + 128), 0x746C6644u);
    }
    else if ( MiVadPageSizes[(*(_DWORD *)(v7 + 48) >> 18) & 3] == 16 )
    {
      ++*(_QWORD *)(v68 + 432);
    }
    MiUpControlAreaRefs(v7, 1LL);
  }
LABEL_6:
  v14 = P[12];
  v15 = 0LL;
  if ( (v14 & 0x70) == 0x10 || (v14 & 0x70) == 0x40 )
    v15 = MiResidentPagesForSpan(
            ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
            (((unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF,
            0LL);
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = Process + 1232;
  ExAcquirePushLockExclusiveEx(Process + 1232, 0LL);
  v16 = (unsigned int)P[13];
  LODWORD(v16) = v16 & 0x7FFFFFFF;
  v17 = ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v16;
  if ( v17 != 0x7FFFFFFFDLL && v17 )
  {
    if ( v101 == 64 )
    {
      SharedVm = MiGetSharedVm(v104);
      LOBYTE(v51) = ExAcquireSpinLockExclusive(SharedVm);
      SharedVm[1] = 0;
      v117 = v51;
      v19 = MiComputePageCommitment(a2, a3, (_DWORD)P, v51, 4, 0LL);
    }
    else
    {
      v19 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
          - MiCountSharedPages(
              P,
              ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
          + 1;
      v69 = MiGetSharedVm(v104);
      v70 = ExAcquireSpinLockExclusive(v69);
      v69[1] = 0;
      v117 = v70;
    }
  }
  else
  {
    v18 = 0LL;
    if ( v17 != 0x7FFFFFFFDLL )
      v18 = v17;
    v19 = 0LL;
    v17 = v18;
    v20 = MiGetSharedVm(v104);
    v117 = ExAcquireSpinLockExclusive(v20);
    v20[1] = 0;
  }
  if ( a4 == 1 )
  {
    if ( v101 != 64 && v100 )
      MiGetProtoPteAddress(
        (__int64)P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        0,
        &v102);
    v22 = v17 - v19;
    if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | P[13] & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v23) = 15;
    }
    else
    {
      v23 = v22 >> 31;
      v13 = v22 & 0x7FFFFFFF;
    }
    P[13] = P[13] & 0x80000000 | v13;
    *((_BYTE *)P + 34) = v23;
    MiAdvanceVadView(
      P,
      ((a3 + 1) >> 12) - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)));
    if ( v101 != 64 && v100 )
      MiGetProtoPteAddress(
        (__int64)P,
        (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32),
        0,
        &v103);
    v24 = v117;
    v25 = P;
    v26 = 0LL;
  }
  else
  {
    v52 = v17 - v19;
    if ( a4 == 2 )
    {
      if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | P[13] & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
      {
        LOBYTE(v53) = 15;
      }
      else
      {
        v53 = v52 >> 31;
        v13 = v52 & 0x7FFFFFFF;
      }
      P[13] = v13 | P[13] & 0x80000000;
      *((_BYTE *)P + 34) = v53;
      if ( v101 != 64 && v100 )
      {
        MiGetProtoPteAddress(
          (__int64)P,
          (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
          0,
          &v103);
        v103 = *(_QWORD *)(v103 + 16);
      }
      v54 = (a2 - 1) >> 44;
      v55 = (a2 - 1) >> 12;
      P[7] = v55;
      *((_BYTE *)P + 33) = v54;
      if ( v101 != 64 && v100 )
      {
        MiGetProtoPteAddress((__int64)P, (unsigned int)v55 | ((unsigned __int64)(unsigned __int8)v54 << 32), 0, &v102);
        v102 = *(_QWORD *)(v102 + 16);
        MiAdvanceVadView(P, 0LL);
      }
      v24 = v117;
      v25 = 0LL;
    }
    else
    {
      if ( v101 != 64 && v100 )
      {
        MiGetProtoPteAddress(
          (__int64)P,
          (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32),
          0,
          &v103);
        v103 = *(_QWORD *)(v103 + 16);
      }
      v71 = a2 - 1;
      v72 = (a2 - 1) >> 12;
      v73 = (a2 - 1) >> 44;
      P[7] = v72;
      *((_BYTE *)P + 33) = v73;
      if ( v101 != 64 && v100 )
      {
        MiGetProtoPteAddress((__int64)P, (unsigned int)v72 | ((unsigned __int64)(unsigned __int8)v73 << 32), 0, &v102);
        v102 = *(_QWORD *)(v102 + 16);
        MiAdvanceVadView(P, 0LL);
      }
      v112 += (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32))
            - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
            + 1;
      MiInsertVad(v7, v105, 2LL, v21);
      v75 = (unsigned int)P[13];
      LODWORD(v75) = v75 & 0x7FFFFFFF;
      if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v75) == 0x7FFFFFFFDLL )
      {
        v24 = v117;
        v76 = 0x7FFFFFFFDLL;
      }
      else if ( v101 == 64 )
      {
        v24 = v117;
        LOBYTE(v74) = v117;
        v76 = MiComputePageCommitment(P[6] << 12, v71, (_DWORD)P, v74, 4, 0LL);
      }
      else
      {
        MiUnlockWorkingSetExclusive(v104, v117);
        v77 = 8 * (((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v76 = ((__int64)(((v71 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v77) >> 3)
            - MiCountSharedPages(P, v77, ((v71 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            + 1;
        v78 = MiGetSharedVm(v104);
        v79 = ExAcquireSpinLockExclusive(v78);
        v78[1] = 0;
        v24 = v79;
        v117 = v79;
      }
      v80 = v76 & 0x7FFFFFFF;
      v81 = v76 & 0x7FFFFFFF | P[13] & 0x80000000;
      v82 = v76 >> 31;
      P[13] = v81;
      LODWORD(v81) = v81 & 0x7FFFFFFF;
      *((_BYTE *)P + 34) = v76 >> 31;
      if ( (((unsigned __int64)(unsigned __int8)(v76 >> 31) << 31) | v81) != 0x7FFFFFFFDLL )
      {
        v83 = v52 - v76;
        v82 = v83 >> 31;
        v80 = v83 & 0x7FFFFFFF;
      }
      v25 = (_QWORD *)v7;
      *(_DWORD *)(v7 + 52) = *(_DWORD *)(v7 + 52) & 0x80000000 | v80;
      *(_BYTE *)(v7 + 34) = v82;
    }
    v26 = P;
  }
  MiUnlockWorkingSetExclusive(v104, v24);
  MiDeleteVirtualAddresses(a2, a3, v106, &v114);
  v27 = MiGetSharedVm(v104);
  ExAcquireSpinLockExclusive(v27);
  v27[1] = 0;
  if ( v102 )
    MiDrainSystemAccessLog(v104);
  LOBYTE(v28) = v117;
  MiCaptureDeleteHierarchy(a2, a3, v28, &v107);
  MiUnlockWorkingSetExclusive(v104, v117);
  if ( !v26 )
  {
    v26 = *(_QWORD **)P;
    v29 = P;
    if ( *(_QWORD *)P )
    {
      for ( ; v26[1]; v26 = (_QWORD *)v26[1] )
        ;
    }
    else
    {
      for ( i = *((_QWORD *)P + 2); ; i = v26[2] )
      {
        v26 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v26 || (_DWORD *)v26[1] == v29 )
          break;
        v29 = v26;
      }
    }
  }
  if ( !v25 )
  {
    v25 = (_QWORD *)*((_QWORD *)P + 1);
    v56 = P;
    if ( v25 )
    {
      for ( j = (_QWORD *)*v25; j; j = (_QWORD *)*j )
        v25 = j;
    }
    else
    {
      for ( k = *((_QWORD *)P + 2); ; k = v25[2] )
      {
        v25 = (_QWORD *)(k & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v25 || (_DWORD *)*v25 == v56 )
          break;
        v56 = v25;
      }
    }
  }
  if ( !a5 )
    MiClearVadBits(a2, a3, (__int64)v26, (__int64)v25);
  MiReturnPageTablePageCommitment(a2, a3, v105, (_DWORD)v26, (__int64)v25, (__int64)P, (__int64)&v107);
  v30 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v30);
  v109 = 0;
  v31 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v30) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v31->ApcState.Process);
  else
    SessionId = -1;
  --v31->SpecialApcDisable;
  v33 = ++v31->AbAllocationRegionCount;
  v34 = ((char)v31->AbEntrySummary | (char)v31->AbOrphanedEntrySummary) ^ 0x3F;
  v35 = v30 & 0x7FFFFFFFFFFFFFFCLL;
  v36 = !_BitScanReverse((unsigned int *)&v37, v34);
  v108 = v37;
  if ( v36 )
  {
LABEL_65:
    if ( (*((_DWORD *)&v31->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v31, v30, SessionId, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v38 = (__int64)&v31->LockEntries[v37];
      v34 &= ~(1 << v37);
      if ( (*(_BYTE *)(v38 + 26) & 1) != 0
        && (*(_DWORD *)(v38 + 32) & 1) == 0
        && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v35
        && *(_DWORD *)(v38 + 40) == SessionId )
      {
        *(_BYTE *)(v38 + 26) &= ~1u;
        if ( *(_QWORD *)(v38 + 32) )
          break;
      }
      v36 = !_BitScanReverse((unsigned int *)&v37, v34);
      v108 = v37;
      if ( v36 )
        goto LABEL_64;
    }
    if ( !v38 )
    {
LABEL_64:
      v30 = BugCheckParameter2;
      goto LABEL_65;
    }
    *(_BYTE *)(v38 + 32) |= 2u;
    if ( *(__int64 *)(v38 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
    v109 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
    *(_DWORD *)(v38 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v38 + 25) &= ~1u;
    *(_QWORD *)(v38 + 32) = 0LL;
    v39 = 1 << ((signed __int64)(v38 - (unsigned __int64)v31->LockEntries) / 96);
    if ( v33 == 1 )
      v31->AbEntrySummary |= v39;
    else
      _InterlockedOr8((volatile signed __int8 *)&v31->AbOrphanedEntrySummary, v39);
  }
  --v31->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v31, BugCheckParameter2, &v109);
  v43 = 1LL;
  v36 = v31->SpecialApcDisable++ == -1;
  if ( v36 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v31->ApcState.ApcListHead[0].Flink != &v31->152 )
    KiCheckForKernelApcDelivery(v40);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v43, v41, v42);
  if ( a5 )
  {
    MiReInsertPlaceholderVad(a5);
    MiUnlockNestedVad(a5);
  }
  v44 = v105;
  if ( v7 && (*(_DWORD *)(v7 + 48) & 0x100000) == 0 )
  {
    v84 = *(__int64 **)(v7 + 72);
    *(_QWORD *)(v7 + 112) = v105 | 1;
    MiManageSubsectionView(v84, (_QWORD *)(v7 + 96), 3);
  }
  v45 = v19 - v115;
  v46 = v45 - *((_QWORD *)&v114 + 1);
  if ( v45 )
    MiReturnFullProcessCharges(v44, v45);
  if ( v46 )
    MiReturnCommit(*(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(v44 + 1838)), v46);
  if ( v101 != 64 )
    PsReturnProcessPagedPoolQuota(v44, 8 * v112);
  if ( v15 )
  {
    v85 = MiResidentPagesForSpan(
            ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
            (((unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF,
            0LL);
    if ( v85 < v15 )
    {
      v86 = v15 - v85;
      v87 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(v44 + 1838));
      if ( (ULONG_PTR *)v87 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v86 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v86 >= 0x80000 )
                break;
              v90 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      v86 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v36 = (_DWORD)CachedResidentAvailable == v90;
              LODWORD(CachedResidentAvailable) = v90;
              if ( v36 )
                goto LABEL_56;
            }
            while ( v90 != -1 && v86 + v90 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v86 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v86 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v87 + 7168), v86);
    }
  }
LABEL_56:
  MiFinishVadDeletion(P, a2, a3, a5 != 0);
  v47 = v102;
  if ( v102 && v102 != v103 )
  {
    v91 = v111;
    v92 = 0LL;
    v93 = *(_QWORD *)(v111 + 64) != 0LL;
    v94 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v111 + 72));
    do
    {
      v95 = MiDecrementSubsections(v47, v47, 8u);
      v47 = *(_QWORD *)(v47 + 16);
      v92 += v95;
    }
    while ( v47 != v103 );
    v102 = v47;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v91 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v94 <= 0xFu && CurrentIrql >= 2u )
        {
          v97 = KeGetCurrentPrcb();
          SchedulerAssist = v97->SchedulerAssist;
          v99 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v94 + 1));
          v36 = (v99 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v99;
          if ( v36 )
            KiRemoveSystemWorkPriorityKick(v97);
        }
      }
    }
    __writecr8(v94);
    if ( v92 )
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_140C4E588 + 8LL * (*(_WORD *)(v91 + 60) & 0x3FF)),
        v93,
        v92);
  }
  return 0LL;
}
