/*
 * XREFs of MiCommitExistingVad @ 0x140218720
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405ED060 (MiAllocateVirtualMemory.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x140639628 (MiAllocateFromSubAllocatedRegion.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408CE874 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CEC20 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x14021A3B0 (MiMakeProtectionMask.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiGetPageProtection @ 0x14021F920 (MiGetPageProtection.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetExclusive @ 0x14026C350 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateLockedVadEvent @ 0x1402AA0CC (MiLocateLockedVadEvent.c)
 *     MiLockLowestValidPageTable @ 0x1402ACFF0 (MiLockLowestValidPageTable.c)
 *     MiComputePageCommitment @ 0x1402AD4B0 (MiComputePageCommitment.c)
 *     MiIncreaseUsedPtesCount @ 0x1402AF310 (MiIncreaseUsedPtesCount.c)
 *     MmIsAddressValidEx @ 0x1402B2510 (MmIsAddressValidEx.c)
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402D4758 (PsReferencePartitionSafe.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     KiCheckForKernelApcDelivery @ 0x1403599E0 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiInitializeLargeUserBasePfn @ 0x1403F0C10 (MiInitializeLargeUserBasePfn.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x14052FAA8 (MiFlushAllFilesystemPages.c)
 *     MiComputePreferredNode @ 0x140542058 (MiComputePreferredNode.c)
 *     MiLockWorkingSetForLargeMapping @ 0x140549CE8 (MiLockWorkingSetForLargeMapping.c)
 *     MiCreateLargePfnList @ 0x14055840C (MiCreateLargePfnList.c)
 *     MiDemotePfnListChain @ 0x140558728 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x140558A88 (MiInsertLargeUserMapping.c)
 *     MiChargeFullProcessCommitment @ 0x1405EDAE0 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1405EDBB0 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x14062FA68 (MiReturnFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x1408D29E4 (MiChargeProcessPhysicalPages.c)
 *     MiReturnProcessPhysicalPages @ 0x1408D2D70 (MiReturnProcessPhysicalPages.c)
 */

__int64 __fastcall MiCommitExistingVad(
        ULONG_PTR a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        unsigned __int8 a7,
        _WORD **a8,
        _DWORD *a9,
        _WORD *a10)
{
  ULONG_PTR v11; // rsi
  unsigned int v12; // r8d
  int v14; // r8d
  char v15; // r10
  unsigned int v16; // r11d
  unsigned int v17; // edx
  int v18; // r8d
  int v19; // eax
  _KPROCESS *Process; // r13
  unsigned __int64 v21; // r8
  __int64 v22; // rdi
  unsigned __int64 v23; // r14
  unsigned __int64 BugCheckParameter4; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // r10
  unsigned __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r13
  unsigned int v30; // ecx
  __int64 result; // rax
  __int64 v32; // rcx
  int v33; // esi
  __int64 v34; // rbx
  bool v35; // zf
  __int64 v36; // rdx
  __int64 v37; // r13
  __int64 LockedVadEvent; // rax
  __int64 v39; // rdx
  __int64 v40; // r8
  __int64 v41; // r9
  _WORD **v42; // rbx
  __int64 v43; // r9
  __int64 v44; // rdx
  int LargePfnList; // esi
  __int64 v46; // r8
  int v47; // eax
  int v48; // r13d
  __int64 v49; // r15
  unsigned __int64 v50; // r14
  int v51; // esi
  unsigned int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rax
  volatile signed __int64 *v57; // rbx
  int v58; // r13d
  unsigned __int64 v59; // rsi
  unsigned int v60; // ebx
  __int64 v61; // r14
  unsigned __int64 v62; // r15
  int v63; // eax
  __int64 valid; // rax
  int v65; // eax
  __int64 v66; // rdx
  ULONG_PTR v67; // rsi
  __int64 SharedVm; // rsi
  unsigned __int64 v69; // r9
  __int64 v70; // r15
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // r10
  unsigned __int64 v73; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v75; // rax
  __int64 v76; // r8
  struct _LIST_ENTRY *v77; // r8
  __int64 v78; // rax
  __int64 v79; // r8
  ULONG_PTR v80; // rdx
  unsigned __int64 v81; // r10
  struct _LIST_ENTRY *v82; // r8
  __int64 v83; // rax
  __int64 v84; // r8
  unsigned __int64 v85; // rdx
  unsigned __int64 p_BugCheckParameter3; // rcx
  __int64 v87; // r8
  __int64 v88; // r8
  __int64 v89; // rax
  ULONG_PTR v90; // rdx
  __int64 v91; // r8
  int v92; // eax
  unsigned __int64 v93; // rax
  _QWORD *v94; // rcx
  _QWORD **v95; // rbx
  __int64 v96; // rbx
  __int64 v97; // rax
  int PageProtection; // eax
  struct _KTHREAD *v99; // rax
  __int64 v100; // rbx
  __int64 v101; // r9
  unsigned int v102; // ecx
  __int64 v103; // rdx
  unsigned __int64 v104; // rdx
  unsigned int ProtectionMask; // [rsp+30h] [rbp-D0h]
  __int64 v106; // [rsp+38h] [rbp-C8h]
  int v107; // [rsp+40h] [rbp-C0h]
  _KPROCESS *v108; // [rsp+48h] [rbp-B8h]
  unsigned int v109; // [rsp+50h] [rbp-B0h]
  int v110; // [rsp+54h] [rbp-ACh]
  __int64 v111; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  int v113; // [rsp+68h] [rbp-98h]
  int v114; // [rsp+6Ch] [rbp-94h]
  int v115; // [rsp+70h] [rbp-90h]
  __int64 v116; // [rsp+78h] [rbp-88h]
  __int64 v117; // [rsp+80h] [rbp-80h]
  __int64 v118; // [rsp+88h] [rbp-78h]
  int v119; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v120; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v121; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v122; // [rsp+A8h] [rbp-58h]
  __int64 v123; // [rsp+B0h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v125; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v126; // [rsp+C8h] [rbp-38h]
  __int64 v127; // [rsp+D0h] [rbp-30h]
  __int64 v128; // [rsp+D8h] [rbp-28h]
  __int64 v129; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v130; // [rsp+E8h] [rbp-18h]
  _OWORD v131[5]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int8 v133; // [rsp+158h] [rbp+58h]
  __int64 v134; // [rsp+160h] [rbp+60h] BYREF

  v11 = a1;
  v12 = *(_DWORD *)(a1 + 48);
  v128 = 0LL;
  v113 = 0;
  memset(v131, 0, 32);
  ProtectionMask = MiMakeProtectionMask(a4, a2, (v12 >> 7) & 0x1F);
  v17 = ProtectionMask;
  if ( ProtectionMask == 24 )
    goto LABEL_17;
  if ( v14 == 24 )
  {
    if ( (v16 & 0x100000) == 0 )
      v14 = (*(unsigned __int16 *)(*(_QWORD *)(v11 + 72) + 32LL) >> 1) & 0x1F;
    if ( v14 == 24 )
      LOBYTE(v14) = 0;
  }
  v18 = v14 & 0x18;
  if ( v18 )
  {
    if ( v18 != 16 )
    {
      if ( v18 == 8 )
      {
        v17 = ProtectionMask & 0xFFFFFFE7 | 8;
      }
      else
      {
        if ( v18 != 24 )
          goto LABEL_18;
        v17 = ProtectionMask | 0x18;
      }
      goto LABEL_17;
    }
    goto LABEL_16;
  }
  v19 = ProtectionMask & 0x18;
  if ( v19 != 24 )
  {
    if ( v19 != 8 )
      goto LABEL_18;
LABEL_16:
    v17 = ProtectionMask & 0xFFFFFFF7;
    goto LABEL_17;
  }
  v17 = ProtectionMask & 0xFFFFFFE7;
LABEL_17:
  ProtectionMask = v17;
LABEL_18:
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v108 = Process;
  if ( *(int *)(v11 + 52) >= 0 )
    v21 = 0LL;
  else
    v21 = 8 * ((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  v122 = v21;
  v130 = 32LL * (v17 & 0x1F);
  v22 = v130;
  if ( qword_140C4DE80 )
  {
    if ( (v130 & qword_140C4DE80) != 0 )
      v22 = v130 | 0x10;
    else
      v22 = qword_140C4DE80 | v130;
  }
  if ( (v16 & 0x100000) != 0 && (v16 & 0x1000000) == 0 && (v16 & 0x4000000) != 0 )
    v22 |= 0x4000000uLL;
  v118 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = (a2 + a3 - 1) | 0xFFF;
  BugCheckParameter4 = v118;
  v25 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26 = v15 & 0x1A;
  v126 = v25;
  v111 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v125 = ((__int64)(((v23 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  if ( (v16 & 0x500000) == 0x500000 )
  {
    v27 = ((unsigned __int64)v16 >> 18) & 3;
    v28 = 16LL;
    v29 = MiVadPageSizes[v27];
    v30 = MiVadPageIndices[v27];
    v106 = v29;
    if ( v29 != 16 )
      v28 = 1LL;
    v109 = v30;
    v123 = v28;
    if ( v30 > 1 )
    {
      if ( v26 == 2 )
        goto LABEL_40;
    }
    else
    {
      if ( v30 == 1 )
      {
        if ( v26 != 8 )
          return 3221225485LL;
        goto LABEL_37;
      }
      if ( v26 == 16 )
      {
LABEL_37:
        v32 = 2 - v30;
        do
        {
          BugCheckParameter4 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v25 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v21 = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v32;
        }
        while ( v32 );
        v122 = v21;
        v126 = v25;
        goto LABEL_40;
      }
    }
    return 3221225485LL;
  }
  if ( v26 )
    return 3221225485LL;
  v106 = 1LL;
  v29 = 1LL;
  v123 = 1LL;
  v109 = 3;
  if ( (int)MiChargeFullProcessCommitment(
              v108,
              ((__int64)(((v23 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1) >= 0 )
  {
    v37 = v125;
    v117 = v125;
    v115 = 1;
LABEL_71:
    v47 = *(_DWORD *)(v11 + 48);
    v114 = 0;
    if ( (v47 & 0x100000) != 0 )
    {
      if ( (v47 & 0x70) != 0 || *(int *)(v11 + 52) < 0 )
        goto LABEL_74;
    }
    else
    {
      if ( (v47 & 0xF80) != 0xC00 )
        goto LABEL_74;
      v56 = *(_QWORD *)(v11 + 72);
      if ( *(_QWORD *)(*(_QWORD *)v56 + 64LL) || (*(_DWORD *)(*(_QWORD *)v56 + 56LL) & 0x1000) == 0 )
        goto LABEL_74;
    }
    v114 = 1;
    --CurrentThread->SpecialApcDisable;
    v57 = (volatile signed __int64 *)&v108[1].Affinity.Bitmap[8];
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v108[1].Affinity.Bitmap[8], 0LL);
    if ( (int)MiCommitPageTablesForVad(v11, a2, v23) >= 0 )
    {
LABEL_74:
      v48 = 0;
      v116 = 0LL;
      v110 = 0;
      v49 = 0LL;
      v127 = 0LL;
      while ( 1 )
      {
        v50 = 0LL;
        v51 = 0;
        v107 = 0;
        if ( !v109 )
        {
          v52 = MiComputePreferredNode(a1);
          v107 = 1;
          v133 = MiLockWorkingSetForLargeMapping(v111, v53, v52);
          if ( v133 != 17 )
            goto LABEL_87;
        }
        v55 = v111;
        v133 = MiLockWorkingSetShared(v111);
        while ( 2 )
        {
          if ( BugCheckParameter4 > v126 )
          {
            if ( (_WORD)v48 )
            {
              v119 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v119);
                while ( *(__int64 *)(v49 + 24) < 0 );
              }
              *(_QWORD *)(v49 + 16) ^= ((unsigned int)*(_QWORD *)(v49 + 16) ^ ((unsigned int)*(_QWORD *)(v49 + 16)
                                                                             + ((unsigned __int16)v48 << 16))) & 0x3FF0000;
              _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (unsigned __int16)v48 <= 1u )
                MmIsAddressValidEx(*(_QWORD *)(v49 + 8) | 0x8000000000000000uLL);
            }
            if ( v107 == 1 )
            {
              MiUnlockWorkingSetExclusive(v55, v133);
            }
            else
            {
              if ( v50 )
                MiUnlockPageTableInternal(v55, v50);
              MiUnlockWorkingSetShared(v55, v133);
            }
            if ( v114 == 1 )
            {
              if ( (_InterlockedExchangeAdd64(
                      (volatile signed __int64 *)&v108[1].Affinity.Bitmap[8],
                      0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(&v108[1].Affinity.Bitmap[8]);
              KeAbPostRelease((ULONG_PTR)&v108[1].Affinity.Bitmap[8]);
              v99 = CurrentThread;
              v35 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v35 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v99->ApcState.ApcListHead[0].Flink != &v99->152 )
                KiCheckForKernelApcDelivery();
            }
            if ( v115 == 1 )
            {
              v100 = v116;
              if ( v116 )
                MiReturnFullProcessCommitment(v108, v116);
              v101 = v125 - v100;
            }
            else
            {
              v101 = v117;
            }
            v102 = *(_DWORD *)(a1 + 52);
            v103 = v102;
            LODWORD(v103) = v102 & 0x7FFFFFFF;
            v104 = v101 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v103);
            *(_BYTE *)(a1 + 34) = v104 >> 31;
            *(_DWORD *)(a1 + 52) = v102 ^ (v104 ^ v102) & 0x7FFFFFFF;
            return 0LL;
          }
          if ( v51 && (BugCheckParameter4 & 0xFFF) != 0 )
          {
            v69 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_140;
          }
          if ( (_WORD)v48 )
          {
            MiIncreaseUsedPtesCount(v49, (unsigned __int16)v48);
            v58 = 0;
            v110 = 0;
          }
          else
          {
            v58 = 0;
          }
          if ( v50 )
            MiUnlockPageTableInternal(v55, v50);
          v59 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v129 = 0LL;
          v121 = v59;
          v60 = (*(_DWORD *)(a1 + 48) >> 12) & 0x3F;
          BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
          v61 = BugCheckParameter3 + 1664;
          v62 = (__int64)(BugCheckParameter4 << 25) >> 16;
          if ( v62 < 0xFFFFF68000000000uLL || v62 > 0xFFFFF6FFFFFFFFFFuLL )
            v58 = 1;
          while ( 1 )
          {
            if ( v107 )
            {
              if ( (unsigned __int8)MmIsAddressValidEx(BugCheckParameter4) )
                goto LABEL_113;
              MiUnlockWorkingSetExclusive(v61, v133);
              goto LABEL_108;
            }
            if ( v58 )
            {
              v63 = MiFastLockLeafPageTable(v61, (__int64)(BugCheckParameter4 << 25) >> 16, 0);
              if ( v63 )
                break;
            }
            valid = MiLockLowestValidPageTable(v61, BugCheckParameter4, &v129);
            if ( valid == v59 )
              goto LABEL_113;
            MiUnlockPageTableInternal(v61, valid);
            MiUnlockWorkingSetShared(v61, v133);
LABEL_108:
            v65 = MmAccessFault(((unsigned __int64)v60 << 57) | 0x100000000000002LL, BugCheckParameter4, 0, 0LL);
            v67 = v65;
            if ( v65 < 0 )
            {
              MiFlushAllFilesystemPages(1LL);
              KeBugCheckEx(0x7Au, 1uLL, v67, BugCheckParameter3, BugCheckParameter4);
            }
            if ( v107 )
            {
              SharedVm = MiGetSharedVm(v61, v66);
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
              *(_DWORD *)(SharedVm + 4) = 0;
            }
            else
            {
              MiLockWorkingSetShared(v61);
            }
            v59 = v121;
          }
          if ( v63 != 1 )
          {
            while ( 1 )
              v59 = ((v59 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
LABEL_113:
          v69 = 0xFFFFF6FB7DBED000uLL;
          if ( BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter4 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v49 = v127;
            v51 = 1;
            v50 = v121;
            v48 = v110;
          }
          else
          {
            v70 = (v62 >> 18) & 0x3FFFFFF8;
            v71 = *(_QWORD *)(v70 - 0x904C0000000LL);
            v72 = 0xFFFFF6FB7DBED7F8uLL;
            if ( (unsigned __int64)(v70 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)(v70 - 0x904C0000000LL) <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(v54, v71)
              && (v71 & 1) != 0
              && ((v71 & 0x20) == 0 || (v71 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v75 = *((_QWORD *)&Flink->Flink + ((v73 >> 3) & 0x1FF));
                v76 = v71 | 0x20;
                if ( (v75 & 0x20) == 0 )
                  v76 = v71;
                v71 = v76;
                if ( (v75 & 0x42) != 0 )
                  v71 = v76 | 0x42;
              }
            }
            v120 = v71;
            v54 = (__int64)&v120;
            if ( (unsigned __int64)&v120 >= v69 )
            {
              v54 = (__int64)&v120;
              if ( (unsigned __int64)&v120 <= v72
                && (unsigned int)MiPteHasShadow(&v120, v71)
                && (v71 & 1) != 0
                && ((v71 & 0x20) == 0 || (v71 & 0x42) == 0) )
              {
                v54 = (__int64)KeGetCurrentThread()->ApcState.Process;
                v77 = *(struct _LIST_ENTRY **)(v54 + 1928);
                if ( v77 )
                {
                  v78 = *((_QWORD *)&v77->Flink + (((unsigned __int64)&v120 >> 3) & 0x1FF));
                  v79 = v71 | 0x20;
                  v54 = (unsigned __int8)v78;
                  LOBYTE(v54) = v78 & 0x20;
                  if ( (v78 & 0x20) == 0 )
                    v79 = v71;
                  v71 = v79;
                  if ( (v78 & 0x42) != 0 )
                    v71 = v79 | 0x42;
                }
              }
            }
            v50 = v121;
            v49 = 48 * ((v71 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v48 = v110;
            v51 = 1;
            v127 = v49;
          }
LABEL_140:
          v80 = *(_QWORD *)BugCheckParameter4;
          v81 = 0xFFFFF6FB7DBED7F8uLL;
          if ( BugCheckParameter4 >= v69
            && BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v54, v80)
            && (v80 & 1) != 0
            && ((v80 & 0x20) == 0 || (v80 & 0x42) == 0) )
          {
            v54 = (__int64)KeGetCurrentThread()->ApcState.Process;
            v82 = *(struct _LIST_ENTRY **)(v54 + 1928);
            if ( v82 )
            {
              v83 = *((_QWORD *)&v82->Flink + ((BugCheckParameter4 >> 3) & 0x1FF));
              v84 = v80 | 0x20;
              v54 = (unsigned __int8)v83;
              LOBYTE(v54) = v83 & 0x20;
              if ( (v83 & 0x20) == 0 )
                v84 = v80;
              v80 = v84;
              if ( (v83 & 0x42) != 0 )
                v80 = v84 | 0x42;
            }
          }
          BugCheckParameter3 = v80;
          if ( !v80 )
          {
            if ( BugCheckParameter4 <= v122 )
              v116 += v106;
            if ( v106 == 1 )
            {
              if ( BugCheckParameter4 < v69 || BugCheckParameter4 > 0xFFFFF6FB7DBEDFFFuLL )
              {
                LOWORD(v48) = v123 + v48;
                v110 = v48;
              }
              v85 = v22;
              if ( BugCheckParameter4 >= v69 && BugCheckParameter4 <= v81 )
              {
                if ( (unsigned int)MiPteHasShadow(v54, v22) )
                {
                  if ( !HIBYTE(word_140C4DF48) && (v22 & 1) != 0 )
                    v85 |= 0x8000000000000000uLL;
                  goto LABEL_164;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v22 & 1) != 0 )
                {
                  v85 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)BugCheckParameter4 = v85;
LABEL_210:
              v97 = v106;
LABEL_211:
              BugCheckParameter4 += 8 * v123;
              v54 = v118 + 8 * v97;
              v118 = v54;
LABEL_87:
              v55 = v111;
              continue;
            }
LABEL_202:
            v94 = (_QWORD *)*((_QWORD *)v131 + v109);
            v95 = (_QWORD **)v131 + v109;
            if ( !v94 )
            {
              MiDemotePfnListChain(v131);
              v94 = *v95;
            }
            *v95 = (_QWORD *)*v94;
            v96 = (__int64)(v94 + 0xB000000000LL) / 48;
            MiInitializeLargeUserBasePfn(48 * v96 - 0x58000000000LL, v118, v108);
            MiInsertLargeUserMapping(a1, v118, v96, v109, ProtectionMask);
            goto LABEL_210;
          }
          break;
        }
        p_BugCheckParameter3 = (unsigned __int64)&BugCheckParameter3;
        if ( (unsigned __int64)&BugCheckParameter3 < v69 )
          goto LABEL_180;
        p_BugCheckParameter3 = (unsigned __int64)&BugCheckParameter3;
        if ( (unsigned __int64)&BugCheckParameter3 > v81 )
          goto LABEL_180;
        if ( !(unsigned int)MiPteHasShadow(&BugCheckParameter3, v80)
          || (v80 & 1) == 0
          || (v80 & 0x20) != 0 && (v80 & 0x42) != 0 )
        {
          goto LABEL_181;
        }
        p_BugCheckParameter3 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v88 = *(_QWORD *)(p_BugCheckParameter3 + 1928);
        if ( !v88 )
        {
LABEL_180:
          v87 = v80;
          goto LABEL_181;
        }
        v89 = *(_QWORD *)(v88 + 8 * (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
        v87 = v80 | 0x20;
        p_BugCheckParameter3 = (unsigned __int8)v89;
        LOBYTE(p_BugCheckParameter3) = v89 & 0x20;
        if ( (v89 & 0x20) == 0 )
          v87 = v80;
        if ( (v89 & 0x42) != 0 )
          v87 |= 0x42uLL;
LABEL_181:
        if ( (v87 & 0x3E0) == 0x200
          && (v87 & 1) == 0
          && ((v87 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v87)) )
        {
          if ( v106 == 1 )
          {
            v90 = v130 | v80 & 0xFFFFFFFFFFFFFC1FuLL;
            BugCheckParameter3 = v90;
            v91 = v90;
            v92 = *(_DWORD *)(a1 + 48);
            if ( (v92 & 0x100000) != 0 && (v92 & 0x1000000) == 0 && (v92 & 0x4000000) != 0 )
            {
              v91 = v90 | 0x4000000;
              BugCheckParameter3 = v90 | 0x4000000;
            }
            if ( BugCheckParameter4 >= v69 && BugCheckParameter4 <= v81 )
            {
              if ( (unsigned int)MiPteHasShadow(p_BugCheckParameter3, v90) )
              {
                v85 = v91;
                if ( !HIBYTE(word_140C4DF48) && (v91 & 1) != 0 )
                  v85 = v91 | 0x8000000000000000uLL;
LABEL_164:
                *(_QWORD *)BugCheckParameter4 = v85;
                MiWritePteShadow(BugCheckParameter4, v85);
                goto LABEL_210;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v93 = v91 | 0x8000000000000000uLL;
                if ( (v91 & 1) == 0 )
                  v93 = v91;
                *(_QWORD *)BugCheckParameter4 = v93;
                goto LABEL_210;
              }
            }
            *(_QWORD *)BugCheckParameter4 = v91;
            goto LABEL_210;
          }
          goto LABEL_202;
        }
        v97 = v106;
        v116 += v106;
        if ( *a9 )
          goto LABEL_211;
        LOWORD(v134) = 0;
        PageProtection = MiGetPageProtection(a1, BugCheckParameter4, (__int64)&v134);
        if ( !v128 )
        {
          if ( ProtectionMask != PageProtection || v113 != a5 )
            *a9 = 1;
          goto LABEL_210;
        }
        if ( (_WORD)v48 )
        {
          MiIncreaseUsedPtesCount(v49, (unsigned __int16)v48);
          v48 = 0;
          v110 = 0;
        }
        if ( v107 == 1 )
        {
          MiUnlockWorkingSetExclusive(v111, v133);
        }
        else
        {
          MiUnlockPageTableInternal(v111, v50);
          MiUnlockWorkingSetShared(v111, v133);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64(v57, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v57);
    KeAbPostRelease((ULONG_PTR)v57);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    if ( v37 )
      MiReturnFullProcessCommitment(v108, v37);
    return 3221225773LL;
  }
LABEL_40:
  v115 = 0;
  v33 = (unsigned __int8)MiLockWorkingSetShared(v111);
  v34 = MiComputePageCommitment((unsigned int)a2 & 0xFFFFF000, v23, a1, v33, 0, 0LL);
  MiUnlockWorkingSetShared(v111, v33);
  v117 = v125 - v34;
  if ( v125 == v34 )
  {
    v37 = v125 - v34;
    goto LABEL_70;
  }
  v35 = v29 == 1;
  v36 = v125 - v34;
  v37 = v125 - v34;
  if ( v35 )
  {
    result = MiChargeFullProcessCommitment(v108, v36);
    if ( (int)result < 0 )
      return result;
    goto LABEL_70;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(v108, v36) )
    return 3221225773LL;
  LockedVadEvent = MiLocateLockedVadEvent(a1, 16LL);
  if ( LockedVadEvent )
    v42 = *(_WORD ***)(LockedVadEvent + 24);
  else
    v42 = 0LL;
  if ( a8 != (_WORD **)1 && a8 != v42 )
  {
    MiReturnProcessPhysicalPages(v41, v37);
    return 3221225485LL;
  }
  if ( v42 )
  {
    if ( !(unsigned __int8)PsReferencePartitionSafe(v42, v39, v40) )
    {
      MiReturnProcessPhysicalPages(v43, v37);
      return 3221226656LL;
    }
    *a10 = **v42;
  }
  else if ( (int)MiChargeFullProcessCommitment(v41, v37) < 0 )
  {
    return MiReturnProcessPhysicalPages(v108, v37);
  }
  LargePfnList = MiCreateLargePfnList(a1, v37, a7, (_DWORD)v42, (__int64)v131);
  if ( v42 )
    PsDereferencePartition(v42, v44, v46);
  if ( LargePfnList >= 0 )
  {
LABEL_70:
    v11 = a1;
    goto LABEL_71;
  }
  if ( !v42 )
    MiReturnFullProcessCommitment(v108, v37);
  MiReturnProcessPhysicalPages(v108, v37);
  return (unsigned int)LargePfnList;
}
