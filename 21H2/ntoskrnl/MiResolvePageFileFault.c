/*
 * XREFs of MiResolvePageFileFault @ 0x1403927C4
 * Callers:
 *     MiIssueFlowThroughFault @ 0x14023ECD8 (MiIssueFlowThroughFault.c)
 *     MiDispatchFault @ 0x14031E200 (MiDispatchFault.c)
 *     MiResolveProtoPteFault @ 0x14031EAA0 (MiResolveProtoPteFault.c)
 * Callees:
 *     MiComputeFaultCluster @ 0x140232BE4 (MiComputeFaultCluster.c)
 *     MiAdvanceFaultList @ 0x140232E08 (MiAdvanceFaultList.c)
 *     MiIsPteInStore @ 0x140232E74 (MiIsPteInStore.c)
 *     MiIsStoreProcess @ 0x1402365F4 (MiIsStoreProcess.c)
 *     MiReturnFaultCharges @ 0x14024AA58 (MiReturnFaultCharges.c)
 *     MiSetInPagePrefetchPriority @ 0x1402538D0 (MiSetInPagePrefetchPriority.c)
 *     MiFlowThroughInsertNode @ 0x14025A2B4 (MiFlowThroughInsertNode.c)
 *     MiGetAvailablePagesBelowPriority @ 0x140266B40 (MiGetAvailablePagesBelowPriority.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiInitializeReadInProgressPfn @ 0x1402724C0 (MiInitializeReadInProgressPfn.c)
 *     MiReduceMdl @ 0x14027436C (MiReduceMdl.c)
 *     MiObtainProtoReference @ 0x14027449C (MiObtainProtoReference.c)
 *     MiFreeInPageSupportBlock @ 0x14027456C (MiFreeInPageSupportBlock.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1402802DC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiUnlockVadTree @ 0x1402806E0 (MiUnlockVadTree.c)
 *     MiSufficientAvailablePages @ 0x140285380 (MiSufficientAvailablePages.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiGetPagingFileOffset @ 0x1402E76C0 (MiGetPagingFileOffset.c)
 *     MiLockVadTree @ 0x1402ED128 (MiLockVadTree.c)
 *     MiLocateAddress @ 0x1403126F0 (MiLocateAddress.c)
 *     MiSetPfnBlink @ 0x140313CA0 (MiSetPfnBlink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiObtainFaultCharges @ 0x140329630 (MiObtainFaultCharges.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiComputeFaultNode @ 0x140339370 (MiComputeFaultNode.c)
 *     MiAllocateInPageSupport @ 0x140339CA0 (MiAllocateInPageSupport.c)
 *     MiUpdatePageFileHighInPte @ 0x14033B6A0 (MiUpdatePageFileHighInPte.c)
 *     PsGetIoPriorityThread @ 0x14033D760 (PsGetIoPriorityThread.c)
 *     MiProtectionToCacheAttribute @ 0x14033D7D0 (MiProtectionToCacheAttribute.c)
 *     MiSharedVaToPartition @ 0x14033D80C (MiSharedVaToPartition.c)
 *     MiLockSetPfnPriority @ 0x140386110 (MiLockSetPfnPriority.c)
 *     MiFreePageChain @ 0x1403936C0 (MiFreePageChain.c)
 *     MiKernelStackVaToStackNode @ 0x1403936D8 (MiKernelStackVaToStackNode.c)
 *     MiReadFromMemoryPagefile @ 0x14059A410 (MiReadFromMemoryPagefile.c)
 */

__int64 MiResolvePageFileFault(unsigned __int64 *a1, unsigned __int64 a2, ...)
{
  unsigned __int64 v2; // rdi
  unsigned int v5; // r14d
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  __int64 v11; // r9
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  ULONG_PTR *v16; // rcx
  char v17; // r15
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r15
  int SystemRegionType; // ecx
  __int64 v22; // r8
  int v23; // r15d
  bool v24; // zf
  ULONG_PTR *v25; // rcx
  unsigned int v26; // edi
  __int64 Process; // r15
  int v28; // eax
  __int64 **v29; // r12
  int v30; // r15d
  __int64 v31; // rcx
  __int64 v32; // rax
  char v33; // al
  int IsPteInStore; // eax
  ULONG_PTR *v35; // rcx
  char v36; // r9
  unsigned __int64 v37; // r10
  int v38; // r11d
  int v39; // r14d
  _QWORD *v40; // rax
  __int64 v41; // r13
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned int v45; // r12d
  unsigned __int64 v46; // r8
  unsigned int v47; // edi
  __int64 v48; // rbx
  unsigned int PagingFileOffset; // eax
  unsigned int v50; // r12d
  __int64 v51; // rdi
  __int64 updated; // rbx
  unsigned __int64 v53; // rsi
  __int64 v54; // r13
  __int64 v55; // rax
  unsigned __int64 v56; // r12
  unsigned int v57; // ecx
  unsigned __int64 v58; // rbx
  unsigned int v59; // eax
  unsigned int v60; // ecx
  __int64 v61; // rsi
  unsigned int v62; // ebx
  __int64 v63; // rax
  unsigned __int64 v64; // r12
  unsigned __int64 v65; // rdx
  int v66; // r9d
  __int64 v67; // r8
  unsigned __int64 v68; // rsi
  unsigned __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned int v73; // r11d
  __int64 v74; // rdi
  unsigned __int64 v75; // r12
  unsigned __int64 v76; // rsi
  unsigned int v77; // r8d
  unsigned int v78; // eax
  __int64 PageChain; // rax
  unsigned __int64 v80; // rsi
  unsigned int v81; // edx
  __int64 v82; // rsi
  _QWORD *v83; // r15
  unsigned int v84; // r12d
  __int64 v85; // rax
  __int64 v86; // r8
  __int64 v87; // r9
  __int64 v88; // rdx
  __int64 v89; // r11
  unsigned __int64 v90; // rcx
  __int64 v91; // rax
  int v92; // eax
  __int64 v93; // rdi
  unsigned __int64 v94; // rax
  int v95; // edx
  __int64 v96; // rdi
  __int64 v97; // rcx
  unsigned __int64 v98; // rdx
  __int64 v99; // rax
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // rdi
  __int64 v102; // r15
  char v103; // bl
  __int64 v104; // r9
  __int64 v105; // r8
  int v106; // esi
  unsigned __int64 v107; // rbx
  __int64 v108; // r12
  __int64 v109; // rax
  __int64 v110; // rsi
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  unsigned int v114; // eax
  __int64 v115; // rbx
  ULONG_PTR v116; // r8
  int v117; // ecx
  __int64 result; // rax
  __int64 v119; // rax
  __int64 **v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rax
  unsigned int v123; // ecx
  unsigned __int64 v124; // r9
  unsigned __int64 v125; // rdx
  unsigned __int64 v126; // r12
  unsigned __int64 v127; // rdx
  __int64 v128; // rdx
  __int64 v129; // rax
  __int64 **v130; // r8
  unsigned int v131; // eax
  unsigned __int64 AvailablePagesBelowPriority; // rax
  unsigned int v133; // r11d
  __int64 v134; // rcx
  int v135; // edx
  __int64 v136; // rax
  int v137; // eax
  __int64 v139; // rdx
  __int64 v140; // r8
  __int64 v141; // r9
  __int64 v142; // rcx
  unsigned __int64 v143; // rdx
  unsigned __int64 v144; // rdi
  unsigned __int64 v145; // rdx
  __int64 v146; // rdx
  _QWORD *v147; // rax
  int v148; // eax
  __int64 v149; // rdx
  unsigned int v150; // ecx
  __int64 v151; // rdi
  __int64 v152; // rax
  __int64 v153; // r9
  __int64 v154; // rax
  unsigned __int64 v155; // rax
  _QWORD *v156; // rbx
  int v157; // esi
  __int64 v158; // rax
  _QWORD *v159; // rbx
  unsigned int v160; // [rsp+48h] [rbp-89h]
  unsigned int v161; // [rsp+48h] [rbp-89h]
  unsigned int v162; // [rsp+48h] [rbp-89h]
  unsigned int v163; // [rsp+4Ch] [rbp-85h]
  unsigned int v164; // [rsp+4Ch] [rbp-85h]
  char v165; // [rsp+50h] [rbp-81h]
  unsigned __int64 v166; // [rsp+58h] [rbp-79h] BYREF
  unsigned __int64 v167; // [rsp+60h] [rbp-71h]
  unsigned __int64 v168; // [rsp+68h] [rbp-69h]
  ULONG_PTR *v169; // [rsp+70h] [rbp-61h]
  unsigned __int64 v170; // [rsp+78h] [rbp-59h]
  __int64 v171; // [rsp+80h] [rbp-51h]
  unsigned __int64 v172; // [rsp+88h] [rbp-49h] BYREF
  int v173; // [rsp+90h] [rbp-41h]
  __int64 **Address; // [rsp+98h] [rbp-39h] BYREF
  int v175; // [rsp+A0h] [rbp-31h]
  int v176; // [rsp+A4h] [rbp-2Dh]
  __int64 v177; // [rsp+A8h] [rbp-29h]
  unsigned __int64 v178; // [rsp+B0h] [rbp-21h] BYREF
  __int64 v179; // [rsp+B8h] [rbp-19h]
  unsigned __int64 v180; // [rsp+C0h] [rbp-11h]
  __int64 v181; // [rsp+C8h] [rbp-9h]
  __int64 v182; // [rsp+D0h] [rbp-1h]
  struct _KTHREAD *CurrentThread; // [rsp+D8h] [rbp+7h]
  unsigned __int8 v184; // [rsp+138h] [rbp+67h]
  char v185; // [rsp+138h] [rbp+67h]
  char v186; // [rsp+138h] [rbp+67h]
  __int64 v188; // [rsp+148h] [rbp+77h] BYREF
  va_list va; // [rsp+148h] [rbp+77h]
  __int64 *v190; // [rsp+150h] [rbp+7Fh]
  va_list va1; // [rsp+158h] [rbp+87h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v188 = va_arg(va1, _QWORD);
  v190 = va_arg(va1, __int64 *);
  v2 = a1[2];
  v170 = *a1;
  v5 = 0;
  v181 = a1[7];
  v178 = 0LL;
  v182 = 0LL;
  v6 = MI_READ_PTE_LOCK_FREE(a2);
  CurrentThread = KeGetCurrentThread();
  v172 = v6;
  if ( ((__int64)CurrentThread[1].Queue & 4) != 0 )
  {
    if ( v188 )
    {
      LOBYTE(v7) = 17;
      MiUnlockProtoPoolPage(v188, v7, v8, v9);
    }
    return 3221225633LL;
  }
  v10 = v188;
  v11 = 2048LL;
  v12 = v172;
  v13 = 0xFFFFDE0000000000uLL;
  if ( (v6 & 0x800) != 0 )
  {
    if ( qword_140C50780 )
    {
      if ( (v6 & 0x10) != 0 )
        v6 &= ~0x10uLL;
      else
        v6 &= ~qword_140C50780;
    }
    v5 = 16;
    v179 = 48 * ((v6 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v14 = *(_QWORD *)(v179 + 16);
    v15 = (*(_QWORD *)(v179 + 40) >> 43) & 0x3FFLL;
    goto LABEL_5;
  }
  v179 = 0LL;
  v14 = v172;
  if ( !v188 )
  {
    v15 = *(unsigned __int16 *)(v181 + 174);
LABEL_5:
    v16 = *(ULONG_PTR **)(qword_140C51F48 + 8 * v15);
    goto LABEL_6;
  }
  v16 = MiSharedVaToPartition(v181, v170, a2);
  v11 = 2048LL;
LABEL_6:
  v168 = 0LL;
  v17 = v2;
  v18 = v2 & 0xFFFFFFFFFFFFFFFEuLL;
  v169 = v16;
  v19 = 1LL;
  v163 = 2;
  v20 = v17 & 1;
  if ( v20 )
  {
    switch ( *(_BYTE *)v18 )
    {
      case 5:
        v137 = *(_DWORD *)(v18 + 56);
        if ( (v137 & 4) != 0 && ((v137 & 0x10) != 0 || !(unsigned int)MiIsPteInStore((__int64)v16, v14)) )
        {
          if ( v10 )
          {
            LOBYTE(v19) = 17;
            MiUnlockProtoPoolPage(v10, v19, v13, v11);
          }
          return 3221225495LL;
        }
        v168 = 0LL;
        break;
      case 2:
        v168 = v18;
        break;
      case 1:
        v168 = v18;
        if ( (v172 & 0x800) != 0 || !(unsigned int)MiGetPagingFileOffset((__int64)&v172) )
          return 0LL;
        v163 = 0;
        v5 |= 0x20u;
        break;
    }
  }
  SystemRegionType = MiGetSystemRegionType(v170);
  if ( v20 && *(_BYTE *)v18 == 4 )
  {
    v129 = *(_QWORD *)(v18 + 48);
    v23 = 8;
    v163 |= 8u;
    v22 = v18;
    v168 = v18;
    v25 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v129 + 544) + 1838LL));
    v169 = v25;
LABEL_11:
    v175 = v23;
    goto LABEL_12;
  }
  if ( ((v12 >> 5) & 0x1F) != 0x1F )
  {
    v22 = v168;
    v23 = 0;
    v24 = SystemRegionType == 12;
    v25 = v169;
    if ( v24 )
      v23 = 8;
    goto LABEL_11;
  }
  v175 = 8;
  v136 = MiKernelStackVaToStackNode(v170);
  if ( v136 )
    v25 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v136 + 40));
  else
    v25 = &MiSystemPartition;
  v163 |= 8u;
  v22 = v168;
  v169 = v25;
LABEL_12:
  if ( v5 >= 0x20 && (*(_DWORD *)(v22 + 80) & 0x200) != 0 )
  {
    if ( (unsigned int)MiIsPteInStore((__int64)v25, v12) )
    {
      if ( v10 )
      {
        LOBYTE(v139) = 17;
        MiUnlockProtoPoolPage(v10, v139, v140, v141);
      }
      return 0LL;
    }
  }
  v26 = 16;
  v176 = 0;
  v160 = 1;
  Process = (__int64)CurrentThread->ApcState.Process;
  v171 = Process;
  v167 = a2;
  v165 = 2;
  LODWORD(v166) = 16;
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    v184 = v176;
    goto LABEL_16;
  }
  v184 = 16;
  v119 = MI_READ_PTE_LOCK_FREE(((v170 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( MI_PROTO_FORMAT_COMBINED(v119) )
  {
    v184 = 48;
  }
  else if ( !*(_QWORD *)(Process + 1264) )
  {
    goto LABEL_16;
  }
  v26 = 1;
  LODWORD(v166) = 1;
LABEL_16:
  v177 = (v12 >> 5) & 0x1F;
  Address = (__int64 **)a1[11];
  v28 = MiComputeFaultNode((__int64)a1, 0LL, &Address);
  v29 = Address;
  v30 = v28;
  v173 = v28;
  if ( Address )
    goto LABEL_232;
  if ( a2 > 0xFFFFF6BFFFFFFF78uLL )
  {
    v31 = v171;
  }
  else
  {
    v31 = v171;
    if ( a2 >= 0xFFFFF68000000000uLL && (unsigned int)MiIsStoreProcess(v171) )
      goto LABEL_231;
  }
  if ( (*(_BYTE *)(v181 + 184) & 7) != 0 )
    goto LABEL_24;
  if ( v170 >= 0xFFFF800000000000uLL )
    goto LABEL_24;
  v32 = *(_QWORD *)(v31 + 1680);
  if ( !*(_QWORD *)(v32 + 408) && !*(_QWORD *)(v32 + 416) )
    goto LABEL_24;
LABEL_231:
  MiLockVadTree(1);
  Address = MiLocateAddress(v170);
  v29 = Address;
  MiUnlockVadTree(1, 0x11u);
  if ( !v29 )
  {
LABEL_24:
    v33 = 2;
    goto LABEL_25;
  }
LABEL_232:
  v142 = *((unsigned int *)v29 + 13);
  LODWORD(v142) = v142 & 0x7FFFFFFF;
  if ( (v142 | ((unsigned __int64)*((unsigned __int8 *)v29 + 34) << 31)) != 0x7FFFFFFFELL )
    goto LABEL_24;
  v33 = 7;
  v184 |= 0x80u;
  v165 = 7;
LABEL_25:
  if ( ((v12 >> 11) & 1) != 0 )
  {
    LODWORD(v166) = 1;
    v165 = v33 | 1;
    v26 = 1;
  }
  IsPteInStore = MiIsPteInStore((__int64)v169, v14);
  v39 = v38 & IsPteInStore | v5;
  if ( v26 != v38 )
  {
    if ( dword_140C531D8 )
    {
      LODWORD(v166) = v38;
      --dword_140C531D8;
      v26 = v38;
    }
    else
    {
      v40 = (_QWORD *)v168;
      if ( v168 )
      {
        if ( (v36 & 0x10) != 0 )
        {
          v130 = Address;
          if ( !Address )
          {
            MiLockVadTree(v38);
            Address = MiLocateAddress(v170);
            MiUnlockVadTree(1, 0x11u);
            v40 = (_QWORD *)v168;
            v38 = 1;
            v35 = v169;
            v130 = Address;
          }
        }
        else
        {
          v130 = 0LL;
        }
        v131 = MiComputeFaultCluster((__int64)v35, v40, (__int64)v130, v38 & (unsigned int)v39);
        v35 = v169;
        v26 = v131;
        LODWORD(v166) = v131;
        v38 = 1;
      }
      else if ( v37 > 0x7FFFFFFEFFFFLL )
      {
        LODWORD(v166) = v38;
        v26 = v38;
        if ( (v36 & 0x10) == 0 && (v37 < 0xFFFFF68000000000uLL || v37 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v26 = 16;
          v39 |= 4u;
          LODWORD(v166) = 16;
        }
      }
    }
  }
  LODWORD(v171) = v38 & v39;
  if ( (v38 & v39) != 0 )
  {
    if ( v26 > *((_DWORD *)v35 + 295) )
      v26 = *((_DWORD *)v35 + 295);
    LODWORD(v166) = v26;
  }
  v180 = MiAllocateInPageSupport(
           a2,
           v163,
           (unsigned int *)&v166,
           (__int64 *)((unsigned __int64)va & -(__int64)(v10 != 0)));
  v41 = v180;
  if ( !v180 )
  {
    result = 3221225626LL;
LABEL_247:
    if ( v168 )
      *(_BYTE *)(v168 + 1) = ((_DWORD)result == -1073741670) + 1;
    return result;
  }
  if ( MI_READ_PTE_LOCK_FREE(a2) != v12
    || ((v12 >> 11) & 1) != 0
    && ((v42 = v179, (*(_BYTE *)(v179 + 34) & 0x28) == 0x28)
     || (*(_BYTE *)(v179 + 34) & 0x20) == 0
     || v14 != *(_QWORD *)(v179 + 16)
     || (*(_DWORD *)(*(_QWORD *)v179 + 160LL) & 0x20) != 0) )
  {
    if ( v188 )
    {
      LOBYTE(v42) = 17;
      MiUnlockProtoPoolPage(v188, v42, v43, v44);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v41);
    result = 3221226548LL;
    goto LABEL_247;
  }
  if ( v168 && *(_BYTE *)v168 == 1 )
    MiSetInPagePrefetchPriority(v168, v41);
  v45 = v166;
  if ( (unsigned int)v166 <= 1 || !(unsigned int)MiSufficientAvailablePages((__int64)v169, 0x140uLL) )
    goto LABEL_154;
  v46 = a2;
  v47 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
  v164 = ((unsigned int)a2 >> 3) & 0x1FF;
  if ( (v184 & 0x10) != 0 )
  {
    v120 = Address;
    if ( (Address
       || (MiLockVadTree(1), Address = MiLocateAddress(v170), MiUnlockVadTree(1, 0x11u), (v120 = Address) != 0LL))
      && ((_DWORD)v120[6] & 0x200000) == 0
      && (MiGetProtoPteAddress((__int64)v120, v170 >> 12, 4, (__int64 *)&v178), v178)
      && (*(_BYTE *)(v178 + 34) & 2) == 0 )
    {
      v121 = *(_QWORD *)(v178 + 8);
      v46 = a2;
      v122 = (__int64)(a2 - v121) >> 3;
      v123 = ((__int64)(v121 + 8LL * *(unsigned int *)(v178 + 44) - a2) >> 3) - 1;
      if ( v123 >= v47 )
        v123 = 511 - (((unsigned int)a2 >> 3) & 0x1FF);
      v47 = v123;
      if ( (unsigned int)v122 >= v164 )
        LODWORD(v122) = ((unsigned int)a2 >> 3) & 0x1FF;
      v164 = v122;
    }
    else
    {
      v46 = a2;
      v45 = 1;
    }
  }
  if ( v168 || (v39 & 4) != 0 )
  {
    v164 = 0;
    if ( !v47 )
      v45 = 1;
  }
  if ( v45 > 1 )
  {
    v166 = v12;
    v161 = v45 - 1;
    v178 = v46 + 8;
    v48 = v45 - 1;
    if ( v47 <= v45 - 1 )
      v48 = v47;
    PagingFileOffset = MiGetPagingFileOffset((__int64)&v166);
    v50 = -3 - PagingFileOffset;
    v179 = PagingFileOffset;
    if ( (unsigned __int64)PagingFileOffset + v48 < 0xFFFFFFFE )
      v50 = v48;
    if ( (_DWORD)v171 || v168 )
      v39 |= 8u;
    v51 = v12 & 0xFFFFFFFFFC00FF1DuLL;
    updated = v12 & 0xFFFFFFFFFC00FF1DuLL;
    if ( v50 )
    {
      v53 = v178;
      v54 = v179;
      do
      {
        updated = MiUpdatePageFileHighInPte(updated, ++v54);
        v55 = MI_READ_PTE_LOCK_FREE(v53);
        if ( (v55 & 0x3E0) != 0 && (v55 & 0xFFFFFFFFFC00FF1DuLL) == updated )
        {
          v167 = v53;
        }
        else if ( (v39 & 8) != 0 )
        {
          break;
        }
        v53 += 8LL;
        --v50;
      }
      while ( v50 );
      v12 = v172;
      v30 = v173;
      v41 = v180;
    }
    v56 = a2;
    v57 = v161 - ((__int64)(v167 - a2) >> 3);
    v167 = (__int64)(v167 - a2) >> 3;
    v166 = v12;
    if ( v164 <= v57 )
      v57 = v164;
    v58 = v57;
    v178 = a2;
    v59 = MiGetPagingFileOffset((__int64)&v166);
    v179 = v59;
    v60 = v59 - 1;
    if ( v58 <= (unsigned __int64)v59 - 1 )
      v60 = v58;
    if ( v60 )
    {
      v61 = v179;
      v62 = v60;
      do
      {
        --v61;
        v56 -= 8LL;
        v51 = MiUpdatePageFileHighInPte(v51, v61);
        v63 = MI_READ_PTE_LOCK_FREE(v56);
        if ( (v63 & 0x3E0) != 0 && (v63 & 0xFFFFFFFFFC00FF1DuLL) == v51 )
        {
          v178 = v56;
        }
        else if ( (v39 & 8) != 0 )
        {
          break;
        }
        --v62;
      }
      while ( v62 );
      v12 = v172;
      v41 = v180;
    }
    v64 = a2;
    v65 = v12;
    if ( qword_140C50780 && (v12 & 0x10) == 0 )
      v65 = v12 & ~qword_140C50780;
    v14 = MiUpdatePageFileHighInPte(v12, HIDWORD(v65) - (unsigned int)((__int64)(a2 - v178) >> 3));
    v160 = v66 + v167 + 1;
    v68 = a2 - 8 * v67;
    v167 = v68;
  }
  else
  {
LABEL_154:
    v64 = a2;
    v68 = v167;
  }
  v69 = MiObtainFaultCharges(v169, v160, v165);
  v180 = v69;
  v72 = v69;
  if ( v160 > v69 )
  {
    v143 = v14;
    if ( qword_140C50780 && (v14 & 0x10) == 0 )
      v143 = v14 & ~qword_140C50780;
    v144 = v160 - v69;
    v145 = HIDWORD(v143);
    if ( v68 + 8 * v144 <= v64 )
    {
      v146 = v144 + v145;
      v167 = v68 + 8 * v144;
    }
    else
    {
      v167 = v64;
      v146 = ((__int64)(v64 - v68) >> 3) + v145;
    }
    v14 = MiUpdatePageFileHighInPte(v14, v146);
    v160 = v72;
    v73 = v72;
  }
  else
  {
    v73 = v160;
  }
  v74 = v168;
  if ( !v168 || *(_BYTE *)v168 != 1 )
  {
    v75 = v73;
    v76 = v73;
LABEL_75:
    v172 = v75;
    goto LABEL_76;
  }
  AvailablePagesBelowPriority = MiGetAvailablePagesBelowPriority(v169, ((*(_DWORD *)(v168 + 80) >> 3) & 7u) + 1);
  v75 = v133;
  v76 = AvailablePagesBelowPriority;
  v172 = AvailablePagesBelowPriority;
  if ( AvailablePagesBelowPriority > v133 )
  {
    v76 = v133;
    goto LABEL_75;
  }
LABEL_76:
  if ( !v76 )
  {
LABEL_298:
    if ( v188 )
    {
      LOBYTE(v70) = 17;
      MiUnlockProtoPoolPage(v188, v70, v71, v72);
    }
    MiFreeInPageSupportBlock((PSLIST_ENTRY)v41);
    if ( v74 )
      *(_BYTE *)(v74 + 1) = 2;
    MiReturnFaultCharges((__int64)v169, v180, v165);
    return 3221225495LL;
  }
  if ( !v74
    || *(_BYTE *)v74 != 1
    || (v134 = *(_QWORD *)(v74 + 88)) == 0
    || v175
    || v170 > 0x7FFFFFFEFFFFLL
    || v188
    || *(ULONG_PTR **)(qword_140C51F48 + 8 * ((*(_QWORD *)(v134 + 40) >> 43) & 0x3FFLL)) != v169 )
  {
    v77 = v177;
LABEL_79:
    v78 = MiProtectionToCacheAttribute(v77);
    PageChain = MiGetPageChain((__int64)v169, v181, (__int64)(v167 << 25) >> 16, v30, v78, v175, -1LL, &v172);
    v80 = v172;
    v171 = PageChain;
    goto LABEL_80;
  }
  v147 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((v134 + 0x220000000000LL) >> 4));
  v77 = v177;
  if ( *((_DWORD *)v147 + 2) != v30 - 1 )
    goto LABEL_79;
  v171 = *(_QWORD *)(v74 + 88);
  v148 = MiProtectionToCacheAttribute(v177);
  if ( *(unsigned __int8 *)(v149 + 34) >> 6 != v148 )
    goto LABEL_79;
  v150 = 0;
  v151 = v149;
  while ( 1 )
  {
    ++v150;
    v152 = *(_QWORD *)(v151 + 24) & 0xFFFFFFFFFFLL;
    v153 = v151;
    if ( v152 == 0x3FFFFFFFFFLL )
      break;
    v151 = 48 * v152 - 0x220000000000LL;
    if ( v150 >= v76 )
      goto LABEL_270;
  }
  v151 = 0LL;
LABEL_270:
  v80 = v150;
  MiSetPfnBlink(v153, 0x3FFFFFFFFFLL, 0);
  v154 = v168;
  *(_QWORD *)(v168 + 88) = v151;
  v74 = v154;
  PageChain = v171;
LABEL_80:
  if ( !PageChain )
    goto LABEL_298;
  if ( v80 == v75 )
  {
    v81 = v160;
  }
  else
  {
    v124 = v167;
    if ( v167 + 8 * v80 <= a2 )
    {
      v125 = v14;
      if ( qword_140C50780 && (v14 & 0x10) == 0 )
        v125 = v14 & ~qword_140C50780;
      v126 = v75 - v80;
      v127 = HIDWORD(v125);
      if ( v167 + 8 * v126 > a2 )
      {
        v167 = a2;
        v128 = ((__int64)(a2 - v124) >> 3) + v127;
      }
      else
      {
        v128 = v126 + v127;
        v167 += 8 * v126;
      }
      v14 = MiUpdatePageFileHighInPte(v14, v128);
    }
    v81 = v80;
  }
  v82 = v41 + 272;
  v83 = (_QWORD *)(v41 + 320);
  v84 = 0;
  v173 = *(_DWORD *)(v41 + 192) >> 9;
  LODWORD(v166) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v162 = v81;
      v85 = MI_READ_PTE_LOCK_FREE(v167);
      v88 = v85;
      v89 = 1LL;
      if ( (v39 & 0x10) != 0
        || (v85 & 1) == 0
        && (v85 & 0x400) == 0
        && (v85 & 0x800) == 0
        && ((v90 = v85, !qword_140C50780)
          ? (v91 = v14)
          : ((v85 & 0x10) == 0 ? (v90 = v85 & ~qword_140C50780) : (v90 = v85 & 0xFFFFFFFFFFFFFFEFuLL),
             (v14 & 0x10) == 0 ? (v91 = v14 & ~qword_140C50780) : (v91 = v14)),
            ((v90 ^ v91) & 0xFFFFFFFF00000000uLL) == 0
         && (v88 & 4) != 0
         && ((v14 ^ v88) & 0xF000) == 0
         && (v92 = MiIsPteInStore((__int64)v169, v88), v92 == ((unsigned int)v89 & v39))) )
      {
        v93 = v171;
        LODWORD(v166) = v89 + v166;
        v94 = v167;
        *v83 = 0xAAAAAAAAAAAAAAABuLL * ((v171 + 0x220000000000LL) >> 4);
        if ( v94 == a2 )
          LOBYTE(v95) = v173;
        else
          v95 = *(_DWORD *)(v41 + 192) >> 12;
        MiLockSetPfnPriority(v93, v95 & 7, v86, v87);
        v96 = *(_QWORD *)(v93 + 24) & 0xFFFFFFFFFFLL;
        MiSetPfnBlink(v171, 0LL, 0);
        if ( v96 == 0x3FFFFFFFFFLL )
          v97 = 0LL;
        else
          v97 = 48 * v96 - 0x220000000000LL;
        v74 = v168;
        v89 = 1LL;
        goto LABEL_102;
      }
      if ( (v39 & 8) != 0 )
        break;
      v39 |= 2u;
      v97 = v171;
      *v83 = qword_140C53288;
LABEL_102:
      ++v83;
      v171 = v97;
      if ( v74 )
        MiAdvanceFaultList((_QWORD *)v74);
      v167 += 8LL;
      v98 = v14;
      if ( qword_140C50780 && (v14 & 0x10) == 0 )
        v98 = v14 & ~qword_140C50780;
      v99 = MiUpdatePageFileHighInPte(v14, v89 + HIDWORD(v98));
      v81 = v162;
      ++v84;
      v14 = v99;
      if ( v84 >= v162 )
      {
        v100 = v167;
        goto LABEL_109;
      }
    }
    v155 = a2;
    v100 = v167;
    if ( v167 > a2 )
      break;
    v83 = (_QWORD *)(v41 + 320);
    v156 = (_QWORD *)(v41 + 320);
    if ( v84 )
    {
      v157 = v166;
      do
      {
        if ( *v156 != qword_140C53288 )
        {
          MiReleaseFreshPage(48LL * *v156 - 0x220000000000LL);
          --v157;
        }
        ++v156;
        --v84;
      }
      while ( v84 );
      v74 = v168;
      v155 = a2;
      LODWORD(v166) = v157;
      v82 = v41 + 272;
    }
    v39 &= ~2u;
    v167 = v155;
    v14 = MI_READ_PTE_LOCK_FREE(v155);
    v81 = 1;
  }
  v81 = v84;
  v162 = v84;
LABEL_109:
  v101 = v100 - 8LL * v81;
  v102 = *(_QWORD *)(v41 + 320 + 8 * ((__int64)(a2 - v101) >> 3));
  v103 = v89 & (v184 >> 4);
  if ( v103 )
    v104 = 0LL;
  else
    v104 = (__int64)(v101 << 25) >> 16;
  *(_QWORD *)v82 = 0LL;
  v105 = v81 << 12;
  *(_DWORD *)(v82 + 40) = v105;
  *(_QWORD *)(v82 + 32) = v104 & 0xFFFFFFFFFFFFF000uLL;
  *(_DWORD *)(v82 + 44) = v104 & 0xFFF;
  *(_WORD *)(v82 + 10) = 66;
  *(_WORD *)(v82 + 8) = 8 * ((((unsigned __int64)(v104 & 0xFFF) + v105 + 4095) >> 12) + 6);
  if ( (v39 & 2) != 0 )
  {
    v158 = MiReduceMdl(v82);
    if ( v158 )
    {
      v101 += 8 * v158;
      if ( !v103 )
        *(_QWORD *)(v82 + 32) += v158 << 12;
    }
    v106 = *(_DWORD *)(v82 + 40) >> 12;
  }
  else
  {
    *(_WORD *)(v82 + 10) = 16450;
    v106 = v162;
  }
  v107 = MI_READ_PTE_LOCK_FREE(v101);
  v172 = v107;
  if ( v106 == 1 )
    v185 = v184 & 0xF8 | (*(_DWORD *)(v41 + 192) >> 9) & 7 | 8;
  else
    v185 = v184 & 0xDF;
  LOBYTE(v176) = v185;
  MiInitializeReadInProgressPfn(v170, (_QWORD *)(v41 + 320), v106, (unsigned __int64 *)v101, v41, v185);
  if ( (v39 & 0x10) != 0 )
  {
    if ( qword_140C50780 )
    {
      if ( (v107 & 0x10) != 0 )
        v107 &= ~0x10uLL;
      else
        v107 &= ~qword_140C50780;
    }
    v159 = (_QWORD *)(48 * ((v107 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
    MiFlowThroughInsertNode(v41, v159);
    v107 = v159[2];
    v172 = v107;
  }
  v24 = (v185 & 0x10) == 0;
  v186 = v185 & 0x10;
  v108 = v188;
  if ( !v24 )
    MiObtainProtoReference(v188, 0);
  v109 = MI_READ_PTE_LOCK_FREE(a2);
  *(_QWORD *)(v41 + 232) = a2;
  v110 = v168;
  *(_QWORD *)(v41 + 168) = v109;
  if ( v110 )
  {
    if ( *(_BYTE *)v110 == 1 )
    {
      v135 = *(_DWORD *)(v41 + 192) | 8;
      *(_DWORD *)(v41 + 192) = v135;
      if ( (*(_DWORD *)(v110 + 80) & 0x2000) != 0 )
        *(_DWORD *)(v41 + 192) = v135 | 0x20;
    }
  }
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v41 + 192) |= 0x80u;
  if ( Address && MiVadPageSizes[(*((_DWORD *)Address + 12) >> 19) & 3] == 16 )
    *(_DWORD *)(v41 + 192) |= 0x100000u;
  if ( v108 )
  {
    LOBYTE(v111) = 17;
    MiUnlockProtoPoolPage(v108, v111, v112, v113);
  }
  MiFreePageChain(v171);
  if ( (unsigned int)v166 != v180 )
    MiReturnFaultCharges((__int64)v169, v180 - (unsigned int)v166, v165);
  *v190 = v41;
  v114 = MiGetPagingFileOffset((__int64)&v172);
  v115 = (unsigned __int16)v107 >> 12;
  LODWORD(v182) = v114;
  v116 = v169[v115 + 2092];
  if ( v186 )
    *(_QWORD *)(v41 + 160) = v108;
  if ( (v39 & 1) != 0 )
  {
    *(_DWORD *)(v41 + 192) |= 0x100u;
    *(_QWORD *)(v41 + 96) = v114 | (unsigned __int64)(v115 << 60);
  }
  else
  {
    HIDWORD(v182) = 0;
    *(_QWORD *)(v41 + 96) = (unsigned __int64)(unsigned int)v182 << 12;
  }
  v117 = *(_DWORD *)(v41 + 192) | 0x200000;
  *(_QWORD *)(v41 + 200) = v116;
  *(_DWORD *)(v41 + 192) = v117;
  if ( *(_QWORD *)(v116 + 216)
    && (!v110 || *(_BYTE *)v110 != 1 || (*(_DWORD *)(v110 + 80) & 0x1000) == 0 || (dword_140D051C0 & 1) != 0) )
  {
    *(_DWORD *)(v41 + 192) = v117 | 0x400000;
  }
  *(_QWORD *)(v41 + 240) = v101;
  *(_QWORD *)(v41 + 248) = 48 * v102 - 0x220000000000LL;
  if ( _bittest16((const signed __int16 *)(v116 + 204), 0xBu) )
    MiReadFromMemoryPagefile(v116, v41);
  return 3221435187LL;
}
