/*
 * XREFs of MiResolvePageFileFault @ 0x140239F98
 * Callers:
 *     MiIssueFlowThroughFault @ 0x140201C48 (MiIssueFlowThroughFault.c)
 *     MiDispatchFault @ 0x140270220 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140276BB0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     MiSufficientAvailablePages @ 0x14022DC70 (MiSufficientAvailablePages.c)
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MiSetPfnBlink @ 0x140230190 (MiSetPfnBlink.c)
 *     MiAllocateInPageSupport @ 0x140231FD0 (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x140232270 (MiComputeFaultNode.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140236AC8 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     MiIsPteInStore @ 0x14023AE70 (MiIsPteInStore.c)
 *     MiLockSetPfnPriority @ 0x14023AE9C (MiLockSetPfnPriority.c)
 *     MiFreePageChain @ 0x14023C1C4 (MiFreePageChain.c)
 *     MiInitializeReadInProgressPfn @ 0x14024D760 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x14024DF8C (MiReduceMdl.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiObtainFaultCharges @ 0x14027D270 (MiObtainFaultCharges.c)
 *     MiProtectionToCacheAttribute @ 0x14028E480 (MiProtectionToCacheAttribute.c)
 *     PsGetIoPriorityThread @ 0x14028EE50 (PsGetIoPriorityThread.c)
 *     MiSharedVaToPartition @ 0x14028EF98 (MiSharedVaToPartition.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiFreeInPageSupportBlock @ 0x1402CA7B8 (MiFreeInPageSupportBlock.c)
 *     MiObtainProtoReference @ 0x1402CA8B8 (MiObtainProtoReference.c)
 *     MiComputeFaultCluster @ 0x1403177D4 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x1403179F8 (MiAdvanceFaultList.c)
 *     MiReturnFaultCharges @ 0x140329604 (MiReturnFaultCharges.c)
 *     MiSetInPagePrefetchPriority @ 0x14032DAAC (MiSetInPagePrefetchPriority.c)
 *     MiFlowThroughInsertNode @ 0x14032E38C (MiFlowThroughInsertNode.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1403328E8 (MiGetAvailablePagesBelowPriority.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiIsStoreProcess @ 0x140341D60 (MiIsStoreProcess.c)
 *     MiUpdatePageFileHighInPte @ 0x140348DE0 (MiUpdatePageFileHighInPte.c)
 *     MiKernelStackVaToStackNode @ 0x14038BA44 (MiKernelStackVaToStackNode.c)
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
  __int64 **Address; // rax
  int v30; // ecx
  int IsPteInStore; // eax
  char v32; // r9
  unsigned int v33; // r10d
  int v34; // r14d
  unsigned __int64 v35; // r11
  unsigned __int64 v36; // rdi
  __int64 v37; // r13
  __int64 v38; // rdx
  unsigned int v39; // r10d
  unsigned int v40; // r12d
  unsigned int v41; // edi
  unsigned __int64 v42; // r8
  __int64 v43; // rbx
  unsigned int PagingFileOffset; // eax
  unsigned int v45; // r12d
  unsigned __int64 v46; // rbx
  unsigned __int64 updated; // rdi
  unsigned __int64 v48; // rsi
  __int64 v49; // r13
  __int64 v50; // rax
  unsigned __int64 v51; // r12
  unsigned int v52; // ecx
  unsigned __int64 v53; // rdi
  unsigned int v54; // eax
  unsigned int v55; // ecx
  unsigned __int64 v56; // rdx
  unsigned int v57; // r9d
  unsigned __int64 v58; // rsi
  unsigned int v59; // eax
  __int64 v60; // rdx
  unsigned int v61; // r8d
  __int64 v62; // r9
  unsigned __int64 v63; // rsi
  char v64; // r11
  __int64 v65; // r10
  unsigned __int64 v66; // rdi
  unsigned __int64 v67; // r12
  __int64 v68; // r8
  int v69; // eax
  __int64 PageChain; // rax
  unsigned __int64 v71; // r15
  __int64 v72; // r15
  unsigned int v73; // r12d
  __int64 *v74; // rdi
  __int64 v75; // rax
  unsigned __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // r11
  unsigned __int64 v80; // rdx
  __int64 v81; // rcx
  unsigned __int64 v82; // rcx
  int v83; // eax
  __int64 v84; // r8
  unsigned __int64 v85; // rax
  int v86; // edx
  __int64 v87; // rdi
  unsigned __int64 v88; // rdx
  unsigned int v89; // eax
  unsigned int v90; // esi
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // rdi
  __int64 v93; // r12
  char v94; // bl
  __int64 v95; // r9
  __int64 v96; // r8
  unsigned __int64 v97; // rbx
  __int64 v98; // r15
  __int64 v99; // rax
  unsigned __int64 v100; // rsi
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
  __int64 **v112; // rcx
  unsigned __int64 v113; // r10
  __int64 v114; // rdx
  __int64 v115; // rax
  unsigned int v116; // ecx
  __int64 v117; // rax
  __int64 **v118; // rax
  bool v119; // r10
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned int v121; // r8d
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
  unsigned int v139; // ecx
  __int64 v140; // rsi
  __int64 v141; // rax
  __int64 v142; // r9
  unsigned __int64 v143; // rax
  unsigned __int64 v144; // rax
  _QWORD *v145; // rbx
  unsigned int v146; // esi
  __int64 v147; // rax
  __int64 v148; // rax
  __int64 v149; // rbx
  unsigned __int8 v150; // [rsp+48h] [rbp-89h]
  char v151; // [rsp+48h] [rbp-89h]
  unsigned int v152; // [rsp+4Ch] [rbp-85h]
  unsigned int v153; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int64 v154; // [rsp+58h] [rbp-79h]
  unsigned int v155; // [rsp+60h] [rbp-71h]
  __int64 v156; // [rsp+68h] [rbp-69h]
  unsigned __int64 v157; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v158; // [rsp+78h] [rbp-59h]
  unsigned __int64 v159; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int64 v160; // [rsp+88h] [rbp-49h]
  __int64 **v161; // [rsp+90h] [rbp-41h] BYREF
  int v162; // [rsp+98h] [rbp-39h]
  int v163; // [rsp+9Ch] [rbp-35h]
  __int64 v164; // [rsp+A0h] [rbp-31h]
  __int64 v165; // [rsp+A8h] [rbp-29h]
  unsigned __int64 v166; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v167; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v168; // [rsp+C0h] [rbp-11h]
  __int64 v169; // [rsp+C8h] [rbp-9h]
  __int64 v170; // [rsp+D0h] [rbp-1h]
  unsigned __int64 v171; // [rsp+D8h] [rbp+7h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp+Fh]
  unsigned int v174; // [rsp+138h] [rbp+67h]
  unsigned int v175; // [rsp+138h] [rbp+67h]
  __int64 v177; // [rsp+148h] [rbp+77h] BYREF
  va_list va; // [rsp+148h] [rbp+77h]
  __int64 *v179; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v177 = va_arg(va1, _QWORD);
  v179 = va_arg(va1, __int64 *);
  v160 = *a1;
  v3 = 0;
  v167 = 0LL;
  v4 = a1[7];
  v5 = a1[2];
  v171 = v4;
  v170 = 0LL;
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  CurrentThread = KeGetCurrentThread();
  v159 = v6;
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v177 )
    {
      LOBYTE(v7) = 17;
      MiUnlockProtoPoolPage(v177, v7);
    }
    return 3221225633LL;
  }
  v8 = v177;
  v9 = 0xFFFFFFFFFLL;
  v10 = v159;
  v11 = 0xFFFFFA8000000000uLL;
  if ( (v6 & 0x800) != 0 )
  {
    if ( qword_140C4DDC0 )
    {
      if ( (v6 & 0x10) != 0 )
        v6 &= ~0x10uLL;
      else
        v6 &= ~qword_140C4DDC0;
    }
    v9 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v3 = 16;
    v168 = v9;
    v12 = *(_QWORD *)(v9 + 16);
    v13 = (*(_QWORD *)(v9 + 40) >> 39) & 0x3FFLL;
  }
  else
  {
    v168 = 0LL;
    v12 = v159;
    if ( v177 )
    {
      v14 = MiSharedVaToPartition(v4, v160, a2);
      v156 = v14;
      goto LABEL_6;
    }
    v13 = *(unsigned __int16 *)(v4 + 174);
  }
  v14 = *(_QWORD *)(qword_140C4E4C8 + 8 * v13);
  v156 = v14;
LABEL_6:
  v15 = 0LL;
  v155 = 2;
  v16 = v5;
  v158 = 0LL;
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
    v158 = 0LL;
  }
  else if ( v18 )
  {
    if ( *(_BYTE *)v17 == 2 )
    {
      v15 = v17;
      v158 = v17;
    }
    else if ( *(_BYTE *)v17 == 1 )
    {
      v158 = v17;
      v15 = v17;
      if ( (v159 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset((__int64)&v159) )
        return 0LL;
      v155 = 0;
      v3 |= 0x20u;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v160);
  if ( v18 && *(_BYTE *)v17 == 4 )
  {
    v117 = *(_QWORD *)(v17 + 40);
    v21 = 8;
    v155 |= 8u;
    v15 = v17;
    v158 = v17;
    v23 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v117 + 544) + 1838LL));
    v156 = (__int64)v23;
LABEL_12:
    v162 = v21;
    goto LABEL_13;
  }
  if ( ((v10 >> 5) & 0x1F) != 0x1F )
  {
    v21 = 0;
    v22 = SystemRegionType == 12;
    v23 = (ULONG_PTR *)v156;
    if ( v22 )
      v21 = 8;
    goto LABEL_12;
  }
  v162 = 8;
  v123 = MiKernelStackVaToStackNode(v160);
  if ( v123 )
    v23 = *(ULONG_PTR **)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v123 + 40));
  else
    v23 = &MiSystemPartition;
  v155 |= 8u;
  v156 = (__int64)v23;
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
  v163 = 0;
  LODWORD(v157) = 1;
  Process = CurrentThread->ApcState.Process;
  v25 = 16;
  v153 = 16;
  v154 = a2;
  v152 = 2;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v26 = v10;
    v150 = v163;
    goto LABEL_17;
  }
  v150 = 16;
  v111 = MI_READ_PTE_LOCK_FREE(((v160 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( MI_PROTO_FORMAT_COMBINED(v111) )
  {
    v150 = 48;
    goto LABEL_231;
  }
  if ( Process[1].Affinity.Bitmap[12] )
  {
LABEL_231:
    v25 = 1;
    v153 = 1;
  }
  v26 = MI_READ_PTE_LOCK_FREE(&v159);
LABEL_17:
  v165 = (v26 >> 5) & 0x1F;
  v161 = (__int64 **)a1[11];
  v28 = MiComputeFaultNode(a1, 0LL, &v161);
  LODWORD(v166) = v28;
  Address = v161;
  if ( (v161
     || (a2 <= 0xFFFFF6BFFFFFFF78uLL && a2 >= 0xFFFFF68000000000uLL && (unsigned int)MiIsStoreProcess(Process)
      || (*(_BYTE *)(v171 + 184) & 7) == 0
      && v160 < 0xFFFF800000000000uLL
      && ((v107 = Process[1].ActiveProcessorsPadding[8], *(_QWORD *)(v107 + 424)) || *(_QWORD *)(v107 + 432)))
     && (Address = MiLocateAddress(v160), (v161 = Address) != 0LL))
    && (v131 = *((unsigned int *)Address + 13),
        LODWORD(v131) = v131 & 0x7FFFFFFF,
        (v131 | ((unsigned __int64)*((unsigned __int8 *)Address + 34) << 31)) == 0x7FFFFFFFELL) )
  {
    v30 = 7;
    v150 |= 0x80u;
    v152 = 7;
  }
  else
  {
    v30 = 2;
  }
  if ( ((v10 >> 11) & 1) != 0 )
  {
    v153 = 1;
    v152 = v30 | 1;
    v25 = 1;
  }
  IsPteInStore = MiIsPteInStore(v156, v12, v27);
  v34 = v33 & IsPteInStore | v3;
  if ( v25 != v33 )
  {
    if ( dword_140C4EB40 )
    {
      v153 = v33;
      --dword_140C4EB40;
      v25 = v33;
    }
    else
    {
      v35 = v158;
      if ( v158 )
      {
        v118 = v161;
        v119 = (v32 & 0x10) != 0;
        if ( (v32 & 0x10) != 0 && !v161 )
        {
          v118 = MiLocateAddress(v160);
          v161 = v118;
        }
        v25 = MiComputeFaultCluster(v156, v35, (unsigned __int64)v118 & -(__int64)v119, v34 & 1);
        v153 = v25;
        v33 = 1;
      }
      else if ( v160 > 0x7FFFFFFEFFFFLL )
      {
        v153 = v33;
        v25 = v33;
        if ( (v32 & 0x10) == 0 && (v160 < 0xFFFFF68000000000uLL || v160 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v25 = 16;
          v34 |= 4u;
          v153 = 16;
        }
      }
    }
  }
  LODWORD(v164) = v33 & v34;
  if ( (v33 & v34) != 0 )
  {
    if ( v25 > *(_DWORD *)(v156 + 1164) )
      v25 = *(_DWORD *)(v156 + 1164);
    v153 = v25;
  }
  v36 = a2;
  v169 = MiAllocateInPageSupport(a2, v155, &v153, (__int64 *)((unsigned __int64)va & -(__int64)(v8 != 0)));
  v37 = v169;
  if ( !v169 )
  {
    result = 3221225626LL;
LABEL_246:
    if ( v158 )
      *(_BYTE *)(v158 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v10
    || ((v10 >> 11) & 1) != 0
    && ((v38 = v168, (*(_BYTE *)(v168 + 34) & 0x28) == 0x28)
     || (*(_BYTE *)(v168 + 34) & 0x20) == 0
     || v12 != *(_QWORD *)(v168 + 16)
     || (*(_DWORD *)(*(_QWORD *)v168 + 160LL) & 0x20) != 0) )
  {
    if ( v177 )
    {
      LOBYTE(v38) = 17;
      MiUnlockProtoPoolPage(v177, v38);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v37);
    result = 3221226548LL;
    goto LABEL_246;
  }
  v39 = 1;
  if ( v158 && *(_BYTE *)v158 == 1 )
    MiSetInPagePrefetchPriority(v158, v37);
  v40 = v153;
  if ( v153 > v39 && (unsigned int)MiSufficientAvailablePages(v156, 0x140uLL) )
  {
    v41 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
    v174 = ((unsigned int)a2 >> 3) & 0x1FF;
    if ( (v150 & 0x10) != 0 )
    {
      v112 = v161;
      v113 = v160;
      if ( (v161 || (v161 = MiLocateAddress(v160), (v112 = v161) != 0LL))
        && ((_DWORD)v112[6] & 0x100000) == 0
        && (MiGetProtoPteAddress(v112, v113 >> 12, 4LL, &v167), v167)
        && (*(_BYTE *)(v167 + 34) & 2) == 0 )
      {
        v114 = *(_QWORD *)(v167 + 8);
        v42 = a2;
        v115 = (__int64)(a2 - v114) >> 3;
        v116 = ((__int64)(v114 + 8LL * *(unsigned int *)(v167 + 44) - a2) >> 3) - 1;
        if ( v116 >= v41 )
          v116 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
        v41 = v116;
        if ( (unsigned int)v115 >= v174 )
          LODWORD(v115) = ((unsigned int)a2 >> 3) & 0x1FF;
        v174 = v115;
      }
      else
      {
        v42 = a2;
        v40 = 1;
      }
    }
    else
    {
      v42 = a2;
    }
    if ( v158 || (v34 & 4) != 0 )
    {
      v174 = 0;
      if ( !v41 )
        v40 = 1;
    }
    if ( v40 <= 1 )
    {
      v36 = a2;
      v58 = v154;
    }
    else
    {
      v157 = v10;
      v155 = v40 - 1;
      v167 = v42 + 8;
      v43 = v40 - 1;
      if ( v41 <= v40 - 1 )
        v43 = v41;
      PagingFileOffset = MiGetPagingFileOffset((__int64)&v157);
      v45 = -3 - PagingFileOffset;
      v168 = PagingFileOffset;
      if ( (unsigned __int64)PagingFileOffset + v43 < 0xFFFFFFFE )
        v45 = v43;
      if ( (_DWORD)v164 || v158 )
        v34 |= 8u;
      v46 = v10 & 0xFFFFFFFFFC00FF1DuLL;
      updated = v10 & 0xFFFFFFFFFC00FF1DuLL;
      if ( v45 )
      {
        v48 = v167;
        v49 = v168;
        while ( 1 )
        {
          updated = MiUpdatePageFileHighInPte(updated, ++v49);
          v50 = MI_READ_PTE_LOCK_FREE(v48);
          if ( (v50 & 0x3E0) != 0 && (v50 & 0xFFFFFFFFFC00FF1DuLL) == updated )
          {
            v154 = v48;
          }
          else if ( (v34 & 8) != 0 )
          {
LABEL_60:
            v10 = v159;
            v28 = v166;
            v37 = v169;
            break;
          }
          v48 += 8LL;
          if ( !--v45 )
            goto LABEL_60;
        }
      }
      v51 = a2;
      v52 = v155 - ((__int64)(v154 - a2) >> 3);
      v154 = (__int64)(v154 - a2) >> 3;
      v157 = v10;
      if ( v174 <= v52 )
        v52 = v174;
      v53 = v52;
      v167 = a2;
      v54 = MiGetPagingFileOffset((__int64)&v157);
      v168 = v54;
      v55 = v54 - 1;
      if ( v53 <= (unsigned __int64)v54 - 1 )
        v55 = v53;
      if ( v55 )
      {
        v108 = v168;
        v109 = v55;
        while ( 1 )
        {
          --v108;
          v51 -= 8LL;
          v46 = MiUpdatePageFileHighInPte(v46, v108);
          v110 = MI_READ_PTE_LOCK_FREE(v51);
          if ( (v110 & 0x3E0) != 0 && (v110 & 0xFFFFFFFFFC00FF1DuLL) == v46 )
          {
            v167 = v51;
          }
          else if ( (v34 & 8) != 0 )
          {
LABEL_149:
            v10 = v159;
            v37 = v169;
            break;
          }
          if ( !--v109 )
            goto LABEL_149;
        }
      }
      v36 = a2;
      v56 = v10;
      if ( qword_140C4DDC0 && (v10 & 0x10) == 0 )
        v56 = v10 & ~qword_140C4DDC0;
      v12 = MiUpdatePageFileHighInPte(v10, HIDWORD(v56) - (unsigned int)((__int64)(a2 - v167) >> 3));
      LODWORD(v157) = v57 + v154 + 1;
      v58 = a2 - 8LL * v57;
      v154 = v58;
    }
  }
  else
  {
    v58 = a2;
  }
  v59 = MiObtainFaultCharges(v156, (unsigned int)v157, v152);
  v61 = v157;
  v62 = v59;
  v169 = v59;
  if ( (unsigned int)v157 > (unsigned __int64)v59 )
  {
    v132 = v12;
    if ( qword_140C4DDC0 && (v12 & 0x10) == 0 )
      v132 = v12 & ~qword_140C4DDC0;
    v133 = (unsigned int)v157 - v62;
    v134 = HIDWORD(v132);
    if ( v58 + 8 * v133 <= v36 )
    {
      v154 = v58 + 8 * v133;
    }
    else
    {
      v154 = v36;
      v133 = (__int64)(v36 - v58) >> 3;
    }
    v12 = MiUpdatePageFileHighInPte(v12, v133 + v134);
    LODWORD(v157) = v135;
    v61 = v135;
  }
  v63 = v158;
  v64 = 1;
  if ( !v158 || *(_BYTE *)v158 != 1 )
  {
    v65 = v156;
    v66 = v61;
    v67 = v61;
LABEL_73:
    v166 = v66;
    goto LABEL_74;
  }
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v156, ((*(_DWORD *)(v158 + 80) >> 3) & 7u) + 1);
  v66 = v121;
  v67 = AvailablePagesBelowPriority;
  v166 = AvailablePagesBelowPriority;
  if ( AvailablePagesBelowPriority > v121 )
  {
    v67 = v121;
    goto LABEL_73;
  }
LABEL_74:
  if ( !v67 )
  {
LABEL_296:
    if ( v177 )
    {
      LOBYTE(v60) = 17;
      MiUnlockProtoPoolPage(v177, v60);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v37);
    if ( v63 )
      *(_BYTE *)(v63 + 1) = 2;
    MiReturnFaultCharges(v156, v169, v152);
    return 3221225495LL;
  }
  if ( !v63
    || *(_BYTE *)v63 != v64
    || (v60 = *(_QWORD *)(v63 + 88)) == 0
    || v162
    || v160 > 0x7FFFFFFEFFFFLL
    || v177
    || *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v60 + 40) >> 39) & 0x3FFLL)) != v65 )
  {
    v68 = v165;
LABEL_77:
    v69 = MiProtectionToCacheAttribute((unsigned int)v68, v60, v68);
    PageChain = MiGetPageChain(v156, v171, v28, v69, v162, -1LL, (__int64)&v166);
    v71 = v166;
    v164 = PageChain;
    goto LABEL_78;
  }
  v136 = (__int64)((unsigned __int128)((v60 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v137 = MiSearchNumaNodeTable(v136 + (v136 >> 63));
  v68 = v165;
  if ( *(_DWORD *)(v137 + 8) != v28 - 1 )
    goto LABEL_77;
  v164 = *(_QWORD *)(v63 + 88);
  v138 = MiProtectionToCacheAttribute((unsigned int)v165, v164, v165);
  if ( *(unsigned __int8 *)(v60 + 34) >> 6 != v138 )
    goto LABEL_77;
  v139 = 0;
  v140 = v60;
  while ( 1 )
  {
    ++v139;
    v141 = *(_QWORD *)(v140 + 24) & 0xFFFFFFFFFLL;
    v142 = v140;
    if ( v141 == 0xFFFFFFFFFLL )
      break;
    v140 = 48 * v141 - 0x58000000000LL;
    if ( v139 >= v67 )
      goto LABEL_270;
  }
  v140 = 0LL;
LABEL_270:
  v71 = v139;
  MiSetPfnBlink(v142, 0xFFFFFFFFFLL, 0);
  v143 = v158;
  *(_QWORD *)(v158 + 88) = v140;
  v63 = v143;
  PageChain = v164;
LABEL_78:
  if ( !PageChain )
    goto LABEL_296;
  if ( v71 != v66 )
  {
    v124 = v154;
    if ( v154 + 8 * v71 <= a2 )
    {
      v125 = v12;
      if ( qword_140C4DDC0 && (v12 & 0x10) == 0 )
        v125 = v12 & ~qword_140C4DDC0;
      v126 = v66 - v71;
      v127 = HIDWORD(v125);
      if ( v154 + 8 * v126 <= a2 )
      {
        v154 += 8 * v126;
      }
      else
      {
        v154 = a2;
        v126 = (__int64)(a2 - v124) >> 3;
      }
      v12 = MiUpdatePageFileHighInPte(v12, v127 + v126);
    }
    LODWORD(v157) = v71;
  }
  v72 = v37 + 272;
  v73 = 0;
  LODWORD(v166) = *(_DWORD *)(v37 + 192) >> 9;
  v175 = 0;
  v74 = (__int64 *)(v37 + 320);
  v159 = v37 + 320;
  while ( 1 )
  {
    v75 = MI_READ_PTE_LOCK_FREE(v154);
    v79 = 1LL;
    if ( (v34 & 0x10) != 0 )
      goto LABEL_95;
    if ( (v75 & 1) == 0 && (v75 & 0x400) == 0 && (v75 & 0x800) == 0 )
    {
      v78 = qword_140C4DDC0;
      v80 = v75;
      if ( qword_140C4DDC0 )
      {
        if ( (v75 & 0x10) != 0 )
          v80 = v75 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v80 = v75 & ~qword_140C4DDC0;
      }
      v81 = v12;
      v77 = v12;
      if ( qword_140C4DDC0 && (v12 & 0x10) == 0 )
        v81 = v12 & ~qword_140C4DDC0;
      v82 = v80 ^ v81;
      v76 = 0xFFFFFFFF00000000uLL;
      if ( (v82 & 0xFFFFFFFF00000000uLL) == 0 && (v75 & 4) != 0 )
      {
        v77 = v75 ^ v12;
        if ( ((v75 ^ v12) & 0xF000) == 0 )
        {
          v83 = MiIsPteInStore(v156, v75, v77);
          if ( v83 == ((unsigned int)v79 & v34) )
          {
LABEL_95:
            v84 = v164;
            v175 += v79;
            v85 = v154;
            *v74 = (v164 + 0x58000000000LL) / 48;
            if ( v85 == a2 )
              LOBYTE(v86) = v166;
            else
              v86 = *(_DWORD *)(v37 + 192) >> 12;
            MiLockSetPfnPriority(v84, v86 & 7);
            v87 = *(_QWORD *)(v164 + 24) & 0xFFFFFFFFFLL;
            MiSetPfnBlink(v164, 0LL, 0);
            if ( v87 == 0xFFFFFFFFFLL )
              v164 = 0LL;
            else
              v164 = 48 * v87 - 0x58000000000LL;
            v74 = (__int64 *)v159;
            v79 = 1LL;
            goto LABEL_100;
          }
        }
      }
    }
    if ( (v34 & 8) != 0 )
      break;
    v34 |= 2u;
    *v74 = qword_140C4EBF8;
LABEL_100:
    v159 = (unsigned __int64)++v74;
    if ( v63 )
      MiAdvanceFaultList(v63, v76, v77, v78);
    v154 += 8LL;
    v88 = v12;
    if ( qword_140C4DDC0 && (v12 & 0x10) == 0 )
      v88 = v12 & ~qword_140C4DDC0;
    v12 = MiUpdatePageFileHighInPte(v12, v79 + HIDWORD(v88));
    v73 += v79;
    v89 = v157;
LABEL_106:
    if ( v73 >= v89 )
    {
      v90 = v157;
      v91 = v154;
      goto LABEL_108;
    }
  }
  v144 = a2;
  v91 = v154;
  if ( v154 <= a2 )
  {
    v74 = (__int64 *)(v37 + 320);
    v145 = (_QWORD *)(v37 + 320);
    if ( v73 )
    {
      v146 = v175;
      do
      {
        if ( *v145 != qword_140C4EBF8 )
        {
          MiReleaseFreshPage(48LL * *v145 - 0x58000000000LL, v76);
          --v146;
        }
        ++v145;
        --v73;
      }
      while ( v73 );
      v144 = a2;
      v72 = v37 + 272;
      v175 = v146;
      v63 = v158;
    }
    v34 &= ~2u;
    v159 = v37 + 320;
    v154 = v144;
    v147 = MI_READ_PTE_LOCK_FREE(v144);
    LOBYTE(v79) = 1;
    v12 = v147;
    v89 = 1;
    LODWORD(v157) = 1;
    goto LABEL_106;
  }
  v90 = v73;
  LODWORD(v157) = v73;
LABEL_108:
  v92 = v91 - 8LL * v90;
  v93 = *(_QWORD *)(v37 + 8 * ((__int64)(a2 - v92) >> 3) + 320);
  v94 = v79 & (v150 >> 4);
  if ( v94 )
    v95 = 0LL;
  else
    v95 = (__int64)(v92 << 25) >> 16;
  *(_QWORD *)v72 = 0LL;
  v96 = v90 << 12;
  *(_DWORD *)(v72 + 40) = v96;
  *(_QWORD *)(v72 + 32) = v95 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v72 + 44) = v95 & 0xFFF;
  *(_WORD *)(v72 + 10) = 66;
  *(_WORD *)(v72 + 8) = 8 * ((((unsigned __int64)(v95 & 0xFFF) + v96 + 4095) >> 12) + 6);
  if ( (v34 & 2) != 0 )
  {
    v148 = MiReduceMdl(v72);
    if ( v148 )
    {
      v92 += 8 * v148;
      if ( !v94 )
        *(_QWORD *)(v72 + 32) += v148 << 12;
    }
    v90 = *(_DWORD *)(v72 + 40) >> 12;
    LODWORD(v157) = v90;
  }
  else
  {
    *(_WORD *)(v72 + 10) = 16450;
  }
  v97 = MI_READ_PTE_LOCK_FREE(v92);
  v159 = v97;
  if ( v90 == 1 )
    v151 = v150 & 0xF8 | (*(_DWORD *)(v37 + 192) >> 9) & 7 | 8;
  else
    v151 = v150 & 0xDF;
  LOBYTE(v163) = v151;
  MiInitializeReadInProgressPfn(v160, v37 + 320, v157, v92, v37, v163);
  if ( (v34 & 0x10) != 0 )
  {
    if ( qword_140C4DDC0 && (v97 & 0x10) == 0 )
      v97 &= ~qword_140C4DDC0;
    v149 = 48 * ((v97 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    MiFlowThroughInsertNode(v37, v149);
    v97 = *(_QWORD *)(v149 + 16);
    v159 = v97;
  }
  v98 = v177;
  if ( (v151 & 0x10) != 0 )
    MiObtainProtoReference(v177, 0LL);
  v99 = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)(v37 + 232) = a2;
  v100 = v158;
  *(_QWORD *)(v37 + 168) = v99;
  if ( v100 )
  {
    if ( *(_BYTE *)v100 == 1 )
    {
      v122 = *(_DWORD *)(v37 + 192) | 8;
      *(_DWORD *)(v37 + 192) = v122;
      if ( (*(_DWORD *)(v100 + 80) & 0x2000) != 0 )
        *(_DWORD *)(v37 + 192) = v122 | 0x20;
    }
  }
  if ( (int)PsGetIoPriorityThread(CurrentThread) < 2 )
    *(_DWORD *)(v37 + 192) |= 0x80u;
  if ( v161 && MiVadPageSizes[(*((_DWORD *)v161 + 12) >> 18) & 3] == 16 )
    *(_DWORD *)(v37 + 192) |= 0x100000u;
  if ( v98 )
  {
    LOBYTE(v101) = 17;
    MiUnlockProtoPoolPage(v98, v101);
  }
  MiFreePageChain(v164);
  if ( v175 != v169 )
    MiReturnFaultCharges(v156, v169 - v175, v152);
  *v179 = v37;
  v102 = MiGetPagingFileOffset((__int64)&v159);
  v103 = (unsigned __int16)v97 >> 12;
  LODWORD(v170) = v102;
  v104 = *(_QWORD *)(v156 + 8 * v103 + 6944);
  if ( (v151 & 0x10) != 0 )
    *(_QWORD *)(v37 + 160) = v98;
  if ( (v34 & 1) != 0 )
  {
    *(_DWORD *)(v37 + 192) |= 0x100u;
    *(_QWORD *)(v37 + 96) = v102 | (unsigned __int64)(v103 << 60);
  }
  else
  {
    HIDWORD(v170) = 0;
    *(_QWORD *)(v37 + 96) = (unsigned __int64)(unsigned int)v170 << 12;
  }
  v105 = *(_DWORD *)(v37 + 192) | 0x200000;
  *(_QWORD *)(v37 + 200) = v104;
  *(_DWORD *)(v37 + 192) = v105;
  if ( *(_QWORD *)(v104 + 216)
    && (!v100 || *(_BYTE *)v100 != 1 || (*(_DWORD *)(v100 + 80) & 0x1000) == 0 || (dword_140CFB180 & 1) != 0) )
  {
    *(_DWORD *)(v37 + 192) = v105 | 0x400000;
  }
  *(_QWORD *)(v37 + 240) = v92;
  result = 3221435187LL;
  *(_QWORD *)(v37 + 248) = 48 * v93 - 0x58000000000LL;
  return result;
}
