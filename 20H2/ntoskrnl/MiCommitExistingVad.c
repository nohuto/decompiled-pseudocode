/*
 * XREFs of MiCommitExistingVad @ 0x14027A570
 * Callers:
 *     MiAllocateVirtualMemory @ 0x14067B2A0 (MiAllocateVirtualMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140686200 (MiAllocateFromSubAllocatedRegion.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D5A04 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D5DB0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiComputePageCommitment @ 0x1402340F0 (MiComputePageCommitment.c)
 *     MiLockLowestValidPageTable @ 0x140236270 (MiLockLowestValidPageTable.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiLocateLockedVadEvent @ 0x1402506EC (MiLocateLockedVadEvent.c)
 *     PsDereferencePartition @ 0x140263688 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402636B0 (PsReferencePartitionSafe.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x14026F9F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14027C200 (MiMakeProtectionMask.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiGetPageProtection @ 0x1402B41B0 (MiGetPageProtection.c)
 *     MmIsAddressValidEx @ 0x1402CC2D0 (MmIsAddressValidEx.c)
 *     MiIncreaseUsedPtesCount @ 0x1402CEA34 (MiIncreaseUsedPtesCount.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402DDA40 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiInitializeLargeUserBasePfn @ 0x1403F6484 (MiInitializeLargeUserBasePfn.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140533AC8 (MiFlushAllFilesystemPages.c)
 *     MiComputePreferredNode @ 0x140546078 (MiComputePreferredNode.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054DD08 (MiLockWorkingSetForLargeMapping.c)
 *     MiCreateLargePfnList @ 0x14055C42C (MiCreateLargePfnList.c)
 *     MiDemotePfnListChain @ 0x14055C748 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x14055CAA8 (MiInsertLargeUserMapping.c)
 *     MiReturnFullProcessCommitment @ 0x14062645C (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x14067BD20 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x14067BDF0 (MiCommitPageTablesForVad.c)
 *     MiChargeProcessPhysicalPages @ 0x1408D9B74 (MiChargeProcessPhysicalPages.c)
 *     MiReturnProcessPhysicalPages @ 0x1408D9F00 (MiReturnProcessPhysicalPages.c)
 */

__int64 __fastcall MiCommitExistingVad(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        unsigned __int8 a7,
        __int64 *a8,
        _DWORD *a9,
        _WORD *a10)
{
  ULONG_PTR v11; // rsi
  int v13; // r8d
  char v14; // r10
  unsigned int v15; // r11d
  unsigned int v16; // edx
  int v17; // r8d
  int v18; // eax
  _KPROCESS *Process; // r13
  unsigned __int64 v20; // r8
  __int64 v21; // rdi
  unsigned __int64 v22; // r14
  unsigned __int64 BugCheckParameter4; // r12
  unsigned __int64 v24; // rdx
  __int64 v25; // r10
  unsigned __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // r13
  unsigned int v29; // ecx
  __int64 result; // rax
  __int64 v31; // rcx
  __int16 v32; // si
  __int64 v33; // rbx
  bool v34; // zf
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 **LockedVadEvent; // rax
  __int64 v38; // r9
  __int64 *v39; // rbx
  __int64 v40; // r9
  int LargePfnList; // esi
  int v42; // eax
  int v43; // r13d
  __int64 v44; // r15
  unsigned __int64 v45; // r14
  int v46; // esi
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // r8
  __int64 v51; // rbx
  __int64 v52; // rax
  volatile signed __int64 *v53; // rbx
  int v54; // r13d
  unsigned __int64 v55; // rsi
  unsigned int v56; // ebx
  __int64 v57; // r14
  unsigned __int64 v58; // r15
  int v59; // eax
  int v60; // eax
  __int64 v61; // rdx
  ULONG_PTR v62; // rsi
  __int64 SharedVm; // rsi
  unsigned __int64 v64; // r9
  __int64 v65; // r15
  unsigned __int64 v66; // rdx
  unsigned __int64 v67; // r10
  struct _LIST_ENTRY *Flink; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  ULONG_PTR v71; // rdx
  unsigned __int64 v72; // r10
  __int64 v73; // rax
  unsigned __int64 v74; // rdx
  unsigned __int64 p_BugCheckParameter3; // rcx
  __int64 v76; // r8
  __int64 v77; // rax
  ULONG_PTR v78; // rdx
  int v79; // eax
  unsigned __int64 v80; // rax
  _QWORD *v81; // rcx
  _QWORD **v82; // rbx
  __int64 v83; // rbx
  __int64 v84; // rax
  int PageProtection; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // r9
  struct _KTHREAD *v90; // rax
  __int64 v91; // rbx
  __int64 v92; // r9
  unsigned int v93; // ecx
  __int64 v94; // rdx
  unsigned __int64 v95; // rdx
  unsigned int ProtectionMask; // [rsp+30h] [rbp-D0h]
  __int64 v97; // [rsp+38h] [rbp-C8h]
  int v98; // [rsp+40h] [rbp-C0h]
  _KPROCESS *v99; // [rsp+48h] [rbp-B8h]
  unsigned int v100; // [rsp+50h] [rbp-B0h]
  int v101; // [rsp+54h] [rbp-ACh]
  __int64 v102; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  int v104; // [rsp+68h] [rbp-98h]
  int v105; // [rsp+6Ch] [rbp-94h]
  int v106; // [rsp+70h] [rbp-90h]
  __int64 v107; // [rsp+78h] [rbp-88h]
  __int64 v108; // [rsp+80h] [rbp-80h]
  __int64 v109; // [rsp+88h] [rbp-78h]
  int v110; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v111; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v112; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v113; // [rsp+A8h] [rbp-58h]
  __int64 v114; // [rsp+B0h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v116; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v117; // [rsp+C8h] [rbp-38h]
  __int64 v118; // [rsp+D0h] [rbp-30h]
  __int64 v119; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v120; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v121; // [rsp+E8h] [rbp-18h]
  _OWORD v122[5]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int8 v124; // [rsp+158h] [rbp+58h]
  __int64 v125; // [rsp+160h] [rbp+60h] BYREF

  v11 = a1;
  v119 = 0LL;
  v104 = 0;
  memset(v122, 0, 32);
  ProtectionMask = MiMakeProtectionMask(a4);
  v16 = ProtectionMask;
  if ( ProtectionMask == 24 )
    goto LABEL_17;
  if ( v13 == 24 )
  {
    if ( (v15 & 0x100000) == 0 )
      v13 = (*(unsigned __int16 *)(*(_QWORD *)(v11 + 72) + 32LL) >> 1) & 0x1F;
    if ( v13 == 24 )
      LOBYTE(v13) = 0;
  }
  v17 = v13 & 0x18;
  if ( v17 )
  {
    if ( v17 != 16 )
    {
      if ( v17 == 8 )
      {
        v16 = ProtectionMask & 0xFFFFFFE7 | 8;
      }
      else
      {
        if ( v17 != 24 )
          goto LABEL_18;
        v16 = ProtectionMask | 0x18;
      }
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v18 = ProtectionMask & 0x18;
  if ( v18 != 24 )
  {
    if ( v18 != 8 )
      goto LABEL_18;
LABEL_16:
    v16 = ProtectionMask & 0xFFFFFFF7;
    goto LABEL_17;
  }
  v16 = ProtectionMask & 0xFFFFFFE7;
LABEL_17:
  ProtectionMask = v16;
LABEL_18:
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v99 = Process;
  if ( *(int *)(v11 + 52) >= 0 )
    v20 = 0LL;
  else
    v20 = 8 * ((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  v113 = v20;
  v121 = 32LL * (v16 & 0x1F);
  v21 = v121;
  if ( qword_140C4DDC0 )
  {
    if ( (v121 & qword_140C4DDC0) != 0 )
      v21 = v121 | 0x10;
    else
      v21 = qword_140C4DDC0 | v121;
  }
  if ( (v15 & 0x100000) != 0 && (v15 & 0x1000000) == 0 && (v15 & 0x4000000) != 0 )
    v21 |= 0x4000000uLL;
  v109 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v22 = (a2 + a3 - 1) | 0xFFF;
  BugCheckParameter4 = v109;
  v24 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = v14 & 0x1A;
  v117 = v24;
  v102 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v116 = ((__int64)(((v22 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  if ( (v15 & 0x500000) == 0x500000 )
  {
    v26 = ((unsigned __int64)v15 >> 18) & 3;
    v27 = 16LL;
    v28 = MiVadPageSizes[v26];
    v29 = MiVadPageIndices[v26];
    v97 = v28;
    if ( v28 != 16 )
      v27 = 1LL;
    v100 = v29;
    v114 = v27;
    if ( v29 > 1 )
    {
      if ( v25 == 2 )
        goto LABEL_40;
    }
    else
    {
      if ( v29 == 1 )
      {
        if ( v25 != 8 )
          return 3221225485LL;
        goto LABEL_37;
      }
      if ( v25 == 16 )
      {
LABEL_37:
        v31 = 2 - v29;
        do
        {
          BugCheckParameter4 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v31;
        }
        while ( v31 );
        v113 = v20;
        v117 = v24;
        goto LABEL_40;
      }
    }
    return 3221225485LL;
  }
  if ( v25 )
    return 3221225485LL;
  v97 = 1LL;
  v28 = 1LL;
  v114 = 1LL;
  v100 = 3;
  if ( (int)MiChargeFullProcessCommitment(
              v99,
              ((__int64)(((v22 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1) >= 0 )
  {
    v36 = v116;
    v108 = v116;
    v106 = 1;
LABEL_71:
    v42 = *(_DWORD *)(v11 + 48);
    v105 = 0;
    if ( (v42 & 0x100000) != 0 )
    {
      if ( (v42 & 0x70) != 0 || *(int *)(v11 + 52) < 0 )
        goto LABEL_74;
    }
    else
    {
      if ( (v42 & 0xF80) != 0xC00 )
        goto LABEL_74;
      v52 = *(_QWORD *)(v11 + 72);
      if ( *(_QWORD *)(*(_QWORD *)v52 + 64LL) || (*(_DWORD *)(*(_QWORD *)v52 + 56LL) & 0x1000) == 0 )
        goto LABEL_74;
    }
    v105 = 1;
    --CurrentThread->SpecialApcDisable;
    v53 = (volatile signed __int64 *)&v99[1].Affinity.Bitmap[8];
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v99[1].Affinity.Bitmap[8], 0LL);
    if ( (int)MiCommitPageTablesForVad(v11, a2) >= 0 )
    {
LABEL_74:
      v43 = 0;
      v107 = 0LL;
      v101 = 0;
      v44 = 0LL;
      v118 = 0LL;
      while ( 1 )
      {
        v45 = 0LL;
        v46 = 0;
        v98 = 0;
        if ( !v100 )
        {
          v47 = MiComputePreferredNode(a1);
          v98 = 1;
          v124 = MiLockWorkingSetForLargeMapping(v102, v48, v47);
          if ( v124 != 17 )
            goto LABEL_87;
        }
        v51 = v102;
        v124 = MiLockWorkingSetShared(v102);
        while ( 2 )
        {
          if ( BugCheckParameter4 > v117 )
          {
            if ( (_WORD)v43 )
            {
              v110 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v110);
                while ( *(__int64 *)(v44 + 24) < 0 );
              }
              *(_QWORD *)(v44 + 16) ^= ((unsigned int)*(_QWORD *)(v44 + 16) ^ ((unsigned int)*(_QWORD *)(v44 + 16)
                                                                             + ((unsigned __int16)v43 << 16))) & 0x3FF0000;
              _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (unsigned __int16)v43 <= 1u )
                MmIsAddressValidEx(*(_QWORD *)(v44 + 8) | 0x8000000000000000uLL);
            }
            if ( v98 == 1 )
            {
              MiUnlockWorkingSetExclusive(v51, v124);
            }
            else
            {
              if ( v45 )
                MiUnlockPageTableInternal(v51);
              MiUnlockWorkingSetShared(v51, v124);
            }
            if ( v105 == 1 )
            {
              if ( (_InterlockedExchangeAdd64(
                      (volatile signed __int64 *)&v99[1].Affinity.Bitmap[8],
                      0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&v99[1].Affinity.Bitmap[8]);
              KeAbPostRelease((ULONG_PTR)&v99[1].Affinity.Bitmap[8]);
              v90 = CurrentThread;
              v34 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v34 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v90->ApcState.ApcListHead[0].Flink != &v90->152 )
                KiCheckForKernelApcDelivery(v87, v86, v88, v89);
            }
            if ( v106 == 1 )
            {
              v91 = v107;
              if ( v107 )
                MiReturnFullProcessCommitment(v99, v107);
              v92 = v116 - v91;
            }
            else
            {
              v92 = v108;
            }
            v93 = *(_DWORD *)(a1 + 52);
            v94 = v93;
            LODWORD(v94) = v93 & 0x7FFFFFFF;
            v95 = v92 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v94);
            *(_BYTE *)(a1 + 34) = v95 >> 31;
            *(_DWORD *)(a1 + 52) = v93 ^ (v95 ^ v93) & 0x7FFFFFFF;
            return 0LL;
          }
          if ( v46 && (BugCheckParameter4 & 0xFFF) != 0 )
          {
            v64 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_140;
          }
          if ( (_WORD)v43 )
          {
            MiIncreaseUsedPtesCount(v44, (unsigned __int16)v43);
            v54 = 0;
            v101 = 0;
          }
          else
          {
            v54 = 0;
          }
          if ( v45 )
            MiUnlockPageTableInternal(v51);
          v55 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v120 = 0LL;
          v112 = v55;
          v56 = (*(_DWORD *)(a1 + 48) >> 12) & 0x3F;
          BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
          v57 = BugCheckParameter3 + 1664;
          v58 = (__int64)(BugCheckParameter4 << 25) >> 16;
          if ( v58 < 0xFFFFF68000000000uLL || v58 > 0xFFFFF6FFFFFFFFFFuLL )
            v54 = 1;
          while ( 1 )
          {
            if ( v98 )
            {
              if ( (unsigned __int8)MmIsAddressValidEx(BugCheckParameter4) )
                goto LABEL_113;
              MiUnlockWorkingSetExclusive(v57, v124);
              goto LABEL_108;
            }
            if ( v54 )
            {
              v59 = MiFastLockLeafPageTable(v57, (__int64)(BugCheckParameter4 << 25) >> 16, 0);
              if ( v59 )
                break;
            }
            if ( MiLockLowestValidPageTable(v57, BugCheckParameter4, &v120) == v55 )
              goto LABEL_113;
            MiUnlockPageTableInternal(v57);
            MiUnlockWorkingSetShared(v57, v124);
LABEL_108:
            v60 = MmAccessFault(((unsigned __int64)v56 << 57) | 0x100000000000002LL, BugCheckParameter4, 0, 0LL);
            v62 = v60;
            if ( v60 < 0 )
            {
              MiFlushAllFilesystemPages(1LL);
              KeBugCheckEx(0x7Au, 1uLL, v62, BugCheckParameter3, BugCheckParameter4);
            }
            if ( v98 )
            {
              SharedVm = MiGetSharedVm(v57, v61);
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
              *(_DWORD *)(SharedVm + 4) = 0;
            }
            else
            {
              MiLockWorkingSetShared(v57);
            }
            v55 = v112;
          }
          if ( v59 != 1 )
          {
            while ( 1 )
              v55 = ((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
LABEL_113:
          v64 = 0xFFFFF6FB7DBED000uLL;
          if ( BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter4 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v44 = v118;
            v46 = 1;
            v45 = v112;
            v43 = v101;
          }
          else
          {
            v65 = (v58 >> 18) & 0x3FFFFFF8;
            v66 = *(_QWORD *)(v65 - 0x904C0000000LL);
            v50 = v65 - 0x904C0000000LL;
            v67 = 0xFFFFF6FB7DBED7F8uLL;
            if ( (unsigned __int64)(v65 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
              && v50 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(v49, v66, v50, 0xFFFFF6FB7DBED000uLL)
              && (v66 & 1) != 0
              && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v69 = *((_QWORD *)&Flink->Flink + ((v50 >> 3) & 0x1FF));
                v50 = v66 | 0x20;
                if ( (v69 & 0x20) == 0 )
                  v50 = v66;
                v66 = v50;
                if ( (v69 & 0x42) != 0 )
                  v66 = v50 | 0x42;
              }
            }
            v111 = v66;
            v49 = (__int64)&v111;
            if ( (unsigned __int64)&v111 >= v64 )
            {
              v49 = (__int64)&v111;
              if ( (unsigned __int64)&v111 <= v67
                && (unsigned int)MiPteHasShadow(&v111, v66, v50, v64)
                && (v66 & 1) != 0
                && ((v66 & 0x20) == 0 || (v66 & 0x42) == 0) )
              {
                v49 = (__int64)KeGetCurrentThread()->ApcState.Process;
                v50 = *(_QWORD *)(v49 + 1928);
                if ( v50 )
                {
                  v70 = *(_QWORD *)(v50 + 8 * (((unsigned __int64)&v111 >> 3) & 0x1FF));
                  v50 = v66 | 0x20;
                  v49 = (unsigned __int8)v70;
                  LOBYTE(v49) = v70 & 0x20;
                  if ( (v70 & 0x20) == 0 )
                    v50 = v66;
                  v66 = v50;
                  if ( (v70 & 0x42) != 0 )
                    v66 = v50 | 0x42;
                }
              }
            }
            v45 = v112;
            v44 = 48 * ((v66 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v43 = v101;
            v46 = 1;
            v118 = v44;
          }
LABEL_140:
          v71 = *(_QWORD *)BugCheckParameter4;
          v72 = 0xFFFFF6FB7DBED7F8uLL;
          if ( BugCheckParameter4 >= v64
            && BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v49, v71, v50, v64)
            && (v71 & 1) != 0
            && ((v71 & 0x20) == 0 || (v71 & 0x42) == 0) )
          {
            v49 = (__int64)KeGetCurrentThread()->ApcState.Process;
            v50 = *(_QWORD *)(v49 + 1928);
            if ( v50 )
            {
              v73 = *(_QWORD *)(v50 + 8 * ((BugCheckParameter4 >> 3) & 0x1FF));
              v50 = v71 | 0x20;
              v49 = (unsigned __int8)v73;
              LOBYTE(v49) = v73 & 0x20;
              if ( (v73 & 0x20) == 0 )
                v50 = v71;
              v71 = v50;
              if ( (v73 & 0x42) != 0 )
                v71 = v50 | 0x42;
            }
          }
          BugCheckParameter3 = v71;
          if ( !v71 )
          {
            if ( BugCheckParameter4 <= v113 )
              v107 += v97;
            if ( v97 == 1 )
            {
              if ( BugCheckParameter4 < v64 || BugCheckParameter4 > 0xFFFFF6FB7DBEDFFFuLL )
              {
                LOWORD(v43) = v114 + v43;
                v101 = v43;
              }
              v74 = v21;
              if ( BugCheckParameter4 >= v64 && BugCheckParameter4 <= v72 )
              {
                if ( (unsigned int)MiPteHasShadow(v49, v21, v50, v64) )
                {
                  if ( !HIBYTE(word_140C4DE88) && (v21 & 1) != 0 )
                    v74 |= 0x8000000000000000uLL;
                  goto LABEL_164;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v21 & 1) != 0 )
                {
                  v74 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)BugCheckParameter4 = v74;
LABEL_210:
              v84 = v97;
LABEL_211:
              BugCheckParameter4 += 8 * v114;
              v49 = v109 + 8 * v84;
              v109 = v49;
LABEL_87:
              v51 = v102;
              continue;
            }
LABEL_202:
            v81 = (_QWORD *)*((_QWORD *)v122 + v100);
            v82 = (_QWORD **)v122 + v100;
            if ( !v81 )
            {
              MiDemotePfnListChain(v122);
              v81 = *v82;
            }
            *v82 = (_QWORD *)*v81;
            v83 = (__int64)(v81 + 0xB000000000LL) / 48;
            MiInitializeLargeUserBasePfn(48 * v83 - 0x58000000000LL, v109, v99);
            MiInsertLargeUserMapping(a1, v109, v83, v100, ProtectionMask);
            goto LABEL_210;
          }
          break;
        }
        p_BugCheckParameter3 = (unsigned __int64)&BugCheckParameter3;
        if ( (unsigned __int64)&BugCheckParameter3 < v64 )
          goto LABEL_180;
        p_BugCheckParameter3 = (unsigned __int64)&BugCheckParameter3;
        if ( (unsigned __int64)&BugCheckParameter3 > v72 )
          goto LABEL_180;
        if ( !(unsigned int)MiPteHasShadow(&BugCheckParameter3, v71, v71, v64)
          || (v71 & 1) == 0
          || (v71 & 0x20) != 0 && (v71 & 0x42) != 0 )
        {
          goto LABEL_181;
        }
        p_BugCheckParameter3 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v76 = *(_QWORD *)(p_BugCheckParameter3 + 1928);
        if ( !v76 )
        {
LABEL_180:
          v50 = v71;
          goto LABEL_181;
        }
        v77 = *(_QWORD *)(v76 + 8 * (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
        v50 = v71 | 0x20;
        p_BugCheckParameter3 = (unsigned __int8)v77;
        LOBYTE(p_BugCheckParameter3) = v77 & 0x20;
        if ( (v77 & 0x20) == 0 )
          v50 = v71;
        if ( (v77 & 0x42) != 0 )
          v50 |= 0x42uLL;
LABEL_181:
        if ( (v50 & 0x3E0) == 0x200 && (v50 & 1) == 0 && ((v50 & 0x400) == 0 || MiIsPrototypePteVadLookup(v50)) )
        {
          if ( v97 == 1 )
          {
            v78 = v121 | v71 & 0xFFFFFFFFFFFFFC1FuLL;
            BugCheckParameter3 = v78;
            v50 = v78;
            v79 = *(_DWORD *)(a1 + 48);
            if ( (v79 & 0x100000) != 0 && (v79 & 0x1000000) == 0 && (v79 & 0x4000000) != 0 )
            {
              v50 = v78 | 0x4000000;
              BugCheckParameter3 = v78 | 0x4000000;
            }
            if ( BugCheckParameter4 >= v64 && BugCheckParameter4 <= v72 )
            {
              if ( (unsigned int)MiPteHasShadow(p_BugCheckParameter3, v78, v50, v64) )
              {
                v74 = v50;
                if ( !HIBYTE(word_140C4DE88) && (v50 & 1) != 0 )
                  v74 = v50 | 0x8000000000000000uLL;
LABEL_164:
                *(_QWORD *)BugCheckParameter4 = v74;
                MiWritePteShadow(BugCheckParameter4, v74);
                goto LABEL_210;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v80 = v50 | 0x8000000000000000uLL;
                if ( (v50 & 1) == 0 )
                  v80 = v50;
                *(_QWORD *)BugCheckParameter4 = v80;
                goto LABEL_210;
              }
            }
            *(_QWORD *)BugCheckParameter4 = v50;
            goto LABEL_210;
          }
          goto LABEL_202;
        }
        v84 = v97;
        v107 += v97;
        if ( *a9 )
          goto LABEL_211;
        LOWORD(v125) = 0;
        PageProtection = MiGetPageProtection(a1, BugCheckParameter4, (__int64)&v125);
        if ( !v119 )
        {
          if ( ProtectionMask != PageProtection || v104 != a5 )
            *a9 = 1;
          goto LABEL_210;
        }
        if ( (_WORD)v43 )
        {
          MiIncreaseUsedPtesCount(v44, (unsigned __int16)v43);
          v43 = 0;
          v101 = 0;
        }
        if ( v98 == 1 )
        {
          MiUnlockWorkingSetExclusive(v102, v124);
        }
        else
        {
          MiUnlockPageTableInternal(v102);
          MiUnlockWorkingSetShared(v102, v124);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64(v53, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v53);
    KeAbPostRelease((ULONG_PTR)v53);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v36 )
      MiReturnFullProcessCommitment(v99, v36);
    return 3221225773LL;
  }
LABEL_40:
  v106 = 0;
  v32 = (unsigned __int8)MiLockWorkingSetShared(v102);
  v33 = MiComputePageCommitment(a2 & 0xFFFFFFFFFFFFF000uLL, v22, a1, v32, 0, 0LL);
  MiUnlockWorkingSetShared(v102, v32);
  v108 = v116 - v33;
  if ( v116 == v33 )
  {
    v36 = v116 - v33;
    goto LABEL_70;
  }
  v34 = v28 == 1;
  v35 = v116 - v33;
  v36 = v116 - v33;
  if ( v34 )
  {
    result = MiChargeFullProcessCommitment(v99, v35);
    if ( (int)result < 0 )
      return result;
    goto LABEL_70;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(v99, v35) )
    return 3221225773LL;
  LockedVadEvent = MiLocateLockedVadEvent(a1, 16);
  if ( LockedVadEvent )
    v39 = LockedVadEvent[3];
  else
    v39 = 0LL;
  if ( a8 != (__int64 *)1 && a8 != v39 )
  {
    MiReturnProcessPhysicalPages(v38, v36);
    return 3221225485LL;
  }
  if ( v39 )
  {
    if ( !PsReferencePartitionSafe((__int64)v39) )
    {
      MiReturnProcessPhysicalPages(v40, v36);
      return 3221226656LL;
    }
    *a10 = *(_WORD *)*v39;
  }
  else if ( (int)MiChargeFullProcessCommitment(v38, v36) < 0 )
  {
    return MiReturnProcessPhysicalPages(v99, v36);
  }
  LargePfnList = MiCreateLargePfnList(a1, v36, a7, (_DWORD)v39, (__int64)v122);
  if ( v39 )
    PsDereferencePartition((__int64)v39);
  if ( LargePfnList >= 0 )
  {
LABEL_70:
    v11 = a1;
    goto LABEL_71;
  }
  if ( !v39 )
    MiReturnFullProcessCommitment(v99, v36);
  MiReturnProcessPhysicalPages(v99, v36);
  return (unsigned int)LargePfnList;
}
