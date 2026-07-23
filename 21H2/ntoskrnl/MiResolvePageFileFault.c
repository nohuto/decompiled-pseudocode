/*
 * XREFs of MiResolvePageFileFault @ 0x140208108
 * Callers:
 *     MiIssueFlowThroughFault @ 0x14020923C (MiIssueFlowThroughFault.c)
 *     MiDispatchFault @ 0x1402B3800 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x1402B9CD0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiIsPteInStore @ 0x140208FE0 (MiIsPteInStore.c)
 *     MiLockSetPfnPriority @ 0x14020900C (MiLockSetPfnPriority.c)
 *     MiFreePageChain @ 0x140209074 (MiFreePageChain.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x14020A3E8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiComputeFaultCluster @ 0x14020B0C4 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x14020B2E8 (MiAdvanceFaultList.c)
 *     MiSetInPagePrefetchPriority @ 0x14020B354 (MiSetInPagePrefetchPriority.c)
 *     MiReturnFaultCharges @ 0x14020B384 (MiReturnFaultCharges.c)
 *     MiFlowThroughInsertNode @ 0x14024E3EC (MiFlowThroughInsertNode.c)
 *     MiIsStoreProcess @ 0x140258450 (MiIsStoreProcess.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     MiGetAvailablePagesBelowPriority @ 0x14025F8BC (MiGetAvailablePagesBelowPriority.c)
 *     MiSufficientAvailablePages @ 0x140263410 (MiSufficientAvailablePages.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     MiObtainFaultCharges @ 0x1402C0390 (MiObtainFaultCharges.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     MiComputeFaultNode @ 0x1402E3950 (MiComputeFaultNode.c)
 *     MiSharedVaToPartition @ 0x1402E5C9C (MiSharedVaToPartition.c)
 *     MiProtectionToCacheAttribute @ 0x1402E6690 (MiProtectionToCacheAttribute.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     MiInitializeReadInProgressPfn @ 0x140306C80 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1403074AC (MiReduceMdl.c)
 *     MiFreeInPageSupportBlock @ 0x14030762C (MiFreeInPageSupportBlock.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     MiAllocateInPageSupport @ 0x1403248F0 (MiAllocateInPageSupport.c)
 *     MiObtainProtoReference @ 0x140324D5C (MiObtainProtoReference.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiKernelStackVaToStackNode @ 0x14038C2E4 (MiKernelStackVaToStackNode.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 *a1, unsigned __int64 a2, ...)
{
  unsigned int v3; // r14d
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // r13
  char v16; // r15
  unsigned __int64 v17; // rdi
  __int64 v18; // r15
  int SystemRegionType; // ecx
  __int64 v20; // r8
  int v21; // r15d
  bool v22; // zf
  ULONG_PTR *v23; // rcx
  _KPROCESS *Process; // r13
  unsigned int v25; // edi
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  int v28; // r15d
  __int64 Address; // rax
  int v30; // ecx
  int IsPteInStore; // eax
  char v32; // r9
  int v33; // r10d
  int v34; // r14d
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rdi
  __int64 v37; // r13
  __int64 v38; // rdx
  unsigned int v39; // r10d
  unsigned int v40; // r12d
  __int64 v41; // rdx
  unsigned int v42; // edi
  unsigned __int64 v43; // r8
  __int64 v44; // rbx
  unsigned int PagingFileOffset; // eax
  __int64 v46; // r8
  unsigned int v47; // r12d
  unsigned __int64 v48; // rbx
  unsigned __int64 updated; // rdi
  unsigned __int64 v50; // rsi
  __int64 v51; // r13
  __int64 v52; // rax
  unsigned __int64 v53; // r12
  unsigned int v54; // ecx
  unsigned __int64 v55; // rdi
  unsigned int v56; // eax
  unsigned int v57; // ecx
  unsigned __int64 v58; // rdx
  unsigned int v59; // r9d
  unsigned __int64 v60; // rsi
  unsigned int v61; // eax
  __int64 v62; // rdx
  unsigned int v63; // r8d
  __int64 v64; // r9
  unsigned __int64 v65; // rsi
  char v66; // r11
  __int64 v67; // r10
  unsigned __int64 v68; // rdi
  unsigned __int64 v69; // r12
  unsigned int v70; // r8d
  int v71; // eax
  __int64 PageChain; // rax
  unsigned __int64 v73; // r15
  __int64 v74; // r15
  unsigned int v75; // r12d
  __int64 *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // r11
  unsigned __int64 v79; // rdx
  __int64 v80; // rcx
  int v81; // eax
  __int64 v82; // r8
  unsigned __int64 v83; // rax
  int v84; // edx
  __int64 v85; // rdi
  unsigned __int64 v86; // rdx
  unsigned int v87; // eax
  unsigned int v88; // esi
  unsigned __int64 v89; // rcx
  unsigned __int64 v90; // rdi
  __int64 v91; // r12
  char v92; // bl
  __int64 v93; // r9
  __int64 v94; // r8
  unsigned __int64 v95; // rbx
  __int64 v96; // r15
  __int64 v97; // rax
  unsigned __int64 v98; // rsi
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // rdx
  unsigned int v102; // eax
  __int64 v103; // rbx
  __int64 v104; // rdx
  int v105; // ecx
  __int64 result; // rax
  unsigned __int64 v107; // rax
  __int64 v108; // rsi
  unsigned int v109; // edi
  __int64 v110; // rax
  __int64 v111; // rax
  __int64 v112; // rcx
  unsigned __int64 v113; // r10
  __int64 v114; // rax
  unsigned int v115; // ecx
  __int64 v116; // rax
  __int64 v117; // rax
  bool v118; // r10
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned int v120; // r8d
  __int64 v121; // rdx
  int v122; // edx
  __int64 v123; // rax
  unsigned __int64 v124; // r9
  unsigned __int64 v125; // rcx
  __int64 v126; // rdi
  unsigned __int64 v127; // rcx
  int v128; // eax
  __int64 v130; // rdx
  __int64 v131; // rcx
  unsigned __int64 v132; // rax
  __int64 v133; // rcx
  unsigned __int64 v134; // rax
  unsigned int v135; // r9d
  unsigned __int64 v136; // rdx
  __int64 v137; // rax
  int v138; // eax
  __int64 v139; // rdx
  unsigned int v140; // ecx
  __int64 v141; // rsi
  __int64 v142; // rax
  __int64 v143; // r9
  unsigned __int64 v144; // rax
  unsigned __int64 v145; // rax
  _QWORD *v146; // rbx
  unsigned int v147; // esi
  __int64 v148; // rax
  __int64 v149; // rax
  __int64 v150; // rbx
  unsigned __int8 v151; // [rsp+48h] [rbp-89h]
  char v152; // [rsp+48h] [rbp-89h]
  unsigned int v153; // [rsp+4Ch] [rbp-85h]
  unsigned int v154; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int64 v155; // [rsp+58h] [rbp-79h]
  unsigned int v156; // [rsp+60h] [rbp-71h]
  __int64 v157; // [rsp+68h] [rbp-69h]
  unsigned __int64 v158; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v159; // [rsp+78h] [rbp-59h]
  unsigned __int64 v160; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int64 v161; // [rsp+88h] [rbp-49h]
  __int64 v162; // [rsp+90h] [rbp-41h] BYREF
  int v163; // [rsp+98h] [rbp-39h]
  int v164; // [rsp+9Ch] [rbp-35h]
  __int64 v165; // [rsp+A0h] [rbp-31h]
  __int64 v166; // [rsp+A8h] [rbp-29h]
  unsigned __int64 v167; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v168; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v169; // [rsp+C0h] [rbp-11h]
  __int64 v170; // [rsp+C8h] [rbp-9h]
  __int64 v171; // [rsp+D0h] [rbp-1h]
  unsigned __int64 v172; // [rsp+D8h] [rbp+7h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp+Fh]
  unsigned int v175; // [rsp+138h] [rbp+67h]
  unsigned int v176; // [rsp+138h] [rbp+67h]
  __int64 v178; // [rsp+148h] [rbp+77h] BYREF
  va_list va; // [rsp+148h] [rbp+77h]
  __int64 *v180; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v178 = va_arg(va1, _QWORD);
  v180 = va_arg(va1, __int64 *);
  v161 = *a1;
  v3 = 0;
  v168 = 0LL;
  v4 = a1[7];
  v5 = a1[2];
  v172 = v4;
  v171 = 0LL;
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  CurrentThread = KeGetCurrentThread();
  v160 = v6;
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v178 )
    {
      LOBYTE(v7) = 17;
      MiUnlockProtoPoolPage(v178, v7);
    }
    return 3221225633LL;
  }
  v8 = v178;
  v9 = 0xFFFFFFFFFLL;
  v10 = v160;
  v11 = 0xFFFFFA8000000000uLL;
  if ( (v6 & 0x800) != 0 )
  {
    if ( qword_140C4DF80 )
    {
      if ( (v6 & 0x10) != 0 )
        v6 &= ~0x10uLL;
      else
        v6 &= ~qword_140C4DF80;
    }
    v9 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v3 = 16;
    v169 = v9;
    v12 = *(_QWORD *)(v9 + 16);
    v13 = (*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL;
  }
  else
  {
    v169 = 0LL;
    v12 = v160;
    if ( v178 )
    {
      v14 = MiSharedVaToPartition(v4, v161, a2);
      v157 = v14;
      goto LABEL_6;
    }
    v13 = *(unsigned __int16 *)(v4 + 174);
  }
  v14 = *(_QWORD *)(qword_140C4E688 + 8 * v13);
  v157 = v14;
LABEL_6:
  v15 = 0LL;
  v156 = 2;
  v16 = v5;
  v159 = 0LL;
  v17 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
  v18 = v16 & 1;
  if ( v18 && *(_BYTE *)v17 == 5 )
  {
    v128 = *(_DWORD *)(v17 + 56);
    if ( (v128 & 4) != 0 && ((v128 & 0x10) != 0 || !(unsigned int)MiIsPteInStore(v14, v12, v11)) )
    {
      if ( v8 )
      {
        LOBYTE(v9) = 17;
        MiUnlockProtoPoolPage(v8, v9);
      }
      return 3221225495LL;
    }
    v159 = 0LL;
  }
  else if ( v18 )
  {
    if ( *(_BYTE *)v17 == 2 )
    {
      v15 = v17;
      v159 = v17;
    }
    else if ( *(_BYTE *)v17 == 1 )
    {
      v159 = v17;
      v15 = v17;
      if ( (v160 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset(&v160, v9, v11) )
        return 0LL;
      v156 = 0;
      v3 |= 0x20u;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v161);
  if ( v18 && *(_BYTE *)v17 == 4 )
  {
    v116 = *(_QWORD *)(v17 + 40);
    v21 = 8;
    v156 |= 8u;
    v15 = v17;
    v159 = v17;
    v23 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v116 + 544) + 1838LL));
    v157 = (__int64)v23;
LABEL_12:
    v163 = v21;
    goto LABEL_13;
  }
  if ( ((v10 >> 5) & 0x1F) != 0x1F )
  {
    v21 = 0;
    v22 = SystemRegionType == 12;
    v23 = (ULONG_PTR *)v157;
    if ( v22 )
      v21 = 8;
    goto LABEL_12;
  }
  v163 = 8;
  v123 = MiKernelStackVaToStackNode(v161);
  if ( v123 )
    v23 = *(ULONG_PTR **)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(v123 + 40));
  else
    v23 = &MiSystemPartition;
  v156 |= 8u;
  v157 = (__int64)v23;
LABEL_13:
  if ( v3 >= 0x20 && (*(_DWORD *)(v15 + 80) & 0x200) != 0 )
  {
    if ( (unsigned int)MiIsPteInStore(v23, v10, v20) )
    {
      if ( v8 )
      {
        LOBYTE(v130) = 17;
        MiUnlockProtoPoolPage(v8, v130);
      }
      return 0LL;
    }
  }
  v164 = 0;
  LODWORD(v158) = 1;
  Process = CurrentThread->ApcState.Process;
  v25 = 16;
  v154 = 16;
  v155 = a2;
  v153 = 2;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v26 = v10;
    v151 = v164;
    goto LABEL_17;
  }
  v151 = 16;
  v111 = MI_READ_PTE_LOCK_FREE(((v161 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v111) )
  {
    v151 = 48;
    goto LABEL_231;
  }
  if ( Process[1].Affinity.Bitmap[12] )
  {
LABEL_231:
    v25 = 1;
    v154 = 1;
  }
  v26 = MI_READ_PTE_LOCK_FREE(&v160);
LABEL_17:
  v166 = (v26 >> 5) & 0x1F;
  v162 = a1[11];
  v28 = MiComputeFaultNode(a1, 0LL, &v162);
  LODWORD(v167) = v28;
  Address = v162;
  if ( (v162
     || (a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL && (unsigned int)MiIsStoreProcess(Process)
      || (*(_BYTE *)(v172 + 184) & 7) == 0
      && v161 < 0xFFFF800000000000uLL
      && ((v107 = Process[1].ActiveProcessorsPadding[8], *(_QWORD *)(v107 + 424)) || *(_QWORD *)(v107 + 432)))
     && (Address = MiLocateAddress(v161), (v162 = Address) != 0))
    && (v131 = *(unsigned int *)(Address + 52),
        LODWORD(v131) = v131 & 0x7FFFFFFF,
        (v131 | ((unsigned __int64)*(unsigned __int8 *)(Address + 34) << 31)) == 0x7FFFFFFFELL) )
  {
    v30 = 7;
    v151 |= 0x80u;
    v153 = 7;
  }
  else
  {
    v30 = 2;
  }
  if ( ((v10 >> 11) & 1) != 0 )
  {
    v154 = 1;
    v153 = v30 | 1;
    v25 = 1;
  }
  IsPteInStore = MiIsPteInStore(v157, v12, v27);
  v34 = v33 & IsPteInStore | v3;
  if ( v25 != v33 )
  {
    if ( dword_140C4ED00 )
    {
      v154 = v33;
      --dword_140C4ED00;
      v25 = v33;
    }
    else
    {
      v35 = v159;
      if ( v159 )
      {
        v117 = v162;
        v118 = (v32 & 0x10) != 0;
        if ( (v32 & 0x10) != 0 && !v162 )
        {
          v117 = MiLocateAddress(v161);
          v162 = v117;
        }
        v25 = MiComputeFaultCluster(v157, v35, v117 & -(__int64)v118, v34 & 1);
        v154 = v25;
        v33 = 1;
      }
      else if ( v161 > 0x7FFFFFFEFFFFLL )
      {
        v154 = v33;
        v25 = v33;
        if ( (v32 & 0x10) == 0 && (v161 < 0xFFFFF68000000000uLL || v161 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v25 = 16;
          v34 |= 4u;
          v154 = 16;
        }
      }
    }
  }
  LODWORD(v165) = v33 & v34;
  if ( (v33 & v34) != 0 )
  {
    if ( v25 > *(_DWORD *)(v157 + 1164) )
      v25 = *(_DWORD *)(v157 + 1164);
    v154 = v25;
  }
  v36 = a2;
  v170 = MiAllocateInPageSupport(a2, v156, &v154, (unsigned __int64)va & -(__int64)(v8 != 0));
  v37 = v170;
  if ( !v170 )
  {
    result = 3221225626LL;
LABEL_246:
    if ( v159 )
      *(_BYTE *)(v159 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v10
    || ((v10 >> 11) & 1) != 0
    && ((v38 = v169, (*(_BYTE *)(v169 + 34) & 0x28) == 0x28)
     || (*(_BYTE *)(v169 + 34) & 0x20) == 0
     || v12 != *(_QWORD *)(v169 + 16)
     || (*(_DWORD *)(*(_QWORD *)v169 + 160LL) & 0x20) != 0) )
  {
    if ( v178 )
    {
      LOBYTE(v38) = 17;
      MiUnlockProtoPoolPage(v178, v38);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v37);
    result = 3221226548LL;
    goto LABEL_246;
  }
  v39 = 1;
  if ( v159 && *(_BYTE *)v159 == 1 )
    MiSetInPagePrefetchPriority(v159, v37);
  v40 = v154;
  if ( v154 > v39 && (unsigned int)MiSufficientAvailablePages(v157, 320LL) )
  {
    v42 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
    v175 = ((unsigned int)a2 >> 3) & 0x1FF;
    if ( (v151 & 0x10) != 0 )
    {
      v112 = v162;
      v113 = v161;
      if ( (v162 || (v162 = MiLocateAddress(v161), (v112 = v162) != 0))
        && (*(_DWORD *)(v112 + 48) & 0x100000) == 0
        && (MiGetProtoPteAddress(v112, v113 >> 12, 4LL, &v168), v168)
        && (*(_BYTE *)(v168 + 34) & 2) == 0 )
      {
        v41 = *(_QWORD *)(v168 + 8);
        v43 = a2;
        v114 = (__int64)(a2 - v41) >> 3;
        v115 = ((__int64)(v41 + 8LL * *(unsigned int *)(v168 + 44) - a2) >> 3) - 1;
        if ( v115 >= v42 )
          v115 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
        v42 = v115;
        if ( (unsigned int)v114 >= v175 )
          LODWORD(v114) = ((unsigned int)a2 >> 3) & 0x1FF;
        v175 = v114;
      }
      else
      {
        v43 = a2;
        v40 = 1;
      }
    }
    else
    {
      v43 = a2;
    }
    if ( v159 || (v34 & 4) != 0 )
    {
      v175 = 0;
      if ( !v42 )
        v40 = 1;
    }
    if ( v40 <= 1 )
    {
      v36 = a2;
      v60 = v155;
    }
    else
    {
      v158 = v10;
      v156 = v40 - 1;
      v168 = v43 + 8;
      v44 = v40 - 1;
      if ( v42 <= v40 - 1 )
        v44 = v42;
      PagingFileOffset = MiGetPagingFileOffset(&v158, v41, v43);
      v47 = -3 - PagingFileOffset;
      v169 = PagingFileOffset;
      if ( (unsigned __int64)PagingFileOffset + v44 < 0xFFFFFFFE )
        v47 = v44;
      if ( (_DWORD)v165 || v159 )
        v34 |= 8u;
      v48 = v10 & 0xFFFFFFFFFC00FF1DuLL;
      updated = v10 & 0xFFFFFFFFFC00FF1DuLL;
      if ( v47 )
      {
        v50 = v168;
        v51 = v169;
        while ( 1 )
        {
          updated = MiUpdatePageFileHighInPte(updated, ++v51);
          v52 = MI_READ_PTE_LOCK_FREE(v50);
          if ( (v52 & 0x3E0) != 0 && (v52 & 0xFFFFFFFFFC00FF1DuLL) == updated )
          {
            v155 = v50;
          }
          else if ( (v34 & 8) != 0 )
          {
LABEL_60:
            v10 = v160;
            v28 = v167;
            v37 = v170;
            break;
          }
          v50 += 8LL;
          if ( !--v47 )
            goto LABEL_60;
        }
      }
      v53 = a2;
      v54 = v156 - ((__int64)(v155 - a2) >> 3);
      v155 = (__int64)(v155 - a2) >> 3;
      v158 = v10;
      if ( v175 <= v54 )
        v54 = v175;
      v55 = v54;
      v168 = a2;
      v56 = MiGetPagingFileOffset(&v158, a2, v46);
      v169 = v56;
      v57 = v56 - 1;
      if ( v55 <= (unsigned __int64)v56 - 1 )
        v57 = v55;
      if ( v57 )
      {
        v108 = v169;
        v109 = v57;
        while ( 1 )
        {
          --v108;
          v53 -= 8LL;
          v48 = MiUpdatePageFileHighInPte(v48, v108);
          v110 = MI_READ_PTE_LOCK_FREE(v53);
          if ( (v110 & 0x3E0) != 0 && (v110 & 0xFFFFFFFFFC00FF1DuLL) == v48 )
          {
            v168 = v53;
          }
          else if ( (v34 & 8) != 0 )
          {
LABEL_149:
            v10 = v160;
            v37 = v170;
            break;
          }
          if ( !--v109 )
            goto LABEL_149;
        }
      }
      v36 = a2;
      v58 = v10;
      if ( qword_140C4DF80 && (v10 & 0x10) == 0 )
        v58 = v10 & ~qword_140C4DF80;
      v12 = MiUpdatePageFileHighInPte(v10, HIDWORD(v58) - (unsigned int)((__int64)(a2 - v168) >> 3));
      LODWORD(v158) = v59 + v155 + 1;
      v60 = a2 - 8LL * v59;
      v155 = v60;
    }
  }
  else
  {
    v60 = a2;
  }
  v61 = MiObtainFaultCharges(v157, (unsigned int)v158, v153);
  v63 = v158;
  v64 = v61;
  v170 = v61;
  if ( (unsigned int)v158 > (unsigned __int64)v61 )
  {
    v132 = v12;
    if ( qword_140C4DF80 && (v12 & 0x10) == 0 )
      v132 = v12 & ~qword_140C4DF80;
    v133 = (unsigned int)v158 - v64;
    v134 = HIDWORD(v132);
    if ( v60 + 8 * v133 <= v36 )
    {
      v155 = v60 + 8 * v133;
    }
    else
    {
      v155 = v36;
      v133 = (__int64)(v36 - v60) >> 3;
    }
    v12 = MiUpdatePageFileHighInPte(v12, v133 + v134);
    LODWORD(v158) = v135;
    v63 = v135;
  }
  v65 = v159;
  v66 = 1;
  if ( !v159 || *(_BYTE *)v159 != 1 )
  {
    v67 = v157;
    v68 = v63;
    v69 = v63;
LABEL_73:
    v167 = v68;
    goto LABEL_74;
  }
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v157, ((*(_DWORD *)(v159 + 80) >> 3) & 7u) + 1);
  v68 = v120;
  v69 = AvailablePagesBelowPriority;
  v167 = AvailablePagesBelowPriority;
  if ( AvailablePagesBelowPriority > v120 )
  {
    v69 = v120;
    goto LABEL_73;
  }
LABEL_74:
  if ( !v69 )
  {
LABEL_296:
    if ( v178 )
    {
      LOBYTE(v62) = 17;
      MiUnlockProtoPoolPage(v178, v62);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v37);
    if ( v65 )
      *(_BYTE *)(v65 + 1) = 2;
    MiReturnFaultCharges(v157, v170, v153);
    return 3221225495LL;
  }
  if ( !v65
    || *(_BYTE *)v65 != v66
    || (v121 = *(_QWORD *)(v65 + 88)) == 0
    || v163
    || v161 > 0x7FFFFFFEFFFFLL
    || v178
    || *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v121 + 40) >> 39) & 0x3FFLL)) != v67 )
  {
    v70 = v166;
LABEL_77:
    v71 = MiProtectionToCacheAttribute(v70);
    PageChain = MiGetPageChain(v157, v172, v28, v71, v163, -1LL, (__int64)&v167);
    v73 = v167;
    v165 = PageChain;
    goto LABEL_78;
  }
  v136 = (__int64)((unsigned __int128)((v121 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v137 = MiSearchNumaNodeTable(v136 + (v136 >> 63));
  v70 = v166;
  if ( *(_DWORD *)(v137 + 8) != v28 - 1 )
    goto LABEL_77;
  v165 = *(_QWORD *)(v65 + 88);
  v138 = MiProtectionToCacheAttribute((unsigned int)v166);
  if ( *(unsigned __int8 *)(v139 + 34) >> 6 != v138 )
    goto LABEL_77;
  v140 = 0;
  v141 = v139;
  while ( 1 )
  {
    ++v140;
    v142 = *(_QWORD *)(v141 + 24) & 0xFFFFFFFFFLL;
    v143 = v141;
    if ( v142 == 0xFFFFFFFFFLL )
      break;
    v141 = 48 * v142 - 0x58000000000LL;
    if ( v140 >= v69 )
      goto LABEL_270;
  }
  v141 = 0LL;
LABEL_270:
  v73 = v140;
  MiSetPfnBlink(v143, 0xFFFFFFFFFLL, 0LL);
  v144 = v159;
  *(_QWORD *)(v159 + 88) = v141;
  v65 = v144;
  PageChain = v165;
LABEL_78:
  if ( !PageChain )
    goto LABEL_296;
  if ( v73 != v68 )
  {
    v124 = v155;
    if ( v155 + 8 * v73 <= a2 )
    {
      v125 = v12;
      if ( qword_140C4DF80 && (v12 & 0x10) == 0 )
        v125 = v12 & ~qword_140C4DF80;
      v126 = v68 - v73;
      v127 = HIDWORD(v125);
      if ( v155 + 8 * v126 <= a2 )
      {
        v155 += 8 * v126;
      }
      else
      {
        v155 = a2;
        v126 = (__int64)(a2 - v124) >> 3;
      }
      v12 = MiUpdatePageFileHighInPte(v12, v127 + v126);
    }
    LODWORD(v158) = v73;
  }
  v74 = v37 + 272;
  v75 = 0;
  LODWORD(v167) = *(_DWORD *)(v37 + 192) >> 9;
  v176 = 0;
  v76 = (__int64 *)(v37 + 320);
  v160 = v37 + 320;
  while ( 1 )
  {
    v77 = MI_READ_PTE_LOCK_FREE(v155);
    v78 = 1LL;
    if ( (v34 & 0x10) != 0 )
      goto LABEL_95;
    if ( (v77 & 1) == 0 && (v77 & 0x400) == 0 && (v77 & 0x800) == 0 )
    {
      v79 = v77;
      if ( qword_140C4DF80 )
      {
        if ( (v77 & 0x10) != 0 )
          v79 = v77 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v79 = v77 & ~qword_140C4DF80;
      }
      v80 = v12;
      if ( qword_140C4DF80 && (v12 & 0x10) == 0 )
        v80 = v12 & ~qword_140C4DF80;
      if ( ((v79 ^ v80) & 0xFFFFFFFF00000000uLL) == 0 && (v77 & 4) != 0 && ((v77 ^ v12) & 0xF000) == 0 )
      {
        v81 = MiIsPteInStore(v157, v77, v77 ^ v12);
        if ( v81 == ((unsigned int)v78 & v34) )
        {
LABEL_95:
          v82 = v165;
          v176 += v78;
          v83 = v155;
          *v76 = (v165 + 0x58000000000LL) / 48;
          if ( v83 == a2 )
            LOBYTE(v84) = v167;
          else
            v84 = *(_DWORD *)(v37 + 192) >> 12;
          MiLockSetPfnPriority(v82, v84 & 7);
          v85 = *(_QWORD *)(v165 + 24) & 0xFFFFFFFFFLL;
          MiSetPfnBlink(v165, 0LL, 0LL);
          if ( v85 == 0xFFFFFFFFFLL )
            v165 = 0LL;
          else
            v165 = 48 * v85 - 0x58000000000LL;
          v76 = (__int64 *)v160;
          v78 = 1LL;
          goto LABEL_100;
        }
      }
    }
    if ( (v34 & 8) != 0 )
      break;
    v34 |= 2u;
    *v76 = qword_140C4EDB8;
LABEL_100:
    v160 = (unsigned __int64)++v76;
    if ( v65 )
      MiAdvanceFaultList(v65);
    v155 += 8LL;
    v86 = v12;
    if ( qword_140C4DF80 && (v12 & 0x10) == 0 )
      v86 = v12 & ~qword_140C4DF80;
    v12 = MiUpdatePageFileHighInPte(v12, v78 + HIDWORD(v86));
    v75 += v78;
    v87 = v158;
LABEL_106:
    if ( v75 >= v87 )
    {
      v88 = v158;
      v89 = v155;
      goto LABEL_108;
    }
  }
  v145 = a2;
  v89 = v155;
  if ( v155 <= a2 )
  {
    v76 = (__int64 *)(v37 + 320);
    v146 = (_QWORD *)(v37 + 320);
    if ( v75 )
    {
      v147 = v176;
      do
      {
        if ( *v146 != qword_140C4EDB8 )
        {
          MiReleaseFreshPage(48LL * *v146 - 0x58000000000LL);
          --v147;
        }
        ++v146;
        --v75;
      }
      while ( v75 );
      v145 = a2;
      v74 = v37 + 272;
      v176 = v147;
      v65 = v159;
    }
    v34 &= ~2u;
    v160 = v37 + 320;
    v155 = v145;
    v148 = MI_READ_PTE_LOCK_FREE(v145);
    LOBYTE(v78) = 1;
    v12 = v148;
    v87 = 1;
    LODWORD(v158) = 1;
    goto LABEL_106;
  }
  v88 = v75;
  LODWORD(v158) = v75;
LABEL_108:
  v90 = v89 - 8LL * v88;
  v91 = *(_QWORD *)(v37 + 8 * ((__int64)(a2 - v90) >> 3) + 320);
  v92 = v78 & (v151 >> 4);
  if ( v92 )
    v93 = 0LL;
  else
    v93 = (__int64)(v90 << 25) >> 16;
  *(_QWORD *)v74 = 0LL;
  v94 = v88 << 12;
  *(_DWORD *)(v74 + 40) = v94;
  *(_QWORD *)(v74 + 32) = v93 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v74 + 44) = v93 & 0xFFF;
  *(_WORD *)(v74 + 10) = 66;
  *(_WORD *)(v74 + 8) = 8 * ((((unsigned __int64)(v93 & 0xFFF) + v94 + 4095) >> 12) + 6);
  if ( (v34 & 2) != 0 )
  {
    v149 = MiReduceMdl(v74);
    if ( v149 )
    {
      v90 += 8 * v149;
      if ( !v92 )
        *(_QWORD *)(v74 + 32) += v149 << 12;
    }
    v88 = *(_DWORD *)(v74 + 40) >> 12;
    LODWORD(v158) = v88;
  }
  else
  {
    *(_WORD *)(v74 + 10) = 16450;
  }
  v95 = MI_READ_PTE_LOCK_FREE(v90);
  v160 = v95;
  if ( v88 == 1 )
    v152 = v151 & 0xF8 | (*(_DWORD *)(v37 + 192) >> 9) & 7 | 8;
  else
    v152 = v151 & 0xDF;
  LOBYTE(v164) = v152;
  MiInitializeReadInProgressPfn(v161, v37 + 320, v158, v90, v37, v164);
  if ( (v34 & 0x10) != 0 )
  {
    if ( qword_140C4DF80 && (v95 & 0x10) == 0 )
      v95 &= ~qword_140C4DF80;
    v150 = 48 * ((v95 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    MiFlowThroughInsertNode(v37, v150);
    v95 = *(_QWORD *)(v150 + 16);
    v160 = v95;
  }
  v96 = v178;
  if ( (v152 & 0x10) != 0 )
    MiObtainProtoReference(v178, 0LL);
  v97 = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)(v37 + 232) = a2;
  v98 = v159;
  *(_QWORD *)(v37 + 168) = v97;
  if ( v98 )
  {
    if ( *(_BYTE *)v98 == 1 )
    {
      v122 = *(_DWORD *)(v37 + 192) | 8;
      *(_DWORD *)(v37 + 192) = v122;
      if ( (*(_DWORD *)(v98 + 80) & 0x2000) != 0 )
        *(_DWORD *)(v37 + 192) = v122 | 0x20;
    }
  }
  if ( (int)PsGetIoPriorityThread(CurrentThread) < 2 )
    *(_DWORD *)(v37 + 192) |= 0x80u;
  if ( v162 && MiVadPageSizes[(*(_DWORD *)(v162 + 48) >> 18) & 3] == 16 )
    *(_DWORD *)(v37 + 192) |= 0x100000u;
  if ( v96 )
  {
    LOBYTE(v99) = 17;
    MiUnlockProtoPoolPage(v96, v99);
  }
  MiFreePageChain(v165);
  v101 = v170;
  if ( v176 != v170 )
    MiReturnFaultCharges(v157, v170 - v176, v153);
  *v180 = v37;
  v102 = MiGetPagingFileOffset(&v160, v101, v100);
  v103 = (unsigned __int16)v95 >> 12;
  LODWORD(v171) = v102;
  v104 = *(_QWORD *)(v157 + 8 * v103 + 6944);
  if ( (v152 & 0x10) != 0 )
    *(_QWORD *)(v37 + 160) = v96;
  if ( (v34 & 1) != 0 )
  {
    *(_DWORD *)(v37 + 192) |= 0x100u;
    *(_QWORD *)(v37 + 96) = v102 | (unsigned __int64)(v103 << 60);
  }
  else
  {
    HIDWORD(v171) = 0;
    *(_QWORD *)(v37 + 96) = (unsigned __int64)(unsigned int)v171 << 12;
  }
  v105 = *(_DWORD *)(v37 + 192) | 0x200000;
  *(_QWORD *)(v37 + 200) = v104;
  *(_DWORD *)(v37 + 192) = v105;
  if ( *(_QWORD *)(v104 + 216)
    && (!v98 || *(_BYTE *)v98 != 1 || (*(_DWORD *)(v98 + 80) & 0x1000) == 0 || (dword_140CFB180 & 1) != 0) )
  {
    *(_DWORD *)(v37 + 192) = v105 | 0x400000;
  }
  *(_QWORD *)(v37 + 240) = v90;
  result = 3221435187LL;
  *(_QWORD *)(v37 + 248) = 48 * v91 - 0x58000000000LL;
  return result;
}
