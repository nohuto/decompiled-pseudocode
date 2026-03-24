/*
 * XREFs of MiDecommitPages @ 0x140334820
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x1402D24B4 (MmStoreDecommitVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x1406B61EC (MmStoreAllocateVirtualMemory.c)
 *     MiDecommitRegion @ 0x1406EE5F0 (MiDecommitRegion.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402092C0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14020E6D0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021B990 (MiVadPureReserve.c)
 *     ExAcquireSpinLockShared @ 0x14021CD80 (ExAcquireSpinLockShared.c)
 *     MiDeletePteList @ 0x140231820 (MiDeletePteList.c)
 *     MiDeleteTransitionPte @ 0x140238830 (MiDeleteTransitionPte.c)
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     MiSetNonResidentPteHeat @ 0x14023E7B0 (MiSetNonResidentPteHeat.c)
 *     MiLocateCloneAddress @ 0x14023EF08 (MiLocateCloneAddress.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiTransferSoftwarePte @ 0x14026A0D8 (MiTransferSoftwarePte.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14028D248 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402940C8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1402ACB24 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiDeletePteWsleCluster @ 0x1402C0C2C (MiDeletePteWsleCluster.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiReleasePageFileSpace @ 0x140303154 (MiReleasePageFileSpace.c)
 *     MiIncreaseUsedPtesCount @ 0x1403097D4 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14030CA60 (MiGetUsedPtesHandle.c)
 *     MiMakeSystemAddressValid @ 0x14030E390 (MiMakeSystemAddressValid.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiAppendWsleCluster @ 0x140335AD0 (MiAppendWsleCluster.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiTerminateWsle @ 0x140336DB0 (MiTerminateWsle.c)
 *     MiTerminateWsleCluster @ 0x14033AD20 (MiTerminateWsleCluster.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiLockTransitionLeafPage @ 0x140364704 (MiLockTransitionLeafPage.c)
 *     MiDecrementCombinedPte @ 0x140366EC4 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiReducePteUseCount @ 0x1403F45E0 (MiReducePteUseCount.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiDecommitLargePte @ 0x14053CBE0 (MiDecommitLargePte.c)
 *     MiDecrementCloneBlockReference @ 0x140559E88 (MiDecrementCloneBlockReference.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A811C (EtwTraceShouldYieldProcessor.c)
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
  __int64 Flink; // rdx
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
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rcx
  unsigned __int64 v52; // r10
  unsigned __int64 v53; // rbx
  unsigned __int64 v54; // r11
  __int64 v55; // rax
  __int64 UsedPtesHandle; // rax
  __int64 v57; // rbx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // r15
  unsigned __int64 v62; // rbx
  __int64 v63; // r8
  __int64 v64; // rax
  unsigned int v65; // ebx
  __int64 v66; // r15
  LONG *v67; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  volatile int DpcRequestSummary; // r8d
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // r15d
  int v72; // edx
  int v73; // eax
  unsigned __int64 v74; // rcx
  __int64 v75; // rdx
  unsigned __int64 v76; // r8
  unsigned __int64 v77; // r8
  struct _LIST_ENTRY *v78; // rax
  __int64 v79; // rax
  char v80; // r8^7
  unsigned __int64 v81; // rbx
  __int64 v82; // r8
  __int64 v83; // r9
  int v84; // eax
  ULONG_PTR v85; // rdx
  unsigned __int64 v86; // r9
  _QWORD *CloneAddress; // rax
  unsigned __int64 v88; // rbx
  __int64 v89; // r8
  bool v90; // zf
  unsigned __int64 v91; // rdi
  __int64 v92; // rax
  __int64 v93; // r8
  ULONG_PTR v94; // r10
  unsigned __int64 v95; // rbx
  BOOL v96; // r15d
  unsigned __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rdx
  unsigned __int64 v100; // rdi
  __int64 v101; // rdx
  unsigned __int64 v102; // rbx
  __int64 v103; // r8
  __int16 v104; // ax
  int v105; // r12d
  __int64 v106; // rdi
  __int64 v107; // r9
  int v108; // r10d
  __int64 v109; // r10
  __int64 v110; // r11
  __int64 updated; // rax
  __int16 v112; // r8
  __int64 v113; // rdx
  __int64 v114; // r8
  unsigned __int64 v115; // rax
  _KTHREAD *NextThread; // rax
  __int64 v117; // rdx
  __int64 v118; // r8
  _DWORD *v119; // r9
  __int64 v120; // rbx
  int v122; // [rsp+30h] [rbp-D0h]
  __int64 v123; // [rsp+38h] [rbp-C8h]
  __int64 v125; // [rsp+48h] [rbp-B8h]
  int v126; // [rsp+50h] [rbp-B0h]
  unsigned int v127; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v128; // [rsp+68h] [rbp-98h]
  unsigned __int64 v129; // [rsp+68h] [rbp-98h]
  unsigned __int64 v130; // [rsp+70h] [rbp-90h]
  int v131; // [rsp+78h] [rbp-88h]
  __int64 v132; // [rsp+80h] [rbp-80h] BYREF
  __int64 v133; // [rsp+88h] [rbp-78h]
  __int64 v134; // [rsp+90h] [rbp-70h]
  ULONG_PTR v135; // [rsp+98h] [rbp-68h]
  int v136; // [rsp+A0h] [rbp-60h]
  int v137; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v138; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v139; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v140; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v141; // [rsp+C0h] [rbp-40h]
  __int64 v142; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v143; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v144; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v145; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v146; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v147; // [rsp+100h] [rbp+0h]
  _QWORD v148[22]; // [rsp+120h] [rbp+20h] BYREF
  int v149; // [rsp+1D0h] [rbp+D0h] BYREF
  __int16 v150; // [rsp+1D4h] [rbp+D4h]
  __int16 v151; // [rsp+1D6h] [rbp+D6h]
  __int64 v152; // [rsp+1D8h] [rbp+D8h]
  __int64 v153; // [rsp+1E0h] [rbp+E0h]
  __int64 v154; // [rsp+1E8h] [rbp+E8h]
  __int128 v155; // [rsp+1F0h] [rbp+F0h]
  __int128 v156; // [rsp+200h] [rbp+100h]
  __int128 v157; // [rsp+210h] [rbp+110h]
  __int128 v158; // [rsp+220h] [rbp+120h]
  __int128 v159; // [rsp+230h] [rbp+130h]
  __int128 v160; // [rsp+240h] [rbp+140h]
  __int128 v161; // [rsp+250h] [rbp+150h]
  __int128 v162; // [rsp+260h] [rbp+160h]
  __int128 v163; // [rsp+270h] [rbp+170h]
  __int64 v164; // [rsp+280h] [rbp+180h]
  _QWORD v165[24]; // [rsp+290h] [rbp+190h] BYREF
  int v166; // [rsp+350h] [rbp+250h] BYREF
  __int16 v167; // [rsp+354h] [rbp+254h]
  __int16 v168; // [rsp+356h] [rbp+256h]
  __int64 v169; // [rsp+358h] [rbp+258h]
  __int64 v170; // [rsp+360h] [rbp+260h]
  __int64 v171; // [rsp+368h] [rbp+268h]
  _BYTE v172[2040]; // [rsp+370h] [rbp+270h] BYREF

  v6 = a6;
  v135 = a2;
  v8 = 0;
  v139 = 0LL;
  v168 = 0;
  v138 = a4;
  memset(v172, 0, sizeof(v172));
  v169 = 256LL;
  v167 = 0;
  v166 = 1;
  v147 = 0LL;
  DWORD2(v147) = 2;
  v146 = 0LL;
  v170 = 0LL;
  v171 = 0LL;
  v123 = 1LL;
  v131 = 0;
  v10 = MiSwizzleInvalidPte(512LL);
  v13 = *(unsigned __int8 *)(a4 + 33);
  v14 = v10;
  v143 = v10;
  v15 = v10;
  v16 = 0xFFFFF68000000000uLL;
  v17 = *(_DWORD *)(a4 + 52);
  v18 = 8 * ((*(unsigned int *)(a4 + 28) | (unsigned __int64)(v13 << 32)) & 0xFFFFFFFFFLL) - 0x98000000000LL;
  v19 = (unsigned int)v17;
  LODWORD(v19) = v17 & 0x7FFFFFFF;
  v20 = v19 | ((unsigned __int64)*(unsigned __int8 *)(a4 + 34) << 31);
  v141 = v18;
  if ( v20 == 0x7FFFFFFFELL )
  {
    v14 = MiSwizzleInvalidPte(32LL * ((*(_DWORD *)(a4 + 48) >> 7) & 0x1F));
    v143 = v14;
    v15 = v14;
  }
  else if ( v17 >= 0 )
  {
    v21 = *(_DWORD *)(a4 + 48);
    if ( (v21 & 0x100000) == 0 || (v21 & 0x1000000) != 0 || (v21 & 0x2000000) == 0 )
      v15 = 0LL;
    v141 = 0LL;
    v131 = MiVadPureReserve(a4);
  }
  v22 = *(unsigned int *)(a4 + 48);
  v23 = *(_DWORD *)(a4 + 48) & 0x500000;
  v142 = v12;
  v127 = 3;
  if ( v23 == 5242880 )
  {
    v24 = (v22 >> 18) & 3;
    v25 = 16LL;
    v123 = MiVadPageSizes[v24];
    if ( v123 != 16 )
      v25 = v12;
    v127 = MiVadPageIndices[v24];
    v142 = v25;
    v11 = 2LL;
  }
  v26 = v11;
  v130 = 0LL;
  if ( a5 )
    v26 = 0;
  v27 = 0LL;
  v136 = v26;
  v28 = v16 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v126 = v12;
  v128 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v29 = v12;
  v30 = a3 + 1664;
  v122 = 0;
  v125 = a3 + 1664;
  v133 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a3 + 1838));
  v31 = *(_BYTE *)(a3 + 1848) & 7;
  if ( v31 < 6u )
  {
    if ( v31 == 2 )
      v34 = &dword_140C4F780;
    else
      v34 = (LONG *)(a3 + 1856);
    v35 = ExAcquireSpinLockShared(v34);
    if ( v34[1] )
      _InterlockedExchange(v34 + 1, 0);
    v29 = v126;
    LODWORD(v12) = 1;
    v30 = a3 + 1664;
    LOBYTE(v134) = v35;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    v134 = CurrentIrql;
    __writecr8(v11);
    if ( KiIrqlFlags
      && ((unsigned __int8)KiIrqlFlags & (unsigned __int8)v12) != 0
      && (unsigned __int8)CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
  }
  if ( v28 > v135 )
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
    if ( v127 > 1 )
      goto LABEL_29;
    v39 = 0xFFFFF68000000000uLL;
    v38 = 0x7FFFFFFFF8LL;
    v41 = 2 - v127;
    do
    {
      v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v41;
    }
    while ( v41 );
LABEL_30:
    if ( (v37 & 0xFFF) == 0 || (_DWORD)Flink )
      break;
    v52 = 0LL;
LABEL_69:
    v53 = *(_QWORD *)v37;
    v54 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v37 >= 0xFFFFF6FB7DBED000uLL
      && v37 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v53 & 1) != 0
      && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v55 = *(_QWORD *)(Flink + 8 * ((v37 >> 3) & 0x1FF));
        Flink = v53 | 0x20;
        if ( (v55 & 0x20) == 0 )
          Flink = v53;
        v53 = Flink;
        if ( (v55 & 0x42) != 0 )
          v53 = Flink | 0x42;
      }
    }
    v144 = v53;
    if ( !v53 )
    {
      if ( v28 > v141 )
        v6[3] += v123;
      if ( v15 )
      {
        UsedPtesHandle = MiGetUsedPtesHandle((__int64)((v37 << 25) - (v39 << 25)) >> 16, Flink);
        v57 = v142;
        MiIncreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v142, v58, v59);
        v61 = v57;
        while ( 1 )
        {
          v62 = v15;
          if ( (unsigned int)MiPteInShadowRange(v37, v60) )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E008) && (v15 & 1) != 0 )
                v62 = v15 | 0x8000000000000000uLL;
              *(_QWORD *)v37 = v62;
              MiWritePteShadow(v37, v62, v63);
              goto LABEL_95;
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v15 & 1) != 0 )
            {
              v62 = v15 | 0x8000000000000000uLL;
            }
          }
          *(_QWORD *)v37 = v62;
LABEL_95:
          v37 += 8LL;
          if ( !--v61 )
          {
            v14 = v143;
            break;
          }
        }
      }
LABEL_97:
      v64 = v123;
LABEL_98:
      v65 = 1;
      goto LABEL_99;
    }
    if ( (v53 & 1) != 0 )
    {
      if ( v123 != 1 )
        goto LABEL_109;
      v137 = v52;
      v74 = v38 & (v128 >> 9);
      v75 = *(_QWORD *)(v74 + v39);
      v76 = v74 + v39;
      if ( v76 >= 0xFFFFF6FB7DBED000uLL
        && v76 <= v54
        && (unsigned int)MiPteHasShadow()
        && (v75 & 1) != 0
        && ((v75 & 0x20) == 0 || (v75 & 0x42) == 0) )
      {
        v78 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v78 )
        {
          v79 = *((_QWORD *)&v78->Flink + ((v77 >> 3) & 0x1FF));
          v80 = HIBYTE(v75);
          if ( (v79 & 0x20) == 0 )
            v80 = HIBYTE(v75);
          HIBYTE(v75) = v80;
          if ( (v79 & 0x42) != 0 )
            HIBYTE(v75) = v80;
        }
      }
      if ( (HIBYTE(v75) & 0xF) == 8 || !(unsigned int)MiAppendWsleCluster(&v146, v125, v28) )
      {
        MiTerminateWsle(v125, v128, 0LL, &v137);
        MiInsertTbFlushEntry(&v166, v128, 1LL, 0LL);
        v81 = v53 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        v144 = v81;
        if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
        {
          *(_QWORD *)v28 = v81;
          MiWritePteShadow(v28, v81, v82);
        }
        else
        {
          *(_QWORD *)v28 = v81;
        }
      }
      if ( HIDWORD(v169) != (_DWORD)v169 - 1 )
        goto LABEL_97;
      if ( (unsigned int)MiDeletePteWsleCluster((__int64)&v146, a3, v15, v6) )
        v8 = 1;
      v122 = v8;
      v73 = MiDeletePteList((__int64)&v166, a3, v15, v6, 1);
      v65 = 1;
LABEL_180:
      v90 = v73 == 0;
      v64 = v123;
      if ( !v90 )
      {
        v8 = 1;
        v122 = 1;
      }
      goto LABEL_99;
    }
    if ( (v53 & 0x400) != 0 )
    {
      if ( MI_PROTO_FORMAT_COMBINED(v53) )
      {
        v84 = MiDecrementCombinedPte(v125, v83);
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
      else if ( !MiIsPrototypePteVadLookup(v53) )
      {
        CloneAddress = MiLocateCloneAddress(a3, v86);
        if ( CloneAddress )
        {
          v84 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v85);
          goto LABEL_138;
        }
      }
      v88 = v15;
      if ( (unsigned int)MiPteInShadowRange(v28, v85) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E008) && (v15 & 1) != 0 )
            v88 = v15 | 0x8000000000000000uLL;
          *(_QWORD *)v28 = v88;
          MiWritePteShadow(v28, v88, v89);
          v90 = v15 == 0;
          goto LABEL_178;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v15 & 1) != 0 )
        {
          v88 = v15 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v28 = v88;
      v90 = v15 == 0;
LABEL_178:
      v65 = 1;
      if ( !v90 )
        goto LABEL_225;
      v73 = MiReducePteUseCount(v28, 1LL);
      goto LABEL_180;
    }
    if ( (v53 & 0x800) != 0 )
    {
      if ( v123 != 1 )
      {
LABEL_109:
        v73 = MiDecommitLargePte(v138, v37, v15, (_DWORD)v6, (__int64)&v166);
        v65 = 1;
        goto LABEL_180;
      }
      v139 = v52;
      v91 = v52;
      v92 = MiLockTransitionLeafPage(v28);
      v94 = v92;
      if ( !v92 )
        goto LABEL_254;
      v95 = 0LL;
      v96 = 1;
      if ( !*(_WORD *)(v92 + 32) )
      {
        v91 = *(_QWORD *)(v92 + 16);
        v97 = *(_QWORD *)(v92 + 40);
        v95 = v91;
        v139 = v91;
        v98 = *(_QWORD *)(qword_140C4E648 + 8 * ((v97 >> 39) & 0x3FF));
        v133 = v98;
        if ( (v91 & 2) != 0 )
          v96 = MI_IS_PTE_IN_WS_SWAP_SET(v98, &v139) != 0;
      }
      LOBYTE(v93) = 17;
      if ( (unsigned int)MiDeleteTransitionPte(v28, v94, v93, 0) == 3 )
        ++a6[1];
      if ( v95 )
        MiReleasePageFileSpace(v133, v91, v96);
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
      v100 = v15;
      if ( !v96 )
      {
        v101 = *(_QWORD *)(v133 + 8LL * ((unsigned __int16)v95 >> 12) + 6944);
        if ( qword_140C4DF40 && (v95 & 0x10) == 0 )
          v95 &= ~qword_140C4DF40;
        v100 = MiTransferSoftwarePte(v14, v101, HIDWORD(v95));
      }
      v102 = v100;
      if ( (unsigned int)MiPteInShadowRange(v28, v99) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E008) && (v100 & 1) != 0 )
            v102 = v100 | 0x8000000000000000uLL;
          *(_QWORD *)v28 = v102;
          MiWritePteShadow(v28, v102, v103);
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
      v90 = v100 == 0;
      goto LABEL_178;
    }
    if ( ((v53 >> 5) & 0x1F) == 0x10 )
    {
      v64 = v123;
      v6[3] += v123;
      goto LABEL_98;
    }
    v104 = v53;
    if ( qword_140C4DF40 && (v53 & 0x10) == 0 )
      v104 = v53 & ~(_WORD)qword_140C4DF40;
    if ( (v104 & 0x400) != 0 || (v104 & 0x800) != 0 || (v104 & 4) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 1272), 0xFFFFFFFFFFFFFFFFuLL);
    v105 = 1;
    v106 = v15;
    v107 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a3 + 1838));
    v133 = v107;
    if ( ((v53 >> 1) & 1) != 0 && !(unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(v107, &v144) )
    {
      v105 = v108;
      v132 = v14;
      MiSetNonResidentPteHeat((unsigned __int64 *)&v132, 0);
      v106 = v132;
      if ( (v14 & 0x400) == 0 )
      {
        v106 = v132 & 0xFFFFFFFFFFFFFFF9uLL;
        v132 &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      if ( v110 )
      {
        if ( v106 )
          updated = MiUpdatePageFileHighInPte(v106, v109);
        else
          updated = MiSwizzleInvalidPte(v109 << 32);
        v106 = updated ^ (unsigned __int16)(updated ^ (v112 << 12)) & 0xF000 | 2;
        v132 = v106;
      }
    }
    v113 = v106;
    if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) && (v106 & 1) != 0 )
          v113 |= 0x8000000000000000uLL;
        *(_QWORD *)v28 = v113;
        MiWritePteShadow(v28, v113, v114);
        goto LABEL_211;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v106 & 1) != 0 )
      {
        v113 |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v28 = v113;
LABEL_211:
    v140 = v53;
    if ( (v53 & 4) != 0 )
    {
      v115 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v140);
      if ( !v105 )
        v115 &= ~2uLL;
    }
    else if ( v105 && ((v53 >> 1) & 1) != 0 )
    {
      v115 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v140);
    }
    else
    {
      v115 = 0LL;
    }
    v140 = v115;
    if ( v115 )
      MiReleasePageFileInfo(v133, v115, 0);
    v65 = 1;
    if ( v106 )
    {
      v8 = v122;
LABEL_225:
      v64 = v123;
      goto LABEL_99;
    }
    v8 = v122;
    v90 = (unsigned int)MiReducePteUseCount(v28, 1LL) == 0;
    v64 = v123;
    if ( !v90 )
      v8 = 1;
    v122 = v8;
LABEL_99:
    v28 += 8 * v64;
    if ( (v28 & 0x78) == 0 )
    {
      v66 = a3 + 1664;
      v67 = &dword_140C4F780;
      if ( (*(_BYTE *)(a3 + 1848) & 7) != 2 )
        v67 = (LONG *)(a3 + 1856);
      if ( (*v67 & 0x40000000) != 0 )
        goto LABEL_244;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
    DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
    DpcTimeCount = CurrentPrcb->DpcTimeCount;
    if ( (DpcRequestSummary & 1) == 0 )
    {
      v72 = 0;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v65 = 2;
      }
      else if ( CurrentPrcb->QuantumEnd )
      {
        v65 = 3;
      }
      else
      {
        NextThread = CurrentPrcb->NextThread;
        if ( !NextThread || NextThread == CurrentPrcb->CurrentThread )
          goto LABEL_233;
        v65 = 4;
      }
LABEL_240:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v65, DpcWatchdogCount, DpcTimeCount);
      if ( !v65 )
        goto LABEL_253;
      v66 = a3 + 1664;
LABEL_244:
      if ( (unsigned int)MiDeletePteWsleCluster((__int64)&v146, a3, v15, a6) )
        v8 = 1;
      v122 = v8;
      if ( HIDWORD(v169) )
      {
        if ( (unsigned int)MiDeletePteList((__int64)&v166, a3, v15, a6, 1) )
          v8 = 1;
        v122 = v8;
      }
      if ( v130 )
      {
        MiUnlockPageTableInternal(v66, v130);
        v130 = 0LL;
      }
      MiUnlockWorkingSetShared(v66, v134);
      v126 = 1;
      MiLockWorkingSetShared(v66, v117, v118, v119);
      goto LABEL_253;
    }
    v72 = 1;
    if ( DpcTimeCount > 7 )
    {
      if ( CurrentPrcb->QuantumEnd )
        goto LABEL_240;
LABEL_235:
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v65 = 5;
        goto LABEL_240;
      }
      if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
      {
        v65 = 6;
        goto LABEL_240;
      }
LABEL_239:
      _disable();
      v65 = 0;
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler((__int64)CurrentPrcb);
      _enable();
      goto LABEL_240;
    }
LABEL_233:
    if ( DpcWatchdogCount > 7 )
    {
      if ( !v72 )
        goto LABEL_239;
      goto LABEL_235;
    }
LABEL_253:
    v128 += v123 << 12;
LABEL_254:
    v6 = a6;
    if ( v28 > v135 )
      goto LABEL_257;
    v29 = v126;
    LODWORD(v12) = 1;
    v30 = a3 + 1664;
  }
  memset(v165, 0, 0xB8uLL);
  if ( *((_QWORD *)&v146 + 1) )
  {
    LODWORD(v165[0]) = 1;
    v165[2] = 0LL;
    v165[3] = 0LL;
    WORD2(v165[0]) = 0;
    LODWORD(v165[1]) = 20;
    MiInsertTbFlushEntry(v165, (__int64)(*((_QWORD *)&v146 + 1) << 25) >> 16, v147, 0LL);
    MiTerminateWsleCluster(&v146);
    v40 = a3;
    if ( (unsigned int)MiDeletePteList((__int64)v165, a3, v15, v6, 0) )
      v8 = 1;
    v122 = v8;
  }
  else
  {
    v40 = a3;
  }
  if ( HIDWORD(v169) )
  {
    if ( (unsigned int)MiDeletePteList((__int64)&v166, v40, v15, v6, 1) )
      v8 = 1;
    v122 = v8;
  }
  if ( v130 )
  {
    MiUnlockPageTableInternal(v30, v130);
    v130 = 0LL;
  }
  if ( !v131 )
  {
    v37 = v28;
    if ( v127 <= 1 )
    {
      v51 = 2 - v127;
      do
      {
        v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v51;
      }
      while ( v51 );
      v6 = a6;
    }
    MiMakeSystemAddressValid(v37, 0LL, (*(_DWORD *)(v138 + 48) >> 12) & 0x3F, v134, v136);
    goto LABEL_67;
  }
  v145 = 0LL;
  memset((char *)v148 + 2, 0, 0xAEuLL);
  v129 = (__int64)(v28 << 25) >> 16;
  v42 = (__int64)(v135 << 25) >> 16;
  LOWORD(v148[0]) = 2145;
  LeafVa = MiGetLeafVa(v129);
  if ( LeafVa < 0xFFFF800000000000uLL || LeafVa >= qword_140C4FB38 && LeafVa <= qword_140C4E368 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v46 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v44, 0);
  if ( v46 )
  {
    v47 = v46 - 1;
    LODWORD(v145) = v46 - 1;
    v48 = ((v129 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v145 + 1) = v48;
  }
  else
  {
    LOWORD(v148[0]) |= 4u;
    v148[21] = &v145;
    v148[2] = 0LL;
    v148[3] = AnyMultiplexedVm;
    BYTE2(v148[0]) = BYTE2(v148[0]) & 0xE3 | 4;
    v148[20] = MiGetNextPageTableTail;
    BYTE6(v148[0]) = v134;
    v148[4] = (__int64)(v28 << 25) >> 16;
    v148[5] = v42;
    MiWalkPageTables((__int64)v148);
    v47 = v145;
    v48 = *((_QWORD *)&v145 + 1);
  }
  Flink = a6[3];
  if ( v48 )
  {
    v49 = v48 - v28;
    v28 = v48;
    a6[3] = Flink + (v49 >> 3);
    v37 = v48;
    if ( v47 )
    {
      v37 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v47 > 1 )
      {
        v50 = v47 - 1;
        do
        {
          v37 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v50;
        }
        while ( v50 );
      }
    }
    v6 = a6;
    v128 = (__int64)(v48 << 25) >> 16;
LABEL_67:
    v39 = 0xFFFFF68000000000uLL;
    v38 = 0x7FFFFFFFF8LL;
    v130 = ((v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v52 = 0LL;
    v126 = 0;
    goto LABEL_69;
  }
  v6 = a6;
  a6[3] = Flink + ((__int64)(v135 - v28) >> 3) + 1;
LABEL_257:
  v27 = v130;
LABEL_258:
  v151 = 0;
  v164 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v163 = 0LL;
  if ( *((_QWORD *)&v146 + 1) )
  {
    v150 = 0;
    v153 = 0LL;
    v154 = 0LL;
    v152 = 20LL;
    v149 = 1;
    MiInsertTbFlushEntry(&v149, (__int64)(*((_QWORD *)&v146 + 1) << 25) >> 16, v147, 0LL);
    MiTerminateWsleCluster(&v146);
    v120 = a3;
    if ( (unsigned int)MiDeletePteList((__int64)&v149, a3, v15, v6, 0) )
      v8 = 1;
  }
  else
  {
    v120 = a3;
  }
  if ( HIDWORD(v169) && (unsigned int)MiDeletePteList((__int64)&v166, v120, v15, v6, 1) )
    v8 = 1;
  if ( v27 )
    MiUnlockPageTableInternal(v125, v27);
  MiUnlockWorkingSetShared(v125, v134);
  return v8;
}
