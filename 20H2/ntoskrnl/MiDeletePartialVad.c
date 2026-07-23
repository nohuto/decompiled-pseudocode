/*
 * XREFs of MiDeletePartialVad @ 0x14024FC00
 * Callers:
 *     MiFreeVadRange @ 0x1402308B8 (MiFreeVadRange.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140220DB0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiDecrementSubsections @ 0x14022BE70 (MiDecrementSubsections.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     MiInsertVad @ 0x14022DF50 (MiInsertVad.c)
 *     MiFinishVadDeletion @ 0x14022EE20 (MiFinishVadDeletion.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiReturnFullProcessCharges @ 0x1402303D0 (MiReturnFullProcessCharges.c)
 *     PsReturnProcessPagedPoolQuota @ 0x140230470 (PsReturnProcessPagedPoolQuota.c)
 *     MiDrainSystemAccessLog @ 0x1402330C0 (MiDrainSystemAccessLog.c)
 *     MiComputePageCommitment @ 0x1402340F0 (MiComputePageCommitment.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiClearVadBits @ 0x140250320 (MiClearVadBits.c)
 *     MiLocateLockedVadEvent @ 0x1402506EC (MiLocateLockedVadEvent.c)
 *     MiCaptureDeleteHierarchy @ 0x140250710 (MiCaptureDeleteHierarchy.c)
 *     MiDeleteVirtualAddresses @ 0x1402508A0 (MiDeleteVirtualAddresses.c)
 *     MiAdvanceVadView @ 0x140250914 (MiAdvanceVadView.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiManageSubsectionView @ 0x1402986E0 (MiManageSubsectionView.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KiAbEntryRemoveFromTree @ 0x1402F05E0 (KiAbEntryRemoveFromTree.c)
 *     MiCountSharedPages @ 0x1402FF4F0 (MiCountSharedPages.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     MiUpControlAreaRefs @ 0x140529070 (MiUpControlAreaRefs.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 *     MiReInsertPlaceholderVad @ 0x14055386C (MiReInsertPlaceholderVad.c)
 *     MiInsertVadCharges @ 0x1406239C0 (MiInsertVadCharges.c)
 *     MiRemoveSharedCommitNode @ 0x140623DA0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x140624010 (MiInsertSharedCommitNode.c)
 *     MiReturnPageTablePageCommitment @ 0x1406265B0 (MiReturnPageTablePageCommitment.c)
 *     MiResidentPagesForSpan @ 0x1406D76BC (MiResidentPagesForSpan.c)
 *     MiCreateRotateView @ 0x1406DD978 (MiCreateRotateView.c)
 *     MiFreePlaceholderStorage @ 0x1406E4134 (MiFreePlaceholderStorage.c)
 *     MiFreeRotateView @ 0x1408CADBC (MiFreeRotateView.c)
 *     MiCreatePlaceholderStorage @ 0x1408DAB18 (MiCreatePlaceholderStorage.c)
 *     MiLockNestedVad @ 0x1408DC2B8 (MiLockNestedVad.c)
 *     MiUnlockNestedVad @ 0x1408DC2D4 (MiUnlockNestedVad.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  KIRQL v25; // bl
  _QWORD *v26; // r14
  _DWORD *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // r8
  __int64 v31; // rdx
  _DWORD *v32; // rcx
  ULONG_PTR v33; // r14
  struct _KTHREAD *v34; // rbx
  unsigned int SessionId; // r8d
  unsigned __int8 v36; // r15
  unsigned int v37; // edx
  __int64 v38; // r9
  bool v39; // zf
  __int64 v40; // rcx
  __int64 v41; // r14
  unsigned __int8 v42; // al
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r14
  __int64 v47; // r13
  __int64 v48; // rbx
  ULONG_PTR v49; // rbx
  __int64 i; // r15
  __int64 SharedVm; // rbx
  __int16 v53; // r9
  unsigned __int64 v54; // r14
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  _DWORD *v58; // rcx
  __int64 k; // r14
  _QWORD *j; // rax
  __int64 v61; // r8
  PVOID Pool; // rax
  int PlaceholderStorage; // ebx
  __int64 v64; // rax
  unsigned int v65; // edx
  char v66; // al
  unsigned __int64 v67; // r14
  __int64 v68; // rcx
  unsigned int v69; // eax
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rbx
  KIRQL v73; // al
  unsigned __int64 v74; // r15
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rcx
  __int64 v77; // rdx
  __int16 v78; // r9
  __int64 v79; // rcx
  unsigned __int64 v80; // r15
  unsigned __int64 v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rbx
  KIRQL v84; // al
  int v85; // edx
  unsigned __int64 v86; // rcx
  unsigned __int64 v87; // r8
  unsigned __int64 v88; // r14
  __int64 v89; // rcx
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // r12
  __int64 v92; // r9
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v95; // eax
  __int64 v96; // r13
  __int64 v97; // rdi
  BOOL v98; // r15d
  unsigned __int64 v99; // rsi
  __int64 v100; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v102; // r8
  _DWORD *SchedulerAssist; // r9
  int v104; // eax
  bool v105; // [rsp+48h] [rbp-81h]
  __int64 v106; // [rsp+50h] [rbp-79h]
  ULONG_PTR v107; // [rsp+58h] [rbp-71h] BYREF
  __int64 v108; // [rsp+60h] [rbp-69h] BYREF
  __int64 v109; // [rsp+68h] [rbp-61h]
  __int64 v110; // [rsp+70h] [rbp-59h]
  unsigned int v111; // [rsp+78h] [rbp-51h]
  int v112; // [rsp+7Ch] [rbp-4Dh] BYREF
  int v113; // [rsp+80h] [rbp-49h]
  int v114; // [rsp+84h] [rbp-45h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-41h]
  __int64 v116; // [rsp+90h] [rbp-39h]
  unsigned __int64 v117; // [rsp+98h] [rbp-31h]
  struct _KTHREAD *CurrentThread; // [rsp+A0h] [rbp-29h]
  __int128 v119; // [rsp+A8h] [rbp-21h] BYREF
  __int128 v120; // [rsp+B8h] [rbp-11h]
  __int128 v121; // [rsp+C8h] [rbp-1h]
  KIRQL v122; // [rsp+128h] [rbp+5Fh]

  v112 = 0;
  v119 = 0LL;
  v107 = 0LL;
  v120 = 0LL;
  v7 = 0LL;
  v108 = 0LL;
  v8 = 0;
  v121 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v117 = (a3 - a2 + 1) >> 12;
  v105 = 0;
  Process = (__int64)CurrentThread->ApcState.Process;
  v116 = 0LL;
  v111 = 0;
  v110 = Process;
  v109 = Process + 1664;
  v10 = P[12];
  if ( (v10 & 0x100000) != 0 )
  {
    v11 = 64LL;
    v106 = 64LL;
    v12 = 8;
    if ( (v10 & 0x70) != 0x40 )
      v12 = 0;
    v111 = v12;
  }
  else
  {
    v11 = 136LL;
    v106 = 136LL;
    v61 = **((_QWORD **)P + 9);
    v116 = v61;
    if ( *(_QWORD *)(v61 + 64) )
    {
      if ( *((__int64 *)P + 15) < 0 )
        return 3221225505LL;
      v105 = (*(_DWORD *)(v61 + 56) & 0x420) == 0;
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
  v64 = (unsigned int)P[13];
  LODWORD(v64) = v64 & 0x7FFFFFFF;
  v65 = *(_DWORD *)(v7 + 52) & 0x80000000;
  if ( (v64 | ((unsigned __int64)*((unsigned __int8 *)P + 34) << 31)) == 0x7FFFFFFFDLL )
  {
    v66 = 15;
    v65 |= 0x7FFFFFFDu;
  }
  else
  {
    v66 = 0;
  }
  *(_DWORD *)(v7 + 52) = v65;
  *(_BYTE *)(v7 + 34) = v66;
  *(_QWORD *)(v7 + 40) = 0LL;
  v67 = ((a3 + 1) >> 12) - ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32));
  if ( (*(_DWORD *)(v7 + 48) & 0x70) == 0x40 && !(unsigned int)MiCreateRotateView(v7) )
  {
    PlaceholderStorage = -1073741670;
LABEL_105:
    MiFreeRotateView(v7);
    MiFreePlaceholderStorage(v7);
    ExFreePoolWithTag((PVOID)v7, 0);
    return (unsigned int)PlaceholderStorage;
  }
  if ( MiLocateLockedVadEvent(P, 128LL) )
  {
    PlaceholderStorage = MiCreatePlaceholderStorage(v7);
    if ( PlaceholderStorage < 0 )
      goto LABEL_105;
  }
  MiLockNestedVad(v7);
  MiAdvanceVadView(v7, v67);
  MiUnlockNestedVad(v7);
  Process = v110;
  if ( v11 != 64 )
  {
    v68 = v116;
    v69 = *(_DWORD *)(v7 + 64) & 0xFDFFFFFF;
    *(_QWORD *)(v7 + 120) = 0LL;
    *(_DWORD *)(v7 + 64) = v69;
    PlaceholderStorage = MiInsertSharedCommitNode(v68, Process, 0LL);
    if ( PlaceholderStorage < 0 )
      goto LABEL_105;
    v8 = 1;
  }
  PlaceholderStorage = MiInsertVadCharges(v7, Process);
  if ( PlaceholderStorage < 0 )
  {
    if ( v8 )
      MiRemoveSharedCommitNode(v116, Process, 0LL);
    goto LABEL_105;
  }
  v70 = *(_QWORD *)(Process + 1680);
  if ( v11 == 64 )
  {
    if ( MiVadPageSizes[(*(_DWORD *)(v7 + 48) >> 18) & 3] == 16 )
      ++*(_QWORD *)(v70 + 424);
  }
  else
  {
    if ( *(_QWORD *)(v7 + 128) )
    {
      ObfReferenceObjectWithTag(*(PVOID *)(v7 + 128), 0x746C6644u);
    }
    else if ( MiVadPageSizes[(*(_DWORD *)(v7 + 48) >> 18) & 3] == 16 )
    {
      ++*(_QWORD *)(v70 + 432);
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
    if ( v106 == 64 )
    {
      SharedVm = MiGetSharedVm(v109, v16);
      LOBYTE(v53) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
      *(_DWORD *)(SharedVm + 4) = 0;
      v122 = v53;
      v20 = MiComputePageCommitment(a2, a3, (__int64)P, v53, 4, 0LL);
    }
    else
    {
      v20 = ((__int64)(((a3 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3)
          - MiCountSharedPages(
              P,
              ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              ((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
          + 1;
      v72 = MiGetSharedVm(v109, v71);
      v73 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v72);
      *(_DWORD *)(v72 + 4) = 0;
      v122 = v73;
    }
  }
  else
  {
    v19 = 0LL;
    if ( v18 != 0x7FFFFFFFDLL )
      v19 = v18;
    v20 = 0LL;
    v18 = v19;
    v21 = MiGetSharedVm(v109, v16);
    v122 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v21);
    *(_DWORD *)(v21 + 4) = 0;
  }
  if ( a4 == 1 )
  {
    if ( v106 != 64 && v105 )
      MiGetProtoPteAddress(P, (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32), 0LL, &v107);
    v22 = v18 - v20;
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
    if ( v106 != 64 && v105 )
      MiGetProtoPteAddress(P, (unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32), 0LL, &v108);
    v25 = v122;
    v26 = P;
    v27 = 0LL;
  }
  else
  {
    v54 = v18 - v20;
    if ( a4 == 2 )
    {
      if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | P[13] & 0x7FFFFFFF) == 0x7FFFFFFFDLL )
      {
        LOBYTE(v55) = 15;
      }
      else
      {
        v55 = v54 >> 31;
        v13 = v54 & 0x7FFFFFFF;
      }
      v24 = v13 | P[13] & 0x80000000;
      P[13] = v24;
      *((_BYTE *)P + 34) = v55;
      if ( v106 != 64 && v105 )
      {
        MiGetProtoPteAddress(P, (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32), 0LL, &v108);
        v108 = *(_QWORD *)(v108 + 16);
      }
      v56 = (a2 - 1) >> 44;
      v57 = (a2 - 1) >> 12;
      P[7] = v57;
      *((_BYTE *)P + 33) = v56;
      if ( v106 != 64 && v105 )
      {
        MiGetProtoPteAddress(P, (unsigned int)v57 | ((unsigned __int64)(unsigned __int8)v56 << 32), 0LL, &v107);
        v107 = *(_QWORD *)(v107 + 16);
        MiAdvanceVadView(P, 0LL);
      }
      v25 = v122;
      v26 = 0LL;
    }
    else
    {
      if ( v106 != 64 && v105 )
      {
        MiGetProtoPteAddress(P, (unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32), 0LL, &v108);
        v108 = *(_QWORD *)(v108 + 16);
      }
      v74 = a2 - 1;
      v75 = (a2 - 1) >> 12;
      v76 = (a2 - 1) >> 44;
      P[7] = v75;
      *((_BYTE *)P + 33) = v76;
      if ( v106 != 64 && v105 )
      {
        MiGetProtoPteAddress(P, (unsigned int)v75 | ((unsigned __int64)(unsigned __int8)v76 << 32), 0LL, &v107);
        v107 = *(_QWORD *)(v107 + 16);
        MiAdvanceVadView(P, 0LL);
      }
      v117 += (*(unsigned int *)(v7 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 33) << 32))
            - (*(unsigned int *)(v7 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v7 + 32) << 32))
            + 1;
      MiInsertVad(v7, v110, 2LL);
      v79 = (unsigned int)P[13];
      LODWORD(v79) = v79 & 0x7FFFFFFF;
      if ( (((unsigned __int64)*((unsigned __int8 *)P + 34) << 31) | v79) == 0x7FFFFFFFDLL )
      {
        v25 = v122;
        v80 = 0x7FFFFFFFDLL;
      }
      else if ( v106 == 64 )
      {
        v25 = v122;
        LOBYTE(v78) = v122;
        v80 = MiComputePageCommitment(
                ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
                v74,
                (__int64)P,
                v78,
                4,
                0LL);
      }
      else
      {
        LOBYTE(v77) = v122;
        MiUnlockWorkingSetExclusive(v109, v77);
        v81 = 8 * (((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) & 0xFFFFFFFFFLL)
            - 0x98000000000LL;
        v80 = ((__int64)(((v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL - v81) >> 3)
            - MiCountSharedPages(P, v81, ((v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL)
            + 1;
        v83 = MiGetSharedVm(v109, v82);
        v84 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v83);
        *(_DWORD *)(v83 + 4) = 0;
        v25 = v84;
        v122 = v84;
      }
      v85 = v80 & 0x7FFFFFFF;
      v86 = v80 & 0x7FFFFFFF | P[13] & 0x80000000;
      v87 = v80 >> 31;
      P[13] = v86;
      LODWORD(v86) = v86 & 0x7FFFFFFF;
      *((_BYTE *)P + 34) = v80 >> 31;
      if ( (((unsigned __int64)(unsigned __int8)(v80 >> 31) << 31) | v86) != 0x7FFFFFFFDLL )
      {
        v88 = v54 - v80;
        v87 = v88 >> 31;
        v85 = v88 & 0x7FFFFFFF;
      }
      v24 = *(_DWORD *)(v7 + 52) & 0x80000000 | v85;
      v26 = (_QWORD *)v7;
      *(_DWORD *)(v7 + 52) = v24;
      *(_BYTE *)(v7 + 34) = v87;
    }
    v27 = P;
  }
  LOBYTE(v24) = v25;
  MiUnlockWorkingSetExclusive(v109, v24);
  MiDeleteVirtualAddresses(a2, a3, v111, &v119);
  v29 = MiGetSharedVm(v109, v28);
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v29);
  *(_DWORD *)(v29 + 4) = 0;
  if ( v107 )
    MiDrainSystemAccessLog(v109);
  LOBYTE(v30) = v122;
  MiCaptureDeleteHierarchy(a2, a3, v30, &v112);
  LOBYTE(v31) = v122;
  MiUnlockWorkingSetExclusive(v109, v31);
  if ( !v27 )
  {
    v27 = *(_DWORD **)P;
    v32 = P;
    if ( *(_QWORD *)P )
    {
      for ( ; *((_QWORD *)v27 + 1); v27 = (_DWORD *)*((_QWORD *)v27 + 1) )
        ;
    }
    else
    {
      for ( i = *((_QWORD *)P + 2); ; i = *((_QWORD *)v27 + 2) )
      {
        v27 = (_DWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v27 || *((_DWORD **)v27 + 1) == v32 )
          break;
        v32 = v27;
      }
    }
  }
  if ( !v26 )
  {
    v26 = (_QWORD *)*((_QWORD *)P + 1);
    v58 = P;
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
        if ( !v26 || (_DWORD *)*v26 == v58 )
          break;
        v58 = v26;
      }
    }
  }
  if ( !a5 )
    MiClearVadBits(a2, a3, v27, v26);
  MiReturnPageTablePageCommitment(a2, a3, v110, (_DWORD)v27, (__int64)v26, (__int64)P, (__int64)&v112);
  v33 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v33);
  v114 = 0;
  v34 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v33) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v34->ApcState.Process);
  else
    SessionId = -1;
  --v34->SpecialApcDisable;
  v36 = ++v34->AbAllocationRegionCount;
  v37 = ((char)v34->AbEntrySummary | (char)v34->AbOrphanedEntrySummary) ^ 0x3F;
  v38 = v33 & 0x7FFFFFFFFFFFFFFCLL;
  v39 = !_BitScanReverse((unsigned int *)&v40, v37);
  v113 = v40;
  if ( v39 )
  {
LABEL_65:
    if ( (*((_DWORD *)&v34->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v34, v33, SessionId, 0LL);
  }
  else
  {
    while ( 1 )
    {
      v41 = (__int64)&v34->LockEntries[v40];
      v37 &= ~(1 << v40);
      if ( (*(_BYTE *)(v41 + 26) & 1) != 0
        && (*(_DWORD *)(v41 + 32) & 1) == 0
        && (*(_QWORD *)(v41 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v38
        && *(_DWORD *)(v41 + 40) == SessionId )
      {
        *(_BYTE *)(v41 + 26) &= ~1u;
        if ( *(_QWORD *)(v41 + 32) )
          break;
      }
      v39 = !_BitScanReverse((unsigned int *)&v40, v37);
      v113 = v40;
      if ( v39 )
        goto LABEL_64;
    }
    if ( !v41 )
    {
LABEL_64:
      v33 = BugCheckParameter2;
      goto LABEL_65;
    }
    *(_BYTE *)(v41 + 32) |= 2u;
    if ( *(__int64 *)(v41 + 32) < 0 )
      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v41);
    v114 = *(_DWORD *)(v41 + 88) & 0x1FFFF;
    *(_DWORD *)(v41 + 88) &= 0xFFFE0000;
    *(_BYTE *)(v41 + 25) &= ~1u;
    *(_QWORD *)(v41 + 32) = 0LL;
    v42 = 1 << ((signed __int64)(v41 - (unsigned __int64)v34->LockEntries) / 96);
    if ( v36 == 1 )
      v34->AbEntrySummary |= v42;
    else
      _InterlockedOr8((volatile signed __int8 *)&v34->AbOrphanedEntrySummary, v42);
  }
  --v34->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v34, BugCheckParameter2, &v114);
  v39 = v34->SpecialApcDisable++ == -1;
  if ( v39 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v34->ApcState.ApcListHead[0].Flink != &v34->152 )
    KiCheckForKernelApcDelivery(v43, 1LL, v44, v45);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( a5 )
  {
    MiReInsertPlaceholderVad(a5);
    MiUnlockNestedVad(a5);
  }
  v46 = v110;
  if ( v7 && (*(_DWORD *)(v7 + 48) & 0x100000) == 0 )
  {
    v89 = *(_QWORD *)(v7 + 72);
    *(_QWORD *)(v7 + 112) = v110 | 1;
    MiManageSubsectionView(v89, v7 + 96, 3LL);
  }
  v47 = v20 - v120;
  v48 = v47 - *((_QWORD *)&v119 + 1);
  if ( v47 )
    MiReturnFullProcessCharges(v46, v47);
  if ( v48 )
    MiReturnCommit(*(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v46 + 1838)), v48);
  if ( v106 != 64 )
    PsReturnProcessPagedPoolQuota(v46, 8 * v117);
  if ( v15 )
  {
    v90 = MiResidentPagesForSpan(
            ((unsigned int)P[6] | ((unsigned __int64)*((unsigned __int8 *)P + 32) << 32)) << 12,
            (((unsigned int)P[7] | ((unsigned __int64)*((unsigned __int8 *)P + 33) << 32)) << 12) | 0xFFF,
            0LL);
    if ( v90 < v15 )
    {
      v91 = v15 - v90;
      v92 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v46 + 1838));
      if ( (ULONG_PTR *)v92 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( v91 + CachedResidentAvailable <= 0x100 )
          {
            do
            {
              if ( v91 >= 0x80000 )
                break;
              v95 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      v91 + CachedResidentAvailable,
                      CachedResidentAvailable);
              v39 = (_DWORD)CachedResidentAvailable == v95;
              LODWORD(CachedResidentAvailable) = v95;
              if ( v39 )
                goto LABEL_56;
            }
            while ( v95 != -1 && v91 + v95 <= 0x100 );
          }
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v91 += (int)CachedResidentAvailable - 192;
          }
        }
      }
      if ( v91 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v92 + 7168), v91);
    }
  }
LABEL_56:
  MiFinishVadDeletion(P, a2, a3, a5 != 0);
  v49 = v107;
  if ( v107 && v107 != v108 )
  {
    v96 = v116;
    v97 = 0LL;
    v98 = *(_QWORD *)(v116 + 64) != 0LL;
    v99 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v116 + 72));
    do
    {
      v100 = MiDecrementSubsections(v49, v49, 8u);
      v49 = *(_QWORD *)(v49 + 16);
      v97 += v100;
    }
    while ( v49 != v108 );
    v107 = v49;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v96 + 72));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v99 <= 0xFu && CurrentIrql >= 2u )
        {
          v102 = KeGetCurrentPrcb();
          SchedulerAssist = v102->SchedulerAssist;
          v104 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v99 + 1));
          v39 = (v104 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v104;
          if ( v39 )
            KiRemoveSystemWorkPriorityKick(v102);
        }
      }
    }
    __writecr8(v99);
    if ( v97 )
      MiReturnCrossPartitionSectionCharges(
        *(_QWORD *)(qword_140C4E4C8 + 8LL * (*(_WORD *)(v96 + 60) & 0x3FF)),
        v98,
        v97);
  }
  return 0LL;
}
