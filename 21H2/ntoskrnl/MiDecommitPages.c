/*
 * XREFs of MiDecommitPages @ 0x14033F570
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x140250884 (MmStoreDecommitVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406156AC (MmStoreAllocateVirtualMemory.c)
 *     MiDecommitRegion @ 0x1407059D0 (MiDecommitRegion.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020A3E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140212038 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiLockTransitionLeafPage @ 0x140224B74 (MiLockTransitionLeafPage.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14022AE80 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiDeletePteWsleCluster @ 0x14023F0C8 (MiDeletePteWsleCluster.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x140258078 (MiTransferSoftwarePte.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x1402C0290 (MiVadPureReserve.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     MiDeletePteList @ 0x1402D6070 (MiDeletePteList.c)
 *     MiDeleteTransitionPte @ 0x1402DD080 (MiDeleteTransitionPte.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     MiSetNonResidentPteHeat @ 0x1402E3000 (MiSetNonResidentPteHeat.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiIncreaseUsedPtesCount @ 0x140314524 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x1403177B0 (MiGetUsedPtesHandle.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAppendWsleCluster @ 0x140340820 (MiAppendWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsle @ 0x140341B00 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x140345A70 (MiTerminateWsleCluster.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDecrementCombinedPte @ 0x140367074 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiReducePteUseCount @ 0x1403F45E0 (MiReducePteUseCount.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiDecommitLargePte @ 0x14053CE20 (MiDecommitLargePte.c)
 *     MiDecrementCloneBlockReference @ 0x14055A0C8 (MiDecrementCloneBlockReference.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A834C (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiDecommitPages(unsigned __int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  _QWORD *v6; // r15
  unsigned int v8; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // rcx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r10
  int v17; // edx
  __int64 v18; // r8
  __int64 v19; // rax
  unsigned __int64 v20; // rcx
  int v21; // eax
  unsigned __int64 v22; // rdx
  int v23; // ecx
  __int64 v24; // rdx
  __int64 v25; // r9
  int v26; // eax
  unsigned __int64 v27; // rdi
  ULONG_PTR v28; // r13
  int v29; // r10d
  __int64 v30; // rbx
  unsigned __int8 v31; // al
  __int64 CurrentIrql; // rcx
  _DWORD *SchedulerAssist; // r9
  LONG *v34; // rbx
  KIRQL v35; // al
  int v36; // edx
  unsigned __int64 v37; // rdi
  __int64 v38; // r9
  unsigned __int64 v39; // r8
  __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // rdi
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v44; // r9
  char *AnyMultiplexedVm; // rbx
  int v46; // eax
  unsigned int v47; // ecx
  unsigned __int64 v48; // rbx
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rcx
  unsigned __int64 v53; // r10
  unsigned __int64 v54; // rbx
  unsigned __int64 v55; // r11
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 UsedPtesHandle; // rax
  __int64 v60; // rbx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r15
  unsigned __int64 v64; // rbx
  __int64 v65; // rax
  unsigned int v66; // ebx
  __int64 v67; // r15
  LONG *v68; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  volatile int DpcRequestSummary; // r8d
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // r15d
  int v73; // edx
  int v74; // eax
  unsigned __int64 v75; // rcx
  __int64 v76; // rdx
  unsigned __int64 v77; // r8
  unsigned __int64 v78; // r8
  struct _LIST_ENTRY *v79; // rax
  __int64 v80; // rax
  char v81; // r8^7
  unsigned __int64 v82; // rbx
  __int64 v83; // r9
  int v84; // eax
  unsigned __int64 v85; // r9
  _QWORD *CloneAddress; // rax
  ULONG_PTR v87; // rdx
  unsigned __int64 v88; // rbx
  bool v89; // zf
  unsigned __int64 v90; // rdi
  __int64 v91; // rax
  __int64 v92; // r8
  ULONG_PTR v93; // r10
  unsigned __int64 v94; // rbx
  BOOL v95; // r15d
  unsigned __int64 v96; // rcx
  __int64 v97; // rcx
  unsigned __int64 v98; // rdi
  __int64 v99; // rdx
  unsigned __int64 v100; // rbx
  __int16 v101; // ax
  int v102; // r12d
  __int64 v103; // rdi
  __int64 v104; // r9
  int v105; // r10d
  __int64 v106; // r10
  __int64 v107; // r11
  __int64 updated; // rax
  __int16 v109; // r8
  __int64 v110; // rdx
  unsigned __int64 v111; // rax
  _KTHREAD *NextThread; // rax
  __int64 v113; // rdx
  __int64 v114; // r8
  _DWORD *v115; // r9
  __int64 v116; // rbx
  int v118; // [rsp+30h] [rbp-D0h]
  __int64 v119; // [rsp+38h] [rbp-C8h]
  __int64 v121; // [rsp+48h] [rbp-B8h]
  int v122; // [rsp+50h] [rbp-B0h]
  unsigned int v123; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v124; // [rsp+68h] [rbp-98h]
  unsigned __int64 v125; // [rsp+68h] [rbp-98h]
  unsigned __int64 v126; // [rsp+70h] [rbp-90h]
  int v127; // [rsp+78h] [rbp-88h]
  __int64 v128; // [rsp+80h] [rbp-80h] BYREF
  __int64 v129; // [rsp+88h] [rbp-78h]
  __int64 v130; // [rsp+90h] [rbp-70h]
  ULONG_PTR v131; // [rsp+98h] [rbp-68h]
  int v132; // [rsp+A0h] [rbp-60h]
  int v133; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v134; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v135; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v136; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v137; // [rsp+C0h] [rbp-40h]
  __int64 v138; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v139; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v140; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v141; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v142; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v143; // [rsp+100h] [rbp+0h]
  _QWORD v144[22]; // [rsp+120h] [rbp+20h] BYREF
  int v145; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v146; // [rsp+1D4h] [rbp+D4h]
  __int16 v147; // [rsp+1D6h] [rbp+D6h]
  __int64 v148; // [rsp+1D8h] [rbp+D8h]
  __int64 v149; // [rsp+1E0h] [rbp+E0h]
  __int64 v150; // [rsp+1E8h] [rbp+E8h]
  __int128 v151; // [rsp+1F0h] [rbp+F0h]
  __int128 v152; // [rsp+200h] [rbp+100h]
  __int128 v153; // [rsp+210h] [rbp+110h]
  __int128 v154; // [rsp+220h] [rbp+120h]
  __int128 v155; // [rsp+230h] [rbp+130h]
  __int128 v156; // [rsp+240h] [rbp+140h]
  __int128 v157; // [rsp+250h] [rbp+150h]
  __int128 v158; // [rsp+260h] [rbp+160h]
  __int128 v159; // [rsp+270h] [rbp+170h]
  __int64 v160; // [rsp+280h] [rbp+180h]
  _QWORD v161[24]; // [rsp+290h] [rbp+190h] BYREF
  int v162; // [rsp+350h] [rbp+250h] BYREF
  __int16 v163; // [rsp+354h] [rbp+254h]
  __int16 v164; // [rsp+356h] [rbp+256h]
  __int64 v165; // [rsp+358h] [rbp+258h]
  __int64 v166; // [rsp+360h] [rbp+260h]
  __int64 v167; // [rsp+368h] [rbp+268h]
  _BYTE v168[2040]; // [rsp+370h] [rbp+270h] BYREF

  v6 = a6;
  v131 = a2;
  v8 = 0;
  v135 = 0LL;
  v164 = 0;
  v134 = a4;
  memset(v168, 0, sizeof(v168));
  v165 = 256LL;
  v163 = 0;
  v162 = 1;
  v143 = 0LL;
  DWORD2(v143) = 2;
  v142 = 0LL;
  v166 = 0LL;
  v167 = 0LL;
  v119 = 1LL;
  v127 = 0;
  v10 = MiSwizzleInvalidPte(512LL);
  v13 = *(unsigned __int8 *)(a4 + 33);
  v14 = v10;
  v139 = v10;
  v15 = v10;
  v16 = 0xFFFFF68000000000uLL;
  v17 = *(_DWORD *)(a4 + 52);
  v18 = 8 * ((*(unsigned int *)(a4 + 28) | (unsigned __int64)(v13 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v19 = (unsigned int)v17;
  LODWORD(v19) = v17 & 0x7FFFFFFF;
  v20 = v19 | ((unsigned __int64)*(unsigned __int8 *)(a4 + 34) << 31);
  v137 = v18;
  if ( v20 == 0x7FFFFFFFELL )
  {
    v14 = MiSwizzleInvalidPte(32LL * ((*(_DWORD *)(a4 + 48) >> 7) & 0x1F));
    v139 = v14;
    v15 = v14;
  }
  else if ( v17 >= 0 )
  {
    v21 = *(_DWORD *)(a4 + 48);
    if ( (v21 & 0x100000) == 0 || (v21 & 0x1000000) != 0 || (v21 & 0x2000000) == 0 )
      v15 = 0LL;
    v137 = 0LL;
    v127 = MiVadPureReserve(a4);
  }
  v22 = *(unsigned int *)(a4 + 48);
  v23 = *(_DWORD *)(a4 + 48) & 0x500000;
  v138 = v12;
  v123 = 3;
  if ( v23 == 5242880 )
  {
    v24 = (v22 >> 18) & 3;
    v25 = 16LL;
    v119 = MiVadPageSizes[v24];
    if ( v119 != 16 )
      v25 = v12;
    v123 = MiVadPageIndices[v24];
    v138 = v25;
    v11 = 2LL;
  }
  v26 = v11;
  v126 = 0LL;
  if ( a5 )
    v26 = 0;
  v27 = 0LL;
  v132 = v26;
  v28 = v16 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v122 = v12;
  v124 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v29 = v12;
  v30 = a3 + 1664;
  v118 = 0;
  v121 = a3 + 1664;
  v129 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  v31 = *(_BYTE *)(a3 + 1848) & 7;
  if ( v31 < 6u )
  {
    if ( v31 == 2 )
      v34 = &dword_140C4F7C0;
    else
      v34 = (LONG *)(a3 + 1856);
    v35 = ExAcquireSpinLockShared(v34);
    if ( v34[1] )
      _InterlockedExchange(v34 + 1, 0);
    v29 = v122;
    LODWORD(v12) = 1;
    v30 = a3 + 1664;
    LOBYTE(v130) = v35;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v130 = CurrentIrql;
    __writecr8(v11);
    if ( KiIrqlFlags
      && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v12) != 0
      && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  if ( v28 > v131 )
    goto LABEL_258;
  while ( 1 )
  {
    v36 = 0;
    v37 = v28;
    if ( v29 == 1 )
    {
      v36 = v12;
LABEL_29:
      v38 = 0x7FFFFFFFF8LL;
      v39 = 0xFFFFF68000000000uLL;
      goto LABEL_30;
    }
    if ( v123 > 1 )
      goto LABEL_29;
    v39 = 0xFFFFF68000000000uLL;
    v38 = 0x7FFFFFFFF8LL;
    v41 = 2 - v123;
    do
    {
      v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v41;
    }
    while ( v41 );
LABEL_30:
    if ( (v37 & 0xFFF) == 0 || v36 )
      break;
    v53 = 0LL;
LABEL_69:
    v54 = *(_QWORD *)v37;
    v55 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v37 >= 0xFFFFF6FB7DBED000uLL
      && v37 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v54 & 1) != 0
      && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v57 = *((_QWORD *)&Flink->Flink + ((v37 >> 3) & 0x1FF));
        v58 = v54 | 0x20;
        if ( (v57 & 0x20) == 0 )
          v58 = v54;
        v54 = v58;
        if ( (v57 & 0x42) != 0 )
          v54 = v58 | 0x42;
      }
    }
    v140 = v54;
    if ( !v54 )
    {
      if ( v28 > v137 )
        v6[3] += v119;
      if ( v15 )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)((v37 << 25) - (v39 << 25)) >> 16);
        v60 = v138;
        MiIncreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v138, v61, v62);
        v63 = v60;
        while ( 1 )
        {
          v64 = v15;
          if ( (unsigned int)MiPteInShadowRange(v37) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E048) && (v15 & 1) != 0 )
                v64 = v15 | 0x8000000000000000uLL;
              *(_QWORD *)v37 = v64;
              MiWritePteShadow(v37, v64);
              goto LABEL_95;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v15 & 1) != 0 )
            {
              v64 = v15 | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v37 = v64;
LABEL_95:
          v37 += 8LL;
          if ( !--v63 )
          {
            v14 = v139;
            break;
          }
        }
      }
LABEL_97:
      v65 = v119;
LABEL_98:
      v66 = 1;
      goto LABEL_99;
    }
    if ( (v54 & 1) != 0 )
    {
      if ( v119 != 1 )
        goto LABEL_109;
      v133 = v53;
      v75 = v38 & (v124 >> 9);
      v76 = *(_QWORD *)(v75 + v39);
      v77 = v75 + v39;
      if ( v77 >= 0xFFFFF6FB7DBED000uLL
        && v77 <= v55
        && (unsigned int)MiPteHasShadow()
        && (v76 & 1) != 0
        && ((v76 & 0x20) == 0 || (v76 & 0x42) == 0) )
      {
        v79 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v79 )
        {
          v80 = *((_QWORD *)&v79->Flink + ((v78 >> 3) & 0x1FF));
          v81 = HIBYTE(v76);
          if ( (v80 & 0x20) == 0 )
            v81 = HIBYTE(v76);
          HIBYTE(v76) = v81;
          if ( (v80 & 0x42) != 0 )
            HIBYTE(v76) = v81;
        }
      }
      if ( (HIBYTE(v76) & 0xF) == 8 || !(unsigned int)MiAppendWsleCluster(&v142, v121, v28) )
      {
        MiTerminateWsle(v121, v124, 0LL, &v133);
        MiInsertTbFlushEntry(&v162, v124, 1LL, 0LL);
        v82 = v54 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v140 = v82;
        if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
        {
          *(_QWORD *)v28 = v82;
          MiWritePteShadow(v28, v82);
        }
        else
        {
          *(_QWORD *)v28 = v82;
        }
      }
      if ( HIDWORD(v165) != (_DWORD)v165 - 1 )
        goto LABEL_97;
      if ( (unsigned int)MiDeletePteWsleCluster((__int64)&v142, a3, v15, (int)v6) )
        v8 = 1;
      v118 = v8;
      v74 = MiDeletePteList((__int64)&v162, a3, v15, v6, 1);
      v66 = 1;
LABEL_180:
      v89 = v74 == 0;
      v65 = v119;
      if ( !v89 )
      {
        v8 = 1;
        v118 = 1;
      }
      goto LABEL_99;
    }
    if ( (v54 & 0x400) != 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v54) )
      {
        v84 = MiDecrementCombinedPte(v121, v83);
LABEL_138:
        if ( v84 == 3 )
        {
          ++v6[1];
        }
        else if ( v84 == 5 )
        {
          ++v6[2];
        }
      }
      else if ( !MiIsPrototypePteVadLookup(v54) )
      {
        CloneAddress = MiLocateCloneAddress(a3, v85);
        if ( CloneAddress )
        {
          v84 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v87);
          goto LABEL_138;
        }
      }
      v88 = v15;
      if ( (unsigned int)MiPteInShadowRange(v28) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (v15 & 1) != 0 )
            v88 = v15 | 0x8000000000000000uLL;
          *(_QWORD *)v28 = v88;
          MiWritePteShadow(v28, v88);
          v89 = v15 == 0;
          goto LABEL_178;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v15 & 1) != 0 )
        {
          v88 = v15 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v28 = v88;
      v89 = v15 == 0;
LABEL_178:
      v66 = 1;
      if ( !v89 )
        goto LABEL_225;
      v74 = MiReducePteUseCount(v28, 1LL);
      goto LABEL_180;
    }
    if ( (v54 & 0x800) != 0 )
    {
      if ( v119 != 1 )
      {
LABEL_109:
        v74 = MiDecommitLargePte(v134, v37, v15, (_DWORD)v6, (__int64)&v162);
        v66 = 1;
        goto LABEL_180;
      }
      v135 = v53;
      v90 = v53;
      v91 = MiLockTransitionLeafPage(v28, 0LL);
      v93 = v91;
      if ( !v91 )
        goto LABEL_254;
      v94 = 0LL;
      v95 = 1;
      if ( !*(_WORD *)(v91 + 32) )
      {
        v90 = *(_QWORD *)(v91 + 16);
        v96 = *(_QWORD *)(v91 + 40);
        v94 = v90;
        v135 = v90;
        v97 = *(_QWORD *)(qword_140C4E688 + 8 * ((v96 >> 39) & 0x3FF));
        v129 = v97;
        if ( (v90 & 2) != 0 )
          v95 = MI_IS_PTE_IN_WS_SWAP_SET(v97, &v135) != 0;
      }
      LOBYTE(v92) = 17;
      if ( (unsigned int)MiDeleteTransitionPte(v28, v93, v92, 0) == 3 )
        ++a6[1];
      if ( v94 )
        MiReleasePageFileSpace(v129, v90, v95);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      v98 = v15;
      if ( !v95 )
      {
        v99 = *(_QWORD *)(v129 + 8LL * ((unsigned __int16)v94 >> 12) + 6944);
        if ( qword_140C4DF80 && (v94 & 0x10) == 0 )
          v94 &= ~qword_140C4DF80;
        v98 = MiTransferSoftwarePte(v14, v99, HIDWORD(v94));
      }
      v100 = v98;
      if ( (unsigned int)MiPteInShadowRange(v28) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (v98 & 1) != 0 )
            v100 = v98 | 0x8000000000000000uLL;
          *(_QWORD *)v28 = v100;
          MiWritePteShadow(v28, v100);
          goto LABEL_177;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v98 & 1) != 0 )
        {
          v100 = v98 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v28 = v100;
LABEL_177:
      v89 = v98 == 0;
      goto LABEL_178;
    }
    if ( ((v54 >> 5) & 0x1F) == 0x10 )
    {
      v65 = v119;
      v6[3] += v119;
      goto LABEL_98;
    }
    v101 = v54;
    if ( qword_140C4DF80 && (v54 & 0x10) == 0 )
      v101 = v54 & ~(_WORD)qword_140C4DF80;
    if ( (v101 & 0x400) != 0 || (v101 & 0x800) != 0 || (v101 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
    v102 = 1;
    v103 = v15;
    v104 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(a3 + 1838));
    v129 = v104;
    if ( ((v54 >> 1) & 1) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v104, &v140) )
    {
      v102 = v105;
      v128 = v14;
      MiSetNonResidentPteHeat((unsigned __int64 *)&v128, 0);
      v103 = v128;
      if ( (v14 & 0x400) == 0 )
      {
        v103 = v128 & 0xFFFFFFFFFFFFFFF9uLL;
        v128 &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      if ( v107 )
      {
        if ( v103 )
          updated = MiUpdatePageFileHighInPte(v103, v106);
        else
          updated = MiSwizzleInvalidPte(v106 << 32);
        v103 = updated ^ (unsigned __int16)(updated ^ (v109 << 12)) & 0xF000 | 2;
        v128 = v103;
      }
    }
    v110 = v103;
    if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (v103 & 1) != 0 )
          v110 |= 0x8000000000000000uLL;
        *(_QWORD *)v28 = v110;
        MiWritePteShadow(v28, v110);
        goto LABEL_211;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v103 & 1) != 0 )
      {
        v110 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v28 = v110;
LABEL_211:
    v136 = v54;
    if ( (v54 & 4) != 0 )
    {
      v111 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v136);
      if ( !v102 )
        v111 &= ~2uLL;
    }
    else if ( v102 && ((v54 >> 1) & 1) != 0 )
    {
      v111 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v136);
    }
    else
    {
      v111 = 0LL;
    }
    v136 = v111;
    if ( v111 )
      MiReleasePageFileInfo(v129, v111, 0);
    v66 = 1;
    if ( v103 )
    {
      v8 = v118;
LABEL_225:
      v65 = v119;
      goto LABEL_99;
    }
    v8 = v118;
    v89 = (unsigned int)MiReducePteUseCount(v28, 1LL) == 0;
    v65 = v119;
    if ( !v89 )
      v8 = 1;
    v118 = v8;
LABEL_99:
    v28 += 8 * v65;
    if ( (v28 & 0x78) == 0 )
    {
      v67 = a3 + 1664;
      v68 = &dword_140C4F7C0;
      if ( (*(_BYTE *)(a3 + 1848) & 7) != 2 )
        v68 = (LONG *)(a3 + 1856);
      if ( (*v68 & 0x40000000) != 0 )
        goto LABEL_244;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
    DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
    DpcTimeCount = CurrentPrcb->DpcTimeCount;
    if ( (DpcRequestSummary & 1) == 0 )
    {
      v73 = 0;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v66 = 2;
      }
      else if ( CurrentPrcb->QuantumEnd )
      {
        v66 = 3;
      }
      else
      {
        NextThread = CurrentPrcb->NextThread;
        if ( !NextThread || NextThread == CurrentPrcb->CurrentThread )
          goto LABEL_233;
        v66 = 4;
      }
LABEL_240:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v66, DpcWatchdogCount, DpcTimeCount);
      if ( !v66 )
        goto LABEL_253;
      v67 = a3 + 1664;
LABEL_244:
      if ( (unsigned int)MiDeletePteWsleCluster((__int64)&v142, a3, v15, (int)a6) )
        v8 = 1;
      v118 = v8;
      if ( HIDWORD(v165) )
      {
        if ( (unsigned int)MiDeletePteList((__int64)&v162, a3, v15, a6, 1) )
          v8 = 1;
        v118 = v8;
      }
      if ( v126 )
      {
        MiUnlockPageTableInternal(v67, v126);
        v126 = 0LL;
      }
      MiUnlockWorkingSetShared(v67, v130);
      v122 = 1;
      MiLockWorkingSetShared(v67, v113, v114, v115);
      goto LABEL_253;
    }
    v73 = 1;
    if ( DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
        goto LABEL_240;
LABEL_235:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v66 = 5;
        goto LABEL_240;
      }
      if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
      {
        v66 = 6;
        goto LABEL_240;
      }
LABEL_239:
      _disable();
      v66 = 0;
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler((__int64)CurrentPrcb);
      _enable();
      goto LABEL_240;
    }
LABEL_233:
    if ( DpcWatchdogCount > 7 )
    {
      if ( !v73 )
        goto LABEL_239;
      goto LABEL_235;
    }
LABEL_253:
    v124 += v119 << 12;
LABEL_254:
    v6 = a6;
    if ( v28 > v131 )
      goto LABEL_257;
    v29 = v122;
    LODWORD(v12) = 1;
    v30 = a3 + 1664;
  }
  memset(v161, 0, 0xB8uLL);
  if ( *((_QWORD *)&v142 + 1) )
  {
    LODWORD(v161[0]) = 1;
    v161[2] = 0LL;
    v161[3] = 0LL;
    WORD2(v161[0]) = 0;
    LODWORD(v161[1]) = 20;
    MiInsertTbFlushEntry(v161, (__int64)(*((_QWORD *)&v142 + 1) << 25) >> 16, v143, 0LL);
    MiTerminateWsleCluster(&v142);
    v40 = a3;
    if ( (unsigned int)MiDeletePteList((__int64)v161, a3, v15, v6, 0) )
      v8 = 1;
    v118 = v8;
  }
  else
  {
    v40 = a3;
  }
  if ( HIDWORD(v165) )
  {
    if ( (unsigned int)MiDeletePteList((__int64)&v162, v40, v15, v6, 1) )
      v8 = 1;
    v118 = v8;
  }
  if ( v126 )
  {
    MiUnlockPageTableInternal(v30, v126);
    v126 = 0LL;
  }
  if ( !v127 )
  {
    v37 = v28;
    if ( v123 <= 1 )
    {
      v52 = 2 - v123;
      do
      {
        v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v52;
      }
      while ( v52 );
      v6 = a6;
    }
    MiMakeSystemAddressValid(v37, 0LL, (*(_DWORD *)(v134 + 48) >> 12) & 0x3F, v130, v132);
    goto LABEL_67;
  }
  v141 = 0LL;
  memset((char *)v144 + 2, 0, 0xAEuLL);
  v125 = (__int64)(v28 << 25) >> 16;
  v42 = (__int64)(v131 << 25) >> 16;
  LOWORD(v144[0]) = 2145;
  LeafVa = MiGetLeafVa(v125);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C4FB78 && LeafVa <= qword_140C4E3A8 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v46 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v44, 0);
  if ( v46 )
  {
    v47 = v46 - 1;
    LODWORD(v141) = v46 - 1;
    v48 = ((v125 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v141 + 1) = v48;
  }
  else
  {
    LOWORD(v144[0]) |= 4u;
    v144[21] = &v141;
    v144[2] = 0LL;
    v144[3] = AnyMultiplexedVm;
    BYTE2(v144[0]) = BYTE2(v144[0]) & 0xE3 | 4;
    v144[20] = MiGetNextPageTableTail;
    BYTE6(v144[0]) = v130;
    v144[4] = (__int64)(v28 << 25) >> 16;
    v144[5] = v42;
    MiWalkPageTables((__int64)v144);
    v47 = v141;
    v48 = *((_QWORD *)&v141 + 1);
  }
  v49 = a6[3];
  if ( v48 )
  {
    v50 = v48 - v28;
    v28 = v48;
    a6[3] = v49 + (v50 >> 3);
    v37 = v48;
    if ( v47 )
    {
      v37 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v47 > 1 )
      {
        v51 = v47 - 1;
        do
        {
          v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v51;
        }
        while ( v51 );
      }
    }
    v6 = a6;
    v124 = (__int64)(v48 << 25) >> 16;
LABEL_67:
    v39 = 0xFFFFF68000000000uLL;
    v38 = 0x7FFFFFFFF8LL;
    v126 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v53 = 0LL;
    v122 = 0;
    goto LABEL_69;
  }
  v6 = a6;
  a6[3] = v49 + ((__int64)(v131 - v28) >> 3) + 1;
LABEL_257:
  v27 = v126;
LABEL_258:
  v147 = 0;
  v160 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  if ( *((_QWORD *)&v142 + 1) )
  {
    v146 = 0;
    v149 = 0LL;
    v150 = 0LL;
    v148 = 20LL;
    v145 = 1;
    MiInsertTbFlushEntry(&v145, (__int64)(*((_QWORD *)&v142 + 1) << 25) >> 16, v143, 0LL);
    MiTerminateWsleCluster(&v142);
    v116 = a3;
    if ( (unsigned int)MiDeletePteList((__int64)&v145, a3, v15, v6, 0) )
      v8 = 1;
  }
  else
  {
    v116 = a3;
  }
  if ( HIDWORD(v165) && (unsigned int)MiDeletePteList((__int64)&v162, v116, v15, v6, 1) )
    v8 = 1;
  if ( v27 )
    MiUnlockPageTableInternal(v121, v27);
  MiUnlockWorkingSetShared(v121, v130);
  return v8;
}
