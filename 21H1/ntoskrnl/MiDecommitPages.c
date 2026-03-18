/*
 * XREFs of MiDecommitPages @ 0x14021CD20
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x140321C94 (MmStoreDecommitVirtualMemory.c)
 *     MiDecommitRegion @ 0x14062F1B0 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406E17BC (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021AF70 (MiVadPureReserve.c)
 *     MiAppendWsleCluster @ 0x14021DFD0 (MiAppendWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiSetNonResidentPteHeat @ 0x140224C70 (MiSetNonResidentPteHeat.c)
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     MiTerminateWsle @ 0x14028D950 (MiTerminateWsle.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiDeletePteList @ 0x1402939C0 (MiDeletePteList.c)
 *     MiDeleteTransitionPte @ 0x14029A9D0 (MiDeleteTransitionPte.c)
 *     MiTerminateWsleCluster @ 0x14029AE10 (MiTerminateWsleCluster.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x1402AB620 (MiReleasePageFileSpace.c)
 *     MiLockTransitionLeafPage @ 0x1402ACD48 (MiLockTransitionLeafPage.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiIncreaseUsedPtesCount @ 0x1402AF310 (MiIncreaseUsedPtesCount.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402EE388 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402FDD94 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiDeletePteWsleCluster @ 0x140310EB8 (MiDeletePteWsleCluster.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140344F70 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x140350D84 (MiTransferSoftwarePte.c)
 *     MiDecrementCombinedPte @ 0x140364274 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiReducePteUseCount @ 0x1403ED870 (MiReducePteUseCount.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiDecommitLargePte @ 0x1405370C0 (MiDecommitLargePte.c)
 *     MiDecrementCloneBlockReference @ 0x140554398 (MiDecrementCloneBlockReference.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A255C (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiDecommitPages(unsigned __int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
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
  ULONG_PTR v28; // r13
  int v29; // r10d
  __int64 v30; // rbx
  unsigned __int8 v31; // al
  unsigned __int64 CurrentIrql; // rcx
  _DWORD *SchedulerAssist; // r9
  LONG *v34; // rbx
  KIRQL v35; // al
  __int64 Flink; // rdx
  ULONG_PTR v37; // rdi
  __int64 v38; // r9
  unsigned __int64 v39; // r8
  int v40; // edi
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // r8
  unsigned __int64 LeafVa; // rax
  unsigned __int64 v45; // r9
  unsigned __int64 *AnyMultiplexedVm; // rbx
  int v47; // eax
  unsigned __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // r10
  unsigned __int64 v52; // rbx
  unsigned __int64 v53; // r11
  __int64 v54; // rax
  __int64 UsedPtesHandle; // rax
  __int64 v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // r15
  unsigned __int64 v59; // rbx
  __int64 v60; // rcx
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
  unsigned __int64 v79; // rbx
  __int64 v80; // r9
  __int64 v81; // r9
  int v82; // eax
  ULONG_PTR v83; // rdx
  __int64 v84; // r9
  ULONG_PTR CloneAddress; // rax
  unsigned __int64 v86; // rbx
  __int64 v87; // rdx
  __int64 v88; // rcx
  bool v89; // zf
  __int64 v90; // rdi
  __int64 v91; // rax
  ULONG_PTR v92; // r10
  __int64 v93; // rbx
  BOOL v94; // r15d
  unsigned __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // r9
  __int64 v99; // rdi
  __int64 v100; // rdx
  unsigned __int64 v101; // rbx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int16 v104; // ax
  int v105; // r12d
  unsigned __int64 v106; // rdi
  __int64 v107; // rcx
  __int64 v108; // r9
  int v109; // r10d
  __int64 v110; // r10
  __int64 v111; // r11
  __int64 updated; // rax
  __int16 v113; // r8
  unsigned __int64 v114; // rdx
  __int64 v115; // rax
  _KTHREAD *v116; // rax
  int v117; // ebx
  int v119; // [rsp+30h] [rbp-D0h]
  __int64 v120; // [rsp+38h] [rbp-C8h]
  __int64 v122; // [rsp+48h] [rbp-B8h]
  int v123; // [rsp+50h] [rbp-B0h]
  unsigned int v124; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v125; // [rsp+68h] [rbp-98h]
  unsigned __int64 v126; // [rsp+68h] [rbp-98h]
  __int64 v127; // [rsp+70h] [rbp-90h]
  int v128; // [rsp+78h] [rbp-88h]
  unsigned __int64 v129; // [rsp+80h] [rbp-80h] BYREF
  __int64 v130; // [rsp+88h] [rbp-78h]
  unsigned __int64 v131; // [rsp+90h] [rbp-70h]
  ULONG_PTR v132; // [rsp+98h] [rbp-68h]
  int v133; // [rsp+A0h] [rbp-60h]
  int v134; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v135; // [rsp+A8h] [rbp-58h]
  __int64 v136; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v137; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v138; // [rsp+C0h] [rbp-40h]
  __int64 v139; // [rsp+C8h] [rbp-38h]
  __int64 v140; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v141; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v142; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v143; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v144; // [rsp+100h] [rbp+0h]
  _QWORD v145[22]; // [rsp+120h] [rbp+20h] BYREF
  int v146; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v147; // [rsp+1D4h] [rbp+D4h]
  __int16 v148; // [rsp+1D6h] [rbp+D6h]
  __int64 v149; // [rsp+1D8h] [rbp+D8h]
  __int64 v150; // [rsp+1E0h] [rbp+E0h]
  __int64 v151; // [rsp+1E8h] [rbp+E8h]
  __int128 v152; // [rsp+1F0h] [rbp+F0h]
  __int128 v153; // [rsp+200h] [rbp+100h]
  __int128 v154; // [rsp+210h] [rbp+110h]
  __int128 v155; // [rsp+220h] [rbp+120h]
  __int128 v156; // [rsp+230h] [rbp+130h]
  __int128 v157; // [rsp+240h] [rbp+140h]
  __int128 v158; // [rsp+250h] [rbp+150h]
  __int128 v159; // [rsp+260h] [rbp+160h]
  __int128 v160; // [rsp+270h] [rbp+170h]
  __int64 v161; // [rsp+280h] [rbp+180h]
  _QWORD v162[24]; // [rsp+290h] [rbp+190h] BYREF
  int v163; // [rsp+350h] [rbp+250h] BYREF
  __int16 v164; // [rsp+354h] [rbp+254h]
  __int16 v165; // [rsp+356h] [rbp+256h]
  __int64 v166; // [rsp+358h] [rbp+258h]
  __int64 v167; // [rsp+360h] [rbp+260h]
  __int64 v168; // [rsp+368h] [rbp+268h]
  _BYTE v169[2040]; // [rsp+370h] [rbp+270h] BYREF

  v6 = a6;
  v132 = a2;
  v8 = 0;
  v136 = 0LL;
  v165 = 0;
  v135 = a4;
  memset(v169, 0, sizeof(v169));
  v166 = 256LL;
  v164 = 0;
  v163 = 1;
  v144 = 0LL;
  DWORD2(v144) = 2;
  v143 = 0LL;
  v167 = 0LL;
  v168 = 0LL;
  v120 = 1LL;
  v128 = 0;
  v10 = MiSwizzleInvalidPte(512LL);
  v13 = *(unsigned __int8 *)(a4 + 33);
  v14 = v10;
  v140 = v10;
  v15 = v10;
  v16 = 0xFFFFF68000000000uLL;
  v17 = *(_DWORD *)(a4 + 52);
  v18 = 8 * ((*(unsigned int *)(a4 + 28) | (unsigned __int64)(v13 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v19 = (unsigned int)v17;
  LODWORD(v19) = v17 & 0x7FFFFFFF;
  v20 = v19 | ((unsigned __int64)*(unsigned __int8 *)(a4 + 34) << 31);
  v138 = v18;
  if ( v20 == 0x7FFFFFFFELL )
  {
    v14 = MiSwizzleInvalidPte(32LL * ((*(_DWORD *)(a4 + 48) >> 7) & 0x1F));
    v140 = v14;
    v15 = v14;
  }
  else if ( v17 >= 0 )
  {
    v21 = *(_DWORD *)(a4 + 48);
    if ( (v21 & 0x100000) == 0 || (v21 & 0x1000000) != 0 || (v21 & 0x2000000) == 0 )
      v15 = 0LL;
    v138 = 0LL;
    v128 = MiVadPureReserve(a4);
  }
  v22 = *(unsigned int *)(a4 + 48);
  v23 = *(_DWORD *)(a4 + 48) & 0x500000;
  v139 = v12;
  v124 = 3;
  if ( v23 == 5242880 )
  {
    v24 = (v22 >> 18) & 3;
    v25 = 16LL;
    v120 = MiVadPageSizes[v24];
    if ( v120 != 16 )
      v25 = v12;
    v124 = MiVadPageIndices[v24];
    v139 = v25;
    v11 = 2LL;
  }
  v26 = v11;
  v127 = 0LL;
  if ( a5 )
    v26 = 0;
  v27 = 0LL;
  v133 = v26;
  v28 = v16 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v123 = v12;
  v125 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v29 = v12;
  v30 = a3 + 1664;
  v119 = 0;
  v122 = a3 + 1664;
  v130 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  v31 = *(_BYTE *)(a3 + 1848) & 7;
  if ( v31 < 6u )
  {
    if ( v31 == 2 )
      v34 = &dword_140C4F6C0;
    else
      v34 = (LONG *)(a3 + 1856);
    v35 = ExAcquireSpinLockShared(v34);
    if ( v34[1] )
      CurrentIrql = (unsigned int)_InterlockedExchange(v34 + 1, 0);
    v29 = v123;
    LODWORD(v12) = 1;
    v30 = a3 + 1664;
    LOBYTE(v131) = v35;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v131 = CurrentIrql;
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
  if ( v28 > v132 )
    goto LABEL_261;
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
    CurrentIrql = v124;
    if ( v124 > 1 )
      goto LABEL_29;
    v39 = 0xFFFFF68000000000uLL;
    v38 = 0x7FFFFFFFF8LL;
    CurrentIrql = 2 - v124;
    do
    {
      v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --CurrentIrql;
    }
    while ( CurrentIrql );
LABEL_30:
    if ( (v37 & 0xFFF) == 0 || (_DWORD)Flink )
      break;
    v51 = 0LL;
LABEL_69:
    v52 = *(_QWORD *)v37;
    v53 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v37 >= 0xFFFFF6FB7DBED000uLL
      && v37 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(CurrentIrql, Flink)
      && (v52 & 1) != 0
      && ((v52 & 0x20) == 0 || (v52 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v54 = *(_QWORD *)(Flink + 8 * ((v37 >> 3) & 0x1FF));
        Flink = v52 | 0x20;
        if ( (v54 & 0x20) == 0 )
          Flink = v52;
        v52 = Flink;
        if ( (v54 & 0x42) != 0 )
          v52 = Flink | 0x42;
      }
    }
    v141 = v52;
    if ( !v52 )
    {
      if ( v28 > v138 )
        v6[3] += v120;
      if ( v15 )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)((v37 << 25) - (v39 << 25)) >> 16);
        v56 = v139;
        MiIncreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v139);
        v58 = v56;
        while ( 1 )
        {
          v59 = v15;
          if ( (unsigned int)MiPteInShadowRange(v37, v57) )
          {
            if ( (unsigned int)MiPteHasShadow(v60, v57) )
            {
              if ( !HIBYTE(word_140C4DF48) && (v15 & 1) != 0 )
                v59 = v15 | 0x8000000000000000uLL;
              *(_QWORD *)v37 = v59;
              MiWritePteShadow(v37, v59);
              goto LABEL_95;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v15 & 1) != 0 )
            {
              v59 = v15 | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v37 = v59;
LABEL_95:
          v37 += 8LL;
          if ( !--v58 )
          {
            v14 = v140;
            break;
          }
        }
      }
LABEL_97:
      v61 = v120;
LABEL_98:
      v62 = 1;
      goto LABEL_99;
    }
    if ( (v52 & 1) != 0 )
    {
      if ( v120 != 1 )
        goto LABEL_109;
      v134 = v51;
      v70 = v38 & (v125 >> 9);
      v71 = *(_QWORD *)(v70 + v39);
      v72 = v70 + v39;
      if ( v72 >= 0xFFFFF6FB7DBED000uLL
        && v72 <= v53
        && (unsigned int)MiPteHasShadow(v70, v71)
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
      if ( (HIBYTE(v71) & 0xF) == 8 || !(unsigned int)MiAppendWsleCluster(&v143, v122, v28) )
      {
        MiTerminateWsle(v122, v125, 0LL, &v134);
        MiInsertTbFlushEntry(&v163, v125, 1LL, 0LL);
        v79 = v52 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v141 = v79;
        if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow(v78, v77) )
        {
          *(_QWORD *)v28 = v79;
          MiWritePteShadow(v28, v79);
        }
        else
        {
          *(_QWORD *)v28 = v79;
        }
      }
      if ( HIDWORD(v166) != (_DWORD)v166 - 1 )
        goto LABEL_97;
      if ( (unsigned int)MiDeletePteWsleCluster(&v143, a3, v15, v6) )
        v8 = 1;
      v119 = v8;
      v69 = MiDeletePteList((unsigned int)&v163, a3, v15, (_DWORD)v6, 1);
      v62 = 1;
LABEL_183:
      v89 = v69 == 0;
      v61 = v120;
      if ( !v89 )
      {
        v8 = 1;
        v119 = 1;
      }
      goto LABEL_99;
    }
    if ( (v52 & 0x400) != 0 )
    {
      v80 = v52;
      if ( qword_140C4DE80 && (v52 & 0x10) == 0 )
        v80 = v52 & ~qword_140C4DE80;
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v52, Flink, v39, v80 >> 16) )
      {
        v82 = MiDecrementCombinedPte(v122, v81);
LABEL_141:
        if ( v82 == 3 )
        {
          ++v6[1];
        }
        else if ( v82 == 5 )
        {
          ++v6[2];
        }
      }
      else if ( !(unsigned int)MiIsPrototypePteVadLookup(v52) )
      {
        CloneAddress = MiLocateCloneAddress(a3, v84);
        if ( CloneAddress )
        {
          v82 = MiDecrementCloneBlockReference(CloneAddress, v83);
          goto LABEL_141;
        }
      }
      v86 = v15;
      if ( (unsigned int)MiPteInShadowRange(v28, v83) )
      {
        if ( (unsigned int)MiPteHasShadow(v88, v87) )
        {
          if ( !HIBYTE(word_140C4DF48) && (v15 & 1) != 0 )
            v86 = v15 | 0x8000000000000000uLL;
          *(_QWORD *)v28 = v86;
          MiWritePteShadow(v28, v86);
          v89 = v15 == 0;
          goto LABEL_181;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v15 & 1) != 0 )
        {
          v86 = v15 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v28 = v86;
      v89 = v15 == 0;
LABEL_181:
      v62 = 1;
      if ( !v89 )
        goto LABEL_228;
      v69 = MiReducePteUseCount(v28, 1LL);
      goto LABEL_183;
    }
    if ( (v52 & 0x800) != 0 )
    {
      if ( v120 != 1 )
      {
LABEL_109:
        v69 = MiDecommitLargePte(v135, v37, v15, (_DWORD)v6, (__int64)&v163);
        v62 = 1;
        goto LABEL_183;
      }
      v136 = v51;
      v90 = v51;
      v91 = MiLockTransitionLeafPage(v28);
      v92 = v91;
      if ( !v91 )
        goto LABEL_257;
      v93 = 0LL;
      v94 = 1;
      if ( !*(_WORD *)(v91 + 32) )
      {
        v90 = *(_QWORD *)(v91 + 16);
        v95 = *(_QWORD *)(v91 + 40);
        v93 = v90;
        v136 = v90;
        v96 = *(_QWORD *)(qword_140C4E588 + 8 * ((v95 >> 39) & 0x3FF));
        v130 = v96;
        if ( (v90 & 2) != 0 )
          v94 = MI_IS_PTE_IN_WS_SWAP_SET(v96, &v136) != 0;
      }
      if ( (unsigned int)MiDeleteTransitionPte(v28, v92) == 3 )
        ++a6[1];
      if ( v93 )
        MiReleasePageFileSpace(v130, v90, v94, v98);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      v99 = v15;
      if ( !v94 )
      {
        v100 = *(_QWORD *)(v130 + 8LL * ((unsigned __int16)v93 >> 12) + 6944);
        if ( qword_140C4DE80 && (v93 & 0x10) == 0 )
          v93 &= ~qword_140C4DE80;
        v99 = MiTransferSoftwarePte(v14, v100, HIDWORD(v93), 2LL);
      }
      v101 = v99;
      if ( (unsigned int)MiPteInShadowRange(v28, v97) )
      {
        if ( (unsigned int)MiPteHasShadow(v103, v102) )
        {
          if ( !HIBYTE(word_140C4DF48) && (v99 & 1) != 0 )
            v101 = v99 | 0x8000000000000000uLL;
          *(_QWORD *)v28 = v101;
          MiWritePteShadow(v28, v101);
          goto LABEL_180;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v99 & 1) != 0 )
        {
          v101 = v99 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v28 = v101;
LABEL_180:
      v89 = v99 == 0;
      goto LABEL_181;
    }
    if ( ((v52 >> 5) & 0x1F) == 0x10 )
    {
      v61 = v120;
      v6[3] += v120;
      goto LABEL_98;
    }
    v104 = v52;
    if ( qword_140C4DE80 && (v52 & 0x10) == 0 )
      v104 = v52 & ~(_WORD)qword_140C4DE80;
    if ( (v104 & 0x400) != 0 || (v104 & 0x800) != 0 || (v104 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
    v105 = 1;
    v106 = v15;
    v107 = *(unsigned __int16 *)(a3 + 1838);
    v108 = *(_QWORD *)(qword_140C4E588 + 8 * v107);
    v130 = v108;
    if ( ((v52 >> 1) & 1) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v108, &v141) )
    {
      v105 = v109;
      v129 = v14;
      MiSetNonResidentPteHeat(&v129, 0LL);
      v106 = v129;
      if ( (v14 & 0x400) == 0 )
      {
        v106 = v129 & 0xFFFFFFFFFFFFFFF9uLL;
        v129 &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      if ( v111 )
      {
        if ( v106 )
          updated = MiUpdatePageFileHighInPte(v106, v110, *(unsigned __int16 *)(v111 + 204));
        else
          updated = MiSwizzleInvalidPte(v110 << 32);
        v106 = updated ^ (unsigned __int16)(updated ^ (v113 << 12)) & 0xF000 | 2;
        v129 = v106;
      }
    }
    v114 = v106;
    if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow(v107, v106) )
      {
        if ( !HIBYTE(word_140C4DF48) && (v106 & 1) != 0 )
          v114 |= 0x8000000000000000uLL;
        *(_QWORD *)v28 = v114;
        MiWritePteShadow(v28, v114);
        goto LABEL_214;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v106 & 1) != 0 )
      {
        v114 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v28 = v114;
LABEL_214:
    v137 = v52;
    if ( (v52 & 4) != 0 )
    {
      v115 = MI_READ_PTE_LOCK_FREE(&v137);
      if ( !v105 )
        v115 &= ~2uLL;
    }
    else if ( v105 && ((v52 >> 1) & 1) != 0 )
    {
      v115 = MI_READ_PTE_LOCK_FREE(&v137);
    }
    else
    {
      v115 = 0LL;
    }
    v137 = v115;
    if ( v115 )
      MiReleasePageFileInfo(v130, v115, 0LL);
    v62 = 1;
    if ( v106 )
    {
      v8 = v119;
LABEL_228:
      v61 = v120;
      goto LABEL_99;
    }
    v8 = v119;
    v89 = (unsigned int)MiReducePteUseCount(v28, 1LL) == 0;
    v61 = v120;
    if ( !v89 )
      v8 = 1;
    v119 = v8;
LABEL_99:
    v28 += 8 * v61;
    if ( (v28 & 0x78) == 0 )
    {
      v63 = a3 + 1664;
      v64 = &dword_140C4F6C0;
      if ( (*(_BYTE *)(a3 + 1848) & 7) != 2 )
        v64 = (LONG *)(a3 + 1856);
      if ( (*v64 & 0x40000000) != 0 )
        goto LABEL_247;
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
        v116 = *(_KTHREAD **)(CurrentIrql + 16);
        if ( !v116 || v116 == *(_KTHREAD **)(CurrentIrql + 8) )
          goto LABEL_236;
        v62 = 4;
      }
LABEL_243:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v62, v66, v67);
      if ( !v62 )
        goto LABEL_256;
      v63 = a3 + 1664;
LABEL_247:
      if ( (unsigned int)MiDeletePteWsleCluster(&v143, a3, v15, a6) )
        v8 = 1;
      v119 = v8;
      if ( HIDWORD(v166) )
      {
        if ( (unsigned int)MiDeletePteList((unsigned int)&v163, a3, v15, (_DWORD)a6, 1) )
          v8 = 1;
        v119 = v8;
      }
      if ( v127 )
      {
        MiUnlockPageTableInternal(v63, v127);
        v127 = 0LL;
      }
      MiUnlockWorkingSetShared(v63, v131);
      v123 = 1;
      MiLockWorkingSetShared(v63);
      goto LABEL_256;
    }
    v68 = 1;
    if ( v67 > 7 )
    {
      if ( *(_BYTE *)(CurrentIrql + 12585) )
        goto LABEL_243;
LABEL_238:
      if ( (v65 & 0x1E) != 0 )
      {
        v62 = 5;
        goto LABEL_243;
      }
      if ( *(_QWORD *)(CurrentIrql + 8) != *(_QWORD *)(CurrentIrql + 24) )
      {
        v62 = 6;
        goto LABEL_243;
      }
LABEL_242:
      _disable();
      v62 = 0;
      *(_DWORD *)(CurrentIrql + 31724) = 0;
      *(_DWORD *)(CurrentIrql + 32412) = 0;
      KiResetGlobalDpcWatchdogProfiler();
      _enable();
      goto LABEL_243;
    }
LABEL_236:
    if ( v66 > 7 )
    {
      if ( !v68 )
        goto LABEL_242;
      goto LABEL_238;
    }
LABEL_256:
    v125 += v120 << 12;
LABEL_257:
    v6 = a6;
    if ( v28 > v132 )
      goto LABEL_260;
    v29 = v123;
    LODWORD(v12) = 1;
    v30 = a3 + 1664;
  }
  memset(v162, 0, 0xB8uLL);
  if ( *((_QWORD *)&v143 + 1) )
  {
    LODWORD(v162[0]) = 1;
    v162[2] = 0LL;
    v162[3] = 0LL;
    WORD2(v162[0]) = 0;
    LODWORD(v162[1]) = 20;
    MiInsertTbFlushEntry(v162, (__int64)(*((_QWORD *)&v143 + 1) << 25) >> 16, v144, 0LL);
    MiTerminateWsleCluster(&v143);
    v40 = a3;
    if ( (unsigned int)MiDeletePteList((unsigned int)v162, a3, v15, (_DWORD)v6, 0) )
      v8 = 1;
    v119 = v8;
  }
  else
  {
    v40 = a3;
  }
  if ( HIDWORD(v166) )
  {
    if ( (unsigned int)MiDeletePteList((unsigned int)&v163, v40, v15, (_DWORD)v6, 1) )
      v8 = 1;
    v119 = v8;
  }
  if ( v127 )
  {
    MiUnlockPageTableInternal(v30, v127);
    v127 = 0LL;
  }
  if ( !v128 )
  {
    v37 = v28;
    if ( v124 <= 1 )
    {
      v50 = 2 - v124;
      do
      {
        v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v50;
      }
      while ( v50 );
      v6 = a6;
    }
    MiMakeSystemAddressValid(v37, v133);
    goto LABEL_67;
  }
  v142 = 0LL;
  memset((char *)v145 + 2, 0, 0xAEuLL);
  v126 = (__int64)(v28 << 25) >> 16;
  v41 = (__int64)(v132 << 25) >> 16;
  LOWORD(v145[0]) = 2145;
  LeafVa = MiGetLeafVa(v126, v42, v43, v126);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C4FA78 && LeafVa <= qword_140C4E2A8 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(1LL);
  v47 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v45, 0);
  if ( v47 )
  {
    CurrentIrql = (unsigned int)(v47 - 1);
    LODWORD(v142) = v47 - 1;
    v48 = ((v126 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v142 + 1) = v48;
  }
  else
  {
    LOWORD(v145[0]) |= 4u;
    v145[21] = &v142;
    v145[2] = 0LL;
    v145[3] = AnyMultiplexedVm;
    BYTE2(v145[0]) = BYTE2(v145[0]) & 0xE3 | 4;
    v145[20] = MiGetNextPageTableTail;
    BYTE6(v145[0]) = v131;
    v145[4] = (__int64)(v28 << 25) >> 16;
    v145[5] = v41;
    MiWalkPageTables(v145);
    CurrentIrql = (unsigned int)v142;
    v48 = *((_QWORD *)&v142 + 1);
  }
  Flink = a6[3];
  if ( v48 )
  {
    v49 = v48 - v28;
    v28 = v48;
    a6[3] = Flink + (v49 >> 3);
    v37 = v48;
    if ( (_DWORD)CurrentIrql )
    {
      v37 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
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
    v125 = (__int64)(v48 << 25) >> 16;
LABEL_67:
    v39 = 0xFFFFF68000000000uLL;
    v38 = 0x7FFFFFFFF8LL;
    v127 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v51 = 0LL;
    v123 = 0;
    goto LABEL_69;
  }
  LODWORD(v6) = (_DWORD)a6;
  a6[3] = Flink + ((__int64)(v132 - v28) >> 3) + 1;
LABEL_260:
  v27 = v127;
LABEL_261:
  v148 = 0;
  v161 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  if ( *((_QWORD *)&v143 + 1) )
  {
    v147 = 0;
    v150 = 0LL;
    v151 = 0LL;
    v149 = 20LL;
    v146 = 1;
    MiInsertTbFlushEntry(&v146, (__int64)(*((_QWORD *)&v143 + 1) << 25) >> 16, v144, 0LL);
    MiTerminateWsleCluster(&v143);
    v117 = a3;
    if ( (unsigned int)MiDeletePteList((unsigned int)&v146, a3, v15, (_DWORD)v6, 0) )
      v8 = 1;
  }
  else
  {
    v117 = a3;
  }
  if ( HIDWORD(v166) && (unsigned int)MiDeletePteList((unsigned int)&v163, v117, v15, (_DWORD)v6, 1) )
    v8 = 1;
  if ( v27 )
    MiUnlockPageTableInternal(v122, v27);
  MiUnlockWorkingSetShared(v122, v131);
  return v8;
}
