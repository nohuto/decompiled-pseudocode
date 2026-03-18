/*
 * XREFs of MiDecommitPages @ 0x1402B7A70
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x1403303B4 (MmStoreDecommitVirtualMemory.c)
 *     MiDecommitRegion @ 0x140625BE0 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406D7768 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiLockTransitionLeafPage @ 0x14023681C (MiLockTransitionLeafPage.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140236AC8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14026F9F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14027D170 (MiVadPureReserve.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAppendWsleCluster @ 0x1402B8D20 (MiAppendWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsle @ 0x1402BA000 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x1402BF020 (MiTerminateWsleCluster.c)
 *     MiDeletePteList @ 0x1402C0040 (MiDeletePteList.c)
 *     MiDeleteTransitionPte @ 0x1402C7050 (MiDeleteTransitionPte.c)
 *     MiGetUsedPtesHandle @ 0x1402CC840 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402CEA34 (MiIncreaseUsedPtesCount.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402F81B8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14030D9AC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiDeletePteWsleCluster @ 0x14031F1DC (MiDeletePteWsleCluster.c)
 *     MiLocateCloneAddress @ 0x140344118 (MiLocateCloneAddress.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x140347114 (MiTransferSoftwarePte.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     MiSetNonResidentPteHeat @ 0x140349540 (MiSetNonResidentPteHeat.c)
 *     MiReleasePageFileSpace @ 0x14034D3F4 (MiReleasePageFileSpace.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiDecrementCombinedPte @ 0x140366C14 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiReducePteUseCount @ 0x1403F2D98 (MiReducePteUseCount.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiDecommitLargePte @ 0x14053B0E0 (MiDecommitLargePte.c)
 *     MiDecrementCloneBlockReference @ 0x1405583B8 (MiDecrementCloneBlockReference.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A66EC (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiDecommitPages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *v6; // r15
  unsigned int v8; // r12d
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // r11
  __int64 v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rsi
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
  __int64 v27; // rdi
  unsigned __int64 v28; // r13
  int v29; // r10d
  __int64 v30; // rbx
  unsigned __int8 v31; // al
  unsigned __int64 CurrentIrql; // rcx
  _DWORD *SchedulerAssist; // r9
  LONG *v34; // rbx
  KIRQL v35; // al
  __int64 Flink; // rdx
  unsigned __int64 v37; // rdi
  __int64 v38; // r9
  unsigned __int64 v39; // r8
  int v40; // edi
  __int64 v41; // rdi
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v43; // r9
  char *AnyMultiplexedVm; // rbx
  int v45; // eax
  unsigned __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // r10
  unsigned __int64 v50; // rbx
  unsigned __int64 v51; // r11
  __int64 v52; // rax
  __int64 UsedPtesHandle; // rax
  __int64 v54; // rbx
  __int64 v55; // r15
  unsigned __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  unsigned int v62; // ebx
  __int64 v63; // r15
  LONG *v64; // rax
  volatile int v65; // r8d
  unsigned int v66; // edi
  unsigned int v67; // r15d
  int v68; // edx
  int v69; // eax
  unsigned __int64 v70; // rcx
  __int64 v71; // rdx
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // r8
  struct _LIST_ENTRY *v74; // rax
  __int64 v75; // rax
  char v76; // r8^7
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned __int64 v81; // rbx
  __int64 v82; // r9
  int v83; // eax
  __int64 v84; // r9
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v86; // rdx
  unsigned __int64 v87; // rbx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  bool v92; // zf
  __int64 v93; // rdi
  __int64 v94; // rax
  ULONG_PTR v95; // r10
  __int64 v96; // rbx
  BOOL v97; // r15d
  unsigned __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rdi
  __int64 v101; // rdx
  unsigned __int64 v102; // rbx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int16 v107; // ax
  int v108; // r12d
  unsigned __int64 v109; // rdi
  __int64 v110; // rcx
  __int64 v111; // r9
  int v112; // r10d
  __int64 v113; // r10
  __int64 v114; // r11
  __int64 updated; // rax
  unsigned __int64 v116; // rdx
  __int64 v117; // rax
  _KTHREAD *v118; // rax
  int v119; // ebx
  int v121; // [rsp+30h] [rbp-D0h]
  __int64 v122; // [rsp+38h] [rbp-C8h]
  __int64 v124; // [rsp+48h] [rbp-B8h]
  int v125; // [rsp+50h] [rbp-B0h]
  unsigned int v126; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v127; // [rsp+68h] [rbp-98h]
  unsigned __int64 v128; // [rsp+68h] [rbp-98h]
  __int64 v129; // [rsp+70h] [rbp-90h]
  int v130; // [rsp+78h] [rbp-88h]
  unsigned __int64 v131; // [rsp+80h] [rbp-80h] BYREF
  __int64 v132; // [rsp+88h] [rbp-78h]
  unsigned __int64 v133; // [rsp+90h] [rbp-70h]
  unsigned __int64 v134; // [rsp+98h] [rbp-68h]
  int v135; // [rsp+A0h] [rbp-60h]
  int v136; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v137; // [rsp+A8h] [rbp-58h]
  __int64 v138; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v139; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v140; // [rsp+C0h] [rbp-40h]
  __int64 v141; // [rsp+C8h] [rbp-38h]
  __int64 v142; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v143; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v144; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v145; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v146; // [rsp+100h] [rbp+0h]
  _QWORD v147[22]; // [rsp+120h] [rbp+20h] BYREF
  int v148; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v149; // [rsp+1D4h] [rbp+D4h]
  __int16 v150; // [rsp+1D6h] [rbp+D6h]
  __int64 v151; // [rsp+1D8h] [rbp+D8h]
  __int64 v152; // [rsp+1E0h] [rbp+E0h]
  __int64 v153; // [rsp+1E8h] [rbp+E8h]
  __int128 v154; // [rsp+1F0h] [rbp+F0h]
  __int128 v155; // [rsp+200h] [rbp+100h]
  __int128 v156; // [rsp+210h] [rbp+110h]
  __int128 v157; // [rsp+220h] [rbp+120h]
  __int128 v158; // [rsp+230h] [rbp+130h]
  __int128 v159; // [rsp+240h] [rbp+140h]
  __int128 v160; // [rsp+250h] [rbp+150h]
  __int128 v161; // [rsp+260h] [rbp+160h]
  __int128 v162; // [rsp+270h] [rbp+170h]
  __int64 v163; // [rsp+280h] [rbp+180h]
  _QWORD v164[24]; // [rsp+290h] [rbp+190h] BYREF
  int v165; // [rsp+350h] [rbp+250h] BYREF
  __int16 v166; // [rsp+354h] [rbp+254h]
  __int16 v167; // [rsp+356h] [rbp+256h]
  __int64 v168; // [rsp+358h] [rbp+258h]
  __int64 v169; // [rsp+360h] [rbp+260h]
  __int64 v170; // [rsp+368h] [rbp+268h]
  _BYTE v171[2040]; // [rsp+370h] [rbp+270h] BYREF

  v6 = a6;
  v134 = a2;
  v8 = 0;
  v138 = 0LL;
  v167 = 0;
  v137 = a4;
  memset(v171, 0, sizeof(v171));
  v168 = 256LL;
  v166 = 0;
  v165 = 1;
  v146 = 0LL;
  DWORD2(v146) = 2;
  v145 = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  v122 = 1LL;
  v130 = 0;
  v10 = MiSwizzleInvalidPte(512LL);
  v13 = *(unsigned __int8 *)(a4 + 33);
  v14 = v10;
  v142 = v10;
  v15 = v10;
  v16 = 0xFFFFF68000000000uLL;
  v17 = *(_DWORD *)(a4 + 52);
  v18 = 8 * ((*(unsigned int *)(a4 + 28) | (unsigned __int64)(v13 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v19 = (unsigned int)v17;
  LODWORD(v19) = v17 & 0x7FFFFFFF;
  v20 = v19 | ((unsigned __int64)*(unsigned __int8 *)(a4 + 34) << 31);
  v140 = v18;
  if ( v20 == 0x7FFFFFFFELL )
  {
    v14 = MiSwizzleInvalidPte(32LL * ((*(_DWORD *)(a4 + 48) >> 7) & 0x1F));
    v142 = v14;
    v15 = v14;
  }
  else if ( v17 >= 0 )
  {
    v21 = *(_DWORD *)(a4 + 48);
    if ( (v21 & 0x100000) == 0 || (v21 & 0x1000000) != 0 || (v21 & 0x2000000) == 0 )
      v15 = 0LL;
    v140 = 0LL;
    v130 = MiVadPureReserve(a4);
  }
  v22 = *(unsigned int *)(a4 + 48);
  v23 = *(_DWORD *)(a4 + 48) & 0x500000;
  v141 = v12;
  v126 = 3;
  if ( v23 == 5242880 )
  {
    v24 = (v22 >> 18) & 3;
    v25 = 16LL;
    v122 = MiVadPageSizes[v24];
    if ( v122 != 16 )
      v25 = v12;
    v126 = MiVadPageIndices[v24];
    v141 = v25;
    v11 = 2LL;
  }
  v26 = v11;
  v129 = 0LL;
  if ( a5 )
    v26 = 0;
  v27 = 0LL;
  v135 = v26;
  v28 = v16 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v125 = v12;
  v127 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v29 = v12;
  v30 = a3 + 1664;
  v121 = 0;
  v124 = a3 + 1664;
  v132 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  v31 = *(_BYTE *)(a3 + 1848) & 7;
  if ( v31 < 6u )
  {
    if ( v31 == 2 )
      v34 = &dword_140C4F600;
    else
      v34 = (LONG *)(a3 + 1856);
    v35 = ExAcquireSpinLockShared(v34);
    if ( v34[1] )
      CurrentIrql = (unsigned int)_InterlockedExchange(v34 + 1, 0);
    v29 = v125;
    LODWORD(v12) = 1;
    v30 = a3 + 1664;
    LOBYTE(v133) = v35;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v133 = CurrentIrql;
    __writecr8(v11);
    if ( KiIrqlFlags
      && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v12) != 0
      && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      CurrentIrql = (unsigned int)(unsigned __int8)CurrentIrql + 1;
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << CurrentIrql) & 4;
    }
  }
  if ( v28 > v134 )
    goto LABEL_258;
  while ( 1 )
  {
    Flink = 0LL;
    v37 = v28;
    if ( v29 == 1 )
    {
      Flink = (unsigned int)v12;
LABEL_29:
      v38 = 0x7FFFFFFFF8LL;
      v39 = 0xFFFFF68000000000uLL;
      goto LABEL_30;
    }
    CurrentIrql = v126;
    if ( v126 > 1 )
      goto LABEL_29;
    v39 = 0xFFFFF68000000000uLL;
    v38 = 0x7FFFFFFFF8LL;
    CurrentIrql = 2 - v126;
    do
    {
      v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --CurrentIrql;
    }
    while ( CurrentIrql );
LABEL_30:
    if ( (v37 & 0xFFF) == 0 || (_DWORD)Flink )
      break;
    v49 = 0LL;
LABEL_69:
    v50 = *(_QWORD *)v37;
    v51 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v37 >= 0xFFFFF6FB7DBED000uLL
      && v37 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(CurrentIrql, Flink, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL)
      && (v50 & 1) != 0
      && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v52 = *(_QWORD *)(Flink + 8 * ((v37 >> 3) & 0x1FF));
        Flink = v50 | 0x20;
        if ( (v52 & 0x20) == 0 )
          Flink = v50;
        v50 = Flink;
        if ( (v52 & 0x42) != 0 )
          v50 = Flink | 0x42;
      }
    }
    v143 = v50;
    if ( !v50 )
    {
      if ( v28 > v140 )
        v6[3] += v122;
      if ( v15 )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)((v37 << 25) - (v39 << 25)) >> 16, Flink);
        v54 = v141;
        MiIncreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v141);
        v55 = v54;
        while ( 1 )
        {
          v56 = v15;
          if ( MiPteInShadowRange(v37) )
          {
            if ( (unsigned int)MiPteHasShadow(v58, v57, v59, v60) )
            {
              if ( !HIBYTE(word_140C4DE88) && (v15 & 1) != 0 )
                v56 = v15 | 0x8000000000000000uLL;
              *(_QWORD *)v37 = v56;
              MiWritePteShadow(v37, v56);
              goto LABEL_95;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v15 & 1) != 0 )
            {
              v56 = v15 | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v37 = v56;
LABEL_95:
          v37 += 8LL;
          if ( !--v55 )
          {
            v14 = v142;
            break;
          }
        }
      }
LABEL_97:
      v61 = v122;
LABEL_98:
      v62 = 1;
      goto LABEL_99;
    }
    if ( (v50 & 1) != 0 )
    {
      if ( v122 != 1 )
        goto LABEL_109;
      v136 = v49;
      v70 = v38 & (v127 >> 9);
      v71 = *(_QWORD *)(v70 + v39);
      v72 = v70 + v39;
      if ( v72 >= 0xFFFFF6FB7DBED000uLL
        && v72 <= v51
        && (unsigned int)MiPteHasShadow(v70, v71, v72, v38)
        && (v71 & 1) != 0
        && ((v71 & 0x20) == 0 || (v71 & 0x42) == 0) )
      {
        v74 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v74 )
        {
          v75 = *((_QWORD *)&v74->Flink + ((v73 >> 3) & 0x1FF));
          v76 = HIBYTE(v71);
          if ( (v75 & 0x20) == 0 )
            v76 = HIBYTE(v71);
          HIBYTE(v71) = v76;
          if ( (v75 & 0x42) != 0 )
            HIBYTE(v71) = v76;
        }
      }
      if ( (HIBYTE(v71) & 0xF) == 8 || !(unsigned int)MiAppendWsleCluster(&v145, v124, v28) )
      {
        MiTerminateWsle(v124, v127, 0LL, &v136);
        MiInsertTbFlushEntry(&v165, v127, 1LL, 0LL);
        v81 = v50 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v143 = v81;
        if ( v28 >= 0xFFFFF6FB7DBED000uLL
          && v28 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v78, v77, v79, v80) )
        {
          *(_QWORD *)v28 = v81;
          MiWritePteShadow(v28, v81);
        }
        else
        {
          *(_QWORD *)v28 = v81;
        }
      }
      if ( HIDWORD(v168) != (_DWORD)v168 - 1 )
        goto LABEL_97;
      if ( (unsigned int)MiDeletePteWsleCluster(&v145, a3, v15, v6) )
        v8 = 1;
      v121 = v8;
      v69 = MiDeletePteList((unsigned int)&v165, a3, v15, (_DWORD)v6, 1);
      v62 = 1;
LABEL_180:
      v92 = v69 == 0;
      v61 = v122;
      if ( !v92 )
      {
        v8 = 1;
        v121 = 1;
      }
      goto LABEL_99;
    }
    if ( (v50 & 0x400) != 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v50) )
      {
        v83 = MiDecrementCombinedPte(v124, v82);
LABEL_138:
        if ( v83 == 3 )
        {
          ++v6[1];
        }
        else if ( v83 == 5 )
        {
          ++v6[2];
        }
      }
      else if ( !MiIsPrototypePteVadLookup(v50) )
      {
        CloneAddress = MiLocateCloneAddress(a3, v84);
        if ( CloneAddress )
        {
          v83 = MiDecrementCloneBlockReference(CloneAddress, v86);
          goto LABEL_138;
        }
      }
      v87 = v15;
      if ( MiPteInShadowRange(v28) )
      {
        if ( (unsigned int)MiPteHasShadow(v89, v88, v90, v91) )
        {
          if ( !HIBYTE(word_140C4DE88) && (v15 & 1) != 0 )
            v87 = v15 | 0x8000000000000000uLL;
          *(_QWORD *)v28 = v87;
          MiWritePteShadow(v28, v87);
          v92 = v15 == 0;
          goto LABEL_178;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v15 & 1) != 0 )
        {
          v87 = v15 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v28 = v87;
      v92 = v15 == 0;
LABEL_178:
      v62 = 1;
      if ( !v92 )
        goto LABEL_225;
      v69 = MiReducePteUseCount(v28, 1LL);
      goto LABEL_180;
    }
    if ( (v50 & 0x800) != 0 )
    {
      if ( v122 != 1 )
      {
LABEL_109:
        v69 = MiDecommitLargePte(v137, v37, v15, (_DWORD)v6, (__int64)&v165);
        v62 = 1;
        goto LABEL_180;
      }
      v138 = v49;
      v93 = v49;
      v94 = MiLockTransitionLeafPage(v28, 0LL);
      v95 = v94;
      if ( !v94 )
        goto LABEL_254;
      v96 = 0LL;
      v97 = 1;
      if ( !*(_WORD *)(v94 + 32) )
      {
        v93 = *(_QWORD *)(v94 + 16);
        v98 = *(_QWORD *)(v94 + 40);
        v96 = v93;
        v138 = v93;
        v99 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((v98 >> 39) & 0x3FF));
        v132 = v99;
        if ( (v93 & 2) != 0 )
          v97 = MI_IS_PTE_IN_WS_SWAP_SET(v99, &v138) != 0;
      }
      if ( (unsigned int)MiDeleteTransitionPte(v28, v95) == 3 )
        ++a6[1];
      if ( v96 )
        MiReleasePageFileSpace(v132, v93, v97);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      v100 = v15;
      if ( !v97 )
      {
        v101 = *(_QWORD *)(v132 + 8LL * ((unsigned __int16)v96 >> 12) + 6944);
        if ( qword_140C4DDC0 && (v96 & 0x10) == 0 )
          v96 &= ~qword_140C4DDC0;
        v100 = MiTransferSoftwarePte(v14, v101, HIDWORD(v96), 2LL);
      }
      v102 = v100;
      if ( MiPteInShadowRange(v28) )
      {
        if ( (unsigned int)MiPteHasShadow(v104, v103, v105, v106) )
        {
          if ( !HIBYTE(word_140C4DE88) && (v100 & 1) != 0 )
            v102 = v100 | 0x8000000000000000uLL;
          *(_QWORD *)v28 = v102;
          MiWritePteShadow(v28, v102);
          goto LABEL_177;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v100 & 1) != 0 )
        {
          v102 = v100 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v28 = v102;
LABEL_177:
      v92 = v100 == 0;
      goto LABEL_178;
    }
    if ( ((v50 >> 5) & 0x1F) == 0x10 )
    {
      v61 = v122;
      v6[3] += v122;
      goto LABEL_98;
    }
    v107 = v50;
    if ( qword_140C4DDC0 && (v50 & 0x10) == 0 )
      v107 = v50 & ~(_WORD)qword_140C4DDC0;
    if ( (v107 & 0x400) != 0 || (v107 & 0x800) != 0 || (v107 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
    v108 = 1;
    v109 = v15;
    v110 = *(unsigned __int16 *)(a3 + 1838);
    v111 = *(_QWORD *)(qword_140C4E4C8 + 8 * v110);
    v132 = v111;
    if ( ((v50 >> 1) & 1) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v111, &v143) )
    {
      v108 = v112;
      v131 = v14;
      MiSetNonResidentPteHeat(&v131, 0LL);
      v109 = v131;
      if ( (v14 & 0x400) == 0 )
      {
        v109 = v131 & 0xFFFFFFFFFFFFFFF9uLL;
        v131 &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      if ( v114 )
      {
        if ( v109 )
          updated = MiUpdatePageFileHighInPte(v109, v113);
        else
          updated = MiSwizzleInvalidPte(v113 << 32);
        v109 = updated ^ (unsigned __int16)(updated ^ ((_WORD)v39 << 12)) & 0xF000 | 2;
        v131 = v109;
      }
    }
    v116 = v109;
    if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v110, v109, v39, v111) )
      {
        if ( !HIBYTE(word_140C4DE88) && (v109 & 1) != 0 )
          v116 |= 0x8000000000000000uLL;
        *(_QWORD *)v28 = v116;
        MiWritePteShadow(v28, v116);
        goto LABEL_211;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v109 & 1) != 0 )
      {
        v116 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v28 = v116;
LABEL_211:
    v139 = v50;
    if ( (v50 & 4) != 0 )
    {
      v117 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v139);
      if ( !v108 )
        v117 &= ~2uLL;
    }
    else if ( v108 && ((v50 >> 1) & 1) != 0 )
    {
      v117 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v139);
    }
    else
    {
      v117 = 0LL;
    }
    v139 = v117;
    if ( v117 )
      MiReleasePageFileInfo(v132, v117, 0LL);
    v62 = 1;
    if ( v109 )
    {
      v8 = v121;
LABEL_225:
      v61 = v122;
      goto LABEL_99;
    }
    v8 = v121;
    v92 = (unsigned int)MiReducePteUseCount(v28, 1LL) == 0;
    v61 = v122;
    if ( !v92 )
      v8 = 1;
    v121 = v8;
LABEL_99:
    v28 += 8 * v61;
    if ( (v28 & 0x78) == 0 )
    {
      v63 = a3 + 1664;
      v64 = &dword_140C4F600;
      if ( (*(_BYTE *)(a3 + 1848) & 7) != 2 )
        v64 = (LONG *)(a3 + 1856);
      if ( (*v64 & 0x40000000) != 0 )
        goto LABEL_244;
    }
    CurrentIrql = (unsigned __int64)KeGetCurrentPrcb();
    v65 = *(_DWORD *)(CurrentIrql + 12588);
    v66 = *(_DWORD *)(CurrentIrql + 31724);
    v67 = *(_DWORD *)(CurrentIrql + 32412);
    if ( (v65 & 1) == 0 )
    {
      v68 = 0;
      if ( (v65 & 0x1E) != 0 )
      {
        v62 = 2;
      }
      else if ( *(_BYTE *)(CurrentIrql + 12585) )
      {
        v62 = 3;
      }
      else
      {
        v118 = *(_KTHREAD **)(CurrentIrql + 16);
        if ( !v118 || v118 == *(_KTHREAD **)(CurrentIrql + 8) )
          goto LABEL_233;
        v62 = 4;
      }
LABEL_240:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v62, v66, v67);
      if ( !v62 )
        goto LABEL_253;
      v63 = a3 + 1664;
LABEL_244:
      if ( (unsigned int)MiDeletePteWsleCluster(&v145, a3, v15, a6) )
        v8 = 1;
      v121 = v8;
      if ( HIDWORD(v168) )
      {
        if ( (unsigned int)MiDeletePteList((unsigned int)&v165, a3, v15, (_DWORD)a6, 1) )
          v8 = 1;
        v121 = v8;
      }
      if ( v129 )
      {
        MiUnlockPageTableInternal(v63);
        v129 = 0LL;
      }
      MiUnlockWorkingSetShared(v63, v133);
      v125 = 1;
      MiLockWorkingSetShared(v63);
      goto LABEL_253;
    }
    v68 = 1;
    if ( v67 > 7 )
    {
      if ( *(_BYTE *)(CurrentIrql + 12585) )
        goto LABEL_240;
LABEL_235:
      if ( (v65 & 0x1E) != 0 )
      {
        v62 = 5;
        goto LABEL_240;
      }
      if ( *(_QWORD *)(CurrentIrql + 8) != *(_QWORD *)(CurrentIrql + 24) )
      {
        v62 = 6;
        goto LABEL_240;
      }
LABEL_239:
      _disable();
      v62 = 0;
      *(_DWORD *)(CurrentIrql + 31724) = 0;
      *(_DWORD *)(CurrentIrql + 32412) = 0;
      KiResetGlobalDpcWatchdogProfiler(CurrentIrql);
      _enable();
      goto LABEL_240;
    }
LABEL_233:
    if ( v66 > 7 )
    {
      if ( !v68 )
        goto LABEL_239;
      goto LABEL_235;
    }
LABEL_253:
    v127 += v122 << 12;
LABEL_254:
    v6 = a6;
    if ( v28 > v134 )
      goto LABEL_257;
    v29 = v125;
    LODWORD(v12) = 1;
    v30 = a3 + 1664;
  }
  memset(v164, 0, 0xB8uLL);
  if ( *((_QWORD *)&v145 + 1) )
  {
    LODWORD(v164[0]) = 1;
    v164[2] = 0LL;
    v164[3] = 0LL;
    WORD2(v164[0]) = 0;
    LODWORD(v164[1]) = 20;
    MiInsertTbFlushEntry(v164, (__int64)(*((_QWORD *)&v145 + 1) << 25) >> 16, v146, 0LL);
    MiTerminateWsleCluster(&v145);
    v40 = a3;
    if ( (unsigned int)MiDeletePteList((unsigned int)v164, a3, v15, (_DWORD)v6, 0) )
      v8 = 1;
    v121 = v8;
  }
  else
  {
    v40 = a3;
  }
  if ( HIDWORD(v168) )
  {
    if ( (unsigned int)MiDeletePteList((unsigned int)&v165, v40, v15, (_DWORD)v6, 1) )
      v8 = 1;
    v121 = v8;
  }
  if ( v129 )
  {
    MiUnlockPageTableInternal(v30);
    v129 = 0LL;
  }
  if ( !v130 )
  {
    v37 = v28;
    if ( v126 <= 1 )
    {
      v48 = 2 - v126;
      do
      {
        v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v48;
      }
      while ( v48 );
      v6 = a6;
    }
    MiMakeSystemAddressValid(v37, 0LL, (*(_DWORD *)(v137 + 48) >> 12) & 0x3F, v133, v135);
    goto LABEL_67;
  }
  v144 = 0LL;
  memset((char *)v147 + 2, 0, 0xAEuLL);
  v128 = (__int64)(v28 << 25) >> 16;
  v41 = (__int64)(v134 << 25) >> 16;
  LOWORD(v147[0]) = 2145;
  LeafVa = MiGetLeafVa(v128);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C4F9B8 && LeafVa <= qword_140C4E1E8 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v45 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v43, 0);
  if ( v45 )
  {
    CurrentIrql = (unsigned int)(v45 - 1);
    LODWORD(v144) = v45 - 1;
    v46 = ((v128 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v144 + 1) = v46;
  }
  else
  {
    LOWORD(v147[0]) |= 4u;
    v147[21] = &v144;
    v147[2] = 0LL;
    v147[3] = AnyMultiplexedVm;
    BYTE2(v147[0]) = BYTE2(v147[0]) & 0xE3 | 4;
    v147[20] = MiGetNextPageTableTail;
    BYTE6(v147[0]) = v133;
    v147[4] = (__int64)(v28 << 25) >> 16;
    v147[5] = v41;
    MiWalkPageTables((__int64)v147);
    CurrentIrql = (unsigned int)v144;
    v46 = *((_QWORD *)&v144 + 1);
  }
  Flink = a6[3];
  if ( v46 )
  {
    v47 = v46 - v28;
    v28 = v46;
    a6[3] = Flink + (v47 >> 3);
    v37 = v46;
    if ( (_DWORD)CurrentIrql )
    {
      v37 = ((v46 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (unsigned int)CurrentIrql > 1 )
      {
        CurrentIrql = (unsigned int)(CurrentIrql - 1);
        do
        {
          v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --CurrentIrql;
        }
        while ( CurrentIrql );
      }
    }
    v6 = a6;
    v127 = (__int64)(v46 << 25) >> 16;
LABEL_67:
    v39 = 0xFFFFF68000000000uLL;
    v38 = 0x7FFFFFFFF8LL;
    v129 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v49 = 0LL;
    v125 = 0;
    goto LABEL_69;
  }
  LODWORD(v6) = (_DWORD)a6;
  a6[3] = Flink + ((__int64)(v134 - v28) >> 3) + 1;
LABEL_257:
  v27 = v129;
LABEL_258:
  v150 = 0;
  v163 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  if ( *((_QWORD *)&v145 + 1) )
  {
    v149 = 0;
    v152 = 0LL;
    v153 = 0LL;
    v151 = 20LL;
    v148 = 1;
    MiInsertTbFlushEntry(&v148, (__int64)(*((_QWORD *)&v145 + 1) << 25) >> 16, v146, 0LL);
    MiTerminateWsleCluster(&v145);
    v119 = a3;
    if ( (unsigned int)MiDeletePteList((unsigned int)&v148, a3, v15, (_DWORD)v6, 0) )
      v8 = 1;
  }
  else
  {
    v119 = a3;
  }
  if ( HIDWORD(v168) && (unsigned int)MiDeletePteList((unsigned int)&v165, v119, v15, (_DWORD)v6, 1) )
    v8 = 1;
  if ( v27 )
    MiUnlockPageTableInternal(v124);
  MiUnlockWorkingSetShared(v124, v133);
  return v8;
}
