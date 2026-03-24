/*
 * XREFs of MiResolvePageFileFault @ 0x14028AF68
 * Callers:
 *     MiDispatchFault @ 0x14020EF00 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1402153D0 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x14028C09C (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiGetPageChain @ 0x140212D10 (MiGetPageChain.c)
 *     MiObtainFaultCharges @ 0x14021BA90 (MiObtainFaultCharges.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiUpdatePageFileHighInPte @ 0x14023DD80 (MiUpdatePageFileHighInPte.c)
 *     MiComputeFaultNode @ 0x14023F100 (MiComputeFaultNode.c)
 *     MiSharedVaToPartition @ 0x14024144C (MiSharedVaToPartition.c)
 *     MiProtectionToCacheAttribute @ 0x140241E40 (MiProtectionToCacheAttribute.c)
 *     PsGetIoPriorityThread @ 0x140242810 (PsGetIoPriorityThread.c)
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     MiIsStoreProcess @ 0x14026A4B0 (MiIsStoreProcess.c)
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14027191C (MiGetAvailablePagesBelowPriority.c)
 *     MiSufficientAvailablePages @ 0x140275470 (MiSufficientAvailablePages.c)
 *     MiIsPteInStore @ 0x14028BE40 (MiIsPteInStore.c)
 *     MiLockSetPfnPriority @ 0x14028BE6C (MiLockSetPfnPriority.c)
 *     MiFreePageChain @ 0x14028BED4 (MiFreePageChain.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14028D248 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiComputeFaultCluster @ 0x14028DF24 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x14028E148 (MiAdvanceFaultList.c)
 *     MiSetInPagePrefetchPriority @ 0x14028E1B4 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x14028E1E4 (MiReturnFaultCharges.c)
 *     MiFlowThroughInsertNode @ 0x1402D006C (MiFlowThroughInsertNode.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1402FBF30 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1402FC75C (MiReduceMdl.c)
 *     MiFreeInPageSupportBlock @ 0x1402FC8DC (MiFreeInPageSupportBlock.c)
 *     MiSetPfnBlink @ 0x140318130 (MiSetPfnBlink.c)
 *     MiAllocateInPageSupport @ 0x140319BA0 (MiAllocateInPageSupport.c)
 *     MiObtainProtoReference @ 0x14031A00C (MiObtainProtoReference.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiKernelStackVaToStackNode @ 0x14038C194 (MiKernelStackVaToStackNode.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 *a1, unsigned __int64 a2, ...)
{
  unsigned int v3; // r14d
  __int64 v4; // r13
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // r12
  unsigned __int64 v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rcx
  ULONG_PTR *v11; // rcx
  unsigned __int64 v12; // r13
  char v13; // r15
  unsigned __int64 v14; // rdi
  __int64 v15; // r15
  int SystemRegionType; // ecx
  int v17; // r15d
  bool v18; // zf
  ULONG_PTR *v19; // rcx
  __int64 Process; // r13
  unsigned int v21; // edi
  unsigned __int64 v22; // rax
  int v23; // r15d
  __int64 **Address; // rax
  int v25; // ecx
  int IsPteInStore; // eax
  char v27; // r9
  int v28; // r10d
  int v29; // r14d
  unsigned __int64 v30; // r11
  unsigned __int64 v31; // rdi
  __int64 v32; // r13
  unsigned int v33; // r10d
  unsigned int v34; // r12d
  unsigned int v35; // edi
  unsigned __int64 v36; // r8
  __int64 v37; // rbx
  unsigned int PagingFileOffset; // eax
  unsigned int v39; // r12d
  __int64 v40; // rbx
  __int64 updated; // rdi
  unsigned __int64 v42; // rsi
  __int64 v43; // r13
  __int64 v44; // rax
  unsigned __int64 v45; // r12
  unsigned int v46; // ecx
  unsigned __int64 v47; // rdi
  unsigned int v48; // eax
  unsigned int v49; // ecx
  unsigned __int64 v50; // rdx
  unsigned int v51; // r9d
  unsigned __int64 v52; // rsi
  unsigned int v53; // eax
  unsigned int v54; // r8d
  __int64 v55; // r9
  unsigned __int64 v56; // rsi
  char v57; // r11
  ULONG_PTR *v58; // r10
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // r12
  unsigned int v61; // r8d
  unsigned int v62; // eax
  __int64 PageChain; // rax
  unsigned __int64 v64; // r15
  __int64 v65; // r15
  unsigned int v66; // r12d
  __int64 *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r11
  unsigned __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  __int64 v73; // r8
  unsigned __int64 v74; // rax
  int v75; // edx
  __int64 v76; // rdi
  unsigned __int64 v77; // rdx
  unsigned int v78; // eax
  unsigned int v79; // esi
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // rdi
  __int64 v82; // r12
  char v83; // bl
  __int64 v84; // r9
  __int64 v85; // r8
  unsigned __int64 v86; // rbx
  __int64 v87; // r15
  __int64 v88; // rax
  unsigned __int64 v89; // rsi
  unsigned int v90; // eax
  __int64 v91; // rbx
  ULONG_PTR v92; // rdx
  int v93; // ecx
  __int64 result; // rax
  __int64 v95; // rax
  __int64 v96; // rsi
  unsigned int v97; // edi
  __int64 v98; // rax
  __int64 v99; // rax
  __int64 **v100; // rcx
  unsigned __int64 v101; // r10
  __int64 v102; // rdx
  __int64 v103; // rax
  unsigned int v104; // ecx
  __int64 v105; // rax
  __int64 **v106; // rax
  bool v107; // r10
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned int v109; // r8d
  __int64 v110; // rdx
  int v111; // edx
  __int64 v112; // rax
  unsigned __int64 v113; // r9
  unsigned __int64 v114; // rcx
  __int64 v115; // rdi
  unsigned __int64 v116; // rcx
  int v117; // eax
  __int64 v119; // rcx
  unsigned __int64 v120; // rax
  __int64 v121; // rcx
  unsigned __int64 v122; // rax
  unsigned int v123; // r9d
  unsigned __int64 v124; // rdx
  __int64 v125; // rax
  int v126; // eax
  __int64 v127; // rdx
  unsigned int v128; // ecx
  __int64 v129; // rsi
  __int64 v130; // rax
  __int64 v131; // r9
  unsigned __int64 v132; // rax
  unsigned __int64 v133; // rax
  _QWORD *v134; // rbx
  unsigned int v135; // esi
  __int64 v136; // rax
  __int64 v137; // rax
  __int64 v138; // rbx
  unsigned __int8 v139; // [rsp+48h] [rbp-89h]
  char v140; // [rsp+48h] [rbp-89h]
  unsigned int v141; // [rsp+4Ch] [rbp-85h]
  unsigned int v142; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int64 v143; // [rsp+58h] [rbp-79h]
  unsigned int v144; // [rsp+60h] [rbp-71h]
  ULONG_PTR *v145; // [rsp+68h] [rbp-69h]
  unsigned __int64 v146; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v147; // [rsp+78h] [rbp-59h]
  __int64 v148; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int64 v149; // [rsp+88h] [rbp-49h]
  __int64 **v150; // [rsp+90h] [rbp-41h] BYREF
  int v151; // [rsp+98h] [rbp-39h]
  int v152; // [rsp+9Ch] [rbp-35h]
  __int64 v153; // [rsp+A0h] [rbp-31h]
  __int64 v154; // [rsp+A8h] [rbp-29h]
  unsigned __int64 v155; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v156; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v157; // [rsp+C0h] [rbp-11h]
  __int64 v158; // [rsp+C8h] [rbp-9h]
  __int64 v159; // [rsp+D0h] [rbp-1h]
  __int64 v160; // [rsp+D8h] [rbp+7h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp+Fh]
  unsigned int v163; // [rsp+138h] [rbp+67h]
  unsigned int v164; // [rsp+138h] [rbp+67h]
  __int64 v166; // [rsp+148h] [rbp+77h] BYREF
  va_list va; // [rsp+148h] [rbp+77h]
  __int64 *v168; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v166 = va_arg(va1, _QWORD);
  v168 = va_arg(va1, __int64 *);
  v149 = *a1;
  v3 = 0;
  v156 = 0LL;
  v4 = a1[7];
  v5 = a1[2];
  v160 = v4;
  v159 = 0LL;
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  CurrentThread = KeGetCurrentThread();
  v148 = v6;
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v166 )
      MiUnlockProtoPoolPage(v166, 0x11u);
    return 3221225633LL;
  }
  v7 = v166;
  v8 = v148;
  if ( (v6 & 0x800) != 0 )
  {
    if ( qword_140C4DF40 )
    {
      if ( (v6 & 0x10) != 0 )
        v6 &= ~0x10uLL;
      else
        v6 &= ~qword_140C4DF40;
    }
    v3 = 16;
    v157 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v9 = *(_QWORD *)(v157 + 16);
    v10 = (*(_QWORD *)(v157 + 40) >> 39) & 0x3FFLL;
  }
  else
  {
    v157 = 0LL;
    v9 = v148;
    if ( v166 )
    {
      v11 = MiSharedVaToPartition(v4, v149, a2);
      v145 = v11;
      goto LABEL_6;
    }
    v10 = *(unsigned __int16 *)(v4 + 174);
  }
  v11 = *(ULONG_PTR **)(qword_140C4E648 + 8 * v10);
  v145 = v11;
LABEL_6:
  v12 = 0LL;
  v144 = 2;
  v13 = v5;
  v147 = 0LL;
  v14 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
  v15 = v13 & 1;
  if ( v15 && *(_BYTE *)v14 == 5 )
  {
    v117 = *(_DWORD *)(v14 + 56);
    if ( (v117 & 4) != 0 && ((v117 & 0x10) != 0 || !(unsigned int)MiIsPteInStore(v11, v9)) )
    {
      if ( v7 )
        MiUnlockProtoPoolPage(v7, 0x11u);
      return 3221225495LL;
    }
    v147 = 0LL;
  }
  else if ( v15 )
  {
    if ( *(_BYTE *)v14 == 2 )
    {
      v12 = v14;
      v147 = v14;
    }
    else if ( *(_BYTE *)v14 == 1 )
    {
      v147 = v14;
      v12 = v14;
      if ( (v148 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset((__int64)&v148) )
        return 0LL;
      v144 = 0;
      v3 |= 0x20u;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v149);
  if ( v15 && *(_BYTE *)v14 == 4 )
  {
    v105 = *(_QWORD *)(v14 + 40);
    v17 = 8;
    v144 |= 8u;
    v12 = v14;
    v147 = v14;
    v19 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v105 + 544) + 1838LL));
    v145 = v19;
LABEL_12:
    v151 = v17;
    goto LABEL_13;
  }
  if ( ((v8 >> 5) & 0x1F) != 0x1F )
  {
    v17 = 0;
    v18 = SystemRegionType == 12;
    v19 = v145;
    if ( v18 )
      v17 = 8;
    goto LABEL_12;
  }
  v151 = 8;
  v112 = MiKernelStackVaToStackNode(v149);
  if ( v112 )
    v19 = *(ULONG_PTR **)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v112 + 40));
  else
    v19 = &MiSystemPartition;
  v144 |= 8u;
  v145 = v19;
LABEL_13:
  if ( v3 >= 0x20 && (*(_DWORD *)(v12 + 80) & 0x200) != 0 )
  {
    if ( (unsigned int)MiIsPteInStore(v19, v8) )
    {
      if ( v7 )
        MiUnlockProtoPoolPage(v7, 0x11u);
      return 0LL;
    }
  }
  v152 = 0;
  LODWORD(v146) = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  v21 = 16;
  v142 = 16;
  v143 = a2;
  v141 = 2;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v22 = v8;
    v139 = v152;
    goto LABEL_17;
  }
  v139 = 16;
  v99 = MI_READ_PTE_LOCK_FREE(((v149 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v99) )
  {
    v139 = 48;
    goto LABEL_231;
  }
  if ( *(_QWORD *)(Process + 1264) )
  {
LABEL_231:
    v21 = 1;
    v142 = 1;
  }
  v22 = MI_READ_PTE_LOCK_FREE(&v148);
LABEL_17:
  v154 = (v22 >> 5) & 0x1F;
  v150 = (__int64 **)a1[11];
  v23 = MiComputeFaultNode(a1, 0LL, (__int64 *)&v150);
  LODWORD(v155) = v23;
  Address = v150;
  if ( (v150
     || (a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL && (unsigned int)MiIsStoreProcess(Process)
      || (*(_BYTE *)(v160 + 184) & 7) == 0
      && v149 < 0xFFFF800000000000uLL
      && ((v95 = *(_QWORD *)(Process + 1680), *(_QWORD *)(v95 + 424)) || *(_QWORD *)(v95 + 432)))
     && (Address = MiLocateAddress(v149), (v150 = Address) != 0LL))
    && (v119 = *((unsigned int *)Address + 13),
        LODWORD(v119) = v119 & 0x7FFFFFFF,
        (v119 | ((unsigned __int64)*((unsigned __int8 *)Address + 34) << 31)) == 0x7FFFFFFFELL) )
  {
    v25 = 7;
    v139 |= 0x80u;
    v141 = 7;
  }
  else
  {
    v25 = 2;
  }
  if ( ((v8 >> 11) & 1) != 0 )
  {
    v142 = 1;
    v141 = v25 | 1;
    v21 = 1;
  }
  IsPteInStore = MiIsPteInStore(v145, v9);
  v29 = v28 & IsPteInStore | v3;
  if ( v21 != v28 )
  {
    if ( dword_140C4ECC0 )
    {
      v142 = v28;
      --dword_140C4ECC0;
      v21 = v28;
    }
    else
    {
      v30 = v147;
      if ( v147 )
      {
        v106 = v150;
        v107 = (v27 & 0x10) != 0;
        if ( (v27 & 0x10) != 0 && !v150 )
        {
          v106 = MiLocateAddress(v149);
          v150 = v106;
        }
        v21 = MiComputeFaultCluster(v145, v30, (unsigned __int64)v106 & -(__int64)v107, v29 & 1);
        v142 = v21;
        v28 = 1;
      }
      else if ( v149 > 0x7FFFFFFEFFFFLL )
      {
        v142 = v28;
        v21 = v28;
        if ( (v27 & 0x10) == 0 && (v149 < 0xFFFFF68000000000uLL || v149 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v21 = 16;
          v29 |= 4u;
          v142 = 16;
        }
      }
    }
  }
  LODWORD(v153) = v28 & v29;
  if ( (v28 & v29) != 0 )
  {
    if ( v21 > *((_DWORD *)v145 + 291) )
      v21 = *((_DWORD *)v145 + 291);
    v142 = v21;
  }
  v31 = a2;
  v158 = MiAllocateInPageSupport(a2, v144, &v142, (unsigned __int64)va & -(__int64)(v7 != 0));
  v32 = v158;
  if ( !v158 )
  {
    result = 3221225626LL;
LABEL_246:
    if ( v147 )
      *(_BYTE *)(v147 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v8
    || ((v8 >> 11) & 1) != 0
    && ((*(_BYTE *)(v157 + 34) & 0x28) == 0x28
     || (*(_BYTE *)(v157 + 34) & 0x20) == 0
     || v9 != *(_QWORD *)(v157 + 16)
     || (*(_DWORD *)(*(_QWORD *)v157 + 160LL) & 0x20) != 0) )
  {
    if ( v166 )
      MiUnlockProtoPoolPage(v166, 0x11u);
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v32);
    result = 3221226548LL;
    goto LABEL_246;
  }
  v33 = 1;
  if ( v147 && *(_BYTE *)v147 == 1 )
    MiSetInPagePrefetchPriority(v147, v32);
  v34 = v142;
  if ( v142 > v33 && (unsigned int)MiSufficientAvailablePages((__int64)v145, 0x140uLL) )
  {
    v35 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
    v163 = ((unsigned int)a2 >> 3) & 0x1FF;
    if ( (v139 & 0x10) != 0 )
    {
      v100 = v150;
      v101 = v149;
      if ( (v150 || (v150 = MiLocateAddress(v149), (v100 = v150) != 0LL))
        && ((_DWORD)v100[6] & 0x100000) == 0
        && (MiGetProtoPteAddress(v100, v101 >> 12, 4LL, &v156), v156)
        && (*(_BYTE *)(v156 + 34) & 2) == 0 )
      {
        v102 = *(_QWORD *)(v156 + 8);
        v36 = a2;
        v103 = (__int64)(a2 - v102) >> 3;
        v104 = ((__int64)(v102 + 8LL * *(unsigned int *)(v156 + 44) - a2) >> 3) - 1;
        if ( v104 >= v35 )
          v104 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
        v35 = v104;
        if ( (unsigned int)v103 >= v163 )
          LODWORD(v103) = ((unsigned int)a2 >> 3) & 0x1FF;
        v163 = v103;
      }
      else
      {
        v36 = a2;
        v34 = 1;
      }
    }
    else
    {
      v36 = a2;
    }
    if ( v147 || (v29 & 4) != 0 )
    {
      v163 = 0;
      if ( !v35 )
        v34 = 1;
    }
    if ( v34 <= 1 )
    {
      v31 = a2;
      v52 = v143;
    }
    else
    {
      v146 = v8;
      v144 = v34 - 1;
      v156 = v36 + 8;
      v37 = v34 - 1;
      if ( v35 <= v34 - 1 )
        v37 = v35;
      PagingFileOffset = MiGetPagingFileOffset((__int64)&v146);
      v39 = -3 - PagingFileOffset;
      v157 = PagingFileOffset;
      if ( (unsigned __int64)PagingFileOffset + v37 < 0xFFFFFFFE )
        v39 = v37;
      if ( (_DWORD)v153 || v147 )
        v29 |= 8u;
      v40 = v8 & 0xFFFFFFFFFC00FF1DuLL;
      updated = v8 & 0xFFFFFFFFFC00FF1DuLL;
      if ( v39 )
      {
        v42 = v156;
        v43 = v157;
        while ( 1 )
        {
          updated = MiUpdatePageFileHighInPte(updated, ++v43);
          v44 = MI_READ_PTE_LOCK_FREE(v42);
          if ( (v44 & 0x3E0) != 0 && (v44 & 0xFFFFFFFFFC00FF1DuLL) == updated )
          {
            v143 = v42;
          }
          else if ( (v29 & 8) != 0 )
          {
LABEL_60:
            v8 = v148;
            v23 = v155;
            v32 = v158;
            break;
          }
          v42 += 8LL;
          if ( !--v39 )
            goto LABEL_60;
        }
      }
      v45 = a2;
      v46 = v144 - ((__int64)(v143 - a2) >> 3);
      v143 = (__int64)(v143 - a2) >> 3;
      v146 = v8;
      if ( v163 <= v46 )
        v46 = v163;
      v47 = v46;
      v156 = a2;
      v48 = MiGetPagingFileOffset((__int64)&v146);
      v157 = v48;
      v49 = v48 - 1;
      if ( v47 <= (unsigned __int64)v48 - 1 )
        v49 = v47;
      if ( v49 )
      {
        v96 = v157;
        v97 = v49;
        while ( 1 )
        {
          --v96;
          v45 -= 8LL;
          v40 = MiUpdatePageFileHighInPte(v40, v96);
          v98 = MI_READ_PTE_LOCK_FREE(v45);
          if ( (v98 & 0x3E0) != 0 && (v98 & 0xFFFFFFFFFC00FF1DuLL) == v40 )
          {
            v156 = v45;
          }
          else if ( (v29 & 8) != 0 )
          {
LABEL_149:
            v8 = v148;
            v32 = v158;
            break;
          }
          if ( !--v97 )
            goto LABEL_149;
        }
      }
      v31 = a2;
      v50 = v8;
      if ( qword_140C4DF40 && (v8 & 0x10) == 0 )
        v50 = v8 & ~qword_140C4DF40;
      v9 = MiUpdatePageFileHighInPte(v8, HIDWORD(v50) - (unsigned int)((__int64)(a2 - v156) >> 3));
      LODWORD(v146) = v51 + v143 + 1;
      v52 = a2 - 8LL * v51;
      v143 = v52;
    }
  }
  else
  {
    v52 = a2;
  }
  v53 = MiObtainFaultCharges(v145, v146, v141);
  v54 = v146;
  v55 = v53;
  v158 = v53;
  if ( (unsigned int)v146 > (unsigned __int64)v53 )
  {
    v120 = v9;
    if ( qword_140C4DF40 && (v9 & 0x10) == 0 )
      v120 = v9 & ~qword_140C4DF40;
    v121 = (unsigned int)v146 - v55;
    v122 = HIDWORD(v120);
    if ( v52 + 8 * v121 <= v31 )
    {
      v143 = v52 + 8 * v121;
    }
    else
    {
      v143 = v31;
      v121 = (__int64)(v31 - v52) >> 3;
    }
    v9 = MiUpdatePageFileHighInPte(v9, v121 + v122);
    LODWORD(v146) = v123;
    v54 = v123;
  }
  v56 = v147;
  v57 = 1;
  if ( !v147 || *(_BYTE *)v147 != 1 )
  {
    v58 = v145;
    v59 = v54;
    v60 = v54;
LABEL_73:
    v155 = v59;
    goto LABEL_74;
  }
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v145, ((*(_DWORD *)(v147 + 80) >> 3) & 7u) + 1);
  v59 = v109;
  v60 = AvailablePagesBelowPriority;
  v155 = AvailablePagesBelowPriority;
  if ( AvailablePagesBelowPriority > v109 )
  {
    v60 = v109;
    goto LABEL_73;
  }
LABEL_74:
  if ( !v60 )
  {
LABEL_296:
    if ( v166 )
      MiUnlockProtoPoolPage(v166, 0x11u);
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v32);
    if ( v56 )
      *(_BYTE *)(v56 + 1) = 2;
    MiReturnFaultCharges(v145, v158, v141);
    return 3221225495LL;
  }
  if ( !v56
    || *(_BYTE *)v56 != v57
    || (v110 = *(_QWORD *)(v56 + 88)) == 0
    || v151
    || v149 > 0x7FFFFFFEFFFFLL
    || v166
    || *(ULONG_PTR **)(qword_140C4E648 + 8 * ((*(_QWORD *)(v110 + 40) >> 39) & 0x3FFLL)) != v58 )
  {
    v61 = v154;
LABEL_77:
    v62 = MiProtectionToCacheAttribute(v61);
    PageChain = MiGetPageChain((__int64)v145, v160, v23, v62, v151, -1LL, &v155);
    v64 = v155;
    v153 = PageChain;
    goto LABEL_78;
  }
  v124 = (__int64)((unsigned __int128)((v110 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v125 = MiSearchNumaNodeTable(v124 + (v124 >> 63));
  v61 = v154;
  if ( *(_DWORD *)(v125 + 8) != v23 - 1 )
    goto LABEL_77;
  v153 = *(_QWORD *)(v56 + 88);
  v126 = MiProtectionToCacheAttribute(v154);
  if ( *(unsigned __int8 *)(v127 + 34) >> 6 != v126 )
    goto LABEL_77;
  v128 = 0;
  v129 = v127;
  while ( 1 )
  {
    ++v128;
    v130 = *(_QWORD *)(v129 + 24) & 0xFFFFFFFFFLL;
    v131 = v129;
    if ( v130 == 0xFFFFFFFFFLL )
      break;
    v129 = 48 * v130 - 0x58000000000LL;
    if ( v128 >= v60 )
      goto LABEL_270;
  }
  v129 = 0LL;
LABEL_270:
  v64 = v128;
  MiSetPfnBlink(v131, 0xFFFFFFFFFLL, 0LL);
  v132 = v147;
  *(_QWORD *)(v147 + 88) = v129;
  v56 = v132;
  PageChain = v153;
LABEL_78:
  if ( !PageChain )
    goto LABEL_296;
  if ( v64 != v59 )
  {
    v113 = v143;
    if ( v143 + 8 * v64 <= a2 )
    {
      v114 = v9;
      if ( qword_140C4DF40 && (v9 & 0x10) == 0 )
        v114 = v9 & ~qword_140C4DF40;
      v115 = v59 - v64;
      v116 = HIDWORD(v114);
      if ( v143 + 8 * v115 <= a2 )
      {
        v143 += 8 * v115;
      }
      else
      {
        v143 = a2;
        v115 = (__int64)(a2 - v113) >> 3;
      }
      v9 = MiUpdatePageFileHighInPte(v9, v116 + v115);
    }
    LODWORD(v146) = v64;
  }
  v65 = v32 + 272;
  v66 = 0;
  LODWORD(v155) = *(_DWORD *)(v32 + 192) >> 9;
  v164 = 0;
  v67 = (__int64 *)(v32 + 320);
  v148 = v32 + 320;
  while ( 1 )
  {
    v68 = MI_READ_PTE_LOCK_FREE(v143);
    v69 = 1LL;
    if ( (v29 & 0x10) != 0 )
      goto LABEL_95;
    if ( (v68 & 1) == 0 && (v68 & 0x400) == 0 && (v68 & 0x800) == 0 )
    {
      v70 = v68;
      if ( qword_140C4DF40 )
      {
        if ( (v68 & 0x10) != 0 )
          v70 = v68 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v70 = v68 & ~qword_140C4DF40;
      }
      v71 = v9;
      if ( qword_140C4DF40 && (v9 & 0x10) == 0 )
        v71 = v9 & ~qword_140C4DF40;
      if ( ((v70 ^ v71) & 0xFFFFFFFF00000000uLL) == 0 && (v68 & 4) != 0 && ((v68 ^ v9) & 0xF000) == 0 )
      {
        v72 = MiIsPteInStore(v145, v68);
        if ( v72 == ((unsigned int)v69 & v29) )
        {
LABEL_95:
          v73 = v153;
          v164 += v69;
          v74 = v143;
          *v67 = (v153 + 0x58000000000LL) / 48;
          if ( v74 == a2 )
            LOBYTE(v75) = v155;
          else
            v75 = *(_DWORD *)(v32 + 192) >> 12;
          MiLockSetPfnPriority(v73, v75 & 7);
          v76 = *(_QWORD *)(v153 + 24) & 0xFFFFFFFFFLL;
          MiSetPfnBlink(v153, 0LL, 0LL);
          if ( v76 == 0xFFFFFFFFFLL )
            v153 = 0LL;
          else
            v153 = 48 * v76 - 0x58000000000LL;
          v67 = (__int64 *)v148;
          v69 = 1LL;
          goto LABEL_100;
        }
      }
    }
    if ( (v29 & 8) != 0 )
      break;
    v29 |= 2u;
    *v67 = qword_140C4ED78;
LABEL_100:
    v148 = (__int64)++v67;
    if ( v56 )
      MiAdvanceFaultList(v56);
    v143 += 8LL;
    v77 = v9;
    if ( qword_140C4DF40 && (v9 & 0x10) == 0 )
      v77 = v9 & ~qword_140C4DF40;
    v9 = MiUpdatePageFileHighInPte(v9, v69 + HIDWORD(v77));
    v66 += v69;
    v78 = v146;
LABEL_106:
    if ( v66 >= v78 )
    {
      v79 = v146;
      v80 = v143;
      goto LABEL_108;
    }
  }
  v133 = a2;
  v80 = v143;
  if ( v143 <= a2 )
  {
    v67 = (__int64 *)(v32 + 320);
    v134 = (_QWORD *)(v32 + 320);
    if ( v66 )
    {
      v135 = v164;
      do
      {
        if ( *v134 != qword_140C4ED78 )
        {
          MiReleaseFreshPage(48LL * *v134 - 0x58000000000LL);
          --v135;
        }
        ++v134;
        --v66;
      }
      while ( v66 );
      v133 = a2;
      v65 = v32 + 272;
      v164 = v135;
      v56 = v147;
    }
    v29 &= ~2u;
    v148 = v32 + 320;
    v143 = v133;
    v136 = MI_READ_PTE_LOCK_FREE(v133);
    LOBYTE(v69) = 1;
    v9 = v136;
    v78 = 1;
    LODWORD(v146) = 1;
    goto LABEL_106;
  }
  v79 = v66;
  LODWORD(v146) = v66;
LABEL_108:
  v81 = v80 - 8LL * v79;
  v82 = *(_QWORD *)(v32 + 8 * ((__int64)(a2 - v81) >> 3) + 320);
  v83 = v69 & (v139 >> 4);
  if ( v83 )
    v84 = 0LL;
  else
    v84 = (__int64)(v81 << 25) >> 16;
  *(_QWORD *)v65 = 0LL;
  v85 = v79 << 12;
  *(_DWORD *)(v65 + 40) = v85;
  *(_QWORD *)(v65 + 32) = v84 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v65 + 44) = v84 & 0xFFF;
  *(_WORD *)(v65 + 10) = 66;
  *(_WORD *)(v65 + 8) = 8 * ((((unsigned __int64)(v84 & 0xFFF) + v85 + 4095) >> 12) + 6);
  if ( (v29 & 2) != 0 )
  {
    v137 = MiReduceMdl(v65);
    if ( v137 )
    {
      v81 += 8 * v137;
      if ( !v83 )
        *(_QWORD *)(v65 + 32) += v137 << 12;
    }
    v79 = *(_DWORD *)(v65 + 40) >> 12;
    LODWORD(v146) = v79;
  }
  else
  {
    *(_WORD *)(v65 + 10) = 16450;
  }
  v86 = MI_READ_PTE_LOCK_FREE(v81);
  v148 = v86;
  if ( v79 == 1 )
    v140 = v139 & 0xF8 | (*(_DWORD *)(v32 + 192) >> 9) & 7 | 8;
  else
    v140 = v139 & 0xDF;
  LOBYTE(v152) = v140;
  MiInitializeReadInProgressPfn(v149, v32 + 320, v146, v81, v32, v152);
  if ( (v29 & 0x10) != 0 )
  {
    if ( qword_140C4DF40 && (v86 & 0x10) == 0 )
      v86 &= ~qword_140C4DF40;
    v138 = 48 * ((v86 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    MiFlowThroughInsertNode(v32, v138);
    v86 = *(_QWORD *)(v138 + 16);
    v148 = v86;
  }
  v87 = v166;
  if ( (v140 & 0x10) != 0 )
    MiObtainProtoReference(v166, 0LL);
  v88 = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)(v32 + 232) = a2;
  v89 = v147;
  *(_QWORD *)(v32 + 168) = v88;
  if ( v89 )
  {
    if ( *(_BYTE *)v89 == 1 )
    {
      v111 = *(_DWORD *)(v32 + 192) | 8;
      *(_DWORD *)(v32 + 192) = v111;
      if ( (*(_DWORD *)(v89 + 80) & 0x2000) != 0 )
        *(_DWORD *)(v32 + 192) = v111 | 0x20;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v32 + 192) |= 0x80u;
  if ( v150 && MiVadPageSizes[(*((_DWORD *)v150 + 12) >> 18) & 3] == 16 )
    *(_DWORD *)(v32 + 192) |= 0x100000u;
  if ( v87 )
    MiUnlockProtoPoolPage(v87, 0x11u);
  MiFreePageChain(v153);
  if ( v164 != v158 )
    MiReturnFaultCharges(v145, v158 - v164, v141);
  *v168 = v32;
  v90 = MiGetPagingFileOffset((__int64)&v148);
  v91 = (unsigned __int16)v86 >> 12;
  LODWORD(v159) = v90;
  v92 = v145[v91 + 868];
  if ( (v140 & 0x10) != 0 )
    *(_QWORD *)(v32 + 160) = v87;
  if ( (v29 & 1) != 0 )
  {
    *(_DWORD *)(v32 + 192) |= 0x100u;
    *(_QWORD *)(v32 + 96) = v90 | (unsigned __int64)(v91 << 60);
  }
  else
  {
    HIDWORD(v159) = 0;
    *(_QWORD *)(v32 + 96) = (unsigned __int64)(unsigned int)v159 << 12;
  }
  v93 = *(_DWORD *)(v32 + 192) | 0x200000;
  *(_QWORD *)(v32 + 200) = v92;
  *(_DWORD *)(v32 + 192) = v93;
  if ( *(_QWORD *)(v92 + 216)
    && (!v89 || *(_BYTE *)v89 != 1 || (*(_DWORD *)(v89 + 80) & 0x1000) == 0 || (dword_140CFB180 & 1) != 0) )
  {
    *(_DWORD *)(v32 + 192) = v93 | 0x400000;
  }
  *(_QWORD *)(v32 + 240) = v81;
  result = 3221435187LL;
  *(_QWORD *)(v32 + 248) = 48 * v82 - 0x58000000000LL;
  return result;
}
