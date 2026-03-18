/*
 * XREFs of MiResolvePageFileFault @ 0x140313F9C
 * Callers:
 *     MiDispatchFault @ 0x1402A0EE0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1402A7870 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x1403125E8 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiSetPfnBlink @ 0x140221F20 (MiSetPfnBlink.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140227354 (MiGetAvailablePagesBelowPriority.c)
 *     MiFreeInPageSupportBlock @ 0x140229534 (MiFreeInPageSupportBlock.c)
 *     MiObtainProtoReference @ 0x140229634 (MiObtainProtoReference.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiSufficientAvailablePages @ 0x1402488D0 (MiSufficientAvailablePages.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiAllocateInPageSupport @ 0x14025EAF0 (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x14025EBC0 (MiComputeFaultNode.c)
 *     MiInitializeReadInProgressPfn @ 0x140261AC0 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1402622EC (MiReduceMdl.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiObtainFaultCharges @ 0x1402ADCF0 (MiObtainFaultCharges.c)
 *     MiProtectionToCacheAttribute @ 0x1402B84B0 (MiProtectionToCacheAttribute.c)
 *     PsGetIoPriorityThread @ 0x1402B8E80 (PsGetIoPriorityThread.c)
 *     MiSharedVaToPartition @ 0x1402B8FC8 (MiSharedVaToPartition.c)
 *     MiUpdatePageFileHighInPte @ 0x1402BB180 (MiUpdatePageFileHighInPte.c)
 *     MiIsStoreProcess @ 0x1402D55C0 (MiIsStoreProcess.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x140311E30 (MiReturnFaultCharges.c)
 *     MiSetInPagePrefetchPriority @ 0x140311EE4 (MiSetInPagePrefetchPriority.c)
 *     MiComputeFaultCluster @ 0x140311F14 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x140312138 (MiAdvanceFaultList.c)
 *     MiFreePageChain @ 0x140312420 (MiFreePageChain.c)
 *     MiIsPteInStore @ 0x140314E74 (MiIsPteInStore.c)
 *     MiLockSetPfnPriority @ 0x140314EA0 (MiLockSetPfnPriority.c)
 *     MiGetPagingFileOffset @ 0x140315B24 (MiGetPagingFileOffset.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140315C30 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiFlowThroughInsertNode @ 0x14035D7CC (MiFlowThroughInsertNode.c)
 *     MiKernelStackVaToStackNode @ 0x1403897A4 (MiKernelStackVaToStackNode.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 *a1, unsigned __int64 a2, ...)
{
  unsigned int v3; // r14d
  __int64 v4; // r13
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rcx
  ULONG_PTR *v13; // rcx
  unsigned __int64 v14; // r13
  char v15; // r15
  unsigned __int64 v16; // rdi
  __int64 v17; // r15
  int SystemRegionType; // ecx
  int v19; // r15d
  bool v20; // zf
  ULONG_PTR *v21; // rcx
  __int64 Process; // r13
  unsigned int v23; // edi
  unsigned __int64 v24; // rax
  int v25; // r15d
  __int64 **Address; // rax
  char v27; // cl
  int IsPteInStore; // eax
  char v29; // r9
  unsigned int v30; // r10d
  int v31; // r14d
  _QWORD *v32; // r11
  unsigned __int64 v33; // rdi
  __int64 v34; // r13
  __int64 v35; // rdx
  unsigned int v36; // r10d
  unsigned int v37; // r12d
  unsigned int v38; // edi
  unsigned __int64 v39; // r8
  __int64 v40; // rbx
  unsigned int PagingFileOffset; // eax
  unsigned int v42; // r12d
  __int64 v43; // rbx
  __int64 updated; // rdi
  unsigned __int64 v45; // rsi
  __int64 v46; // r13
  __int64 v47; // rax
  unsigned __int64 v48; // r12
  unsigned int v49; // ecx
  unsigned __int64 v50; // rdi
  unsigned int v51; // eax
  unsigned int v52; // ecx
  unsigned __int64 v53; // rdx
  unsigned int v54; // r9d
  unsigned __int64 v55; // rsi
  unsigned int v56; // eax
  __int64 v57; // rdx
  unsigned int v58; // r8d
  __int64 v59; // r9
  __int64 v60; // rsi
  char v61; // r11
  ULONG_PTR *v62; // r10
  unsigned __int64 v63; // rdi
  unsigned __int64 v64; // r12
  unsigned int v65; // r8d
  unsigned int v66; // eax
  __int64 PageChain; // rax
  unsigned __int64 v68; // r15
  __int64 v69; // r15
  unsigned int v70; // r12d
  __int64 *v71; // rdi
  __int64 v72; // rax
  __int64 v73; // r11
  unsigned __int64 v74; // rdx
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // r8
  unsigned __int64 v78; // rax
  int v79; // edx
  __int64 v80; // rdi
  unsigned __int64 v81; // rdx
  unsigned int v82; // eax
  unsigned int v83; // esi
  unsigned __int64 v84; // rcx
  unsigned __int64 v85; // rdi
  __int64 v86; // r12
  char v87; // bl
  __int64 v88; // r9
  __int64 v89; // r8
  unsigned __int64 v90; // rbx
  __int64 v91; // r15
  __int64 v92; // rax
  __int64 v93; // rsi
  __int64 v94; // rdx
  unsigned int v95; // eax
  __int64 v96; // rbx
  ULONG_PTR v97; // rdx
  int v98; // ecx
  __int64 result; // rax
  __int64 v100; // rax
  __int64 v101; // rsi
  unsigned int v102; // edi
  __int64 v103; // rax
  __int64 v104; // rax
  __int64 **v105; // rcx
  unsigned __int64 v106; // r10
  __int64 v107; // rdx
  __int64 v108; // rax
  unsigned int v109; // ecx
  __int64 v110; // rax
  __int64 **v111; // rax
  bool v112; // r10
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned int v114; // r8d
  __int64 v115; // rdx
  int v116; // edx
  __int64 v117; // rax
  unsigned __int64 v118; // r9
  unsigned __int64 v119; // rcx
  __int64 v120; // rdi
  unsigned __int64 v121; // rcx
  int v122; // eax
  __int64 v124; // rdx
  __int64 v125; // rcx
  unsigned __int64 v126; // rax
  __int64 v127; // rcx
  unsigned __int64 v128; // rax
  unsigned int v129; // r9d
  unsigned __int64 v130; // rdx
  _QWORD *v131; // rax
  int v132; // eax
  __int64 v133; // rdx
  unsigned int v134; // ecx
  __int64 v135; // rsi
  __int64 v136; // rax
  __int64 v137; // r9
  __int64 v138; // rax
  unsigned __int64 v139; // rax
  _QWORD *v140; // rbx
  unsigned int v141; // esi
  __int64 v142; // rax
  __int64 v143; // rax
  __int64 v144; // rbx
  unsigned __int8 v145; // [rsp+48h] [rbp-89h]
  char v146; // [rsp+48h] [rbp-89h]
  char v147; // [rsp+4Ch] [rbp-85h]
  unsigned int v148; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int64 v149; // [rsp+58h] [rbp-79h]
  unsigned int v150; // [rsp+60h] [rbp-71h]
  ULONG_PTR *v151; // [rsp+68h] [rbp-69h]
  unsigned __int64 v152; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v153; // [rsp+78h] [rbp-59h]
  __int64 v154; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int64 v155; // [rsp+88h] [rbp-49h]
  __int64 **v156; // [rsp+90h] [rbp-41h] BYREF
  int v157; // [rsp+98h] [rbp-39h]
  int v158; // [rsp+9Ch] [rbp-35h]
  __int64 v159; // [rsp+A0h] [rbp-31h]
  __int64 v160; // [rsp+A8h] [rbp-29h]
  unsigned __int64 v161; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v162; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v163; // [rsp+C0h] [rbp-11h]
  __int64 v164; // [rsp+C8h] [rbp-9h]
  __int64 v165; // [rsp+D0h] [rbp-1h]
  __int64 v166; // [rsp+D8h] [rbp+7h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp+Fh]
  unsigned int v169; // [rsp+138h] [rbp+67h]
  unsigned int v170; // [rsp+138h] [rbp+67h]
  __int64 v172; // [rsp+148h] [rbp+77h] BYREF
  va_list va; // [rsp+148h] [rbp+77h]
  __int64 *v174; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v172 = va_arg(va1, _QWORD);
  v174 = va_arg(va1, __int64 *);
  v155 = *a1;
  v3 = 0;
  v162 = 0LL;
  v4 = a1[7];
  v5 = a1[2];
  v166 = v4;
  v165 = 0LL;
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  CurrentThread = KeGetCurrentThread();
  v154 = v6;
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v172 )
    {
      LOBYTE(v7) = 17;
      MiUnlockProtoPoolPage(v172, v7);
    }
    return 3221225633LL;
  }
  v8 = v172;
  v9 = 0xFFFFFFFFFLL;
  v10 = v154;
  if ( (v6 & 0x800) != 0 )
  {
    if ( qword_140C4DD40 )
    {
      if ( (v6 & 0x10) != 0 )
        v6 &= ~0x10uLL;
      else
        v6 &= ~qword_140C4DD40;
    }
    v9 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v3 = 16;
    v163 = v9;
    v11 = *(_QWORD *)(v9 + 16);
    v12 = (*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL;
  }
  else
  {
    v163 = 0LL;
    v11 = v154;
    if ( v172 )
    {
      v13 = MiSharedVaToPartition(v4, v155, a2);
      v151 = v13;
      goto LABEL_6;
    }
    v12 = *(unsigned __int16 *)(v4 + 174);
  }
  v13 = *(ULONG_PTR **)(qword_140C4E448 + 8 * v12);
  v151 = v13;
LABEL_6:
  v14 = 0LL;
  v150 = 2;
  v15 = v5;
  v153 = 0LL;
  v16 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
  v17 = v15 & 1;
  if ( v17 && *(_BYTE *)v16 == 5 )
  {
    v122 = *(_DWORD *)(v16 + 56);
    if ( (v122 & 4) != 0 && ((v122 & 0x10) != 0 || !(unsigned int)MiIsPteInStore(v13, v11)) )
    {
      if ( v8 )
      {
        LOBYTE(v9) = 17;
        MiUnlockProtoPoolPage(v8, v9);
      }
      return 3221225495LL;
    }
    v153 = 0LL;
  }
  else if ( v17 )
  {
    if ( *(_BYTE *)v16 == 2 )
    {
      v14 = v16;
      v153 = v16;
    }
    else if ( *(_BYTE *)v16 == 1 )
    {
      v153 = v16;
      v14 = v16;
      if ( (v154 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset(&v154) )
        return 0LL;
      v150 = 0;
      v3 |= 0x20u;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v155);
  if ( v17 && *(_BYTE *)v16 == 4 )
  {
    v110 = *(_QWORD *)(v16 + 40);
    v19 = 8;
    v150 |= 8u;
    v14 = v16;
    v153 = v16;
    v21 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v110 + 544) + 1838LL));
    v151 = v21;
LABEL_12:
    v157 = v19;
    goto LABEL_13;
  }
  if ( ((v10 >> 5) & 0x1F) != 0x1F )
  {
    v19 = 0;
    v20 = SystemRegionType == 12;
    v21 = v151;
    if ( v20 )
      v19 = 8;
    goto LABEL_12;
  }
  v157 = 8;
  v117 = MiKernelStackVaToStackNode(v155);
  if ( v117 )
    v21 = *(ULONG_PTR **)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(v117 + 40));
  else
    v21 = &MiSystemPartition;
  v150 |= 8u;
  v151 = v21;
LABEL_13:
  if ( v3 >= 0x20 && (*(_DWORD *)(v14 + 80) & 0x200) != 0 )
  {
    if ( (unsigned int)MiIsPteInStore(v21, v10) )
    {
      if ( v8 )
      {
        LOBYTE(v124) = 17;
        MiUnlockProtoPoolPage(v8, v124);
      }
      return 0LL;
    }
  }
  v158 = 0;
  LODWORD(v152) = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  v23 = 16;
  v148 = 16;
  v149 = a2;
  v147 = 2;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v24 = v10;
    v145 = v158;
    goto LABEL_17;
  }
  v145 = 16;
  v104 = MI_READ_PTE_LOCK_FREE(((v155 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v104) )
  {
    v145 = 48;
    goto LABEL_231;
  }
  if ( *(_QWORD *)(Process + 1264) )
  {
LABEL_231:
    v23 = 1;
    v148 = 1;
  }
  v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v154);
LABEL_17:
  v160 = (v24 >> 5) & 0x1F;
  v156 = (__int64 **)a1[11];
  v25 = MiComputeFaultNode(a1, 0LL, &v156);
  LODWORD(v161) = v25;
  Address = v156;
  if ( (v156
     || (a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL && (unsigned int)MiIsStoreProcess(Process)
      || (*(_BYTE *)(v166 + 184) & 7) == 0
      && v155 < 0xFFFF800000000000uLL
      && ((v100 = *(_QWORD *)(Process + 1680), *(_QWORD *)(v100 + 424)) || *(_QWORD *)(v100 + 432)))
     && (Address = MiLocateAddress(v155), (v156 = Address) != 0LL))
    && (v125 = *((unsigned int *)Address + 13),
        LODWORD(v125) = v125 & 0x7FFFFFFF,
        (v125 | ((unsigned __int64)*((unsigned __int8 *)Address + 34) << 31)) == 0x7FFFFFFFELL) )
  {
    v27 = 7;
    v145 |= 0x80u;
    v147 = 7;
  }
  else
  {
    v27 = 2;
  }
  if ( ((v10 >> 11) & 1) != 0 )
  {
    v148 = 1;
    v147 = v27 | 1;
    v23 = 1;
  }
  IsPteInStore = MiIsPteInStore(v151, v11);
  v31 = v30 & IsPteInStore | v3;
  if ( v23 != v30 )
  {
    if ( dword_140C4EAC0 )
    {
      v148 = v30;
      --dword_140C4EAC0;
      v23 = v30;
    }
    else
    {
      v32 = (_QWORD *)v153;
      if ( v153 )
      {
        v111 = v156;
        v112 = (v29 & 0x10) != 0;
        if ( (v29 & 0x10) != 0 && !v156 )
        {
          v111 = MiLocateAddress(v155);
          v156 = v111;
        }
        v23 = MiComputeFaultCluster((__int64)v151, v32, (unsigned __int64)v111 & -(__int64)v112, v31 & 1);
        v148 = v23;
        v30 = 1;
      }
      else if ( v155 > 0x7FFFFFFEFFFFLL )
      {
        v148 = v30;
        v23 = v30;
        if ( (v29 & 0x10) == 0 && (v155 < 0xFFFFF68000000000uLL || v155 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v23 = 16;
          v31 |= 4u;
          v148 = 16;
        }
      }
    }
  }
  LODWORD(v159) = v30 & v31;
  if ( (v30 & v31) != 0 )
  {
    if ( v23 > *((_DWORD *)v151 + 291) )
      v23 = *((_DWORD *)v151 + 291);
    v148 = v23;
  }
  v33 = a2;
  v164 = MiAllocateInPageSupport(a2, v150, &v148, (__int64 *)((unsigned __int64)va & -(__int64)(v8 != 0)));
  v34 = v164;
  if ( !v164 )
  {
    result = 3221225626LL;
LABEL_246:
    if ( v153 )
      *(_BYTE *)(v153 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v10
    || ((v10 >> 11) & 1) != 0
    && ((v35 = v163, (*(_BYTE *)(v163 + 34) & 0x28) == 0x28)
     || (*(_BYTE *)(v163 + 34) & 0x20) == 0
     || v11 != *(_QWORD *)(v163 + 16)
     || (*(_DWORD *)(*(_QWORD *)v163 + 160LL) & 0x20) != 0) )
  {
    if ( v172 )
    {
      LOBYTE(v35) = 17;
      MiUnlockProtoPoolPage(v172, v35);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v34);
    result = 3221226548LL;
    goto LABEL_246;
  }
  v36 = 1;
  if ( v153 && *(_BYTE *)v153 == 1 )
    MiSetInPagePrefetchPriority(v153, v34);
  v37 = v148;
  if ( v148 > v36 && (unsigned int)MiSufficientAvailablePages((__int64)v151, 0x140uLL) )
  {
    v38 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
    v169 = ((unsigned int)a2 >> 3) & 0x1FF;
    if ( (v145 & 0x10) != 0 )
    {
      v105 = v156;
      v106 = v155;
      if ( (v156 || (v156 = MiLocateAddress(v155), (v105 = v156) != 0LL))
        && ((_DWORD)v105[6] & 0x100000) == 0
        && (MiGetProtoPteAddress((__int64)v105, v106 >> 12, 4, &v162), v162)
        && (*(_BYTE *)(v162 + 34) & 2) == 0 )
      {
        v107 = *(_QWORD *)(v162 + 8);
        v39 = a2;
        v108 = (__int64)(a2 - v107) >> 3;
        v109 = ((__int64)(v107 + 8LL * *(unsigned int *)(v162 + 44) - a2) >> 3) - 1;
        if ( v109 >= v38 )
          v109 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
        v38 = v109;
        if ( (unsigned int)v108 >= v169 )
          LODWORD(v108) = ((unsigned int)a2 >> 3) & 0x1FF;
        v169 = v108;
      }
      else
      {
        v39 = a2;
        v37 = 1;
      }
    }
    else
    {
      v39 = a2;
    }
    if ( v153 || (v31 & 4) != 0 )
    {
      v169 = 0;
      if ( !v38 )
        v37 = 1;
    }
    if ( v37 <= 1 )
    {
      v33 = a2;
      v55 = v149;
    }
    else
    {
      v152 = v10;
      v150 = v37 - 1;
      v162 = v39 + 8;
      v40 = v37 - 1;
      if ( v38 <= v37 - 1 )
        v40 = v38;
      PagingFileOffset = MiGetPagingFileOffset(&v152);
      v42 = -3 - PagingFileOffset;
      v163 = PagingFileOffset;
      if ( (unsigned __int64)PagingFileOffset + v40 < 0xFFFFFFFE )
        v42 = v40;
      if ( (_DWORD)v159 || v153 )
        v31 |= 8u;
      v43 = v10 & 0xFFFFFFFFFC00FF1DuLL;
      updated = v10 & 0xFFFFFFFFFC00FF1DuLL;
      if ( v42 )
      {
        v45 = v162;
        v46 = v163;
        while ( 1 )
        {
          updated = MiUpdatePageFileHighInPte(updated, ++v46);
          v47 = MI_READ_PTE_LOCK_FREE(v45);
          if ( (v47 & 0x3E0) != 0 && (v47 & 0xFFFFFFFFFC00FF1DuLL) == updated )
          {
            v149 = v45;
          }
          else if ( (v31 & 8) != 0 )
          {
LABEL_60:
            v10 = v154;
            v25 = v161;
            v34 = v164;
            break;
          }
          v45 += 8LL;
          if ( !--v42 )
            goto LABEL_60;
        }
      }
      v48 = a2;
      v49 = v150 - ((__int64)(v149 - a2) >> 3);
      v149 = (__int64)(v149 - a2) >> 3;
      v152 = v10;
      if ( v169 <= v49 )
        v49 = v169;
      v50 = v49;
      v162 = a2;
      v51 = MiGetPagingFileOffset(&v152);
      v163 = v51;
      v52 = v51 - 1;
      if ( v50 <= (unsigned __int64)v51 - 1 )
        v52 = v50;
      if ( v52 )
      {
        v101 = v163;
        v102 = v52;
        while ( 1 )
        {
          --v101;
          v48 -= 8LL;
          v43 = MiUpdatePageFileHighInPte(v43, v101);
          v103 = MI_READ_PTE_LOCK_FREE(v48);
          if ( (v103 & 0x3E0) != 0 && (v103 & 0xFFFFFFFFFC00FF1DuLL) == v43 )
          {
            v162 = v48;
          }
          else if ( (v31 & 8) != 0 )
          {
LABEL_149:
            v10 = v154;
            v34 = v164;
            break;
          }
          if ( !--v102 )
            goto LABEL_149;
        }
      }
      v33 = a2;
      v53 = v10;
      if ( qword_140C4DD40 && (v10 & 0x10) == 0 )
        v53 = v10 & ~qword_140C4DD40;
      v11 = MiUpdatePageFileHighInPte(v10, HIDWORD(v53) - (unsigned int)((__int64)(a2 - v162) >> 3));
      LODWORD(v152) = v54 + v149 + 1;
      v55 = a2 - 8LL * v54;
      v149 = v55;
    }
  }
  else
  {
    v55 = a2;
  }
  v56 = MiObtainFaultCharges(v151, v152, v147);
  v58 = v152;
  v59 = v56;
  v164 = v56;
  if ( (unsigned int)v152 > (unsigned __int64)v56 )
  {
    v126 = v11;
    if ( qword_140C4DD40 && (v11 & 0x10) == 0 )
      v126 = v11 & ~qword_140C4DD40;
    v127 = (unsigned int)v152 - v59;
    v128 = HIDWORD(v126);
    if ( v55 + 8 * v127 <= v33 )
    {
      v149 = v55 + 8 * v127;
    }
    else
    {
      v149 = v33;
      v127 = (__int64)(v33 - v55) >> 3;
    }
    v11 = MiUpdatePageFileHighInPte(v11, v127 + v128);
    LODWORD(v152) = v129;
    v58 = v129;
  }
  v60 = v153;
  v61 = 1;
  if ( !v153 || *(_BYTE *)v153 != 1 )
  {
    v62 = v151;
    v63 = v58;
    v64 = v58;
LABEL_73:
    v161 = v63;
    goto LABEL_74;
  }
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v151, ((*(_DWORD *)(v153 + 80) >> 3) & 7u) + 1);
  v63 = v114;
  v64 = AvailablePagesBelowPriority;
  v161 = AvailablePagesBelowPriority;
  if ( AvailablePagesBelowPriority > v114 )
  {
    v64 = v114;
    goto LABEL_73;
  }
LABEL_74:
  if ( !v64 )
  {
LABEL_296:
    if ( v172 )
    {
      LOBYTE(v57) = 17;
      MiUnlockProtoPoolPage(v172, v57);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v34);
    if ( v60 )
      *(_BYTE *)(v60 + 1) = 2;
    MiReturnFaultCharges((__int64)v151, v164, v147);
    return 3221225495LL;
  }
  if ( !v60
    || *(_BYTE *)v60 != v61
    || (v115 = *(_QWORD *)(v60 + 88)) == 0
    || v157
    || v155 > 0x7FFFFFFEFFFFLL
    || v172
    || *(ULONG_PTR **)(qword_140C4E448 + 8 * ((*(_QWORD *)(v115 + 40) >> 39) & 0x3FFLL)) != v62 )
  {
    v65 = v160;
LABEL_77:
    v66 = MiProtectionToCacheAttribute(v65);
    PageChain = MiGetPageChain((__int64)v151, v166, v25, v66, v157, -1LL, &v161);
    v68 = v161;
    v159 = PageChain;
    goto LABEL_78;
  }
  v130 = (__int64)((unsigned __int128)((v115 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v131 = MiSearchNumaNodeTable(v130 + (v130 >> 63));
  v65 = v160;
  if ( *((_DWORD *)v131 + 2) != v25 - 1 )
    goto LABEL_77;
  v159 = *(_QWORD *)(v60 + 88);
  v132 = MiProtectionToCacheAttribute(v160);
  if ( *(unsigned __int8 *)(v133 + 34) >> 6 != v132 )
    goto LABEL_77;
  v134 = 0;
  v135 = v133;
  while ( 1 )
  {
    ++v134;
    v136 = *(_QWORD *)(v135 + 24) & 0xFFFFFFFFFLL;
    v137 = v135;
    if ( v136 == 0xFFFFFFFFFLL )
      break;
    v135 = 48 * v136 - 0x58000000000LL;
    if ( v134 >= v64 )
      goto LABEL_270;
  }
  v135 = 0LL;
LABEL_270:
  v68 = v134;
  MiSetPfnBlink(v137, 0xFFFFFFFFFLL, 0);
  v138 = v153;
  *(_QWORD *)(v153 + 88) = v135;
  v60 = v138;
  PageChain = v159;
LABEL_78:
  if ( !PageChain )
    goto LABEL_296;
  if ( v68 != v63 )
  {
    v118 = v149;
    if ( v149 + 8 * v68 <= a2 )
    {
      v119 = v11;
      if ( qword_140C4DD40 && (v11 & 0x10) == 0 )
        v119 = v11 & ~qword_140C4DD40;
      v120 = v63 - v68;
      v121 = HIDWORD(v119);
      if ( v149 + 8 * v120 <= a2 )
      {
        v149 += 8 * v120;
      }
      else
      {
        v149 = a2;
        v120 = (__int64)(a2 - v118) >> 3;
      }
      v11 = MiUpdatePageFileHighInPte(v11, v121 + v120);
    }
    LODWORD(v152) = v68;
  }
  v69 = v34 + 272;
  v70 = 0;
  LODWORD(v161) = *(_DWORD *)(v34 + 192) >> 9;
  v170 = 0;
  v71 = (__int64 *)(v34 + 320);
  v154 = v34 + 320;
  while ( 1 )
  {
    v72 = MI_READ_PTE_LOCK_FREE(v149);
    v73 = 1LL;
    if ( (v31 & 0x10) != 0 )
      goto LABEL_95;
    if ( (v72 & 1) == 0 && (v72 & 0x400) == 0 && (v72 & 0x800) == 0 )
    {
      v74 = v72;
      if ( qword_140C4DD40 )
      {
        if ( (v72 & 0x10) != 0 )
          v74 = v72 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v74 = v72 & ~qword_140C4DD40;
      }
      v75 = v11;
      if ( qword_140C4DD40 && (v11 & 0x10) == 0 )
        v75 = v11 & ~qword_140C4DD40;
      if ( ((v74 ^ v75) & 0xFFFFFFFF00000000uLL) == 0 && (v72 & 4) != 0 && ((v72 ^ v11) & 0xF000) == 0 )
      {
        v76 = MiIsPteInStore(v151, v72);
        if ( v76 == ((unsigned int)v73 & v31) )
        {
LABEL_95:
          v77 = v159;
          v170 += v73;
          v78 = v149;
          *v71 = (v159 + 0x58000000000LL) / 48;
          if ( v78 == a2 )
            LOBYTE(v79) = v161;
          else
            v79 = *(_DWORD *)(v34 + 192) >> 12;
          MiLockSetPfnPriority(v77, v79 & 7);
          v80 = *(_QWORD *)(v159 + 24) & 0xFFFFFFFFFLL;
          MiSetPfnBlink(v159, 0LL, 0);
          if ( v80 == 0xFFFFFFFFFLL )
            v159 = 0LL;
          else
            v159 = 48 * v80 - 0x58000000000LL;
          v71 = (__int64 *)v154;
          v73 = 1LL;
          goto LABEL_100;
        }
      }
    }
    if ( (v31 & 8) != 0 )
      break;
    v31 |= 2u;
    *v71 = qword_140C4EB78;
LABEL_100:
    v154 = (__int64)++v71;
    if ( v60 )
      MiAdvanceFaultList((_QWORD *)v60);
    v149 += 8LL;
    v81 = v11;
    if ( qword_140C4DD40 && (v11 & 0x10) == 0 )
      v81 = v11 & ~qword_140C4DD40;
    v11 = MiUpdatePageFileHighInPte(v11, v73 + HIDWORD(v81));
    v70 += v73;
    v82 = v152;
LABEL_106:
    if ( v70 >= v82 )
    {
      v83 = v152;
      v84 = v149;
      goto LABEL_108;
    }
  }
  v139 = a2;
  v84 = v149;
  if ( v149 <= a2 )
  {
    v71 = (__int64 *)(v34 + 320);
    v140 = (_QWORD *)(v34 + 320);
    if ( v70 )
    {
      v141 = v170;
      do
      {
        if ( *v140 != qword_140C4EB78 )
        {
          MiReleaseFreshPage(48LL * *v140 - 0x58000000000LL);
          --v141;
        }
        ++v140;
        --v70;
      }
      while ( v70 );
      v139 = a2;
      v69 = v34 + 272;
      v170 = v141;
      v60 = v153;
    }
    v31 &= ~2u;
    v154 = v34 + 320;
    v149 = v139;
    v142 = MI_READ_PTE_LOCK_FREE(v139);
    LOBYTE(v73) = 1;
    v11 = v142;
    v82 = 1;
    LODWORD(v152) = 1;
    goto LABEL_106;
  }
  v83 = v70;
  LODWORD(v152) = v70;
LABEL_108:
  v85 = v84 - 8LL * v83;
  v86 = *(_QWORD *)(v34 + 8 * ((__int64)(a2 - v85) >> 3) + 320);
  v87 = v73 & (v145 >> 4);
  if ( v87 )
    v88 = 0LL;
  else
    v88 = (__int64)(v85 << 25) >> 16;
  *(_QWORD *)v69 = 0LL;
  v89 = v83 << 12;
  *(_DWORD *)(v69 + 40) = v89;
  *(_QWORD *)(v69 + 32) = v88 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v69 + 44) = v88 & 0xFFF;
  *(_WORD *)(v69 + 10) = 66;
  *(_WORD *)(v69 + 8) = 8 * ((((unsigned __int64)(v88 & 0xFFF) + v89 + 4095) >> 12) + 6);
  if ( (v31 & 2) != 0 )
  {
    v143 = MiReduceMdl(v69);
    if ( v143 )
    {
      v85 += 8 * v143;
      if ( !v87 )
        *(_QWORD *)(v69 + 32) += v143 << 12;
    }
    v83 = *(_DWORD *)(v69 + 40) >> 12;
    LODWORD(v152) = v83;
  }
  else
  {
    *(_WORD *)(v69 + 10) = 16450;
  }
  v90 = MI_READ_PTE_LOCK_FREE(v85);
  v154 = v90;
  if ( v83 == 1 )
    v146 = v145 & 0xF8 | (*(_DWORD *)(v34 + 192) >> 9) & 7 | 8;
  else
    v146 = v145 & 0xDF;
  LOBYTE(v158) = v146;
  MiInitializeReadInProgressPfn(v155, (_QWORD *)(v34 + 320), v152, v85, v34, v146);
  if ( (v31 & 0x10) != 0 )
  {
    if ( qword_140C4DD40 && (v90 & 0x10) == 0 )
      v90 &= ~qword_140C4DD40;
    v144 = 48 * ((v90 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    MiFlowThroughInsertNode(v34, v144);
    v90 = *(_QWORD *)(v144 + 16);
    v154 = v90;
  }
  v91 = v172;
  if ( (v146 & 0x10) != 0 )
    MiObtainProtoReference(v172, 0LL);
  v92 = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)(v34 + 232) = a2;
  v93 = v153;
  *(_QWORD *)(v34 + 168) = v92;
  if ( v93 )
  {
    if ( *(_BYTE *)v93 == 1 )
    {
      v116 = *(_DWORD *)(v34 + 192) | 8;
      *(_DWORD *)(v34 + 192) = v116;
      if ( (*(_DWORD *)(v93 + 80) & 0x2000) != 0 )
        *(_DWORD *)(v34 + 192) = v116 | 0x20;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v34 + 192) |= 0x80u;
  if ( v156 && MiVadPageSizes[(*((_DWORD *)v156 + 12) >> 18) & 3] == 16 )
    *(_DWORD *)(v34 + 192) |= 0x100000u;
  if ( v91 )
  {
    LOBYTE(v94) = 17;
    MiUnlockProtoPoolPage(v91, v94);
  }
  MiFreePageChain(v159);
  if ( v170 != v164 )
    MiReturnFaultCharges((__int64)v151, v164 - v170, v147);
  *v174 = v34;
  v95 = MiGetPagingFileOffset(&v154);
  v96 = (unsigned __int16)v90 >> 12;
  LODWORD(v165) = v95;
  v97 = v151[v96 + 868];
  if ( (v146 & 0x10) != 0 )
    *(_QWORD *)(v34 + 160) = v91;
  if ( (v31 & 1) != 0 )
  {
    *(_DWORD *)(v34 + 192) |= 0x100u;
    *(_QWORD *)(v34 + 96) = v95 | (unsigned __int64)(v96 << 60);
  }
  else
  {
    HIDWORD(v165) = 0;
    *(_QWORD *)(v34 + 96) = (unsigned __int64)(unsigned int)v165 << 12;
  }
  v98 = *(_DWORD *)(v34 + 192) | 0x200000;
  *(_QWORD *)(v34 + 200) = v97;
  *(_DWORD *)(v34 + 192) = v98;
  if ( *(_QWORD *)(v97 + 216)
    && (!v93 || *(_BYTE *)v93 != 1 || (*(_DWORD *)(v93 + 80) & 0x1000) == 0 || (dword_140CFB180 & 1) != 0) )
  {
    *(_DWORD *)(v34 + 192) = v98 | 0x400000;
  }
  *(_QWORD *)(v34 + 240) = v85;
  result = 3221435187LL;
  *(_QWORD *)(v34 + 248) = 48 * v86 - 0x58000000000LL;
  return result;
}
