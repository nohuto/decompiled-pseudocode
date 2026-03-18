/*
 * XREFs of MiDecommitPages @ 0x1402AF9A0
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x14035F644 (MmStoreDecommitVirtualMemory.c)
 *     MiDecommitRegion @ 0x1405FA170 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x140704130 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     MiTerminateWsle @ 0x140234900 (MiTerminateWsle.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiDeletePteList @ 0x14023A990 (MiDeletePteList.c)
 *     MiDeleteTransitionPte @ 0x1402419A0 (MiDeleteTransitionPte.c)
 *     MiTerminateWsleCluster @ 0x140241DE0 (MiTerminateWsleCluster.c)
 *     MiGetUsedPtesHandle @ 0x140245EC0 (MiGetUsedPtesHandle.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     MiLockTransitionLeafPage @ 0x140253D18 (MiLockTransitionLeafPage.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtesCount @ 0x1402562E0 (MiIncreaseUsedPtesCount.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiFastLockLeafPageTable @ 0x1402A06B0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x1402ADBF0 (MiVadPureReserve.c)
 *     MiAppendWsleCluster @ 0x1402B0C50 (MiAppendWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiSetNonResidentPteHeat @ 0x1402B78F0 (MiSetNonResidentPteHeat.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x1402F4DA8 (MiTransferSoftwarePte.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140315C30 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140327CB8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x14033A8E4 (MiLocateCloneAddress.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14033B0D4 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiDeletePteWsleCluster @ 0x14034E960 (MiDeletePteWsleCluster.c)
 *     MiDecrementCombinedPte @ 0x140364C34 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiReducePteUseCount @ 0x1403EE930 (MiReducePteUseCount.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiDecommitLargePte @ 0x140537710 (MiDecommitLargePte.c)
 *     MiDecrementCloneBlockReference @ 0x1405549E8 (MiDecrementCloneBlockReference.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A2C4C (EtwTraceShouldYieldProcessor.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // r14
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // r10
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  int v22; // eax
  unsigned __int64 v23; // rdx
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // r9
  int v27; // eax
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // r13
  int v30; // r10d
  __int64 v31; // rbx
  unsigned __int8 v32; // al
  unsigned __int64 CurrentIrql; // rcx
  _DWORD *SchedulerAssist; // r9
  LONG *v35; // rbx
  KIRQL v36; // al
  __int64 v37; // rdx
  unsigned __int64 v38; // rdi
  __int64 v39; // r9
  unsigned __int64 v40; // r8
  _KPROCESS *v41; // rdi
  __int64 v42; // rdi
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v44; // r9
  char *AnyMultiplexedVm; // rbx
  int v46; // eax
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r10
  unsigned __int64 v51; // rbx
  unsigned __int64 v52; // r11
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 UsedPtesHandle; // rax
  __int64 v57; // rbx
  __int64 v58; // r15
  unsigned __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rax
  unsigned int v65; // ebx
  __int64 v66; // r15
  LONG *v67; // rax
  volatile int v68; // r8d
  unsigned int v69; // edi
  unsigned int v70; // r15d
  int v71; // edx
  int v72; // eax
  unsigned __int64 v73; // rcx
  __int64 v74; // rdx
  unsigned __int64 v75; // r8
  unsigned __int64 v76; // r8
  struct _LIST_ENTRY *v77; // rax
  __int64 v78; // rax
  char v79; // r8^7
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  unsigned __int64 v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  int v88; // eax
  __int64 v89; // r9
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v91; // rdx
  unsigned __int64 v92; // rbx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  bool v97; // zf
  __int64 v98; // rdi
  __int64 v99; // rax
  __int64 v100; // r8
  ULONG_PTR v101; // r10
  __int64 v102; // rbx
  BOOL v103; // r15d
  unsigned __int64 v104; // rcx
  __int64 v105; // rcx
  __int64 v106; // rdi
  __int64 v107; // rdx
  unsigned __int64 v108; // rbx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // r8
  __int64 v112; // r9
  __int16 v113; // ax
  int v114; // r12d
  unsigned __int64 v115; // rdi
  __int64 v116; // rcx
  __int64 v117; // r9
  int v118; // r10d
  __int64 v119; // rdx
  __int64 v120; // r10
  __int64 v121; // r11
  __int64 updated; // rax
  unsigned __int64 v123; // rdx
  __int64 v124; // rax
  _KTHREAD *v125; // rax
  _KPROCESS *v126; // rbx
  int v128; // [rsp+30h] [rbp-D0h]
  __int64 v129; // [rsp+38h] [rbp-C8h]
  __int64 v131; // [rsp+48h] [rbp-B8h]
  int v132; // [rsp+50h] [rbp-B0h]
  unsigned int v133; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v134; // [rsp+68h] [rbp-98h]
  unsigned __int64 v135; // [rsp+68h] [rbp-98h]
  unsigned __int64 v136; // [rsp+70h] [rbp-90h]
  int v137; // [rsp+78h] [rbp-88h]
  unsigned __int64 v138; // [rsp+80h] [rbp-80h] BYREF
  __int64 v139; // [rsp+88h] [rbp-78h]
  unsigned __int64 v140; // [rsp+90h] [rbp-70h]
  unsigned __int64 v141; // [rsp+98h] [rbp-68h]
  int v142; // [rsp+A0h] [rbp-60h]
  int v143; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v144; // [rsp+A8h] [rbp-58h]
  __int64 v145; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v146; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v147; // [rsp+C0h] [rbp-40h]
  __int64 v148; // [rsp+C8h] [rbp-38h]
  __int64 v149; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v150; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v151; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v152; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v153; // [rsp+100h] [rbp+0h]
  _QWORD v154[22]; // [rsp+120h] [rbp+20h] BYREF
  int v155; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v156; // [rsp+1D4h] [rbp+D4h]
  __int16 v157; // [rsp+1D6h] [rbp+D6h]
  __int64 v158; // [rsp+1D8h] [rbp+D8h]
  __int64 v159; // [rsp+1E0h] [rbp+E0h]
  __int64 v160; // [rsp+1E8h] [rbp+E8h]
  __int128 v161; // [rsp+1F0h] [rbp+F0h]
  __int128 v162; // [rsp+200h] [rbp+100h]
  __int128 v163; // [rsp+210h] [rbp+110h]
  __int128 v164; // [rsp+220h] [rbp+120h]
  __int128 v165; // [rsp+230h] [rbp+130h]
  __int128 v166; // [rsp+240h] [rbp+140h]
  __int128 v167; // [rsp+250h] [rbp+150h]
  __int128 v168; // [rsp+260h] [rbp+160h]
  __int128 v169; // [rsp+270h] [rbp+170h]
  __int64 v170; // [rsp+280h] [rbp+180h]
  _QWORD v171[24]; // [rsp+290h] [rbp+190h] BYREF
  int v172; // [rsp+350h] [rbp+250h] BYREF
  __int16 v173; // [rsp+354h] [rbp+254h]
  __int16 v174; // [rsp+356h] [rbp+256h]
  __int64 v175; // [rsp+358h] [rbp+258h]
  __int64 v176; // [rsp+360h] [rbp+260h]
  __int64 v177; // [rsp+368h] [rbp+268h]
  _BYTE v178[2040]; // [rsp+370h] [rbp+270h] BYREF

  v6 = a6;
  v141 = a2;
  v8 = 0;
  v145 = 0LL;
  v174 = 0;
  v144 = a4;
  memset(v178, 0, sizeof(v178));
  v175 = 256LL;
  v173 = 0;
  v172 = 1;
  v153 = 0LL;
  DWORD2(v153) = 2;
  v152 = 0LL;
  v176 = 0LL;
  v177 = 0LL;
  v129 = 1LL;
  v137 = 0;
  v12 = MiSwizzleInvalidPte(512LL, v10, v11, 2LL);
  v15 = *(unsigned __int8 *)(a4 + 33);
  v16 = v12;
  v149 = v12;
  v17 = v12;
  v18 = 0xFFFFF68000000000uLL;
  v19 = *(unsigned int *)(a4 + 52);
  v20 = 8 * ((*(unsigned int *)(a4 + 28) | (unsigned __int64)(v15 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v21 = v19 & 0xFFFFFFFF7FFFFFFFuLL | ((unsigned __int64)*(unsigned __int8 *)(a4 + 34) << 31);
  v147 = v20;
  if ( v21 == 0x7FFFFFFFELL )
  {
    v16 = MiSwizzleInvalidPte(32LL * ((*(_DWORD *)(a4 + 48) >> 7) & 0x1F), v19, v20, v13);
    v149 = v16;
    v17 = v16;
  }
  else if ( (int)v19 >= 0 )
  {
    v22 = *(_DWORD *)(a4 + 48);
    if ( (v22 & 0x100000) == 0 || (v22 & 0x1000000) != 0 || (v22 & 0x2000000) == 0 )
      v17 = 0LL;
    v147 = 0LL;
    v137 = MiVadPureReserve(a4);
  }
  v23 = *(unsigned int *)(a4 + 48);
  v24 = *(_DWORD *)(a4 + 48) & 0x500000;
  v148 = v14;
  v133 = 3;
  if ( v24 == 5242880 )
  {
    v25 = (v23 >> 18) & 3;
    v26 = 16LL;
    v129 = MiVadPageSizes[v25];
    if ( v129 != 16 )
      v26 = v14;
    v133 = MiVadPageIndices[v25];
    v148 = v26;
    v13 = 2LL;
  }
  v27 = v13;
  v136 = 0LL;
  if ( a5 )
    v27 = 0;
  v28 = 0LL;
  v142 = v27;
  v29 = v18 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v132 = v14;
  v134 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v30 = v14;
  v31 = a3 + 1664;
  v128 = 0;
  v131 = a3 + 1664;
  v139 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  v32 = *(_BYTE *)(a3 + 1848) & 7;
  if ( v32 < 6u )
  {
    if ( v32 == 2 )
      v35 = &dword_140C4F580;
    else
      v35 = (LONG *)(a3 + 1856);
    v36 = ExAcquireSpinLockShared(v35);
    if ( v35[1] )
      CurrentIrql = (unsigned int)_InterlockedExchange(v35 + 1, 0);
    v30 = v132;
    LODWORD(v14) = 1;
    v31 = a3 + 1664;
    LOBYTE(v140) = v36;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v140 = CurrentIrql;
    __writecr8(v13);
    if ( KiIrqlFlags
      && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v14) != 0
      && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      CurrentIrql = (unsigned int)(unsigned __int8)CurrentIrql + 1;
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << CurrentIrql) & 4;
    }
  }
  if ( v29 > v141 )
    goto LABEL_258;
  while ( 1 )
  {
    v37 = 0LL;
    v38 = v29;
    if ( v30 == 1 )
    {
      v37 = (unsigned int)v14;
LABEL_29:
      v39 = 0x7FFFFFFFF8LL;
      v40 = 0xFFFFF68000000000uLL;
      goto LABEL_30;
    }
    CurrentIrql = v133;
    if ( v133 > 1 )
      goto LABEL_29;
    v40 = 0xFFFFF68000000000uLL;
    v39 = 0x7FFFFFFFF8LL;
    CurrentIrql = 2 - v133;
    do
    {
      v38 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --CurrentIrql;
    }
    while ( CurrentIrql );
LABEL_30:
    if ( (v38 & 0xFFF) == 0 || (_DWORD)v37 )
      break;
    v50 = 0LL;
LABEL_69:
    v51 = *(_QWORD *)v38;
    v52 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v38 >= 0xFFFFF6FB7DBED000uLL
      && v38 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(CurrentIrql, v37, 0xFFFFF68000000000uLL, 0x7FFFFFFFF8LL)
      && (v51 & 1) != 0
      && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v54 = *((_QWORD *)&Flink->Flink + ((v38 >> 3) & 0x1FF));
        v55 = v51 | 0x20;
        if ( (v54 & 0x20) == 0 )
          v55 = v51;
        v51 = v55;
        if ( (v54 & 0x42) != 0 )
          v51 = v55 | 0x42;
      }
    }
    v150 = v51;
    if ( !v51 )
    {
      if ( v29 > v147 )
        v6[3] += v129;
      if ( v17 )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)((v38 << 25) - (v40 << 25)) >> 16);
        v57 = v148;
        MiIncreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v148);
        v58 = v57;
        while ( 1 )
        {
          v59 = v17;
          if ( MiPteInShadowRange(v38) )
          {
            if ( (unsigned int)MiPteHasShadow(v61, v60, v62, v63) )
            {
              if ( !HIBYTE(word_140C4DE08) && (v17 & 1) != 0 )
                v59 = v17 | 0x8000000000000000uLL;
              *(_QWORD *)v38 = v59;
              MiWritePteShadow(v38, v59);
              goto LABEL_95;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v17 & 1) != 0 )
            {
              v59 = v17 | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v38 = v59;
LABEL_95:
          v38 += 8LL;
          if ( !--v58 )
          {
            v16 = v149;
            break;
          }
        }
      }
LABEL_97:
      v64 = v129;
LABEL_98:
      v65 = 1;
      goto LABEL_99;
    }
    if ( (v51 & 1) != 0 )
    {
      if ( v129 != 1 )
        goto LABEL_109;
      v143 = v50;
      v73 = v39 & (v134 >> 9);
      v74 = *(_QWORD *)(v73 + v40);
      v75 = v73 + v40;
      if ( v75 >= 0xFFFFF6FB7DBED000uLL
        && v75 <= v52
        && (unsigned int)MiPteHasShadow(v73, v74, v75, v39)
        && (v74 & 1) != 0
        && ((v74 & 0x20) == 0 || (v74 & 0x42) == 0) )
      {
        v77 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v77 )
        {
          v78 = *((_QWORD *)&v77->Flink + ((v76 >> 3) & 0x1FF));
          v79 = HIBYTE(v74);
          if ( (v78 & 0x20) == 0 )
            v79 = HIBYTE(v74);
          HIBYTE(v74) = v79;
          if ( (v78 & 0x42) != 0 )
            HIBYTE(v74) = v79;
        }
      }
      if ( (HIBYTE(v74) & 0xF) == 8 || !(unsigned int)MiAppendWsleCluster(&v152, v131, v29) )
      {
        MiTerminateWsle(v131, v134, 0, &v143);
        MiInsertTbFlushEntry(&v172, v134, 1LL, 0LL);
        v84 = v51 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v150 = v84;
        if ( v29 >= 0xFFFFF6FB7DBED000uLL
          && v29 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow(v81, v80, v82, v83) )
        {
          *(_QWORD *)v29 = v84;
          MiWritePteShadow(v29, v84);
        }
        else
        {
          *(_QWORD *)v29 = v84;
        }
      }
      if ( HIDWORD(v175) != (_DWORD)v175 - 1 )
        goto LABEL_97;
      if ( (unsigned int)MiDeletePteWsleCluster(&v152, a3, v17, v6) )
        v8 = 1;
      v128 = v8;
      v72 = MiDeletePteList((__int64)&v172, (_KPROCESS *)a3, v17, v6, 1);
      v65 = 1;
LABEL_180:
      v97 = v72 == 0;
      v64 = v129;
      if ( !v97 )
      {
        v8 = 1;
        v128 = 1;
      }
      goto LABEL_99;
    }
    if ( (v51 & 0x400) != 0 )
    {
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v51) )
      {
        v88 = MiDecrementCombinedPte(v131, v87);
LABEL_138:
        if ( v88 == 3 )
        {
          ++v6[1];
        }
        else if ( v88 == 5 )
        {
          ++v6[2];
        }
      }
      else if ( !(unsigned int)MiIsPrototypePteVadLookup(v51, v85, v86, v87) )
      {
        CloneAddress = MiLocateCloneAddress(a3, v89);
        if ( CloneAddress )
        {
          v88 = MiDecrementCloneBlockReference(CloneAddress, v91);
          goto LABEL_138;
        }
      }
      v92 = v17;
      if ( MiPteInShadowRange(v29) )
      {
        if ( (unsigned int)MiPteHasShadow(v94, v93, v95, v96) )
        {
          if ( !HIBYTE(word_140C4DE08) && (v17 & 1) != 0 )
            v92 = v17 | 0x8000000000000000uLL;
          *(_QWORD *)v29 = v92;
          MiWritePteShadow(v29, v92);
          v97 = v17 == 0;
          goto LABEL_178;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v17 & 1) != 0 )
        {
          v92 = v17 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v29 = v92;
      v97 = v17 == 0;
LABEL_178:
      v65 = 1;
      if ( !v97 )
        goto LABEL_225;
      v72 = MiReducePteUseCount(v29, 1LL);
      goto LABEL_180;
    }
    if ( (v51 & 0x800) != 0 )
    {
      if ( v129 != 1 )
      {
LABEL_109:
        v72 = MiDecommitLargePte(v144, v38, v17, (_DWORD)v6, (__int64)&v172);
        v65 = 1;
        goto LABEL_180;
      }
      v145 = v50;
      v98 = v50;
      v99 = MiLockTransitionLeafPage(v29, 0LL);
      v101 = v99;
      if ( !v99 )
        goto LABEL_254;
      v102 = 0LL;
      v103 = 1;
      if ( !*(_WORD *)(v99 + 32) )
      {
        v98 = *(_QWORD *)(v99 + 16);
        v104 = *(_QWORD *)(v99 + 40);
        v102 = v98;
        v145 = v98;
        v105 = *(_QWORD *)(qword_140C4E448 + 8 * ((v104 >> 39) & 0x3FF));
        v139 = v105;
        if ( (v98 & 2) != 0 )
          v103 = MI_IS_PTE_IN_WS_SWAP_SET(v105, &v145) != 0;
      }
      LOBYTE(v100) = 17;
      if ( (unsigned int)MiDeleteTransitionPte(v29, v101, v100, 0) == 3 )
        ++a6[1];
      if ( v102 )
        MiReleasePageFileSpace(v139, v98);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      v106 = v17;
      if ( !v103 )
      {
        v107 = *(_QWORD *)(v139 + 8LL * ((unsigned __int16)v102 >> 12) + 6944);
        if ( qword_140C4DD40 && (v102 & 0x10) == 0 )
          v102 &= ~qword_140C4DD40;
        v106 = MiTransferSoftwarePte(v16, v107, HIDWORD(v102), 2LL);
      }
      v108 = v106;
      if ( MiPteInShadowRange(v29) )
      {
        if ( (unsigned int)MiPteHasShadow(v110, v109, v111, v112) )
        {
          if ( !HIBYTE(word_140C4DE08) && (v106 & 1) != 0 )
            v108 = v106 | 0x8000000000000000uLL;
          *(_QWORD *)v29 = v108;
          MiWritePteShadow(v29, v108);
          goto LABEL_177;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v106 & 1) != 0 )
        {
          v108 = v106 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v29 = v108;
LABEL_177:
      v97 = v106 == 0;
      goto LABEL_178;
    }
    if ( ((v51 >> 5) & 0x1F) == 0x10 )
    {
      v64 = v129;
      v6[3] += v129;
      goto LABEL_98;
    }
    v113 = v51;
    if ( qword_140C4DD40 && (v51 & 0x10) == 0 )
      v113 = v51 & ~(_WORD)qword_140C4DD40;
    if ( (v113 & 0x400) != 0 || (v113 & 0x800) != 0 || (v113 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
    v114 = 1;
    v115 = v17;
    v116 = *(unsigned __int16 *)(a3 + 1838);
    v117 = *(_QWORD *)(qword_140C4E448 + 8 * v116);
    v139 = v117;
    if ( ((v51 >> 1) & 1) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v117, &v150) )
    {
      v114 = v118;
      v138 = v16;
      MiSetNonResidentPteHeat(&v138, 0LL);
      v115 = v138;
      if ( (v16 & 0x400) == 0 )
      {
        v115 = v138 & 0xFFFFFFFFFFFFFFF9uLL;
        v138 &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      if ( v121 )
      {
        if ( v115 )
          updated = MiUpdatePageFileHighInPte(v115, v120);
        else
          updated = MiSwizzleInvalidPte(v120 << 32, v119, *(unsigned __int16 *)(v121 + 204), v117);
        v115 = updated ^ (unsigned __int16)(updated ^ ((_WORD)v40 << 12)) & 0xF000 | 2;
        v138 = v115;
      }
    }
    v123 = v115;
    if ( v29 >= 0xFFFFF6FB7DBED000uLL && v29 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v116, v115, v40, v117) )
      {
        if ( !HIBYTE(word_140C4DE08) && (v115 & 1) != 0 )
          v123 |= 0x8000000000000000uLL;
        *(_QWORD *)v29 = v123;
        MiWritePteShadow(v29, v123);
        goto LABEL_211;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v115 & 1) != 0 )
      {
        v123 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v29 = v123;
LABEL_211:
    v146 = v51;
    if ( (v51 & 4) != 0 )
    {
      v124 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v146);
      if ( !v114 )
        v124 &= ~2uLL;
    }
    else if ( v114 && ((v51 >> 1) & 1) != 0 )
    {
      v124 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v146);
    }
    else
    {
      v124 = 0LL;
    }
    v146 = v124;
    if ( v124 )
      MiReleasePageFileInfo(v139, v124, 0LL);
    v65 = 1;
    if ( v115 )
    {
      v8 = v128;
LABEL_225:
      v64 = v129;
      goto LABEL_99;
    }
    v8 = v128;
    v97 = (unsigned int)MiReducePteUseCount(v29, 1LL) == 0;
    v64 = v129;
    if ( !v97 )
      v8 = 1;
    v128 = v8;
LABEL_99:
    v29 += 8 * v64;
    if ( (v29 & 0x78) == 0 )
    {
      v66 = a3 + 1664;
      v67 = &dword_140C4F580;
      if ( (*(_BYTE *)(a3 + 1848) & 7) != 2 )
        v67 = (LONG *)(a3 + 1856);
      if ( (*v67 & 0x40000000) != 0 )
        goto LABEL_244;
    }
    CurrentIrql = (unsigned __int64)KeGetCurrentPrcb();
    v68 = *(_DWORD *)(CurrentIrql + 12588);
    v69 = *(_DWORD *)(CurrentIrql + 31724);
    v70 = *(_DWORD *)(CurrentIrql + 32412);
    if ( (v68 & 1) == 0 )
    {
      v71 = 0;
      if ( (v68 & 0x1E) != 0 )
      {
        v65 = 2;
      }
      else if ( *(_BYTE *)(CurrentIrql + 12585) )
      {
        v65 = 3;
      }
      else
      {
        v125 = *(_KTHREAD **)(CurrentIrql + 16);
        if ( !v125 || v125 == *(_KTHREAD **)(CurrentIrql + 8) )
          goto LABEL_233;
        v65 = 4;
      }
LABEL_240:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v65, v69, v70);
      if ( !v65 )
        goto LABEL_253;
      v66 = a3 + 1664;
LABEL_244:
      if ( (unsigned int)MiDeletePteWsleCluster(&v152, a3, v17, a6) )
        v8 = 1;
      v128 = v8;
      if ( HIDWORD(v175) )
      {
        if ( (unsigned int)MiDeletePteList((__int64)&v172, (_KPROCESS *)a3, v17, a6, 1) )
          v8 = 1;
        v128 = v8;
      }
      if ( v136 )
      {
        MiUnlockPageTableInternal(v66, v136);
        v136 = 0LL;
      }
      MiUnlockWorkingSetShared(v66, v140);
      v132 = 1;
      MiLockWorkingSetShared(v66);
      goto LABEL_253;
    }
    v71 = 1;
    if ( v70 > 7 )
    {
      if ( *(_BYTE *)(CurrentIrql + 12585) )
        goto LABEL_240;
LABEL_235:
      if ( (v68 & 0x1E) != 0 )
      {
        v65 = 5;
        goto LABEL_240;
      }
      if ( *(_QWORD *)(CurrentIrql + 8) != *(_QWORD *)(CurrentIrql + 24) )
      {
        v65 = 6;
        goto LABEL_240;
      }
LABEL_239:
      _disable();
      v65 = 0;
      *(_DWORD *)(CurrentIrql + 31724) = 0;
      *(_DWORD *)(CurrentIrql + 32412) = 0;
      KiResetGlobalDpcWatchdogProfiler(CurrentIrql);
      _enable();
      goto LABEL_240;
    }
LABEL_233:
    if ( v69 > 7 )
    {
      if ( !v71 )
        goto LABEL_239;
      goto LABEL_235;
    }
LABEL_253:
    v134 += v129 << 12;
LABEL_254:
    v6 = a6;
    if ( v29 > v141 )
      goto LABEL_257;
    v30 = v132;
    LODWORD(v14) = 1;
    v31 = a3 + 1664;
  }
  memset(v171, 0, 0xB8uLL);
  if ( *((_QWORD *)&v152 + 1) )
  {
    LODWORD(v171[0]) = 1;
    v171[2] = 0LL;
    v171[3] = 0LL;
    WORD2(v171[0]) = 0;
    LODWORD(v171[1]) = 20;
    MiInsertTbFlushEntry(v171, (__int64)(*((_QWORD *)&v152 + 1) << 25) >> 16, v153, 0LL);
    MiTerminateWsleCluster((__int64 *)&v152);
    v41 = (_KPROCESS *)a3;
    if ( (unsigned int)MiDeletePteList((__int64)v171, (_KPROCESS *)a3, v17, v6, 0) )
      v8 = 1;
    v128 = v8;
  }
  else
  {
    v41 = (_KPROCESS *)a3;
  }
  if ( HIDWORD(v175) )
  {
    if ( (unsigned int)MiDeletePteList((__int64)&v172, v41, v17, v6, 1) )
      v8 = 1;
    v128 = v8;
  }
  if ( v136 )
  {
    MiUnlockPageTableInternal(v31, v136);
    v136 = 0LL;
  }
  if ( !v137 )
  {
    v38 = v29;
    if ( v133 <= 1 )
    {
      v49 = 2 - v133;
      do
      {
        v38 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v49;
      }
      while ( v49 );
      v6 = a6;
    }
    MiMakeSystemAddressValid(v38, 0LL, (*(_DWORD *)(v144 + 48) >> 12) & 0x3F, v140, v142);
    goto LABEL_67;
  }
  v151 = 0LL;
  memset((char *)v154 + 2, 0, 0xAEuLL);
  v135 = (__int64)(v29 << 25) >> 16;
  v42 = (__int64)(v141 << 25) >> 16;
  LOWORD(v154[0]) = 2145;
  LeafVa = MiGetLeafVa(v135);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C4F938 && LeafVa <= qword_140C4E168 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v46 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v44, 0);
  if ( v46 )
  {
    CurrentIrql = (unsigned int)(v46 - 1);
    LODWORD(v151) = v46 - 1;
    v47 = ((v135 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v151 + 1) = v47;
  }
  else
  {
    LOWORD(v154[0]) |= 4u;
    v154[21] = &v151;
    v154[2] = 0LL;
    v154[3] = AnyMultiplexedVm;
    BYTE2(v154[0]) = BYTE2(v154[0]) & 0xE3 | 4;
    v154[20] = MiGetNextPageTableTail;
    BYTE6(v154[0]) = v140;
    v154[4] = (__int64)(v29 << 25) >> 16;
    v154[5] = v42;
    MiWalkPageTables((__int16 *)v154);
    CurrentIrql = (unsigned int)v151;
    v47 = *((_QWORD *)&v151 + 1);
  }
  v37 = a6[3];
  if ( v47 )
  {
    v48 = v47 - v29;
    v29 = v47;
    a6[3] = v37 + (v48 >> 3);
    v38 = v47;
    if ( (_DWORD)CurrentIrql )
    {
      v38 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( (unsigned int)CurrentIrql > 1 )
      {
        CurrentIrql = (unsigned int)(CurrentIrql - 1);
        do
        {
          v38 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --CurrentIrql;
        }
        while ( CurrentIrql );
      }
    }
    v6 = a6;
    v134 = (__int64)(v47 << 25) >> 16;
LABEL_67:
    v40 = 0xFFFFF68000000000uLL;
    v39 = 0x7FFFFFFFF8LL;
    v136 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v50 = 0LL;
    v132 = 0;
    goto LABEL_69;
  }
  v6 = a6;
  a6[3] = v37 + ((__int64)(v141 - v29) >> 3) + 1;
LABEL_257:
  v28 = v136;
LABEL_258:
  v157 = 0;
  v170 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v163 = 0LL;
  v164 = 0LL;
  v165 = 0LL;
  v166 = 0LL;
  v167 = 0LL;
  v168 = 0LL;
  v169 = 0LL;
  if ( *((_QWORD *)&v152 + 1) )
  {
    v156 = 0;
    v159 = 0LL;
    v160 = 0LL;
    v158 = 20LL;
    v155 = 1;
    MiInsertTbFlushEntry(&v155, (__int64)(*((_QWORD *)&v152 + 1) << 25) >> 16, v153, 0LL);
    MiTerminateWsleCluster((__int64 *)&v152);
    v126 = (_KPROCESS *)a3;
    if ( (unsigned int)MiDeletePteList((__int64)&v155, (_KPROCESS *)a3, v17, v6, 0) )
      v8 = 1;
  }
  else
  {
    v126 = (_KPROCESS *)a3;
  }
  if ( HIDWORD(v175) && (unsigned int)MiDeletePteList((__int64)&v172, v126, v17, v6, 1) )
    v8 = 1;
  if ( v28 )
    MiUnlockPageTableInternal(v131, v28);
  MiUnlockWorkingSetShared(v131, v140);
  return v8;
}
