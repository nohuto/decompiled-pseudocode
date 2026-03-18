/*
 * XREFs of MiCommitExistingVad @ 0x1402AB230
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1406045E8 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x140696560 (MiAllocateVirtualMemory.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408CFBC4 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408CFF70 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateLockedVadEvent @ 0x14025109C (MiLocateLockedVadEvent.c)
 *     MiLockLowestValidPageTable @ 0x140253FC0 (MiLockLowestValidPageTable.c)
 *     MiComputePageCommitment @ 0x140254480 (MiComputePageCommitment.c)
 *     MiIncreaseUsedPtesCount @ 0x1402562E0 (MiIncreaseUsedPtesCount.c)
 *     MmIsAddressValidEx @ 0x1402594E0 (MmIsAddressValidEx.c)
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x14026ADB8 (PsReferencePartitionSafe.c)
 *     KiCheckForKernelApcDelivery @ 0x140273D40 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x1402A06B0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x1402ACEC0 (MiMakeProtectionMask.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiGetPageProtection @ 0x1402B25A0 (MiGetPageProtection.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiInitializeLargeUserBasePfn @ 0x1403F1F70 (MiInitializeLargeUserBasePfn.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x1405300F8 (MiFlushAllFilesystemPages.c)
 *     MiComputePreferredNode @ 0x1405426A8 (MiComputePreferredNode.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054A338 (MiLockWorkingSetForLargeMapping.c)
 *     MiCreateLargePfnList @ 0x140558A5C (MiCreateLargePfnList.c)
 *     MiDemotePfnListChain @ 0x140558D78 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x1405590D8 (MiInsertLargeUserMapping.c)
 *     MiReturnFullProcessCommitment @ 0x1405FAA28 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140696FE0 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1406970B0 (MiCommitPageTablesForVad.c)
 *     MiChargeProcessPhysicalPages @ 0x1408D3D34 (MiChargeProcessPhysicalPages.c)
 *     MiReturnProcessPhysicalPages @ 0x1408D40C0 (MiReturnProcessPhysicalPages.c)
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
  ULONG_PTR v49; // rdx
  __int64 v50; // rcx
  unsigned __int64 v51; // r8
  unsigned __int64 v52; // r9
  __int64 v53; // rbx
  __int64 v54; // rax
  volatile signed __int64 *v55; // rbx
  int v56; // r13d
  unsigned __int64 v57; // rsi
  unsigned int v58; // ebx
  __int64 v59; // r14
  unsigned __int64 v60; // r15
  int v61; // eax
  unsigned __int64 valid; // rax
  int v63; // eax
  __int64 v64; // rdx
  ULONG_PTR v65; // rsi
  __int64 SharedVm; // rsi
  __int64 v67; // r15
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // r10
  struct _LIST_ENTRY *Flink; // rax
  __int64 v71; // rax
  __int64 v72; // rax
  unsigned __int64 v73; // r10
  __int64 v74; // rax
  unsigned __int64 p_BugCheckParameter3; // rcx
  __int64 v76; // r8
  __int64 v77; // rax
  int v78; // eax
  unsigned __int64 v79; // rax
  _QWORD *v80; // rcx
  _QWORD **v81; // rbx
  __int64 v82; // rbx
  __int64 v83; // rax
  int PageProtection; // eax
  __int64 v85; // rcx
  struct _KTHREAD *v86; // rax
  __int64 v87; // rbx
  __int64 v88; // r9
  unsigned int v89; // ecx
  __int64 v90; // rdx
  unsigned __int64 v91; // rdx
  unsigned int ProtectionMask; // [rsp+30h] [rbp-D0h]
  __int64 v93; // [rsp+38h] [rbp-C8h]
  int v94; // [rsp+40h] [rbp-C0h]
  _KPROCESS *v95; // [rsp+48h] [rbp-B8h]
  unsigned int v96; // [rsp+50h] [rbp-B0h]
  int v97; // [rsp+54h] [rbp-ACh]
  __int64 v98; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  int v100; // [rsp+68h] [rbp-98h]
  int v101; // [rsp+6Ch] [rbp-94h]
  int v102; // [rsp+70h] [rbp-90h]
  __int64 v103; // [rsp+78h] [rbp-88h]
  __int64 v104; // [rsp+80h] [rbp-80h]
  __int64 v105; // [rsp+88h] [rbp-78h]
  int v106; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v107; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v108; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v109; // [rsp+A8h] [rbp-58h]
  __int64 v110; // [rsp+B0h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v112; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v113; // [rsp+C8h] [rbp-38h]
  __int64 v114; // [rsp+D0h] [rbp-30h]
  __int64 v115; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v116; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v117; // [rsp+E8h] [rbp-18h]
  _OWORD v118[5]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int8 v120; // [rsp+158h] [rbp+58h]
  __int64 v121; // [rsp+160h] [rbp+60h] BYREF

  v11 = a1;
  v115 = 0LL;
  v100 = 0;
  memset(v118, 0, 32);
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
  v95 = Process;
  if ( *(int *)(v11 + 52) >= 0 )
    v20 = 0LL;
  else
    v20 = 8 * ((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  v109 = v20;
  v117 = 32LL * (v16 & 0x1F);
  v21 = v117;
  if ( qword_140C4DD40 )
  {
    if ( (v117 & qword_140C4DD40) != 0 )
      v21 = v117 | 0x10;
    else
      v21 = qword_140C4DD40 | v117;
  }
  if ( (v15 & 0x100000) != 0 && (v15 & 0x1000000) == 0 && (v15 & 0x4000000) != 0 )
    v21 |= 0x4000000uLL;
  v105 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v22 = (a2 + a3 - 1) | 0xFFF;
  BugCheckParameter4 = v105;
  v24 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = v14 & 0x1A;
  v113 = v24;
  v98 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v112 = ((__int64)(((v22 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  if ( (v15 & 0x500000) == 0x500000 )
  {
    v26 = ((unsigned __int64)v15 >> 18) & 3;
    v27 = 16LL;
    v28 = MiVadPageSizes[v26];
    v29 = MiVadPageIndices[v26];
    v93 = v28;
    if ( v28 != 16 )
      v27 = 1LL;
    v96 = v29;
    v110 = v27;
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
        v109 = v20;
        v113 = v24;
        goto LABEL_40;
      }
    }
    return 3221225485LL;
  }
  if ( v25 )
    return 3221225485LL;
  v93 = 1LL;
  v28 = 1LL;
  v110 = 1LL;
  v96 = 3;
  if ( (int)MiChargeFullProcessCommitment(
              v95,
              ((__int64)(((v22 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1) >= 0 )
  {
    v36 = v112;
    v104 = v112;
    v102 = 1;
LABEL_71:
    v42 = *(_DWORD *)(v11 + 48);
    v101 = 0;
    if ( (v42 & 0x100000) != 0 )
    {
      if ( (v42 & 0x70) != 0 || *(int *)(v11 + 52) < 0 )
        goto LABEL_74;
    }
    else
    {
      if ( (v42 & 0xF80) != 0xC00 )
        goto LABEL_74;
      v54 = *(_QWORD *)(v11 + 72);
      if ( *(_QWORD *)(*(_QWORD *)v54 + 64LL) || (*(_DWORD *)(*(_QWORD *)v54 + 56LL) & 0x1000) == 0 )
        goto LABEL_74;
    }
    v101 = 1;
    --CurrentThread->SpecialApcDisable;
    v55 = (volatile signed __int64 *)&v95[1].Affinity.Bitmap[8];
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v95[1].Affinity.Bitmap[8], 0LL);
    if ( (int)MiCommitPageTablesForVad(v11, a2) >= 0 )
    {
LABEL_74:
      v43 = 0;
      v103 = 0LL;
      v97 = 0;
      v44 = 0LL;
      v114 = 0LL;
      while ( 1 )
      {
        v45 = 0LL;
        v46 = 0;
        v94 = 0;
        if ( !v96 )
        {
          v47 = MiComputePreferredNode(a1);
          v94 = 1;
          v120 = MiLockWorkingSetForLargeMapping(v98, v48, v47);
          if ( v120 != 17 )
            goto LABEL_87;
        }
        v53 = v98;
        v120 = MiLockWorkingSetShared(v98);
        while ( 2 )
        {
          if ( BugCheckParameter4 > v113 )
          {
            if ( (_WORD)v43 )
            {
              v106 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v106, v49, v51, v52);
                while ( *(__int64 *)(v44 + 24) < 0 );
              }
              *(_QWORD *)(v44 + 16) ^= ((unsigned int)*(_QWORD *)(v44 + 16) ^ ((unsigned int)*(_QWORD *)(v44 + 16)
                                                                             + ((unsigned __int16)v43 << 16))) & 0x3FF0000;
              _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (unsigned __int16)v43 <= 1u )
                MmIsAddressValidEx(*(_QWORD *)(v44 + 8) | 0x8000000000000000uLL);
            }
            if ( v94 == 1 )
            {
              MiUnlockWorkingSetExclusive(v53, v120);
            }
            else
            {
              if ( v45 )
                MiUnlockPageTableInternal(v53, v45);
              MiUnlockWorkingSetShared(v53, v120);
            }
            if ( v101 == 1 )
            {
              if ( (_InterlockedExchangeAdd64(
                      (volatile signed __int64 *)&v95[1].Affinity.Bitmap[8],
                      0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock((volatile signed __int64 *)&v95[1].Affinity.Bitmap[8]);
              KeAbPostRelease((ULONG_PTR)&v95[1].Affinity.Bitmap[8]);
              v86 = CurrentThread;
              v34 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v34 && ($C774EFD68449142D8271B1EC1EB7FB26 *)v86->ApcState.ApcListHead[0].Flink != &v86->152 )
                KiCheckForKernelApcDelivery(v85);
            }
            if ( v102 == 1 )
            {
              v87 = v103;
              if ( v103 )
                MiReturnFullProcessCommitment(v95);
              v88 = v112 - v87;
            }
            else
            {
              v88 = v104;
            }
            v89 = *(_DWORD *)(a1 + 52);
            v90 = v89;
            LODWORD(v90) = v89 & 0x7FFFFFFF;
            v91 = v88 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v90);
            *(_BYTE *)(a1 + 34) = v91 >> 31;
            *(_DWORD *)(a1 + 52) = v89 ^ (v91 ^ v89) & 0x7FFFFFFF;
            return 0LL;
          }
          if ( v46 && (BugCheckParameter4 & 0xFFF) != 0 )
          {
            v52 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_140;
          }
          if ( (_WORD)v43 )
          {
            MiIncreaseUsedPtesCount(v44, (unsigned __int16)v43);
            v56 = 0;
            v97 = 0;
          }
          else
          {
            v56 = 0;
          }
          if ( v45 )
            MiUnlockPageTableInternal(v53, v45);
          v57 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v116 = 0LL;
          v108 = v57;
          v58 = (*(_DWORD *)(a1 + 48) >> 12) & 0x3F;
          BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
          v59 = BugCheckParameter3 + 1664;
          v60 = (__int64)(BugCheckParameter4 << 25) >> 16;
          if ( v60 < 0xFFFFF68000000000uLL || v60 > 0xFFFFF6FFFFFFFFFFuLL )
            v56 = 1;
          while ( 1 )
          {
            if ( v94 )
            {
              if ( MmIsAddressValidEx(BugCheckParameter4) )
                goto LABEL_113;
              MiUnlockWorkingSetExclusive(v59, v120);
              goto LABEL_108;
            }
            if ( v56 )
            {
              v61 = MiFastLockLeafPageTable(v59, (__int64)(BugCheckParameter4 << 25) >> 16, 0);
              if ( v61 )
                break;
            }
            valid = MiLockLowestValidPageTable(v59, BugCheckParameter4, &v116);
            if ( valid == v57 )
              goto LABEL_113;
            MiUnlockPageTableInternal(v59, valid);
            MiUnlockWorkingSetShared(v59, v120);
LABEL_108:
            v63 = MmAccessFault(((unsigned __int64)v58 << 57) | 0x100000000000002LL, BugCheckParameter4, 0, 0LL);
            v65 = v63;
            if ( v63 < 0 )
            {
              MiFlushAllFilesystemPages(1LL);
              KeBugCheckEx(0x7Au, 1uLL, v65, BugCheckParameter3, BugCheckParameter4);
            }
            if ( v94 )
            {
              SharedVm = MiGetSharedVm(v59, v64);
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
              *(_DWORD *)(SharedVm + 4) = 0;
            }
            else
            {
              MiLockWorkingSetShared(v59);
            }
            v57 = v108;
          }
          if ( v61 != 1 )
          {
            while ( 1 )
              v57 = ((v57 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
LABEL_113:
          v52 = 0xFFFFF6FB7DBED000uLL;
          if ( BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter4 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v44 = v114;
            v46 = 1;
            v45 = v108;
            v43 = v97;
          }
          else
          {
            v67 = (v60 >> 18) & 0x3FFFFFF8;
            v68 = *(_QWORD *)(v67 - 0x904C0000000LL);
            v51 = v67 - 0x904C0000000LL;
            v69 = 0xFFFFF6FB7DBED7F8uLL;
            if ( (unsigned __int64)(v67 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
              && v51 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(v50, v68, v51, 0xFFFFF6FB7DBED000uLL)
              && (v68 & 1) != 0
              && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v71 = *((_QWORD *)&Flink->Flink + ((v51 >> 3) & 0x1FF));
                v51 = v68 | 0x20;
                if ( (v71 & 0x20) == 0 )
                  v51 = v68;
                v68 = v51;
                if ( (v71 & 0x42) != 0 )
                  v68 = v51 | 0x42;
              }
            }
            v107 = v68;
            v50 = (__int64)&v107;
            if ( (unsigned __int64)&v107 >= v52 )
            {
              v50 = (__int64)&v107;
              if ( (unsigned __int64)&v107 <= v69
                && (unsigned int)MiPteHasShadow(&v107, v68, v51, v52)
                && (v68 & 1) != 0
                && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
              {
                v50 = (__int64)KeGetCurrentThread()->ApcState.Process;
                v51 = *(_QWORD *)(v50 + 1928);
                if ( v51 )
                {
                  v72 = *(_QWORD *)(v51 + 8 * (((unsigned __int64)&v107 >> 3) & 0x1FF));
                  v51 = v68 | 0x20;
                  v50 = (unsigned __int8)v72;
                  LOBYTE(v50) = v72 & 0x20;
                  if ( (v72 & 0x20) == 0 )
                    v51 = v68;
                  v68 = v51;
                  if ( (v72 & 0x42) != 0 )
                    v68 = v51 | 0x42;
                }
              }
            }
            v45 = v108;
            v44 = 48 * ((v68 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v43 = v97;
            v46 = 1;
            v114 = v44;
          }
LABEL_140:
          v49 = *(_QWORD *)BugCheckParameter4;
          v73 = 0xFFFFF6FB7DBED7F8uLL;
          if ( BugCheckParameter4 >= v52
            && BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow(v50, v49, v51, v52)
            && (v49 & 1) != 0
            && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
          {
            v50 = (__int64)KeGetCurrentThread()->ApcState.Process;
            v51 = *(_QWORD *)(v50 + 1928);
            if ( v51 )
            {
              v74 = *(_QWORD *)(v51 + 8 * ((BugCheckParameter4 >> 3) & 0x1FF));
              v51 = v49 | 0x20;
              v50 = (unsigned __int8)v74;
              LOBYTE(v50) = v74 & 0x20;
              if ( (v74 & 0x20) == 0 )
                v51 = v49;
              v49 = v51;
              if ( (v74 & 0x42) != 0 )
                v49 = v51 | 0x42;
            }
          }
          BugCheckParameter3 = v49;
          if ( !v49 )
          {
            if ( BugCheckParameter4 <= v109 )
              v103 += v93;
            if ( v93 == 1 )
            {
              if ( BugCheckParameter4 < v52 || BugCheckParameter4 > 0xFFFFF6FB7DBEDFFFuLL )
              {
                LOWORD(v43) = v110 + v43;
                v97 = v43;
              }
              v49 = v21;
              if ( BugCheckParameter4 >= v52 && BugCheckParameter4 <= v73 )
              {
                if ( (unsigned int)MiPteHasShadow(v50, v21, v51, v52) )
                {
                  if ( !HIBYTE(word_140C4DE08) && (v21 & 1) != 0 )
                    v49 |= 0x8000000000000000uLL;
                  goto LABEL_164;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v21 & 1) != 0 )
                {
                  v49 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)BugCheckParameter4 = v49;
LABEL_210:
              v83 = v93;
LABEL_211:
              BugCheckParameter4 += 8 * v110;
              v50 = v105 + 8 * v83;
              v105 = v50;
LABEL_87:
              v53 = v98;
              continue;
            }
LABEL_202:
            v80 = (_QWORD *)*((_QWORD *)v118 + v96);
            v81 = (_QWORD **)v118 + v96;
            if ( !v80 )
            {
              MiDemotePfnListChain(v118);
              v80 = *v81;
            }
            *v81 = (_QWORD *)*v80;
            v82 = (__int64)(v80 + 0xB000000000LL) / 48;
            MiInitializeLargeUserBasePfn(48 * v82 - 0x58000000000LL, v105, v95);
            MiInsertLargeUserMapping(a1, v105, v82, v96, ProtectionMask);
            goto LABEL_210;
          }
          break;
        }
        p_BugCheckParameter3 = (unsigned __int64)&BugCheckParameter3;
        if ( (unsigned __int64)&BugCheckParameter3 < v52 )
          goto LABEL_180;
        p_BugCheckParameter3 = (unsigned __int64)&BugCheckParameter3;
        if ( (unsigned __int64)&BugCheckParameter3 > v73 )
          goto LABEL_180;
        if ( !(unsigned int)MiPteHasShadow(&BugCheckParameter3, v49, v49, v52)
          || (v49 & 1) == 0
          || (v49 & 0x20) != 0 && (v49 & 0x42) != 0 )
        {
          goto LABEL_181;
        }
        p_BugCheckParameter3 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v76 = *(_QWORD *)(p_BugCheckParameter3 + 1928);
        if ( !v76 )
        {
LABEL_180:
          v51 = v49;
          goto LABEL_181;
        }
        v77 = *(_QWORD *)(v76 + 8 * (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
        v51 = v49 | 0x20;
        p_BugCheckParameter3 = (unsigned __int8)v77;
        LOBYTE(p_BugCheckParameter3) = v77 & 0x20;
        if ( (v77 & 0x20) == 0 )
          v51 = v49;
        if ( (v77 & 0x42) != 0 )
          v51 |= 0x42uLL;
LABEL_181:
        if ( (v51 & 0x3E0) == 0x200
          && (v51 & 1) == 0
          && ((v51 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v51, v49, v51, v52)) )
        {
          if ( v93 == 1 )
          {
            v49 = v117 | v49 & 0xFFFFFFFFFFFFFC1FuLL;
            BugCheckParameter3 = v49;
            v51 = v49;
            v78 = *(_DWORD *)(a1 + 48);
            if ( (v78 & 0x100000) != 0 && (v78 & 0x1000000) == 0 && (v78 & 0x4000000) != 0 )
            {
              v51 = v49 | 0x4000000;
              BugCheckParameter3 = v49 | 0x4000000;
            }
            if ( BugCheckParameter4 >= v52 && BugCheckParameter4 <= v73 )
            {
              if ( (unsigned int)MiPteHasShadow(p_BugCheckParameter3, v49, v51, v52) )
              {
                v49 = v51;
                if ( !HIBYTE(word_140C4DE08) && (v51 & 1) != 0 )
                  v49 = v51 | 0x8000000000000000uLL;
LABEL_164:
                *(_QWORD *)BugCheckParameter4 = v49;
                MiWritePteShadow(BugCheckParameter4, v49);
                goto LABEL_210;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v49 = 0x8000000000000000uLL;
                v79 = v51 | 0x8000000000000000uLL;
                if ( (v51 & 1) == 0 )
                  v79 = v51;
                *(_QWORD *)BugCheckParameter4 = v79;
                goto LABEL_210;
              }
            }
            *(_QWORD *)BugCheckParameter4 = v51;
            goto LABEL_210;
          }
          goto LABEL_202;
        }
        v83 = v93;
        v103 += v93;
        if ( *a9 )
          goto LABEL_211;
        LOWORD(v121) = 0;
        PageProtection = MiGetPageProtection(a1, BugCheckParameter4, (__int64)&v121);
        if ( !v115 )
        {
          if ( ProtectionMask != PageProtection || v100 != a5 )
            *a9 = 1;
          goto LABEL_210;
        }
        if ( (_WORD)v43 )
        {
          MiIncreaseUsedPtesCount(v44, (unsigned __int16)v43);
          v43 = 0;
          v97 = 0;
        }
        if ( v94 == 1 )
        {
          MiUnlockWorkingSetExclusive(v98, v120);
        }
        else
        {
          MiUnlockPageTableInternal(v98, v45);
          MiUnlockWorkingSetShared(v98, v120);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64(v55, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v55);
    KeAbPostRelease((ULONG_PTR)v55);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v36 )
      MiReturnFullProcessCommitment(v95);
    return 3221225773LL;
  }
LABEL_40:
  v102 = 0;
  v32 = (unsigned __int8)MiLockWorkingSetShared(v98);
  v33 = MiComputePageCommitment(a2 & 0xFFFFFFFFFFFFF000uLL, v22, a1, v32, 0, 0LL);
  MiUnlockWorkingSetShared(v98, v32);
  v104 = v112 - v33;
  if ( v112 == v33 )
  {
    v36 = v112 - v33;
    goto LABEL_70;
  }
  v34 = v28 == 1;
  v35 = v112 - v33;
  v36 = v112 - v33;
  if ( v34 )
  {
    result = MiChargeFullProcessCommitment(v95, v35);
    if ( (int)result < 0 )
      return result;
    goto LABEL_70;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(v95, v35) )
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
    return MiReturnProcessPhysicalPages(v95, v36);
  }
  LargePfnList = MiCreateLargePfnList(a1, v36, a7, (_DWORD)v39, (__int64)v118);
  if ( v39 )
    PsDereferencePartition((__int64)v39);
  if ( LargePfnList >= 0 )
  {
LABEL_70:
    v11 = a1;
    goto LABEL_71;
  }
  if ( !v39 )
    MiReturnFullProcessCommitment(v95);
  MiReturnProcessPhysicalPages(v95, v36);
  return (unsigned int)LargePfnList;
}
