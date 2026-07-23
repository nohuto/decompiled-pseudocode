/*
 * XREFs of MiCommitExistingVad @ 0x1402BD690
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x140640FA0 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateVirtualMemory @ 0x1406E7DB0 (MiAllocateVirtualMemory.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408D3324 (MiLoadDataIntoVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408D36D0 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiMakeProtectionMask @ 0x1402BF320 (MiMakeProtectionMask.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402EEF30 (KiCheckForKernelApcDelivery.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 *     MiLockLowestValidPageTable @ 0x140310310 (MiLockLowestValidPageTable.c)
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MmIsAddressValidEx @ 0x140317240 (MmIsAddressValidEx.c)
 *     MiComputePageCommitment @ 0x1403178B0 (MiComputePageCommitment.c)
 *     MiGetPageProtection @ 0x14033BAF0 (MiGetPageProtection.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiInitializeLargeUserBasePfn @ 0x1403F7C20 (MiInitializeLargeUserBasePfn.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiFlushAllFilesystemPages @ 0x140535808 (MiFlushAllFilesystemPages.c)
 *     MiComputePreferredNode @ 0x140547DB8 (MiComputePreferredNode.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054FA18 (MiLockWorkingSetForLargeMapping.c)
 *     MiCreateLargePfnList @ 0x14055E13C (MiCreateLargePfnList.c)
 *     MiDemotePfnListChain @ 0x14055E458 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x14055E7B8 (MiInsertLargeUserMapping.c)
 *     MiChargeFullProcessCommitment @ 0x1406E8830 (MiChargeFullProcessCommitment.c)
 *     MiCommitPageTablesForVad @ 0x1406E8900 (MiCommitPageTablesForVad.c)
 *     MiReturnFullProcessCommitment @ 0x140705C18 (MiReturnFullProcessCommitment.c)
 *     MiChargeProcessPhysicalPages @ 0x1408D7494 (MiChargeProcessPhysicalPages.c)
 *     MiReturnProcessPhysicalPages @ 0x1408D7820 (MiReturnProcessPhysicalPages.c)
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
  int v32; // esi
  __int64 v33; // rbx
  bool v34; // zf
  __int64 v35; // rdx
  __int64 v36; // r13
  __int64 LockedVadEvent; // rax
  __int64 v38; // r9
  _WORD **v39; // rbx
  __int64 v40; // r9
  int LargePfnList; // esi
  int v42; // eax
  int v43; // r13d
  __int64 v44; // r15
  unsigned __int64 v45; // r14
  int v46; // esi
  unsigned int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rbx
  __int64 v50; // rax
  volatile signed __int64 *v51; // rbx
  int v52; // r13d
  unsigned __int64 v53; // rsi
  unsigned int v54; // ebx
  __int64 v55; // r14
  unsigned __int64 v56; // r15
  int v57; // eax
  unsigned __int64 valid; // rax
  int v59; // eax
  __int64 v60; // rdx
  ULONG_PTR v61; // rsi
  __int64 SharedVm; // rsi
  unsigned __int64 v63; // r9
  __int64 v64; // r15
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // r10
  unsigned __int64 v67; // r8
  struct _LIST_ENTRY *Flink; // rax
  __int64 v69; // rax
  __int64 v70; // r8
  struct _LIST_ENTRY *v71; // r8
  __int64 v72; // rax
  __int64 v73; // r8
  ULONG_PTR v74; // rdx
  unsigned __int64 v75; // r10
  struct _LIST_ENTRY *v76; // r8
  __int64 v77; // rax
  __int64 v78; // r8
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // r8
  struct _LIST_ENTRY *v81; // r8
  __int64 v82; // rax
  ULONG_PTR v83; // rdx
  __int64 v84; // r8
  int v85; // eax
  unsigned __int64 v86; // rax
  _QWORD *v87; // rcx
  _QWORD **v88; // rbx
  __int64 v89; // rbx
  __int64 v90; // rax
  int PageProtection; // eax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  struct _KTHREAD *v96; // rax
  __int64 v97; // rbx
  __int64 v98; // r9
  unsigned int v99; // ecx
  __int64 v100; // rdx
  unsigned __int64 v101; // rdx
  unsigned int ProtectionMask; // [rsp+30h] [rbp-D0h]
  __int64 v103; // [rsp+38h] [rbp-C8h]
  int v104; // [rsp+40h] [rbp-C0h]
  _KPROCESS *v105; // [rsp+48h] [rbp-B8h]
  unsigned int v106; // [rsp+50h] [rbp-B0h]
  int v107; // [rsp+54h] [rbp-ACh]
  __int64 v108; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  int v110; // [rsp+68h] [rbp-98h]
  int v111; // [rsp+6Ch] [rbp-94h]
  int v112; // [rsp+70h] [rbp-90h]
  __int64 v113; // [rsp+78h] [rbp-88h]
  __int64 v114; // [rsp+80h] [rbp-80h]
  __int64 v115; // [rsp+88h] [rbp-78h]
  int v116; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int64 v117; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v118; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v119; // [rsp+A8h] [rbp-58h]
  __int64 v120; // [rsp+B0h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v122; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v123; // [rsp+C8h] [rbp-38h]
  __int64 v124; // [rsp+D0h] [rbp-30h]
  __int64 v125; // [rsp+D8h] [rbp-28h]
  __int64 v126; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v127; // [rsp+E8h] [rbp-18h]
  _OWORD v128[5]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int8 v130; // [rsp+158h] [rbp+58h]
  __int64 v131; // [rsp+160h] [rbp+60h] BYREF

  v11 = a1;
  v125 = 0LL;
  v110 = 0;
  memset(v128, 0, 32);
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
  v105 = Process;
  if ( *(int *)(v11 + 52) >= 0 )
    v20 = 0LL;
  else
    v20 = 8 * ((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) & 0xFFFFFFFFFLL)
        - 0x98000000000LL;
  v119 = v20;
  v127 = 32LL * (v16 & 0x1F);
  v21 = v127;
  if ( qword_140C4DF80 )
  {
    if ( (v127 & qword_140C4DF80) != 0 )
      v21 = v127 | 0x10;
    else
      v21 = qword_140C4DF80 | v127;
  }
  if ( (v15 & 0x100000) != 0 && (v15 & 0x1000000) == 0 && (v15 & 0x4000000) != 0 )
    v21 |= 0x4000000uLL;
  v115 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v22 = (a2 + a3 - 1) | 0xFFF;
  BugCheckParameter4 = v115;
  v24 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v25 = v14 & 0x1A;
  v123 = v24;
  v108 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v122 = ((__int64)(((v22 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1;
  if ( (v15 & 0x500000) == 0x500000 )
  {
    v26 = ((unsigned __int64)v15 >> 18) & 3;
    v27 = 16LL;
    v28 = MiVadPageSizes[v26];
    v29 = MiVadPageIndices[v26];
    v103 = v28;
    if ( v28 != 16 )
      v27 = 1LL;
    v106 = v29;
    v120 = v27;
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
        v119 = v20;
        v123 = v24;
        goto LABEL_40;
      }
    }
    return 3221225485LL;
  }
  if ( v25 )
    return 3221225485LL;
  v103 = 1LL;
  v28 = 1LL;
  v120 = 1LL;
  v106 = 3;
  if ( (int)MiChargeFullProcessCommitment(
              v105,
              ((__int64)(((v22 >> 9) & 0x7FFFFFFFF8LL) - ((a2 >> 9) & 0x7FFFFFFFF8LL)) >> 3) + 1) >= 0 )
  {
    v36 = v122;
    v114 = v122;
    v112 = 1;
LABEL_71:
    v42 = *(_DWORD *)(v11 + 48);
    v111 = 0;
    if ( (v42 & 0x100000) != 0 )
    {
      if ( (v42 & 0x70) != 0 || *(int *)(v11 + 52) < 0 )
        goto LABEL_74;
    }
    else
    {
      if ( (v42 & 0xF80) != 0xC00 )
        goto LABEL_74;
      v50 = *(_QWORD *)(v11 + 72);
      if ( *(_QWORD *)(*(_QWORD *)v50 + 64LL) || (*(_DWORD *)(*(_QWORD *)v50 + 56LL) & 0x1000) == 0 )
        goto LABEL_74;
    }
    v111 = 1;
    --CurrentThread->SpecialApcDisable;
    v51 = (volatile signed __int64 *)&v105[1].Affinity.Bitmap[8];
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v105[1].Affinity.Bitmap[8], 0LL);
    if ( (int)MiCommitPageTablesForVad(v11, a2, v22) >= 0 )
    {
LABEL_74:
      v43 = 0;
      v113 = 0LL;
      v107 = 0;
      v44 = 0LL;
      v124 = 0LL;
      while ( 1 )
      {
        v45 = 0LL;
        v46 = 0;
        v104 = 0;
        if ( !v106 )
        {
          v47 = MiComputePreferredNode(a1);
          v104 = 1;
          v130 = MiLockWorkingSetForLargeMapping(v108, v48, v47);
          if ( v130 != 17 )
            goto LABEL_87;
        }
        v49 = v108;
        v130 = MiLockWorkingSetShared(v108);
        while ( 2 )
        {
          if ( BugCheckParameter4 > v123 )
          {
            if ( (_WORD)v43 )
            {
              v116 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v116);
                while ( *(__int64 *)(v44 + 24) < 0 );
              }
              *(_QWORD *)(v44 + 16) ^= ((unsigned int)*(_QWORD *)(v44 + 16) ^ ((unsigned int)*(_QWORD *)(v44 + 16)
                                                                             + ((unsigned __int16)v43 << 16))) & 0x3FF0000;
              _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( (unsigned __int16)v43 <= 1u )
                MmIsAddressValidEx(*(_QWORD *)(v44 + 8) | 0x8000000000000000uLL);
            }
            if ( v104 == 1 )
            {
              MiUnlockWorkingSetExclusive(v49, v130);
            }
            else
            {
              if ( v45 )
                MiUnlockPageTableInternal(v49, v45);
              MiUnlockWorkingSetShared(v49, v130);
            }
            if ( v111 == 1 )
            {
              if ( (_InterlockedExchangeAdd64(
                      (volatile signed __int64 *)&v105[1].Affinity.Bitmap[8],
                      0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(&v105[1].Affinity.Bitmap[8]);
              KeAbPostRelease((ULONG_PTR)&v105[1].Affinity.Bitmap[8]);
              v96 = CurrentThread;
              v34 = CurrentThread->SpecialApcDisable++ == -1;
              if ( v34 && ($C459BD0D405E8E46662177FB3D0A143F *)v96->ApcState.ApcListHead[0].Flink != &v96->152 )
                KiCheckForKernelApcDelivery(v93, v92, v94, v95);
            }
            if ( v112 == 1 )
            {
              v97 = v113;
              if ( v113 )
                MiReturnFullProcessCommitment(v105);
              v98 = v122 - v97;
            }
            else
            {
              v98 = v114;
            }
            v99 = *(_DWORD *)(a1 + 52);
            v100 = v99;
            LODWORD(v100) = v99 & 0x7FFFFFFF;
            v101 = v98 + (((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31) | v100);
            *(_BYTE *)(a1 + 34) = v101 >> 31;
            *(_DWORD *)(a1 + 52) = v99 ^ (v101 ^ v99) & 0x7FFFFFFF;
            return 0LL;
          }
          if ( v46 && (BugCheckParameter4 & 0xFFF) != 0 )
          {
            v63 = 0xFFFFF6FB7DBED000uLL;
            goto LABEL_140;
          }
          if ( (_WORD)v43 )
          {
            MiIncreaseUsedPtesCount(v44, (unsigned __int16)v43);
            v52 = 0;
            v107 = 0;
          }
          else
          {
            v52 = 0;
          }
          if ( v45 )
            MiUnlockPageTableInternal(v49, v45);
          v53 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v126 = 0LL;
          v118 = v53;
          v54 = (*(_DWORD *)(a1 + 48) >> 12) & 0x3F;
          BugCheckParameter3 = (ULONG_PTR)KeGetCurrentThread()->ApcState.Process;
          v55 = BugCheckParameter3 + 1664;
          v56 = (__int64)(BugCheckParameter4 << 25) >> 16;
          if ( v56 < 0xFFFFF68000000000uLL || v56 > 0xFFFFF6FFFFFFFFFFuLL )
            v52 = 1;
          while ( 1 )
          {
            if ( v104 )
            {
              if ( (unsigned __int8)MmIsAddressValidEx(BugCheckParameter4) )
                goto LABEL_113;
              MiUnlockWorkingSetExclusive(v55, v130);
              goto LABEL_108;
            }
            if ( v52 )
            {
              v57 = MiFastLockLeafPageTable(v55, (__int64)(BugCheckParameter4 << 25) >> 16, 0);
              if ( v57 )
                break;
            }
            valid = MiLockLowestValidPageTable(v55, BugCheckParameter4, &v126);
            if ( valid == v53 )
              goto LABEL_113;
            MiUnlockPageTableInternal(v55, valid);
            MiUnlockWorkingSetShared(v55, v130);
LABEL_108:
            v59 = MmAccessFault(((unsigned __int64)v54 << 57) | 0x100000000000002LL, BugCheckParameter4, 0, 0LL);
            v61 = v59;
            if ( v59 < 0 )
            {
              MiFlushAllFilesystemPages(1LL);
              KeBugCheckEx(0x7Au, 1uLL, v61, BugCheckParameter3, BugCheckParameter4);
            }
            if ( v104 )
            {
              SharedVm = MiGetSharedVm(v55, v60);
              ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
              *(_DWORD *)(SharedVm + 4) = 0;
            }
            else
            {
              MiLockWorkingSetShared(v55);
            }
            v53 = v118;
          }
          if ( v57 != 1 )
          {
            while ( 1 )
              v53 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          }
LABEL_113:
          v63 = 0xFFFFF6FB7DBED000uLL;
          if ( BugCheckParameter4 >= 0xFFFFF6FB7DBED000uLL && BugCheckParameter4 <= 0xFFFFF6FB7DBEDFFFuLL )
          {
            v44 = v124;
            v46 = 1;
            v45 = v118;
            v43 = v107;
          }
          else
          {
            v64 = (v56 >> 18) & 0x3FFFFFF8;
            v65 = *(_QWORD *)(v64 - 0x904C0000000LL);
            v66 = 0xFFFFF6FB7DBED7F8uLL;
            if ( (unsigned __int64)(v64 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)(v64 - 0x904C0000000LL) <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow()
              && (v65 & 1) != 0
              && ((v65 & 0x20) == 0 || (v65 & 0x42) == 0) )
            {
              Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v69 = *((_QWORD *)&Flink->Flink + ((v67 >> 3) & 0x1FF));
                v70 = v65 | 0x20;
                if ( (v69 & 0x20) == 0 )
                  v70 = v65;
                v65 = v70;
                if ( (v69 & 0x42) != 0 )
                  v65 = v70 | 0x42;
              }
            }
            v117 = v65;
            if ( (unsigned __int64)&v117 >= v63
              && (unsigned __int64)&v117 <= v66
              && (unsigned int)MiPteHasShadow()
              && (v65 & 1) != 0
              && ((v65 & 0x20) == 0 || (v65 & 0x42) == 0) )
            {
              v71 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v71 )
              {
                v72 = *((_QWORD *)&v71->Flink + (((unsigned __int64)&v117 >> 3) & 0x1FF));
                v73 = v65 | 0x20;
                if ( (v72 & 0x20) == 0 )
                  v73 = v65;
                v65 = v73;
                if ( (v72 & 0x42) != 0 )
                  v65 = v73 | 0x42;
              }
            }
            v45 = v118;
            v44 = 48 * ((v65 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
            v43 = v107;
            v46 = 1;
            v124 = v44;
          }
LABEL_140:
          v74 = *(_QWORD *)BugCheckParameter4;
          v75 = 0xFFFFF6FB7DBED7F8uLL;
          if ( BugCheckParameter4 >= v63
            && BugCheckParameter4 <= 0xFFFFF6FB7DBED7F8uLL
            && (unsigned int)MiPteHasShadow()
            && (v74 & 1) != 0
            && ((v74 & 0x20) == 0 || (v74 & 0x42) == 0) )
          {
            v76 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v76 )
            {
              v77 = *((_QWORD *)&v76->Flink + ((BugCheckParameter4 >> 3) & 0x1FF));
              v78 = v74 | 0x20;
              if ( (v77 & 0x20) == 0 )
                v78 = v74;
              v74 = v78;
              if ( (v77 & 0x42) != 0 )
                v74 = v78 | 0x42;
            }
          }
          BugCheckParameter3 = v74;
          if ( !v74 )
          {
            if ( BugCheckParameter4 <= v119 )
              v113 += v103;
            if ( v103 == 1 )
            {
              if ( BugCheckParameter4 < v63 || BugCheckParameter4 > 0xFFFFF6FB7DBEDFFFuLL )
              {
                LOWORD(v43) = v120 + v43;
                v107 = v43;
              }
              v79 = v21;
              if ( BugCheckParameter4 >= v63 && BugCheckParameter4 <= v75 )
              {
                if ( (unsigned int)MiPteHasShadow() )
                {
                  if ( !HIBYTE(word_140C4E048) && (v21 & 1) != 0 )
                    v79 |= 0x8000000000000000uLL;
                  goto LABEL_164;
                }
                if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
                  && (v21 & 1) != 0 )
                {
                  v79 |= 0x8000000000000000uLL;
                }
              }
              *(_QWORD *)BugCheckParameter4 = v79;
LABEL_210:
              v90 = v103;
LABEL_211:
              BugCheckParameter4 += 8 * v120;
              v115 += 8 * v90;
LABEL_87:
              v49 = v108;
              continue;
            }
LABEL_202:
            v87 = (_QWORD *)*((_QWORD *)v128 + v106);
            v88 = (_QWORD **)v128 + v106;
            if ( !v87 )
            {
              MiDemotePfnListChain(v128);
              v87 = *v88;
            }
            *v88 = (_QWORD *)*v87;
            v89 = (__int64)(v87 + 0xB000000000LL) / 48;
            MiInitializeLargeUserBasePfn(48 * v89 - 0x58000000000LL, v115, v105);
            MiInsertLargeUserMapping(a1, v115, v89, v106, ProtectionMask);
            goto LABEL_210;
          }
          break;
        }
        if ( (unsigned __int64)&BugCheckParameter3 < v63 || (unsigned __int64)&BugCheckParameter3 > v75 )
          goto LABEL_180;
        if ( !(unsigned int)MiPteHasShadow() || (v74 & 1) == 0 || (v74 & 0x20) != 0 && (v74 & 0x42) != 0 )
          goto LABEL_181;
        v81 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( !v81 )
        {
LABEL_180:
          v80 = v74;
          goto LABEL_181;
        }
        v82 = *((_QWORD *)&v81->Flink + (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
        v80 = v74 | 0x20;
        if ( (v82 & 0x20) == 0 )
          v80 = v74;
        if ( (v82 & 0x42) != 0 )
          v80 |= 0x42uLL;
LABEL_181:
        if ( (v80 & 0x3E0) == 0x200 && (v80 & 1) == 0 && ((v80 & 0x400) == 0 || MiIsPrototypePteVadLookup(v80)) )
        {
          if ( v103 == 1 )
          {
            v83 = v127 | v74 & 0xFFFFFFFFFFFFFC1FuLL;
            BugCheckParameter3 = v83;
            v84 = v83;
            v85 = *(_DWORD *)(a1 + 48);
            if ( (v85 & 0x100000) != 0 && (v85 & 0x1000000) == 0 && (v85 & 0x4000000) != 0 )
            {
              v84 = v83 | 0x4000000;
              BugCheckParameter3 = v83 | 0x4000000;
            }
            if ( BugCheckParameter4 >= v63 && BugCheckParameter4 <= v75 )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v79 = v84;
                if ( !HIBYTE(word_140C4E048) && (v84 & 1) != 0 )
                  v79 = v84 | 0x8000000000000000uLL;
LABEL_164:
                *(_QWORD *)BugCheckParameter4 = v79;
                MiWritePteShadow(BugCheckParameter4, v79);
                goto LABEL_210;
              }
              if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v86 = v84 | 0x8000000000000000uLL;
                if ( (v84 & 1) == 0 )
                  v86 = v84;
                *(_QWORD *)BugCheckParameter4 = v86;
                goto LABEL_210;
              }
            }
            *(_QWORD *)BugCheckParameter4 = v84;
            goto LABEL_210;
          }
          goto LABEL_202;
        }
        v90 = v103;
        v113 += v103;
        if ( *a9 )
          goto LABEL_211;
        LOWORD(v131) = 0;
        PageProtection = MiGetPageProtection(a1, BugCheckParameter4, (__int64)&v131);
        if ( !v125 )
        {
          if ( ProtectionMask != PageProtection || v110 != a5 )
            *a9 = 1;
          goto LABEL_210;
        }
        if ( (_WORD)v43 )
        {
          MiIncreaseUsedPtesCount(v44, (unsigned __int16)v43);
          v43 = 0;
          v107 = 0;
        }
        if ( v104 == 1 )
        {
          MiUnlockWorkingSetExclusive(v108, v130);
        }
        else
        {
          MiUnlockPageTableInternal(v108, v45);
          MiUnlockWorkingSetShared(v108, v130);
        }
      }
    }
    if ( (_InterlockedExchangeAdd64(v51, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v51);
    KeAbPostRelease((ULONG_PTR)v51);
    KiLeaveGuardedRegionUnsafe(CurrentThread);
    if ( v36 )
      MiReturnFullProcessCommitment(v105);
    return 3221225773LL;
  }
LABEL_40:
  v112 = 0;
  v32 = (unsigned __int8)MiLockWorkingSetShared(v108);
  v33 = MiComputePageCommitment((unsigned int)a2 & 0xFFFFF000, v22, a1, v32, 0, 0LL);
  MiUnlockWorkingSetShared(v108, v32);
  v114 = v122 - v33;
  if ( v122 == v33 )
  {
    v36 = v122 - v33;
    goto LABEL_70;
  }
  v34 = v28 == 1;
  v35 = v122 - v33;
  v36 = v122 - v33;
  if ( v34 )
  {
    result = MiChargeFullProcessCommitment(v105, v35);
    if ( (int)result < 0 )
      return result;
    goto LABEL_70;
  }
  if ( !(unsigned int)MiChargeProcessPhysicalPages(v105, v35) )
    return 3221225773LL;
  LockedVadEvent = MiLocateLockedVadEvent(a1);
  if ( LockedVadEvent )
    v39 = *(_WORD ***)(LockedVadEvent + 24);
  else
    v39 = 0LL;
  if ( a8 != (_WORD **)1 && a8 != v39 )
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
    *a10 = **v39;
  }
  else if ( (int)MiChargeFullProcessCommitment(v38, v36) < 0 )
  {
    return MiReturnProcessPhysicalPages(v105, v36);
  }
  LargePfnList = MiCreateLargePfnList(a1, v36, a7, (_DWORD)v39, (__int64)v128);
  if ( v39 )
    PsDereferencePartition((__int64)v39);
  if ( LargePfnList >= 0 )
  {
LABEL_70:
    v11 = a1;
    goto LABEL_71;
  }
  if ( !v39 )
    MiReturnFullProcessCommitment(v105);
  MiReturnProcessPhysicalPages(v105, v36);
  return (unsigned int)LargePfnList;
}
