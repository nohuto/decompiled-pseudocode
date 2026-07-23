/*
 * XREFs of MiDeletePartialVad @ 0x140251734
 * Callers:
 *     MiFreeVadRange @ 0x140252064 (MiFreeVadRange.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140207E30 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140220940 (PsReturnProcessPagedPoolQuota.c)
 *     MiFinishVadDeletion @ 0x1402209B0 (MiFinishVadDeletion.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x140224460 (MiReturnFullProcessCharges.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     MiInsertVad @ 0x1402499D0 (MiInsertVad.c)
 *     MiDecrementSubsections @ 0x14024A2C0 (MiDecrementSubsections.c)
 *     MiDrainSystemAccessLog @ 0x14024BBE0 (MiDrainSystemAccessLog.c)
 *     MiClearVadBits @ 0x140250CD0 (MiClearVadBits.c)
 *     MiLocateLockedVadEvent @ 0x14025109C (MiLocateLockedVadEvent.c)
 *     MiCaptureDeleteHierarchy @ 0x140251E60 (MiCaptureDeleteHierarchy.c)
 *     MiDeleteVirtualAddresses @ 0x140251FF0 (MiDeleteVirtualAddresses.c)
 *     MiComputePageCommitment @ 0x140254480 (MiComputePageCommitment.c)
 *     KiAbEntryRemoveFromTree @ 0x140272F70 (KiAbEntryRemoveFromTree.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiManageSubsectionView @ 0x1402BD190 (MiManageSubsectionView.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiCountSharedPages @ 0x140312D60 (MiCountSharedPages.c)
 *     MiAdvanceVadView @ 0x14034F3F8 (MiAdvanceVadView.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     MiUpControlAreaRefs @ 0x1405256A0 (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x14054FE9C (MiReInsertPlaceholderVad.c)
 *     MiInsertVadCharges @ 0x1405FE050 (MiInsertVadCharges.c)
 *     MiRemoveSharedCommitNode @ 0x1405FE430 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1405FE6A0 (MiInsertSharedCommitNode.c)
 *     MiReturnPageTablePageCommitment @ 0x1406084D0 (MiReturnPageTablePageCommitment.c)
 *     MiResidentPagesForSpan @ 0x140704084 (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x14070B750 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x140711628 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x1408C4F7C (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x1408D4CD8 (MiCreatePlaceholderStorage.c)
 *     MiLockNestedVad @ 0x1408D6478 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x1408D6494 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
  __int64 v16; // rdx
  __int64 v17; // r14
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // rbx
  _DWORD *v22; // r9
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int8 v25; // bl
  _QWORD *v26; // r14
  _QWORD *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r8
  _DWORD *v31; // rcx
  ULONG_PTR v32; // r14
  struct _KTHREAD *v33; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v35; // r15
  unsigned int v36; // edx
  __int64 v37; // r9
  bool v38; // zf
  __int64 v39; // rcx
  __int64 v40; // r14
  unsigned __int8 v41; // al
  struct _KPROCESS *v42; // r14
  __int64 v43; // r13
  __int64 v44; // rbx
  ULONG_PTR v45; // rbx
  __int64 i; // r15
  __int64 SharedVm; // rbx
  int v49; // r9d
  unsigned __int64 v50; // r14
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  _DWORD *v54; // rcx
  __int64 k; // r14
  _QWORD *j; // rax
  __int64 v57; // r8
  PVOID Pool; // rax
  int PlaceholderStorage; // ebx
  __int64 v60; // rax
  unsigned int v61; // edx
  char v62; // al
  unsigned __int64 v63; // r14
  __int64 v64; // rcx
  unsigned int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rbx
  KIRQL v69; // al
  unsigned __int64 v70; // r15
  unsigned __int64 v71; // rax
  unsigned __int64 v72; // rcx
  int v73; // r9d
  __int64 v74; // rcx
  unsigned __int64 v75; // r15
  unsigned __int64 v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rbx
  KIRQL v79; // al
  int v80; // edx
  unsigned __int64 v81; // rcx
  unsigned __int64 v82; // r8
  unsigned __int64 v83; // r14
  __int64 v84; // rcx
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
    v57 = **((_QWORD **)P + 9);
    v111 = v57;
    if ( *(_QWORD *)(v57 + 64) )
    {
      if ( *((__int64 *)P + 15) < 0 )
        return 3221225505LL;
      v100 = (*(_DWORD *)(v57 + 56) & 0x420) == 0;
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
  v60 = (unsigned int)P[13];
  LODWORD(v60) = v60 & 0x7FFFFFFF;
  v61 = *(_DWORD *)(v7 + 52) & 0x80000000;
  if ( (v60 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) == 0x7FFFFFFFDLL )
  {
    v62 = 15;
    v61 |= 0x7FFFFFFDu;
  }
  else
  {
    v62 = 0;
  }
  *(_DWORD *)(v7 + 52) = v61;
  *(_BYTE *)(v7 + 34) = v62;
  *(_QWORD *)(v7 + 40) = 0LL;
  v63 = ((a3 + 1) >> 12) - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32));
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
  MiAdvanceVadView(v7, v63);
  MiUnlockNestedVad(v7);
  Process = v105;
  if ( v11 != 64 )
  {
    v64 = v111;
    v65 = *(_DWORD *)(v7 + 64) & 0xFDFFFFFF;
    *(_QWORD *)(v7 + 120) = 0LL;
    *(_DWORD *)(v7 + 64) = v65;
    PlaceholderStorage = MiInsertSharedCommitNode(v64, Process, 0LL);
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
  v66 = *(_QWORD *)(Process + 1680);
  if ( v11 == 64 )
  {
    if ( MiVadPageSizes[(*(_DWORD *)(v7 + 48) >> 18) & 3] == 16 )
      ++*(_QWORD *)(v66 + 424);
  }
  else
  {
    if ( *(_QWORD *)(v7 + 128) )
    {
      ObfReferenceObjectWithTag(*(PVOID *)(v7 + 128), 0x746C6644u);
    }
    else if ( MiVadPageSizes[(*(_DWORD *)(v7 + 48) >> 18) & 3] == 16 )
    {
      ++*(_QWORD *)(v66 + 432);
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
  v17 = (unsigned int)P[13];
  LODWORD(v17) = v17 & 0x7FFFFFFF;
  v18 = ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v17;
  if ( v18 != 0x7FFFFFFFDLL && v18 )
  {
    if ( v101 == 64 )
    {
      SharedVm = MiGetSharedVm(v104, v16);
      LOBYTE(v49) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      v117 = v49;
      v20 = MiComputePageCommitment(a2, a3, (_DWORD)P, v49, 4, 0LL);
    }
    else
    {
      v20 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
          - MiCountSharedPages(
              P,
              ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
          + 1;
      v68 = MiGetSharedVm(v104, v67);
      v69 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v68);
      *(_DWORD *)(v68 + 4) = 0;
      v117 = v69;
    }
  }
  else
  {
    v19 = 0LL;
    if ( v18 != 0x7FFFFFFFDLL )
      v19 = v18;
    v20 = 0LL;
    v18 = v19;
    v21 = MiGetSharedVm(v104, v16);
    v117 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v21);
    *(_DWORD *)(v21 + 4) = 0;
  }
  if ( a4 == 1 )
  {
    if ( v101 != 64 && v100 )
      MiGetProtoPteAddress(P, (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32), 0LL, &v102);
    v23 = v18 - v20;
    if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | P[13] & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
    {
      LOBYTE(v24) = 15;
    }
    else
    {
      v24 = v23 >> 31;
      v13 = v23 & 0x7FFFFFFF;
    }
    P[13] = P[13] & 0x80000000 | v13;
    *((_BYTE *)P + 34) = v24;
    MiAdvanceVadView(
      P,
      ((a3 + 1) >> 12) - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)));
    if ( v101 != 64 && v100 )
      MiGetProtoPteAddress(P, (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32), 0LL, &v103);
    v25 = v117;
    v26 = P;
    v27 = 0LL;
  }
  else
  {
    v50 = v18 - v20;
    if ( a4 == 2 )
    {
      if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | P[13] & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
      {
        LOBYTE(v51) = 15;
      }
      else
      {
        v51 = v50 >> 31;
        v13 = v50 & 0x7FFFFFFF;
      }
      P[13] = v13 | P[13] & 0x80000000;
      *((_BYTE *)P + 34) = v51;
      if ( v101 != 64 && v100 )
      {
        MiGetProtoPteAddress(P, (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32), 0LL, &v103);
        v103 = *(_QWORD *)(v103 + 16);
      }
      v52 = (a2 - 1) >> 44;
      v53 = (a2 - 1) >> 12;
      P[7] = v53;
      *((_BYTE *)P + 33) = v52;
      if ( v101 != 64 && v100 )
      {
        MiGetProtoPteAddress(P, (unsigned int)v53 | ((unsigned __int64)(unsigned __int8)v52 << 32), 0LL, &v102);
        v102 = *(_QWORD *)(v102 + 16);
        MiAdvanceVadView(P, 0LL);
      }
      v25 = v117;
      v26 = 0LL;
    }
    else
    {
      if ( v101 != 64 && v100 )
      {
        MiGetProtoPteAddress(P, (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32), 0LL, &v103);
        v103 = *(_QWORD *)(v103 + 16);
      }
      v70 = a2 - 1;
      v71 = (a2 - 1) >> 12;
      v72 = (a2 - 1) >> 44;
      P[7] = v71;
      *((_BYTE *)P + 33) = v72;
      if ( v101 != 64 && v100 )
      {
        MiGetProtoPteAddress(P, (unsigned int)v71 | ((unsigned __int64)(unsigned __int8)v72 << 32), 0LL, &v102);
        v102 = *(_QWORD *)(v102 + 16);
        MiAdvanceVadView(P, 0LL);
      }
      v112 += (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32))
            - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
            + 1;
      MiInsertVad(v7, v105, 2LL, v22);
      v74 = (unsigned int)P[13];
      LODWORD(v74) = v74 & 0x7FFFFFFF;
      if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v74) == 0x7FFFFFFFDLL )
      {
        v25 = v117;
        v75 = 0x7FFFFFFFDLL;
      }
      else if ( v101 == 64 )
      {
        v25 = v117;
        LOBYTE(v73) = v117;
        v75 = MiComputePageCommitment(P[6] << 12, v70, (_DWORD)P, v73, 4, 0LL);
      }
      else
      {
        MiUnlockWorkingSetExclusive(v104, v117);
        v76 = 8 * (((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v75 = ((__int64)(((v70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v76) >> 3)
            - MiCountSharedPages(P, v76, ((v70 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            + 1;
        v78 = MiGetSharedVm(v104, v77);
        v79 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v78);
        *(_DWORD *)(v78 + 4) = 0;
        v25 = v79;
        v117 = v79;
      }
      v80 = v75 & 0x7FFFFFFF;
      v81 = v75 & 0x7FFFFFFF | P[13] & 0x80000000;
      v82 = v75 >> 31;
      P[13] = v81;
      LODWORD(v81) = v81 & 0x7FFFFFFF;
      *((_BYTE *)P + 34) = v75 >> 31;
      if ( (((unsigned __int64)(unsigned __int8)(v75 >> 31) << 31) | v81) != 0x7FFFFFFFDLL )
      {
        v83 = v50 - v75;
        v82 = v83 >> 31;
        v80 = v83 & 0x7FFFFFFF;
      }
      v26 = (_QWORD *)v7;
      *(_DWORD *)(v7 + 52) = *(_DWORD *)(v7 + 52) & 0x80000000 | v80;
      *(_BYTE *)(v7 + 34) = v82;
    }
    v27 = P;
  }
  MiUnlockWorkingSetExclusive(v104, v25);
  MiDeleteVirtualAddresses(a2, a3, v106, &v114);
  v29 = MiGetSharedVm(v104, v28);
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v29);
  *(_DWORD *)(v29 + 4) = 0;
  if ( v102 )
    MiDrainSystemAccessLog(v104);
  LOBYTE(v30) = v117;
  MiCaptureDeleteHierarchy(a2, a3, v30, &v107);
  MiUnlockWorkingSetExclusive(v104, v117);
  if ( !v27 )
  {
    v27 = *(_QWORD **)P;
    v31 = P;
    if ( *(_QWORD *)P )
    {
      for ( ; v27[1]; v27 = (_QWORD *)v27[1] )
        ;
    }
    else
    {
      for ( i = *((_QWORD *)P + 2); ; i = v27[2] )
      {
        v27 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v27 || (_DWORD *)v27[1] == v31 )
          break;
        v31 = v27;
      }
    }
  }
  if ( !v26 )
  {
    v26 = (_QWORD *)*((_QWORD *)P + 1);
    v54 = P;
    if ( v26 )
    {
      for ( j = (_QWORD *)*v26; j; j = (_QWORD *)*j )
        v26 = j;
    }
    else
    {
      for ( k = *((_QWORD *)P + 2); ; k = v26[2] )
      {
        v26 = (_QWORD *)(k & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v26 || (_DWORD *)*v26 == v54 )
          break;
        v54 = v26;
      }
    }
  }
  if ( !a5 )
    MiClearVadBits(a2, a3, (__int64)v27, (__int64)v26);
  MiReturnPageTablePageCommitment(a2, a3, v105, (_DWORD)v27, (__int64)v26, (__int64)P, (__int64)&v107);
  v32 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v32);
  v109 = 0;
  v33 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v32) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v33->ApcState.Process);
  else
    SessionId = -1;
  --v33->SpecialApcDisable;
  v35 = ++v33->AbAllocationRegionCount;
  v36 = ((char)v33->AbEntrySummary | (char)v33->AbOrphanedEntrySummary) ^ 0x3F;
  v37 = v32 & 0x7FFFFFFFFFFFFFFCLL;
  v38 = !_BitScanReverse((unsigned int *)&v39, v36);
  v108 = v39;
  if ( v38 )
  {
LABEL_65:
    if ( (*((_DWORD *)&v33->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v33, v32, SessionId, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v40 = (__int64)&v33->LockEntries[v39];
      v36 &= ~(1 << v39);
      if ( (*(_BYTE *)(v40 + 26) & 1) != 0
        && (*(_DWORD *)(v40 + 32) & 1) == 0
        && (*(_QWORD *)(v40 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v37
        && *(_DWORD *)(v40 + 40) == SessionId )
      {
        *(_BYTE *)(v40 + 26) &= ~1u;
        if ( *(_QWORD *)(v40 + 32) )
          break;
      }
      v38 = !_BitScanReverse((unsigned int *)&v39, v36);
      v108 = v39;
      if ( v38 )
        goto LABEL_64;
    }
    if ( !v40 )
    {
LABEL_64:
      v32 = BugCheckParameter2;
      goto LABEL_65;
    }
    *(_BYTE *)(v40 + 32) |= 2u;
    if ( *(__int64 *)(v40 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v40);
    v109 = *(_DWORD *)(v40 + 88) & 0x1FFFF;
    *(_DWORD *)(v40 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v40 + 25) &= ~1u;
    *(_QWORD *)(v40 + 32) = 0LL;
    v41 = 1 << ((signed __int64)(v40 - (unsigned __int64)v33->LockEntries) / 96);
    if ( v35 == 1 )
      v33->AbEntrySummary |= v41;
    else
      _InterlockedOr8((volatile signed __int8 *)&v33->AbOrphanedEntrySummary, v41);
  }
  --v33->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v33, BugCheckParameter2, &v109);
  v38 = v33->SpecialApcDisable++ == -1;
  if ( v38 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v33->ApcState.ApcListHead[0].Flink != &v33->152 )
    KiCheckForKernelApcDelivery();
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( a5 )
  {
    MiReInsertPlaceholderVad(a5);
    MiUnlockNestedVad(a5);
  }
  v42 = (struct _KPROCESS *)v105;
  if ( v7 && (*(_DWORD *)(v7 + 48) & 0x100000) == 0 )
  {
    v84 = *(_QWORD *)(v7 + 72);
    *(_QWORD *)(v7 + 112) = v105 | 1;
    MiManageSubsectionView(v84, v7 + 96, 3LL);
  }
  v43 = v20 - v115;
  v44 = v43 - *((_QWORD *)&v114 + 1);
  if ( v43 )
    MiReturnFullProcessCharges((__int64)v42, v43);
  if ( v44 )
    MiReturnCommit(*(_QWORD *)(qword_140C4E448 + 8LL * v42[1].IdealProcessorPadding[5]), v44);
  if ( v101 != 64 )
    PsReturnProcessPagedPoolQuota(v42, 8 * v112);
  if ( v15 )
  {
    v85 = MiResidentPagesForSpan(
            ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
            (((unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF,
            0LL);
    if ( v85 < v15 )
    {
      v86 = v15 - v85;
      v87 = *(_QWORD *)(qword_140C4E448 + 8LL * v42[1].IdealProcessorPadding[5]);
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
              v38 = (_DWORD)CachedResidentAvailable == v90;
              LODWORD(CachedResidentAvailable) = v90;
              if ( v38 )
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
  v45 = v102;
  if ( v102 && v102 != v103 )
  {
    v91 = v111;
    v92 = 0LL;
    v93 = *(_QWORD *)(v111 + 64) != 0LL;
    v94 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v111 + 72));
    do
    {
      v95 = MiDecrementSubsections(v45, v45, 8u);
      v45 = *(_QWORD *)(v45 + 16);
      v92 += v95;
    }
    while ( v45 != v103 );
    v102 = v45;
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
          v38 = (v99 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v99;
          if ( v38 )
            KiRemoveSystemWorkPriorityKick(v97);
        }
      }
    }
    __writecr8(v94);
    if ( v92 )
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_140C4E448 + 8LL * (*(_WORD *)(v91 + 60) & 0x3FF)),
        v93,
        v92);
  }
  return 0LL;
}
