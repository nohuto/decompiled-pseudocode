/*
 * XREFs of MiStealPage @ 0x140349B20
 * Callers:
 *     MiTradePage @ 0x14027DFE0 (MiTradePage.c)
 * Callees:
 *     MiGetPageChain @ 0x1402121E0 (MiGetPageChain.c)
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiGetSharedVm @ 0x14021A770 (MiGetSharedVm.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x140220280 (MiFreeWsleList.c)
 *     MiGetPagePrivilege @ 0x140221650 (MiGetPagePrivilege.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiGetPteFromCopyList @ 0x140222160 (MiGetPteFromCopyList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiHyperSpaceSize @ 0x14022B348 (MiHyperSpaceSize.c)
 *     ExAcquireSpinLockExclusive @ 0x14023C6E0 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x1402814C0 (ExAcquireSpinLockShared.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x1402931D0 (MiSearchNumaNodeTable.c)
 *     MiTbFlushType @ 0x14029ED94 (MiTbFlushType.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402A0190 (MI_WSLE_LOG_ACCESS.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiReleaseFaultState @ 0x1402B4E68 (MiReleaseFaultState.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiLockStealSystemVm @ 0x1402E96FC (MiLockStealSystemVm.c)
 *     MiWriteValidPteNewPage @ 0x1402F19B0 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 *     MiVaIsPageFileHash @ 0x140300048 (MiVaIsPageFileHash.c)
 *     MiReplacePageTablePage @ 0x1403047BC (MiReplacePageTablePage.c)
 *     MiSmallVaStillMapsFrame @ 0x14031E0F8 (MiSmallVaStillMapsFrame.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x140349874 (MiGetPfnChannel.c)
 *     MiUnlockStealVm @ 0x14034B18C (MiUnlockStealVm.c)
 *     MiCopyPfnEntryEx @ 0x14034B9B0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14034BF54 (MiFinalizePageAttribute.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     MiLockStealUserVm @ 0x14034C738 (MiLockStealUserVm.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiReplacePageOfProtoPool @ 0x14035032C (MiReplacePageOfProtoPool.c)
 *     MiClearPfnImageVerified @ 0x140353638 (MiClearPfnImageVerified.c)
 *     KeSwapDirectoryTableBase @ 0x140389FA4 (KeSwapDirectoryTableBase.c)
 *     MiPrepareToStealNonPagedPool @ 0x1403C121C (MiPrepareToStealNonPagedPool.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiStealPage(ULONG_PTR a1, unsigned __int8 a2, int a3, __int128 *a4, int a5, __int64 *a6)
{
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r8
  int v15; // r10d
  ULONG_PTR v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // r15
  int v19; // r10d
  __int64 v20; // rdx
  unsigned int v21; // ebx
  __int64 v22; // r8
  _DWORD *v23; // r9
  int v24; // edx
  __int128 *v25; // rax
  int v26; // ecx
  char v27; // al
  __int64 v28; // rcx
  char WsleContents; // al
  char v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // r8d
  char v34; // al
  unsigned int v35; // r12d
  int v36; // eax
  unsigned int v37; // edi
  unsigned int v38; // ebx
  int v39; // ebx
  int PfnChannel; // eax
  int v41; // ebx
  __int64 Page; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  _DWORD *v45; // r9
  _QWORD *v46; // rax
  __int64 PageChain; // rax
  __int64 v48; // r8
  __int64 SchedulerAssist; // r9
  unsigned __int64 v50; // r13
  int PagePrivilege; // eax
  unsigned int v52; // r11d
  int v53; // ebx
  __int64 v54; // rdx
  signed __int64 v55; // rdi
  unsigned __int8 v56; // al
  bool v57; // cf
  int v58; // r14d
  unsigned __int8 CurrentIrql; // al
  char v60; // cl
  struct _KPRCB *v61; // r10
  int v62; // eax
  unsigned __int64 v63; // rdi
  unsigned __int8 v64; // al
  struct _KPRCB *v65; // r9
  _DWORD *v66; // r8
  int v67; // eax
  __int64 v68; // rax
  __int64 v69; // rax
  unsigned __int8 v70; // al
  BOOL v71; // r14d
  int HasShadow; // eax
  int v73; // r11d
  __int64 *v74; // rax
  unsigned int v75; // eax
  unsigned __int64 v76; // rbx
  int v77; // eax
  __int64 IsPageFileHash; // rax
  volatile LONG *v79; // rbx
  unsigned __int8 v80; // al
  KIRQL v81; // di
  struct _KPRCB *CurrentPrcb; // r10
  int v83; // eax
  __int64 v84; // r8
  __int64 v85; // r9
  int v86; // r10d
  ULONG_PTR v87; // rbx
  __int64 v88; // rdx
  unsigned __int8 v89; // al
  char v90; // cl
  unsigned __int8 v91; // al
  struct _KPRCB *v92; // r10
  int v93; // eax
  _DWORD *v94; // r9
  __int64 v95; // rdx
  __int64 v96; // r9
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  int v102; // ebx
  __int64 v103; // rdx
  __int64 v104; // r8
  _DWORD *v105; // r9
  __int16 v106; // r12
  __int64 *PteFromCopyList; // rax
  ULONG_PTR v108; // r8
  int v109; // ebx
  __int64 v110; // rax
  int v111; // ecx
  LONG *SharedVm; // rbx
  _KPROCESS *v113; // rax
  unsigned __int64 v114; // rbx
  BOOL v115; // eax
  int v116; // edx
  int v117; // eax
  bool v118; // zf
  unsigned __int64 *v119; // r11
  unsigned __int64 v120; // rbx
  BOOL v121; // eax
  __int64 v122; // rdx
  __int64 v123; // r8
  _DWORD *v124; // r9
  int v125; // r11d
  char v126; // al
  __int64 v127; // rcx
  unsigned __int64 v128; // rbx
  unsigned __int8 v129; // al
  struct _KPRCB *v130; // r10
  int v131; // eax
  __int64 v132; // rbx
  unsigned __int8 v133; // al
  struct _KPRCB *v134; // r10
  int v135; // eax
  struct _LIST_ENTRY *v136; // rax
  unsigned __int64 *v137; // rdi
  unsigned __int64 PteShadow; // rbx
  BOOL v139; // eax
  struct _LIST_ENTRY *v140; // r11
  struct _LIST_ENTRY *v141; // rax
  __int64 *v142; // r12
  int v143; // edi
  BOOL v144; // eax
  char v145; // al
  unsigned int v146; // eax
  __int64 v147; // rdx
  unsigned __int8 v148; // al
  KIRQL v149; // di
  struct _KPRCB *v150; // r10
  int v151; // eax
  char v152; // al
  unsigned __int8 v153; // al
  struct _KPRCB *v154; // r9
  _DWORD *v155; // r8
  int v156; // eax
  __int64 v157; // rdx
  __int64 v158; // r8
  _DWORD *v159; // r9
  KIRQL v161; // [rsp+40h] [rbp-C0h]
  char v162[7]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v163; // [rsp+48h] [rbp-B8h]
  unsigned int v164; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v166; // [rsp+60h] [rbp-A0h]
  __int128 *v167; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v168; // [rsp+70h] [rbp-90h]
  __int64 v169; // [rsp+78h] [rbp-88h]
  __int64 v170; // [rsp+80h] [rbp-80h]
  int v171; // [rsp+88h] [rbp-78h]
  _KPROCESS *Process; // [rsp+90h] [rbp-70h]
  struct _LIST_ENTRY *v173; // [rsp+98h] [rbp-68h]
  int v174; // [rsp+A0h] [rbp-60h] BYREF
  int v175; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned __int64 *v176; // [rsp+A8h] [rbp-58h]
  __int64 v177; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v178; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v179; // [rsp+C0h] [rbp-40h]
  __int64 *v180; // [rsp+C8h] [rbp-38h]
  _QWORD v181[5]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-8h]
  _KPROCESS *v183; // [rsp+100h] [rbp+0h]
  __int64 v184; // [rsp+108h] [rbp+8h]
  struct _LIST_ENTRY *Flink; // [rsp+110h] [rbp+10h]
  _QWORD v186[15]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v187; // [rsp+198h] [rbp+98h]
  _QWORD v188[24]; // [rsp+1A0h] [rbp+A0h] BYREF

  v167 = a4;
  v180 = a6;
  v162[0] = 0;
  v161 = 0;
  memset((char *)v186 + 4, 0, 0x74uLL);
  v9 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v179 = 0LL;
  v177 = 0LL;
  v10 = 0LL;
  v171 = 0;
  v168 = (unsigned __int64 *)v9;
  LODWORD(v186[0]) = a3;
  v187 = -1LL;
  v173 = 0LL;
  v166 = (__int64)(v9 << 25) >> 16;
  LeafVa = MiGetLeafVa(v166);
  v14 = 1LL;
  if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    v15 = LODWORD(v186[1]) | 1;
  else
    v15 = LODWORD(v186[1]) | 8;
  LODWORD(v186[1]) = v15;
  v163 = v13;
  v16 = (__int64)(a1 + 0x58000000000LL) / 48;
  BugCheckParameter2 = v16;
  if ( a6 )
    *a6 = v13;
  v17 = (*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL;
  Process = 0LL;
  v18 = *(_QWORD *)(qword_140C4E588 + 8 * v17);
  v170 = v18;
  if ( LeafVa < 0xFFFF800000000000uLL )
    goto LABEL_15;
  if ( LeafVa >= qword_140C4FA78 && LeafVa <= qword_140C4E2A8 )
  {
    v19 = v15 | 8;
    if ( (v19 & 1) != 0 )
    {
      v15 = v19 | 2;
      if ( v166 >= qword_140C4E2A0 && v166 < qword_140C4E2A0 + MiHyperSpaceSize() )
        v15 |= 0x100u;
    }
    else
    {
      v15 = v19 | 4;
    }
LABEL_15:
    v15 |= 0x1000u;
    LODWORD(v186[1]) = v15;
  }
  if ( (v15 & 0x1000) != 0 )
  {
    LOBYTE(v14) = a2;
    v21 = MiLockStealUserVm(v18, a1, v14, v9, v186);
    if ( v21 != 1 )
      goto LABEL_18;
    v24 = v186[6];
    Process = KeGetCurrentThread()->ApcState.Process;
    v169 = v186[3];
    v164 = 0;
    v25 = v167;
LABEL_22:
    LOBYTE(v26) = v186[1];
    goto LABEL_23;
  }
  v21 = MiLockStealSystemVm(a1, a2, v9, (__int64)v186);
  if ( v21 != 1 )
  {
LABEL_18:
    MiLockPageInline(a1, v20, v22, v23);
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      return 0;
    return v21;
  }
  v24 = v186[6];
  v21 = 0;
  v169 = v186[3];
  v33 = 1;
  v164 = 1;
  v34 = *(_BYTE *)(v186[3] + 184LL) & 7;
  if ( v34 == 7 )
  {
    v25 = v167;
    if ( !*((_QWORD *)v167 + 2) )
    {
      v32 = v163;
      LODWORD(v18) = 0;
      goto LABEL_339;
    }
    v164 = 2;
  }
  else
  {
    if ( ((v34 - 1) & 0xFD) != 0 )
    {
      if ( LODWORD(v186[6]) == 1 )
        v33 = 2;
      v164 = v33;
    }
    v25 = v167;
  }
  if ( LODWORD(v186[6]) != 3 )
    goto LABEL_22;
  if ( (v186[1] & 1) != 0 )
    v26 = LODWORD(v186[1]) | 0xA;
  else
    v26 = LODWORD(v186[1]) | 0xC;
  LODWORD(v186[1]) = v26;
LABEL_23:
  if ( !*((_QWORD *)v25 + 2) )
  {
    LODWORD(v18) = 0;
    v21 = 0;
    if ( (v26 & 0x20) != 0
      || (*(_BYTE *)(a1 + 34) & 0x10) != 0
      || v24 == 2
      || (v26 & 8) != 0
      || (v27 = MI_READ_PTE_LOCK_FREE(v9), v28 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, v28 == v16)
      || (v27 & 0x42) != 0
      || (*(_BYTE *)(a1 + 35) & 8) != 0
      || (WsleContents = MiGetWsleContents(v28, v166), (WsleContents & 0xF) == v30) )
    {
      v32 = v163;
    }
    else
    {
      memset(v188, 0, 0xB8uLL);
      LODWORD(v188[0]) = MiTbFlushType(v169);
      WORD2(v188[0]) = 4;
      v188[2] = 0LL;
      LODWORD(v188[1]) = 20;
      v188[3] = 0LL;
      if ( dword_140C4E768 )
        MI_WSLE_LOG_ACCESS(v31, v9);
      MiInsertTbFlushEntry((__int64)v188, v166, 1LL, 0);
      v32 = v163;
      if ( !MiFreeWsleList(v169, (__int64)v188, 0) )
        v21 = 2;
    }
    goto LABEL_339;
  }
  v35 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( a5 == -1 )
  {
    v39 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(a1 + 0x58000000000LL) / 48) + 2);
    PfnChannel = MiGetPfnChannel(a1);
    v41 = dword_140C4DE38 & v16 | (v39 << byte_140C4DDCC);
    v37 = 0;
    v38 = (PfnChannel << byte_140C4DDCD) | v41;
    if ( (a3 & 0x3000000) != 0 )
      v37 = 0x10000;
  }
  else
  {
    v36 = dword_140C4DE38 & v16;
    v37 = 48;
    v38 = v36 | a5 & ~dword_140C4DE38;
  }
  if ( v187 == -1 )
  {
    Page = MiGetPage(v18, v38, v37);
    LODWORD(v18) = 0;
    v163 = Page;
    v21 = 0;
    if ( Page == -1 )
    {
      v32 = -1LL;
      goto LABEL_339;
    }
    v18 = 48 * Page - 0x58000000000LL;
LABEL_60:
    if ( v18 == a1 )
    {
      v32 = v163;
      v21 = 1;
      LODWORD(v18) = 0;
      goto LABEL_339;
    }
    v50 = (unsigned __int8)MiLockPageInline(a1, v43, v44, v45);
    if ( (MiFlags & 0x8000) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(a1, 1, 0LL);
      v52 = 0;
      if ( PagePrivilege )
      {
        v53 = LODWORD(v186[1]) | 0x2000;
        LODWORD(v186[1]) |= 0x2000u;
        goto LABEL_67;
      }
    }
    else
    {
      v52 = 0;
    }
    v53 = v186[1];
LABEL_67:
    v54 = 1LL;
    v55 = 0LL;
    if ( *(_WORD *)(a1 + 32) != 1 )
      goto LABEL_68;
    v58 = v186[6];
    SchedulerAssist = 8LL;
    if ( (*(_BYTE *)(a1 + 35) & 8) == 0 && (*(_BYTE *)a1 & 1) != 0 )
    {
      v48 = 2LL;
    }
    else
    {
      v48 = 2LL;
      if ( LODWORD(v186[6]) != 2 && (v53 & 0x26) == 0 )
        goto LABEL_77;
    }
    if ( (*(_BYTE *)(a1 + 34) & 7) != 6
      || v170 != *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) )
    {
LABEL_77:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !KiIrqlFlags )
        goto LABEL_86;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_86;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 0xFu || (unsigned __int8)v50 > 0xFu )
        goto LABEL_86;
      v57 = CurrentIrql < 2u;
LABEL_82:
      if ( !v57 )
      {
        v60 = v50 + 1;
        goto LABEL_84;
      }
      goto LABEL_86;
    }
    if ( (v53 & 0x20) == 0 )
    {
      v68 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v168);
      v52 = 0;
      v55 = v68;
      v54 = 1LL;
      SchedulerAssist = 8LL;
    }
    if ( v58 != 3 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v164 == 1 )
    {
      if ( (v53 & 0x10) == 0 )
      {
LABEL_68:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !KiIrqlFlags )
          goto LABEL_86;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_86;
        v56 = KeGetCurrentIrql();
        if ( v56 > 0xFu || (unsigned __int8)v50 > 0xFu )
          goto LABEL_86;
        v57 = v56 < 2u;
        goto LABEL_82;
      }
      v53 |= 0x208u;
      LODWORD(v186[1]) = v53;
    }
    if ( v58 != 2 )
    {
      if ( (v53 & 0x20) != 0 )
      {
        v69 = MiPrepareToStealNonPagedPool(a1, v168);
        v52 = 0;
        v55 = v69;
        if ( !v69 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !KiIrqlFlags )
            goto LABEL_86;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_86;
          v70 = KeGetCurrentIrql();
          if ( v70 > 0xFu || (unsigned __int8)v50 > 0xFu )
            goto LABEL_86;
          goto LABEL_113;
        }
      }
      else if ( ((v53 & 8) == 0 || (v53 & 0x100) != 0) && ((v55 & 0x42) != 0 || (v53 & 0x2000) != 0) )
      {
        if ( (v53 & 0x100) != 0 )
        {
          MiWriteValidPteNewProtection((unsigned __int64)v168, v55 & 0xFFFFFFFFFFFFFFBDuLL);
        }
        else
        {
          v71 = 0;
          LODWORD(v186[1]) = v53 | 0x40;
          if ( MiPteInShadowRange((unsigned __int64)v168) )
          {
            HasShadow = MiPteHasShadow();
            v73 = 1;
            v71 = HasShadow != 0;
          }
          else
          {
            v73 = 1;
          }
          v74 = (__int64 *)v168;
          *v168 = v55 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( v71 )
            MiWritePteShadow((__int64)v74, v55 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
          v171 = v73;
        }
        v75 = MiTbFlushType(v169);
        v76 = v166;
        KeFlushSingleTb(v166, v75, v164);
LABEL_129:
        v77 = v164;
        if ( v164 == 1 )
        {
          if ( (v186[1] & 4) != 0 )
            v77 = 2;
          v164 = v77;
        }
        MiLockNestedPageAtDpcInline(v18, v54, v48, SchedulerAssist);
        MiFinalizePageAttribute(v18, v35, 1LL);
        if ( LODWORD(v186[6]) == 2 )
        {
          IsPageFileHash = MiVaIsPageFileHash(v170, v76);
          v52 = 0;
          v177 = IsPageFileHash;
          if ( !IsPageFileHash )
            goto LABEL_146;
          v79 = (volatile LONG *)(IsPageFileHash + 232);
          v161 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(IsPageFileHash + 232));
          if ( v177 != MiVaIsPageFileHash(v170, v166) || !MiSmallVaStillMapsFrame(v166, BugCheckParameter2) )
          {
            ExReleaseSpinLockSharedFromDpcLevel(v79);
            v52 = 0;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v80 = KeGetCurrentIrql(), v80 <= 0xFu) )
            {
              v81 = v161;
              if ( v161 <= 0xFu && v80 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v54 = -1LL << (v161 + 1);
                SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
                v83 = ~(unsigned __int16)v54;
                v118 = (v83 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
                v48 = (unsigned int)v83 & *(_DWORD *)(SchedulerAssist + 20);
                *(_DWORD *)(SchedulerAssist + 20) = v48;
                if ( v118 )
                {
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  v52 = 0;
                }
              }
            }
            else
            {
              v81 = v161;
            }
            __writecr8(v81);
LABEL_146:
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !KiIrqlFlags )
              goto LABEL_86;
            if ( (KiIrqlFlags & 1) == 0 )
              goto LABEL_86;
            v70 = KeGetCurrentIrql();
            if ( v70 > 0xFu || (unsigned __int8)v50 > 0xFu )
              goto LABEL_86;
LABEL_113:
            if ( v70 >= 2u )
            {
              v60 = v50 + 1;
LABEL_84:
              v61 = KeGetCurrentPrcb();
              v54 = -1LL << v60;
              v62 = ~(unsigned __int16)(-1LL << v60);
              SchedulerAssist = (__int64)v61->SchedulerAssist;
              v118 = (v62 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
              v48 = (unsigned int)v62 & *(_DWORD *)(SchedulerAssist + 20);
              *(_DWORD *)(SchedulerAssist + 20) = v48;
              if ( v118 )
              {
                KiRemoveSystemWorkPriorityKick(v61);
                v52 = 0;
              }
            }
LABEL_86:
            __writecr8(v50);
LABEL_87:
            v10 = v18;
            v21 = v52;
LABEL_88:
            if ( !v10 )
            {
              v32 = v163;
              LODWORD(v18) = 0;
              goto LABEL_339;
            }
            v63 = (unsigned __int8)MiLockPageInline(v10, v54, v48, (_DWORD *)SchedulerAssist);
            *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            LODWORD(v18) = 0;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v64 = KeGetCurrentIrql();
                if ( v64 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v64 >= 2u )
                {
                  v65 = KeGetCurrentPrcb();
                  v66 = v65->SchedulerAssist;
                  v67 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v63 + 1));
                  v118 = (v67 & v66[5]) == 0;
                  v66[5] &= v67;
                  if ( v118 )
                    KiRemoveSystemWorkPriorityKick(v65);
                }
              }
            }
            __writecr8(v63);
            goto LABEL_333;
          }
        }
        MiCopyPfnEntryEx(v18, a1);
        v87 = BugCheckParameter2;
        if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == BugCheckParameter2 )
          *(_QWORD *)(v18 + 40) ^= (v163 ^ *(_QWORD *)(v18 + 40)) & 0xFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v88 = LODWORD(v186[1]);
        if ( (v186[1] & 0x20) == 0 && LODWORD(v186[6]) != v86 )
        {
          if ( (v186[1] & 0x200) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v89 = KeGetCurrentIrql();
                if ( v89 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v89 >= (unsigned __int8)v86 )
                {
                  v90 = v50 + 1;
LABEL_178:
                  v92 = KeGetCurrentPrcb();
                  v93 = ~(unsigned __int16)(-1LL << v90);
                  v94 = v92->SchedulerAssist;
                  v118 = (v93 & v94[5]) == 0;
                  v84 = (unsigned int)v93 & v94[5];
                  v94[5] = v84;
                  if ( v118 )
                    KiRemoveSystemWorkPriorityKick(v92);
                  v85 = 0LL;
                  goto LABEL_181;
                }
              }
            }
            goto LABEL_181;
          }
          v84 = v164;
          if ( ((LODWORD(v186[1]) >> 3) & 1) == 0 && !v164 || (v186[1] & 0xA) == 0xA || (v186[1] & 0x100) != 0 )
          {
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
            goto LABEL_172;
          }
          if ( ((LODWORD(v186[1]) >> 3) & 1) != 0 && (v186[1] & (unsigned __int8)v86) == 0 && !v164
            || LODWORD(v186[6]) == 3 && (v186[1] & 4) != 0 )
          {
LABEL_172:
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v91 = KeGetCurrentIrql();
                if ( v91 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v91 >= (unsigned __int8)v86 )
                {
                  v90 = v50 + 1;
                  goto LABEL_178;
                }
              }
            }
LABEL_181:
            __writecr8(v50);
            v88 = LODWORD(v186[1]);
            LOBYTE(v50) = 17;
          }
        }
        if ( (v88 & 0x200) != 0 )
        {
          v170 = MiLockProtoPoolPage(v166, (__int64)v162);
          v97 = v170;
          if ( !v170 )
          {
LABEL_184:
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v18 + 16));
            goto LABEL_87;
          }
          if ( *(_WORD *)(v170 + 32) > 2u )
          {
LABEL_186:
            LOBYTE(v95) = v162[0];
            MiUnlockProtoPoolPage(v97, v95, v84, v96);
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v18 + 16));
            v52 = 0;
            goto LABEL_87;
          }
          v55 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v168);
          if ( (v55 & 0x42) != 0 )
          {
            v174 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v97 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v174, v95, v84, v96);
              while ( *(__int64 *)(v97 + 24) < 0 );
            }
            if ( *(_WORD *)(v97 + 32) > 2u )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v97 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_186;
            }
            MiWriteValidPteNewProtection((unsigned __int64)v168, v55 & 0xFFFFFFFFFFFFFFBDuLL);
            KeFlushSingleTb(v166, 0LL, 1LL);
            v98 = MiCaptureDirtyBitToPfn(v97);
            _InterlockedAnd64((volatile signed __int64 *)(v97 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v98 )
              MiReleasePageFileInfo(
                *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v97 + 40) >> 39) & 0x3FFLL)),
                v98,
                1LL);
            v175 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v175, v99, v100, v101);
              while ( *(__int64 *)(v18 + 24) < 0 );
            }
            MiCaptureDirtyBitToPfn(v18);
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v88 = LODWORD(v186[1]);
          v85 = 0LL;
          v87 = BugCheckParameter2;
        }
        else
        {
          v162[0] = 17;
          v170 = v85;
        }
        if ( (v88 & 0x200) == 0
          && (LODWORD(v186[6]) != 3 || (v88 & 4) == 0)
          && ((v88 & 8) == 0 || (v88 & 2) != 0 || v164 != (_DWORD)v85) )
        {
          if ( (_BYTE)v50 != 17 )
          {
            MiLockNestedPageAtDpcInline(v18, v88, v84, v85);
            LOWORD(v88) = v186[1];
          }
          v102 = ((_BYTE)v50 != 17 ? 4 : 0) | 2;
          if ( (v88 & 0x2000) == 0 )
            v102 = (_BYTE)v50 != 17 ? 4 : 0;
          MiCopyPage(v163, BugCheckParameter2, v167, v102);
          if ( (v102 & 4) != 0 )
            _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v106 = v186[1];
          if ( (v186[1] & 0x20) == 0 && (_BYTE)v50 != 17 )
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
          goto LABEL_264;
        }
        PteFromCopyList = MiGetPteFromCopyList((unsigned int *)v167, v163, v87);
        v176 = (unsigned __int64 *)PteFromCopyList;
        if ( (v186[1] & 0x200) != 0 )
        {
          LODWORD(v167) = MiReplacePageOfProtoPool(
                            v166,
                            v87,
                            v163,
                            (__int64)(((_QWORD)PteFromCopyList << 25) - (_QWORD)v173) >> 16);
          goto LABEL_229;
        }
        CurrentThread = KeGetCurrentThread();
        v181[1] = v166;
        v181[3] = v87;
        v181[4] = v163;
        v108 = BugCheckParameter2;
        v181[2] = (__int64)(((_QWORD)PteFromCopyList << 25) - (_QWORD)v173) >> 16;
        v184 = 0LL;
        Flink = 0LL;
        v109 = 1;
        v181[0] = v169;
        v183 = CurrentThread->ApcState.Process;
        v110 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
        LODWORD(v167) = 1;
        if ( v110 == BugCheckParameter2 )
        {
          if ( (*(_BYTE *)(v169 + 187) & 2) != 0
            || _interlockedbittestandset((volatile signed __int32 *)&Process[2].Header.WaitListHead.Flink + 1, 1u) )
          {
            LODWORD(v167) = 0;
            goto LABEL_229;
          }
          v111 = LODWORD(v186[1]) | 0x400;
          LODWORD(v186[1]) |= 0x400u;
          if ( v183->DirectoryTableBase >> 12 != v108 )
          {
            HIDWORD(v184) = 1;
            Flink = v183[1].ProcessListEntry.Flink;
            LODWORD(v186[1]) = v111 | 0x4000;
          }
          MiReleaseFaultState((__int64)&v186[3], 0x11u, 0LL);
          KeSwapDirectoryTableBase(v183, HIDWORD(v184), v181);
          SharedVm = MiGetSharedVm(v169);
          ExAcquireSpinLockExclusive(SharedVm);
          v113 = Process;
          SharedVm[1] = 0;
          _InterlockedAnd((volatile signed __int32 *)&v113[2].Header.WaitListHead.Flink + 1, 0xFFFFFFFD);
          v109 = (int)v167;
        }
        else
        {
          MiReplacePageTablePage((unsigned __int64)v181);
        }
        if ( (int)v184 < 0 )
          v109 = 0;
        LODWORD(v167) = v109;
LABEL_229:
        v114 = ZeroPte;
        LODWORD(BugCheckParameter2) = 0;
        v115 = MiPteInShadowRange((unsigned __int64)v176);
        v116 = 0;
        if ( v115 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v117 = v116 + 1;
            if ( HIBYTE(word_140C4DF48) != (_BYTE)v116 )
              goto LABEL_238;
            v118 = ((unsigned __int8)ZeroPte & (unsigned __int8)(v116 + 1)) == 0;
            goto LABEL_233;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v118 = (ZeroPte & 1) == 0;
            v117 = BugCheckParameter2;
LABEL_233:
            if ( !v118 )
              v114 = ZeroPte | 0x8000000000000000uLL;
LABEL_238:
            v119 = v176;
            *v176 = v114;
            if ( v117 )
            {
              MiWritePteShadow((__int64)v119, v114);
              v116 = 0;
            }
            v120 = ZeroPte;
            LODWORD(BugCheckParameter2) = v116;
            v121 = MiPteInShadowRange((unsigned __int64)(v119 + 1));
            v125 = 0;
            if ( !v121 )
              goto LABEL_248;
            if ( (unsigned int)MiPteHasShadow() )
            {
              v126 = v125 + 1;
              LODWORD(BugCheckParameter2) = v125 + 1;
              if ( HIBYTE(word_140C4DF48) == (_BYTE)v125 )
              {
LABEL_246:
                if ( ((unsigned __int8)ZeroPte & (unsigned __int8)v126) != 0 )
                  v120 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v126 = 1;
              goto LABEL_246;
            }
LABEL_248:
            v127 = (__int64)(v176 + 1);
            v176[1] = v120;
            if ( (_DWORD)BugCheckParameter2 != v125 )
              MiWritePteShadow(v127, v120);
            if ( (_DWORD)v167 == v125 )
            {
              if ( (v186[1] & 0x200) != 0 )
              {
                LOBYTE(v122) = v162[0];
                MiUnlockProtoPoolPage(v170, v122, v123, (__int64)v124);
              }
              goto LABEL_184;
            }
            if ( (v186[1] & 0x200) != 0 )
            {
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
              MiLockNestedPageAtDpcInline(v18, 0xC000000000000001uLL, v123, (__int64)v124);
            }
            else
            {
              v128 = (unsigned __int8)MiLockPageInline(a1, v122, v123, v124);
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
              v103 = 1LL;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v129 = KeGetCurrentIrql();
                  if ( v129 <= 0xFu && (unsigned __int8)v128 <= 0xFu && v129 >= 2u )
                  {
                    v130 = KeGetCurrentPrcb();
                    v103 = -1LL << ((unsigned __int8)v128 + 1);
                    v105 = v130->SchedulerAssist;
                    v131 = ~(unsigned __int16)v103;
                    v118 = (v131 & v105[5]) == 0;
                    v104 = (unsigned int)v131 & v105[5];
                    v105[5] = v104;
                    if ( v118 )
                      KiRemoveSystemWorkPriorityKick(v130);
                  }
                }
              }
              __writecr8(v128);
              LOBYTE(v50) = 17;
            }
            v106 = v186[1];
LABEL_264:
            v132 = v55 ^ (v55 ^ (v163 << 12)) & 0xFFFFFFFFF000LL;
            if ( (v106 & 0x20) != 0 )
            {
              MiLockNestedPageAtDpcInline(v18, v103, v104, (__int64)v105);
              if ( v55 != _InterlockedCompareExchange64((volatile signed __int64 *)v168, v132 | 0x20, v55) )
              {
                MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v18 + 16));
                *(_BYTE *)(v18 + 34) = *(_BYTE *)(v18 + 34) & 0xF8 | 5;
                _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v52 = 0;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v133 = KeGetCurrentIrql();
                    if ( v133 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v133 >= 2u )
                    {
                      v134 = KeGetCurrentPrcb();
                      v54 = -1LL << ((unsigned __int8)v50 + 1);
                      SchedulerAssist = (__int64)v134->SchedulerAssist;
                      v135 = ~(unsigned __int16)v54;
                      v118 = (v135 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
                      v48 = (unsigned int)v135 & *(_DWORD *)(SchedulerAssist + 20);
                      *(_DWORD *)(SchedulerAssist + 20) = v48;
                      if ( v118 )
                      {
                        KiRemoveSystemWorkPriorityKick(v134);
                        v52 = 0;
                      }
                    }
                  }
                }
                __writecr8((unsigned __int8)v50);
                goto LABEL_87;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v106 = v186[1];
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
LABEL_303:
              if ( (v106 & 0x200) != 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                LOBYTE(v103) = v162[0];
                MiUnlockProtoPoolPage(v170, v103, v104, (__int64)v105);
                LOBYTE(v50) = 17;
              }
              else if ( (v106 & 0x10) != 0 && (v106 & 0x40) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
              {
                v147 = 12LL;
                if ( (_BYTE)v50 == 17 )
                  v147 = 8LL;
                MiClearPfnImageVerified(a1, v147);
              }
              if ( LODWORD(v186[6]) == 2 )
              {
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v177 + 232));
                LODWORD(v18) = 0;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v148 = KeGetCurrentIrql(), v148 <= 0xFu) )
                {
                  v149 = v161;
                  if ( v161 <= 0xFu && v148 >= 2u )
                  {
                    v150 = KeGetCurrentPrcb();
                    v103 = -1LL << (v161 + 1);
                    v105 = v150->SchedulerAssist;
                    v151 = ~(unsigned __int16)v103;
                    v118 = (v151 & v105[5]) == 0;
                    v104 = (unsigned int)v151 & v105[5];
                    v105[5] = v104;
                    if ( v118 )
                      KiRemoveSystemWorkPriorityKick(v150);
                  }
                }
                else
                {
                  v149 = v161;
                }
                __writecr8(v149);
              }
              else
              {
                LODWORD(v18) = 0;
              }
              if ( (_BYTE)v50 == 17 )
                LOBYTE(v50) = MiLockPageInline(a1, v103, v104, v105);
              *(_QWORD *)(a1 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
              *(_BYTE *)(a1 + 34) &= 0xC7u;
              v152 = *(_BYTE *)(a1 + 35) & 0xDF;
              *(_WORD *)(a1 + 32) = 0;
              *(_BYTE *)(a1 + 35) = v152;
              *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v153 = KeGetCurrentIrql();
                  if ( v153 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v153 >= 2u )
                  {
                    v154 = KeGetCurrentPrcb();
                    v155 = v154->SchedulerAssist;
                    v156 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v50 + 1));
                    v118 = (v156 & v155[5]) == 0;
                    v155[5] &= v156;
                    if ( v118 )
                      KiRemoveSystemWorkPriorityKick(v154);
                  }
                }
              }
              __writecr8((unsigned __int8)v50);
              v10 = v179;
              v21 = 1;
LABEL_333:
              v32 = v163;
              goto LABEL_339;
            }
            if ( (v106 & 0x400) != 0 )
            {
              if ( (v106 & 0x4000) != 0 )
              {
                v136 = Process[1].ProcessListEntry.Flink;
                v173 = v136;
                if ( !v136 )
                  goto LABEL_283;
                v137 = (unsigned __int64 *)((((unsigned __int64)v136 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                PteShadow = *v137;
                v139 = MiPteInShadowRange((unsigned __int64)v137);
                v140 = 0LL;
                if ( v139 )
                  PteShadow = MiReadPteShadow((unsigned __int64)v137, PteShadow);
                v141 = v140;
                if ( ((PteShadow >> 12) & 0xFFFFFFFFFLL) == v163 )
                  v141 = v173;
                if ( !v141 )
                {
LABEL_283:
                  v21 = 2;
                  v10 = a1;
                  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a1 + 16));
                  goto LABEL_88;
                }
                goto LABEL_301;
              }
              goto LABEL_300;
            }
            if ( (v106 & 0x40) == 0 )
            {
              if ( (v106 & 0x200) == 0 && (v106 & 0x10) != 0 )
                MiLockNestedPageAtDpcInline(v18, v103, v104, (__int64)v105);
              MiWriteValidPteNewPage((__int64 *)v168, v132, 0);
              v106 = v186[1];
LABEL_300:
              LODWORD(v140) = 0;
LABEL_301:
              if ( v171 == (_DWORD)v140 )
              {
                v146 = MiTbFlushType(v169);
                KeFlushSingleTb(v166, v146, v164);
                v106 = v186[1];
              }
              goto LABEL_303;
            }
            v142 = (__int64 *)v168;
            v143 = 0;
            v144 = MiPteInShadowRange((unsigned __int64)v168);
            LODWORD(v140) = 0;
            if ( v144 )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v145 = (_BYTE)v140 + 1;
                v143 = (_DWORD)v140 + 1;
                if ( HIBYTE(word_140C4DF48) == (_BYTE)v140 )
                {
LABEL_291:
                  if ( ((unsigned __int8)v132 & (unsigned __int8)v145) != 0 )
                    v132 |= 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v145 = 1;
                goto LABEL_291;
              }
            }
            *v142 = v132;
            if ( v143 )
              MiWritePteShadow((__int64)v142, v132);
            v106 = v186[1];
            goto LABEL_301;
          }
        }
        v117 = BugCheckParameter2;
        goto LABEL_238;
      }
    }
    v76 = v166;
    goto LABEL_129;
  }
  v46 = MiSearchNumaNodeTable(BugCheckParameter2);
  v178 = 1LL;
  PageChain = MiGetPageChain(v18, v169, *((_DWORD *)v46 + 2) + 1, v35, v37, v187, &v178);
  v18 = PageChain;
  if ( PageChain )
  {
    v43 = (unsigned __int128)((PageChain + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v163 = (PageChain + 0x58000000000LL) / 48;
    goto LABEL_60;
  }
  v32 = -1LL;
  v21 = 0;
LABEL_339:
  MiUnlockStealVm(v186);
  if ( v10 )
    MiReleaseFreshPage(v10, v157, v158);
  MiLockPageInline(a1, v157, v158, v159);
  if ( v21 == 1 )
  {
    if ( v180 )
      *v180 = v32;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
      v21 = 2;
    if ( v21 == 2 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      return (unsigned int)v18;
  }
  return v21;
}
