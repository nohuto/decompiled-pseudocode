/*
 * XREFs of MiResolvePageFileFault @ 0x1403432DC
 * Callers:
 *     MiDispatchFault @ 0x14020E3D0 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x140214D60 (MiResolveProtoPteFault.c)
 *     MiIssueFlowThroughFault @ 0x140341920 (MiIssueFlowThroughFault.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiObtainFaultCharges @ 0x14021B070 (MiObtainFaultCharges.c)
 *     MiProtectionToCacheAttribute @ 0x140225830 (MiProtectionToCacheAttribute.c)
 *     PsGetIoPriorityThread @ 0x140226200 (PsGetIoPriorityThread.c)
 *     MiSharedVaToPartition @ 0x140226348 (MiSharedVaToPartition.c)
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiSetPfnBlink @ 0x14027AF70 (MiSetPfnBlink.c)
 *     MiGetAvailablePagesBelowPriority @ 0x1402803A4 (MiGetAvailablePagesBelowPriority.c)
 *     MiFreeInPageSupportBlock @ 0x140282584 (MiFreeInPageSupportBlock.c)
 *     MiObtainProtoReference @ 0x140282684 (MiObtainProtoReference.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiSufficientAvailablePages @ 0x1402A1900 (MiSufficientAvailablePages.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiAllocateInPageSupport @ 0x1402B7B20 (MiAllocateInPageSupport.c)
 *     MiComputeFaultNode @ 0x1402B7BF0 (MiComputeFaultNode.c)
 *     MiInitializeReadInProgressPfn @ 0x1402BAAF0 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x1402BB31C (MiReduceMdl.c)
 *     MiFlowThroughInsertNode @ 0x14031FD1C (MiFlowThroughInsertNode.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x140340698 (MiReturnFaultCharges.c)
 *     MiSetInPagePrefetchPriority @ 0x14034074C (MiSetInPagePrefetchPriority.c)
 *     MiComputeFaultCluster @ 0x1403409B8 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x140340BDC (MiAdvanceFaultList.c)
 *     MiFreePageChain @ 0x140341758 (MiFreePageChain.c)
 *     MiIsPteInStore @ 0x1403441B4 (MiIsPteInStore.c)
 *     MiLockSetPfnPriority @ 0x1403441E0 (MiLockSetPfnPriority.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x140344F70 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiIsStoreProcess @ 0x14034D700 (MiIsStoreProcess.c)
 *     MiKernelStackVaToStackNode @ 0x140388834 (MiKernelStackVaToStackNode.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 *a1, unsigned __int64 a2, ...)
{
  unsigned int v3; // r14d
  __int64 v4; // r13
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r12
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rbx
  __int64 v15; // rcx
  ULONG_PTR *v16; // rcx
  unsigned __int64 v17; // r13
  char v18; // r15
  unsigned __int64 v19; // rdi
  __int64 v20; // r15
  int SystemRegionType; // ecx
  int v22; // r15d
  bool v23; // zf
  ULONG_PTR *v24; // rcx
  _KPROCESS *Process; // r13
  unsigned int v26; // edi
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r15d
  __int64 **Address; // rax
  char v32; // cl
  int IsPteInStore; // eax
  char v34; // r9
  unsigned int v35; // r10d
  int v36; // r14d
  _QWORD *v37; // r11
  unsigned __int64 v38; // rdi
  __int64 v39; // r13
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned int v43; // r10d
  unsigned int v44; // r12d
  unsigned int v45; // edi
  unsigned __int64 v46; // r8
  __int64 v47; // rbx
  unsigned int PagingFileOffset; // eax
  unsigned int v49; // r12d
  __int64 v50; // rbx
  __int64 updated; // rdi
  unsigned __int64 v52; // rsi
  __int64 v53; // r13
  __int64 v54; // rax
  unsigned __int64 v55; // r12
  unsigned int v56; // ecx
  unsigned __int64 v57; // rdi
  unsigned int v58; // eax
  unsigned int v59; // ecx
  unsigned __int64 v60; // rdx
  unsigned int v61; // r9d
  unsigned __int64 v62; // rsi
  unsigned int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rsi
  char v68; // r11
  ULONG_PTR *v69; // r10
  unsigned __int64 v70; // rdi
  unsigned __int64 v71; // r12
  unsigned int v72; // r8d
  unsigned int v73; // eax
  __int64 PageChain; // rax
  unsigned __int64 v75; // r15
  __int64 v76; // r15
  unsigned int v77; // r12d
  __int64 *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r8
  __int64 v82; // r11
  unsigned __int64 v83; // rdx
  __int64 v84; // rcx
  unsigned __int64 v85; // rcx
  int v86; // eax
  __int64 v87; // r8
  unsigned __int64 v88; // rax
  int v89; // edx
  __int64 v90; // rdi
  unsigned __int64 v91; // rdx
  unsigned int v92; // eax
  unsigned int v93; // esi
  unsigned __int64 v94; // rcx
  unsigned __int64 v95; // rdi
  __int64 v96; // r12
  char v97; // bl
  __int64 v98; // r9
  __int64 v99; // r8
  unsigned __int64 v100; // rbx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // r15
  __int64 v104; // rax
  __int64 v105; // rsi
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned int v109; // eax
  __int64 v110; // rbx
  ULONG_PTR v111; // rdx
  int v112; // ecx
  __int64 result; // rax
  unsigned __int64 v114; // rax
  __int64 v115; // rsi
  unsigned int v116; // edi
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // r8
  __int64 v121; // r9
  __int64 **v122; // rcx
  unsigned __int64 v123; // r10
  __int64 v124; // rdx
  __int64 v125; // rax
  unsigned int v126; // ecx
  __int64 v127; // rax
  __int64 **v128; // rax
  bool v129; // r10
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v131; // rdx
  int v132; // edx
  __int64 v133; // rax
  unsigned __int64 v134; // r9
  unsigned __int64 v135; // rcx
  __int64 v136; // rdi
  unsigned __int64 v137; // rcx
  int v138; // eax
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 v142; // r9
  __int64 v143; // rcx
  unsigned __int64 v144; // rax
  __int64 v145; // rcx
  unsigned __int64 v146; // rax
  unsigned __int64 v147; // rdx
  _QWORD *v148; // rax
  int v149; // eax
  __int64 v150; // rdx
  unsigned int v151; // ecx
  __int64 v152; // rsi
  __int64 v153; // rax
  __int64 v154; // r9
  __int64 v155; // rax
  unsigned __int64 v156; // rax
  _QWORD *v157; // rbx
  unsigned int v158; // esi
  __int64 v159; // rax
  __int64 v160; // rax
  _QWORD *v161; // rbx
  unsigned __int8 v162; // [rsp+48h] [rbp-89h]
  char v163; // [rsp+48h] [rbp-89h]
  char v164; // [rsp+4Ch] [rbp-85h]
  unsigned int v165; // [rsp+50h] [rbp-81h] BYREF
  unsigned __int64 v166; // [rsp+58h] [rbp-79h]
  int v167; // [rsp+60h] [rbp-71h]
  ULONG_PTR *v168; // [rsp+68h] [rbp-69h]
  unsigned __int64 v169; // [rsp+70h] [rbp-61h] BYREF
  unsigned __int64 v170; // [rsp+78h] [rbp-59h]
  __int64 v171; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int64 v172; // [rsp+88h] [rbp-49h]
  __int64 **v173; // [rsp+90h] [rbp-41h] BYREF
  int v174; // [rsp+98h] [rbp-39h]
  int v175; // [rsp+9Ch] [rbp-35h]
  __int64 v176; // [rsp+A0h] [rbp-31h]
  __int64 v177; // [rsp+A8h] [rbp-29h]
  unsigned __int64 v178; // [rsp+B0h] [rbp-21h] BYREF
  unsigned __int64 v179; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v180; // [rsp+C0h] [rbp-11h]
  PSLIST_ENTRY v181; // [rsp+C8h] [rbp-9h]
  __int64 v182; // [rsp+D0h] [rbp-1h]
  __int64 v183; // [rsp+D8h] [rbp+7h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp+Fh]
  unsigned int v186; // [rsp+138h] [rbp+67h]
  unsigned int v187; // [rsp+138h] [rbp+67h]
  __int64 v189; // [rsp+148h] [rbp+77h] BYREF
  va_list va; // [rsp+148h] [rbp+77h]
  __int64 *v191; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v189 = va_arg(va1, _QWORD);
  v191 = va_arg(va1, __int64 *);
  v172 = *a1;
  v3 = 0;
  v179 = 0LL;
  v4 = a1[7];
  v5 = a1[2];
  v183 = v4;
  v182 = 0LL;
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  CurrentThread = KeGetCurrentThread();
  v171 = v6;
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v189 )
    {
      LOBYTE(v7) = 17;
      MiUnlockProtoPoolPage(v189, v7, v8, v9);
    }
    return 3221225633LL;
  }
  v10 = v189;
  v11 = 0xFFFFFFFFFLL;
  v12 = v171;
  v13 = 0xFFFFFA8000000000uLL;
  if ( (v6 & 0x800) != 0 )
  {
    if ( qword_140C4DE80 )
    {
      if ( (v6 & 0x10) != 0 )
        v6 &= ~0x10uLL;
      else
        v6 &= ~qword_140C4DE80;
    }
    v11 = 48 * ((v6 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v3 = 16;
    v180 = v11;
    v14 = *(_QWORD *)(v11 + 16);
    v15 = (*(_QWORD *)(v11 + 40) >> 39) & 0x3FFLL;
  }
  else
  {
    v180 = 0LL;
    v14 = v171;
    if ( v189 )
    {
      v16 = MiSharedVaToPartition(v4, v172, a2);
      v168 = v16;
      goto LABEL_6;
    }
    v15 = *(unsigned __int16 *)(v4 + 174);
  }
  v16 = *(ULONG_PTR **)(qword_140C4E588 + 8 * v15);
  v168 = v16;
LABEL_6:
  v17 = 0LL;
  v167 = 2;
  v18 = v5;
  v170 = 0LL;
  v19 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
  v20 = v18 & 1;
  if ( v20 && *(_BYTE *)v19 == 5 )
  {
    v138 = *(_DWORD *)(v19 + 56);
    if ( (v138 & 4) != 0 && ((v138 & 0x10) != 0 || !(unsigned int)MiIsPteInStore(v16, v14)) )
    {
      if ( v10 )
      {
        LOBYTE(v11) = 17;
        MiUnlockProtoPoolPage(v10, v11, v13, v9);
      }
      return 3221225495LL;
    }
    v170 = 0LL;
  }
  else if ( v20 )
  {
    if ( *(_BYTE *)v19 == 2 )
    {
      v17 = v19;
      v170 = v19;
    }
    else if ( *(_BYTE *)v19 == 1 )
    {
      v170 = v19;
      v17 = v19;
      if ( (v171 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset(&v171) )
        return 0LL;
      v167 = 0;
      v3 |= 0x20u;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v172);
  if ( v20 && *(_BYTE *)v19 == 4 )
  {
    v127 = *(_QWORD *)(v19 + 40);
    v22 = 8;
    v167 |= 8u;
    v17 = v19;
    v170 = v19;
    v24 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v127 + 544) + 1838LL));
    v168 = v24;
LABEL_12:
    v174 = v22;
    goto LABEL_13;
  }
  if ( ((v12 >> 5) & 0x1F) != 0x1F )
  {
    v22 = 0;
    v23 = SystemRegionType == 12;
    v24 = v168;
    if ( v23 )
      v22 = 8;
    goto LABEL_12;
  }
  v174 = 8;
  v133 = MiKernelStackVaToStackNode(v172);
  if ( v133 )
    v24 = *(ULONG_PTR **)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(v133 + 40));
  else
    v24 = &MiSystemPartition;
  v167 |= 8u;
  v168 = v24;
LABEL_13:
  if ( v3 >= 0x20 && (*(_DWORD *)(v17 + 80) & 0x200) != 0 )
  {
    if ( (unsigned int)MiIsPteInStore(v24, v12) )
    {
      if ( v10 )
      {
        LOBYTE(v140) = 17;
        MiUnlockProtoPoolPage(v10, v140, v141, v142);
      }
      return 0LL;
    }
  }
  v175 = 0;
  LODWORD(v169) = 1;
  Process = CurrentThread->ApcState.Process;
  v26 = 16;
  v165 = 16;
  v166 = a2;
  v164 = 2;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v27 = v12;
    v162 = v175;
    goto LABEL_17;
  }
  v162 = 16;
  v118 = MI_READ_PTE_LOCK_FREE(((v172 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v118, v119, v120, v121) )
  {
    v162 = 48;
    goto LABEL_231;
  }
  if ( Process[1].Affinity.Bitmap[12] )
  {
LABEL_231:
    v26 = 1;
    v165 = 1;
  }
  v27 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v171);
LABEL_17:
  v177 = (v27 >> 5) & 0x1F;
  v173 = (__int64 **)a1[11];
  v30 = MiComputeFaultNode(a1, 0LL, &v173);
  LODWORD(v178) = v30;
  Address = v173;
  if ( (v173
     || (a2 <= 0xFFFFF6BFFFFFFF78uLL
      && a2 >= 0xFFFFF68000000000uLL
      && (unsigned int)MiIsStoreProcess(Process, 0xFFFFF68000000000uLL, v28, v29)
      || (*(_BYTE *)(v183 + 184) & 7) == 0
      && v172 < 0xFFFF800000000000uLL
      && ((v114 = Process[1].ActiveProcessorsPadding[8], *(_QWORD *)(v114 + 424)) || *(_QWORD *)(v114 + 432)))
     && (Address = MiLocateAddress(v172), (v173 = Address) != 0LL))
    && (v143 = *((unsigned int *)Address + 13),
        LODWORD(v143) = v143 & 0x7FFFFFFF,
        (v143 | ((unsigned __int64)*((unsigned __int8 *)Address + 34) << 31)) == 0x7FFFFFFFELL) )
  {
    v32 = 7;
    v162 |= 0x80u;
    v164 = 7;
  }
  else
  {
    v32 = 2;
  }
  if ( ((v12 >> 11) & 1) != 0 )
  {
    v165 = 1;
    v164 = v32 | 1;
    v26 = 1;
  }
  IsPteInStore = MiIsPteInStore(v168, v14);
  v36 = v35 & IsPteInStore | v3;
  if ( v26 != v35 )
  {
    if ( dword_140C4EC00 )
    {
      v165 = v35;
      --dword_140C4EC00;
      v26 = v35;
    }
    else
    {
      v37 = (_QWORD *)v170;
      if ( v170 )
      {
        v128 = v173;
        v129 = (v34 & 0x10) != 0;
        if ( (v34 & 0x10) != 0 && !v173 )
        {
          v128 = MiLocateAddress(v172);
          v173 = v128;
        }
        v26 = MiComputeFaultCluster((__int64)v168, v37, (unsigned __int64)v128 & -(__int64)v129, v36 & 1);
        v165 = v26;
        v35 = 1;
      }
      else if ( v172 > 0x7FFFFFFEFFFFLL )
      {
        v165 = v35;
        v26 = v35;
        if ( (v34 & 0x10) == 0 && (v172 < 0xFFFFF68000000000uLL || v172 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v26 = 16;
          v36 |= 4u;
          v165 = 16;
        }
      }
    }
  }
  LODWORD(v176) = v35 & v36;
  if ( (v35 & v36) != 0 )
  {
    if ( v26 > *((_DWORD *)v168 + 291) )
      v26 = *((_DWORD *)v168 + 291);
    v165 = v26;
  }
  v38 = a2;
  v181 = MiAllocateInPageSupport(a2, v167, &v165, (__int64 *)((unsigned __int64)va & -(__int64)(v10 != 0)));
  v39 = (__int64)v181;
  if ( !v181 )
  {
    result = 3221225626LL;
LABEL_246:
    if ( v170 )
      *(_BYTE *)(v170 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v12
    || ((v12 >> 11) & 1) != 0
    && ((v40 = v180, (*(_BYTE *)(v180 + 34) & 0x28) == 0x28)
     || (*(_BYTE *)(v180 + 34) & 0x20) == 0
     || v14 != *(_QWORD *)(v180 + 16)
     || (*(_DWORD *)(*(_QWORD *)v180 + 160LL) & 0x20) != 0) )
  {
    if ( v189 )
    {
      LOBYTE(v40) = 17;
      MiUnlockProtoPoolPage(v189, v40, v41, v42);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v39);
    result = 3221226548LL;
    goto LABEL_246;
  }
  v43 = 1;
  if ( v170 && *(_BYTE *)v170 == 1 )
    MiSetInPagePrefetchPriority(v170, v39);
  v44 = v165;
  if ( v165 > v43 && (unsigned int)MiSufficientAvailablePages((__int64)v168, 0x140uLL) )
  {
    v45 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
    v186 = ((unsigned int)a2 >> 3) & 0x1FF;
    if ( (v162 & 0x10) != 0 )
    {
      v122 = v173;
      v123 = v172;
      if ( (v173 || (v173 = MiLocateAddress(v172), (v122 = v173) != 0LL))
        && ((_DWORD)v122[6] & 0x100000) == 0
        && (MiGetProtoPteAddress((__int64)v122, v123 >> 12, 4, &v179), v179)
        && (*(_BYTE *)(v179 + 34) & 2) == 0 )
      {
        v124 = *(_QWORD *)(v179 + 8);
        v46 = a2;
        v125 = (__int64)(a2 - v124) >> 3;
        v126 = ((__int64)(v124 + 8LL * *(unsigned int *)(v179 + 44) - a2) >> 3) - 1;
        if ( v126 >= v45 )
          v126 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
        v45 = v126;
        if ( (unsigned int)v125 >= v186 )
          LODWORD(v125) = ((unsigned int)a2 >> 3) & 0x1FF;
        v186 = v125;
      }
      else
      {
        v46 = a2;
        v44 = 1;
      }
    }
    else
    {
      v46 = a2;
    }
    if ( v170 || (v36 & 4) != 0 )
    {
      v186 = 0;
      if ( !v45 )
        v44 = 1;
    }
    if ( v44 <= 1 )
    {
      v38 = a2;
      v62 = v166;
    }
    else
    {
      v169 = v12;
      v167 = v44 - 1;
      v179 = v46 + 8;
      v47 = v44 - 1;
      if ( v45 <= v44 - 1 )
        v47 = v45;
      PagingFileOffset = MiGetPagingFileOffset(&v169);
      v49 = -3 - PagingFileOffset;
      v180 = PagingFileOffset;
      if ( (unsigned __int64)PagingFileOffset + v47 < 0xFFFFFFFE )
        v49 = v47;
      if ( (_DWORD)v176 || v170 )
        v36 |= 8u;
      v50 = v12 & 0xFFFFFFFFFC00FF1DuLL;
      updated = v12 & 0xFFFFFFFFFC00FF1DuLL;
      if ( v49 )
      {
        v52 = v179;
        v53 = v180;
        while ( 1 )
        {
          updated = MiUpdatePageFileHighInPte(updated, ++v53);
          v54 = MI_READ_PTE_LOCK_FREE(v52);
          if ( (v54 & 0x3E0) != 0 && (v54 & 0xFFFFFFFFFC00FF1DuLL) == updated )
          {
            v166 = v52;
          }
          else if ( (v36 & 8) != 0 )
          {
LABEL_60:
            v12 = v171;
            v30 = v178;
            v39 = (__int64)v181;
            break;
          }
          v52 += 8LL;
          if ( !--v49 )
            goto LABEL_60;
        }
      }
      v55 = a2;
      v56 = v167 - ((__int64)(v166 - a2) >> 3);
      v166 = (__int64)(v166 - a2) >> 3;
      v169 = v12;
      if ( v186 <= v56 )
        v56 = v186;
      v57 = v56;
      v179 = a2;
      v58 = MiGetPagingFileOffset(&v169);
      v180 = v58;
      v59 = v58 - 1;
      if ( v57 <= (unsigned __int64)v58 - 1 )
        v59 = v57;
      if ( v59 )
      {
        v115 = v180;
        v116 = v59;
        while ( 1 )
        {
          --v115;
          v55 -= 8LL;
          v50 = MiUpdatePageFileHighInPte(v50, v115);
          v117 = MI_READ_PTE_LOCK_FREE(v55);
          if ( (v117 & 0x3E0) != 0 && (v117 & 0xFFFFFFFFFC00FF1DuLL) == v50 )
          {
            v179 = v55;
          }
          else if ( (v36 & 8) != 0 )
          {
LABEL_149:
            v12 = v171;
            v39 = (__int64)v181;
            break;
          }
          if ( !--v116 )
            goto LABEL_149;
        }
      }
      v38 = a2;
      v60 = v12;
      if ( qword_140C4DE80 && (v12 & 0x10) == 0 )
        v60 = v12 & ~qword_140C4DE80;
      v14 = MiUpdatePageFileHighInPte(v12, HIDWORD(v60) - (unsigned int)((__int64)(a2 - v179) >> 3));
      LODWORD(v169) = v61 + v166 + 1;
      v62 = a2 - 8LL * v61;
      v166 = v62;
    }
  }
  else
  {
    v62 = a2;
  }
  v63 = MiObtainFaultCharges(v168, v169, v164);
  v65 = (unsigned int)v169;
  v66 = v63;
  v181 = (PSLIST_ENTRY)v63;
  if ( (unsigned int)v169 > (unsigned __int64)v63 )
  {
    v144 = v14;
    if ( qword_140C4DE80 && (v14 & 0x10) == 0 )
      v144 = v14 & ~qword_140C4DE80;
    v145 = (unsigned int)v169 - v66;
    v146 = HIDWORD(v144);
    if ( v62 + 8 * v145 <= v38 )
    {
      v166 = v62 + 8 * v145;
    }
    else
    {
      v166 = v38;
      v145 = (__int64)(v38 - v62) >> 3;
    }
    v14 = MiUpdatePageFileHighInPte(v14, v145 + v146);
    LODWORD(v169) = v66;
    v65 = (unsigned int)v66;
  }
  v67 = v170;
  v68 = 1;
  if ( !v170 || *(_BYTE *)v170 != 1 )
  {
    v69 = v168;
    v70 = (unsigned int)v65;
    v71 = (unsigned int)v65;
LABEL_73:
    v178 = v70;
    goto LABEL_74;
  }
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v168, ((*(_DWORD *)(v170 + 80) >> 3) & 7u) + 1);
  v70 = (unsigned int)v65;
  v71 = AvailablePagesBelowPriority;
  v178 = AvailablePagesBelowPriority;
  if ( AvailablePagesBelowPriority > (unsigned int)v65 )
  {
    v71 = (unsigned int)v65;
    goto LABEL_73;
  }
LABEL_74:
  if ( !v71 )
  {
LABEL_296:
    if ( v189 )
    {
      LOBYTE(v64) = 17;
      MiUnlockProtoPoolPage(v189, v64, v65, v66);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v39);
    if ( v67 )
      *(_BYTE *)(v67 + 1) = 2;
    MiReturnFaultCharges((__int64)v168, (unsigned __int64)v181, v164);
    return 3221225495LL;
  }
  if ( !v67
    || *(_BYTE *)v67 != v68
    || (v131 = *(_QWORD *)(v67 + 88)) == 0
    || v174
    || v172 > 0x7FFFFFFEFFFFLL
    || v189
    || *(ULONG_PTR **)(qword_140C4E588 + 8 * ((*(_QWORD *)(v131 + 40) >> 39) & 0x3FFLL)) != v69 )
  {
    v72 = v177;
LABEL_77:
    v73 = MiProtectionToCacheAttribute(v72);
    PageChain = MiGetPageChain((__int64)v168, v183, v30, v73, v174, -1LL, &v178);
    v75 = v178;
    v176 = PageChain;
    goto LABEL_78;
  }
  v147 = (__int64)((unsigned __int128)((v131 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v148 = MiSearchNumaNodeTable(v147 + (v147 >> 63));
  v72 = v177;
  if ( *((_DWORD *)v148 + 2) != v30 - 1 )
    goto LABEL_77;
  v176 = *(_QWORD *)(v67 + 88);
  v149 = MiProtectionToCacheAttribute(v177);
  if ( *(unsigned __int8 *)(v150 + 34) >> 6 != v149 )
    goto LABEL_77;
  v151 = 0;
  v152 = v150;
  while ( 1 )
  {
    ++v151;
    v153 = *(_QWORD *)(v152 + 24) & 0xFFFFFFFFFLL;
    v154 = v152;
    if ( v153 == 0xFFFFFFFFFLL )
      break;
    v152 = 48 * v153 - 0x58000000000LL;
    if ( v151 >= v71 )
      goto LABEL_270;
  }
  v152 = 0LL;
LABEL_270:
  v75 = v151;
  MiSetPfnBlink(v154, 0xFFFFFFFFFLL, 0);
  v155 = v170;
  *(_QWORD *)(v170 + 88) = v152;
  v67 = v155;
  PageChain = v176;
LABEL_78:
  if ( !PageChain )
    goto LABEL_296;
  if ( v75 != v70 )
  {
    v134 = v166;
    if ( v166 + 8 * v75 <= a2 )
    {
      v135 = v14;
      if ( qword_140C4DE80 && (v14 & 0x10) == 0 )
        v135 = v14 & ~qword_140C4DE80;
      v136 = v70 - v75;
      v137 = HIDWORD(v135);
      if ( v166 + 8 * v136 <= a2 )
      {
        v166 += 8 * v136;
      }
      else
      {
        v166 = a2;
        v136 = (__int64)(a2 - v134) >> 3;
      }
      v14 = MiUpdatePageFileHighInPte(v14, v137 + v136);
    }
    LODWORD(v169) = v75;
  }
  v76 = v39 + 272;
  v77 = 0;
  LODWORD(v178) = *(_DWORD *)(v39 + 192) >> 9;
  v187 = 0;
  v78 = (__int64 *)(v39 + 320);
  v171 = v39 + 320;
  while ( 1 )
  {
    v79 = MI_READ_PTE_LOCK_FREE(v166);
    v82 = 1LL;
    if ( (v36 & 0x10) != 0 )
      goto LABEL_95;
    if ( (v79 & 1) == 0 && (v79 & 0x400) == 0 && (v79 & 0x800) == 0 )
    {
      v83 = v79;
      if ( qword_140C4DE80 )
      {
        if ( (v79 & 0x10) != 0 )
          v83 = v79 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v83 = v79 & ~qword_140C4DE80;
      }
      v84 = v14;
      v81 = v14;
      if ( qword_140C4DE80 && (v14 & 0x10) == 0 )
        v84 = v14 & ~qword_140C4DE80;
      v85 = v83 ^ v84;
      v80 = 0xFFFFFFFF00000000uLL;
      if ( (v85 & 0xFFFFFFFF00000000uLL) == 0 && (v79 & 4) != 0 )
      {
        v81 = v79 ^ v14;
        if ( ((v79 ^ v14) & 0xF000) == 0 )
        {
          v86 = MiIsPteInStore(v168, v79);
          if ( v86 == ((unsigned int)v82 & v36) )
          {
LABEL_95:
            v87 = v176;
            v187 += v82;
            v88 = v166;
            *v78 = (v176 + 0x58000000000LL) / 48;
            if ( v88 == a2 )
              LOBYTE(v89) = v178;
            else
              v89 = *(_DWORD *)(v39 + 192) >> 12;
            MiLockSetPfnPriority(v87, v89 & 7);
            v90 = *(_QWORD *)(v176 + 24) & 0xFFFFFFFFFLL;
            MiSetPfnBlink(v176, 0LL, 0);
            if ( v90 == 0xFFFFFFFFFLL )
              v176 = 0LL;
            else
              v176 = 48 * v90 - 0x58000000000LL;
            v78 = (__int64 *)v171;
            v82 = 1LL;
            goto LABEL_100;
          }
        }
      }
    }
    if ( (v36 & 8) != 0 )
      break;
    v36 |= 2u;
    *v78 = qword_140C4ECB8;
LABEL_100:
    v171 = (__int64)++v78;
    if ( v67 )
      MiAdvanceFaultList((_QWORD *)v67);
    v166 += 8LL;
    v91 = v14;
    if ( qword_140C4DE80 && (v14 & 0x10) == 0 )
      v91 = v14 & ~qword_140C4DE80;
    v14 = MiUpdatePageFileHighInPte(v14, v82 + HIDWORD(v91));
    v77 += v82;
    v92 = v169;
LABEL_106:
    if ( v77 >= v92 )
    {
      v93 = v169;
      v94 = v166;
      goto LABEL_108;
    }
  }
  v156 = a2;
  v94 = v166;
  if ( v166 <= a2 )
  {
    v78 = (__int64 *)(v39 + 320);
    v157 = (_QWORD *)(v39 + 320);
    if ( v77 )
    {
      v158 = v187;
      do
      {
        if ( *v157 != qword_140C4ECB8 )
        {
          MiReleaseFreshPage(48LL * *v157 - 0x58000000000LL, v80, v81);
          --v158;
        }
        ++v157;
        --v77;
      }
      while ( v77 );
      v156 = a2;
      v76 = v39 + 272;
      v187 = v158;
      v67 = v170;
    }
    v36 &= ~2u;
    v171 = v39 + 320;
    v166 = v156;
    v159 = MI_READ_PTE_LOCK_FREE(v156);
    LOBYTE(v82) = 1;
    v14 = v159;
    v92 = 1;
    LODWORD(v169) = 1;
    goto LABEL_106;
  }
  v93 = v77;
  LODWORD(v169) = v77;
LABEL_108:
  v95 = v94 - 8LL * v93;
  v96 = *(_QWORD *)(v39 + 8 * ((__int64)(a2 - v95) >> 3) + 320);
  v97 = v82 & (v162 >> 4);
  if ( v97 )
    v98 = 0LL;
  else
    v98 = (__int64)(v95 << 25) >> 16;
  *(_QWORD *)v76 = 0LL;
  v99 = v93 << 12;
  *(_DWORD *)(v76 + 40) = v99;
  *(_QWORD *)(v76 + 32) = v98 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v76 + 44) = v98 & 0xFFF;
  *(_WORD *)(v76 + 10) = 66;
  *(_WORD *)(v76 + 8) = 8 * ((((unsigned __int64)(v98 & 0xFFF) + v99 + 4095) >> 12) + 6);
  if ( (v36 & 2) != 0 )
  {
    v160 = MiReduceMdl(v76);
    if ( v160 )
    {
      v95 += 8 * v160;
      if ( !v97 )
        *(_QWORD *)(v76 + 32) += v160 << 12;
    }
    v93 = *(_DWORD *)(v76 + 40) >> 12;
    LODWORD(v169) = v93;
  }
  else
  {
    *(_WORD *)(v76 + 10) = 16450;
  }
  v100 = MI_READ_PTE_LOCK_FREE(v95);
  v171 = v100;
  if ( v93 == 1 )
    v163 = v162 & 0xF8 | (*(_DWORD *)(v39 + 192) >> 9) & 7 | 8;
  else
    v163 = v162 & 0xDF;
  LOBYTE(v175) = v163;
  MiInitializeReadInProgressPfn(v172, (_QWORD *)(v39 + 320), v169, v95, v39, v163);
  if ( (v36 & 0x10) != 0 )
  {
    if ( qword_140C4DE80 && (v100 & 0x10) == 0 )
      v100 &= ~qword_140C4DE80;
    v161 = (_QWORD *)(48 * ((v100 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
    MiFlowThroughInsertNode(v39, v161);
    v100 = v161[2];
    v171 = v100;
  }
  v103 = v189;
  if ( (v163 & 0x10) != 0 )
    MiObtainProtoReference(v189, 0LL, v101, v102);
  v104 = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)(v39 + 232) = a2;
  v105 = v170;
  *(_QWORD *)(v39 + 168) = v104;
  if ( v105 )
  {
    if ( *(_BYTE *)v105 == 1 )
    {
      v132 = *(_DWORD *)(v39 + 192) | 8;
      *(_DWORD *)(v39 + 192) = v132;
      if ( (*(_DWORD *)(v105 + 80) & 0x2000) != 0 )
        *(_DWORD *)(v39 + 192) = v132 | 0x20;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v39 + 192) |= 0x80u;
  if ( v173 && MiVadPageSizes[(*((_DWORD *)v173 + 12) >> 18) & 3] == 16 )
    *(_DWORD *)(v39 + 192) |= 0x100000u;
  if ( v103 )
  {
    LOBYTE(v106) = 17;
    MiUnlockProtoPoolPage(v103, v106, v107, v108);
  }
  MiFreePageChain(v176, v106, v107);
  if ( (PSLIST_ENTRY)v187 != v181 )
    MiReturnFaultCharges((__int64)v168, (unsigned __int64)v181 - v187, v164);
  *v191 = v39;
  v109 = MiGetPagingFileOffset(&v171);
  v110 = (unsigned __int16)v100 >> 12;
  LODWORD(v182) = v109;
  v111 = v168[v110 + 868];
  if ( (v163 & 0x10) != 0 )
    *(_QWORD *)(v39 + 160) = v103;
  if ( (v36 & 1) != 0 )
  {
    *(_DWORD *)(v39 + 192) |= 0x100u;
    *(_QWORD *)(v39 + 96) = v109 | (unsigned __int64)(v110 << 60);
  }
  else
  {
    HIDWORD(v182) = 0;
    *(_QWORD *)(v39 + 96) = (unsigned __int64)(unsigned int)v182 << 12;
  }
  v112 = *(_DWORD *)(v39 + 192) | 0x200000;
  *(_QWORD *)(v39 + 200) = v111;
  *(_DWORD *)(v39 + 192) = v112;
  if ( *(_QWORD *)(v111 + 216)
    && (!v105 || *(_BYTE *)v105 != 1 || (*(_DWORD *)(v105 + 80) & 0x1000) == 0 || (dword_140CFB180 & 1) != 0) )
  {
    *(_DWORD *)(v39 + 192) = v112 | 0x400000;
  }
  *(_QWORD *)(v39 + 240) = v95;
  result = 3221435187LL;
  *(_QWORD *)(v39 + 248) = 48 * v96 - 0x58000000000LL;
  return result;
}
