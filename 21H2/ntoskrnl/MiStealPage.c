/*
 * XREFs of MiStealPage @ 0x14026BCA4
 * Callers:
 *     MiTradePage @ 0x140300BE0 (MiTradePage.c)
 * Callees:
 *     MiGetPageChain @ 0x140212D10 (MiGetPageChain.c)
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiGetSharedVm @ 0x14021AF50 (MiGetSharedVm.c)
 *     ExAcquireSpinLockShared @ 0x14021CD80 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D060 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     MiGetPteFromCopyList @ 0x140240980 (MiGetPteFromCopyList.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiReplacePageOfProtoPool @ 0x140268F5C (MiReplacePageOfProtoPool.c)
 *     MiLockNestedPageAtDpcInline @ 0x14026AF90 (MiLockNestedPageAtDpcInline.c)
 *     MiLockStealUserVm @ 0x14026AFD4 (MiLockStealUserVm.c)
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     MiUnlockStealVm @ 0x14026D310 (MiUnlockStealVm.c)
 *     MiCopyPfnEntryEx @ 0x14026DA30 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14026E434 (MiFinalizePageAttribute.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiLockStealSystemVm @ 0x140298704 (MiLockStealSystemVm.c)
 *     MiClearPfnImageVerified @ 0x1402A3214 (MiClearPfnImageVerified.c)
 *     MiWriteValidPteNewPage @ 0x1402B68F8 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiSmallVaStillMapsFrame @ 0x1402CE1F8 (MiSmallVaStillMapsFrame.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiVaIsPageFileHash @ 0x140302FFC (MiVaIsPageFileHash.c)
 *     MiGetPfnChannel @ 0x1403041C4 (MiGetPfnChannel.c)
 *     MiReadPteShadow @ 0x140305A30 (MiReadPteShadow.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140309080 (MI_WSLE_LOG_ACCESS.c)
 *     MiReleaseFaultState @ 0x14030F4F4 (MiReleaseFaultState.c)
 *     MiWriteValidPteNewProtection @ 0x14030FA00 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiHyperSpaceSize @ 0x140311F38 (MiHyperSpaceSize.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14031C800 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiFreeWsleList @ 0x140327320 (MiFreeWsleList.c)
 *     MiGetPagePrivilege @ 0x1403286F0 (MiGetPagePrivilege.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140329F30 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x14032B790 (MiSearchNumaNodeTable.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x140337208 (MiTbFlushType.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiReplacePageTablePage @ 0x140363DF0 (MiReplacePageTablePage.c)
 *     KeSwapDirectoryTableBase @ 0x14038DA34 (KeSwapDirectoryTableBase.c)
 *     MiPrepareToStealNonPagedPool @ 0x1403C4FAC (MiPrepareToStealNonPagedPool.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiStealPage(ULONG_PTR BugCheckParameter2, char a2, int a3, __int128 *a4, int a5, __int64 *a6)
{
  unsigned __int64 v9; // r12
  ULONG_PTR v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // r8
  int v18; // r10d
  __int64 v19; // rdx
  ULONG_PTR v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // r15
  int v23; // r10d
  __int64 v24; // rdx
  unsigned int v25; // ebx
  __int64 v26; // r8
  int v27; // edx
  __int128 *v28; // rax
  int v29; // ecx
  char v30; // al
  __int64 v31; // rcx
  char WsleContents; // al
  char v33; // r9
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rcx
  __int64 v37; // rdi
  unsigned int v38; // r8d
  char v39; // al
  unsigned int v40; // r12d
  int v41; // eax
  unsigned int v42; // edi
  unsigned int v43; // ebx
  int v44; // ebx
  __int64 v45; // rdx
  __int64 v46; // r8
  int PfnChannel; // eax
  int v48; // ebx
  __int64 Page; // rax
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // rax
  __int64 PageChain; // rax
  __int64 v54; // r8
  unsigned __int64 v55; // r13
  int PagePrivilege; // eax
  unsigned int v57; // r11d
  int v58; // ebx
  __int64 v59; // rdx
  signed __int64 v60; // rdi
  unsigned __int8 v61; // al
  bool v62; // cf
  int v63; // r14d
  __int64 v64; // r9
  unsigned __int8 CurrentIrql; // al
  char v66; // cl
  struct _KPRCB *v67; // r10
  int v68; // eax
  _DWORD *v69; // r9
  unsigned __int64 v70; // rdi
  unsigned __int8 v71; // al
  struct _KPRCB *v72; // r9
  _DWORD *v73; // r8
  int v74; // eax
  __int64 v75; // rax
  __int64 v76; // rax
  unsigned __int8 v77; // al
  __int64 v78; // rdx
  __int64 v79; // r8
  BOOL v80; // r14d
  __int64 v81; // rcx
  __int64 v82; // r9
  int HasShadow; // eax
  int v84; // r11d
  unsigned __int64 *v85; // rax
  unsigned int v86; // eax
  unsigned __int64 v87; // rbx
  int v88; // eax
  __int64 IsPageFileHash; // rax
  volatile LONG *v90; // rbx
  unsigned __int8 v91; // al
  KIRQL v92; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v95; // eax
  __int64 v96; // r8
  __int64 v97; // r9
  int v98; // r10d
  ULONG_PTR v99; // rbx
  __int64 v100; // rdx
  unsigned __int8 v101; // al
  char v102; // cl
  unsigned __int8 v103; // al
  struct _KPRCB *v104; // r10
  int v105; // eax
  _DWORD *v106; // r9
  __int64 v107; // rbx
  __int64 v108; // rdx
  __int64 v109; // r9
  unsigned __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  int v114; // ebx
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  __int16 v118; // r12
  __int64 *PteFromCopyList; // rax
  ULONG_PTR v120; // r8
  int v121; // ebx
  __int64 v122; // rax
  _KPROCESS *v123; // rdx
  int v124; // ecx
  LONG *SharedVm; // rbx
  _KPROCESS *v126; // rax
  unsigned __int64 v127; // rbx
  int v128; // eax
  __int64 v129; // rcx
  __int64 v130; // r8
  __int64 v131; // r9
  __int64 v132; // rdx
  int v133; // eax
  bool v134; // zf
  unsigned __int64 *v135; // r11
  unsigned __int64 v136; // rbx
  int v137; // eax
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  __int64 v141; // r9
  int v142; // r11d
  char v143; // al
  _QWORD *v144; // rcx
  unsigned __int64 v145; // rbx
  unsigned __int8 v146; // al
  struct _KPRCB *v147; // r10
  int v148; // eax
  __int64 v149; // rbx
  unsigned __int8 v150; // al
  struct _KPRCB *v151; // r10
  _DWORD *v152; // r9
  int v153; // eax
  struct _LIST_ENTRY *v154; // rax
  unsigned __int64 *v155; // rdi
  unsigned __int64 PteShadow; // rbx
  int v157; // eax
  struct _LIST_ENTRY *v158; // r11
  struct _LIST_ENTRY *v159; // rax
  unsigned __int64 *v160; // r12
  int v161; // edi
  int v162; // eax
  __int64 v163; // rcx
  __int64 v164; // r9
  char v165; // al
  unsigned int v166; // eax
  unsigned __int8 v167; // al
  KIRQL v168; // di
  struct _KPRCB *v169; // r10
  _DWORD *v170; // r9
  int v171; // eax
  char v172; // al
  unsigned __int8 v173; // al
  struct _KPRCB *v174; // r9
  _DWORD *v175; // r8
  int v176; // eax
  __int64 v177; // rdx
  __int64 v178; // r8
  KIRQL v180; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v181[7]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v182; // [rsp+48h] [rbp-B8h]
  unsigned int v183; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v185; // [rsp+60h] [rbp-A0h]
  __int128 *v186; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v187; // [rsp+70h] [rbp-90h]
  __int64 v188; // [rsp+78h] [rbp-88h]
  __int64 v189; // [rsp+80h] [rbp-80h]
  int v190; // [rsp+88h] [rbp-78h]
  _KPROCESS *Process; // [rsp+90h] [rbp-70h]
  struct _LIST_ENTRY *v192; // [rsp+98h] [rbp-68h]
  int v193; // [rsp+A0h] [rbp-60h] BYREF
  int v194; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned __int64 *v195; // [rsp+A8h] [rbp-58h]
  __int64 v196; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v197; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v198; // [rsp+C0h] [rbp-40h]
  __int64 *v199; // [rsp+C8h] [rbp-38h]
  _QWORD v200[5]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-8h]
  _KPROCESS *v202; // [rsp+100h] [rbp+0h]
  __int64 v203; // [rsp+108h] [rbp+8h]
  struct _LIST_ENTRY *Flink; // [rsp+110h] [rbp+10h]
  _QWORD v205[15]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v206; // [rsp+198h] [rbp+98h]
  _QWORD v207[24]; // [rsp+1A0h] [rbp+A0h] BYREF

  v186 = a4;
  v199 = a6;
  v181[0] = 0;
  v180 = 0;
  memset((char *)v205 + 4, 0, 0x74uLL);
  v9 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  v198 = 0LL;
  v196 = 0LL;
  v10 = 0LL;
  v190 = 0;
  v187 = (unsigned __int64 *)v9;
  LODWORD(v205[0]) = a3;
  v206 = -1LL;
  v192 = 0LL;
  v185 = (__int64)(v9 << 25) >> 16;
  LeafVa = MiGetLeafVa(v185, v11, v12, v13);
  v17 = 1LL;
  if ( v15 < 0xFFFFF68000000000uLL || v15 > 0xFFFFF6FFFFFFFFFFuLL )
    v18 = LODWORD(v205[1]) | 1;
  else
    v18 = LODWORD(v205[1]) | 8;
  LODWORD(v205[1]) = v18;
  v182 = v16;
  v19 = (unsigned __int128)((__int64)(BugCheckParameter2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v20 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  BugCheckParameter2a = v20;
  if ( a6 )
    *a6 = v16;
  v21 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL;
  Process = 0LL;
  v22 = *(_QWORD *)(qword_140C4E648 + 8 * v21);
  v189 = v22;
  if ( LeafVa < 0xFFFF800000000000uLL )
    goto LABEL_15;
  if ( LeafVa >= qword_140C4FB38 && LeafVa <= qword_140C4E368 )
  {
    v23 = v18 | 8;
    if ( (v23 & 1) != 0 )
    {
      v18 = v23 | 2;
      if ( v185 >= qword_140C4E360 && v185 < qword_140C4E360 + MiHyperSpaceSize(2LL) )
        v18 |= 0x100u;
    }
    else
    {
      v18 = v23 | 4;
    }
LABEL_15:
    v18 |= 0x1000u;
    LODWORD(v205[1]) = v18;
  }
  if ( (v18 & 0x1000) != 0 )
  {
    LOBYTE(v17) = a2;
    v25 = MiLockStealUserVm(v22, BugCheckParameter2, v17, v9, (__int64)v205);
    if ( v25 != 1 )
      goto LABEL_18;
    v27 = v205[6];
    Process = KeGetCurrentThread()->ApcState.Process;
    v188 = v205[3];
    v183 = 0;
    v28 = v186;
LABEL_22:
    LOBYTE(v29) = v205[1];
    goto LABEL_23;
  }
  LOBYTE(v19) = a2;
  v25 = MiLockStealSystemVm(BugCheckParameter2, v19, v9, v205);
  if ( v25 != 1 )
  {
LABEL_18:
    MiLockPageInline(BugCheckParameter2, v24, v26);
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
      return 0;
    return v25;
  }
  v27 = v205[6];
  v25 = 0;
  v188 = v205[3];
  v38 = 1;
  v183 = 1;
  v39 = *(_BYTE *)(v205[3] + 184LL) & 7;
  if ( v39 == 7 )
  {
    v28 = v186;
    if ( !*((_QWORD *)v186 + 2) )
    {
      v37 = v182;
      LODWORD(v22) = 0;
      goto LABEL_337;
    }
    v183 = 2;
  }
  else
  {
    if ( ((v39 - 1) & 0xFD) != 0 )
    {
      if ( LODWORD(v205[6]) == 1 )
        v38 = 2;
      v183 = v38;
    }
    v28 = v186;
  }
  if ( LODWORD(v205[6]) != 3 )
    goto LABEL_22;
  if ( (v205[1] & 1) != 0 )
    v29 = LODWORD(v205[1]) | 0xA;
  else
    v29 = LODWORD(v205[1]) | 0xC;
  LODWORD(v205[1]) = v29;
LABEL_23:
  if ( !*((_QWORD *)v28 + 2) )
  {
    LODWORD(v22) = 0;
    v25 = 0;
    if ( (v29 & 0x20) != 0
      || (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) != 0
      || v27 == 2
      || (v29 & 8) != 0
      || (v30 = MI_READ_PTE_LOCK_FREE(v9), v31 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL, v31 == v20)
      || (v30 & 0x42) != 0
      || (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0
      || (WsleContents = MiGetWsleContents(v31, v185), (WsleContents & 0xF) == v33) )
    {
      v37 = v182;
    }
    else
    {
      memset(v207, 0, 0xB8uLL);
      LODWORD(v207[0]) = MiTbFlushType(v188, v34, v35);
      WORD2(v207[0]) = 4;
      v207[2] = 0LL;
      LODWORD(v207[1]) = 20;
      v207[3] = 0LL;
      if ( dword_140C4E828 )
        MI_WSLE_LOG_ACCESS(v36, v9);
      MiInsertTbFlushEntry(v207, v185, 1LL, 0LL);
      v37 = v182;
      if ( !MiFreeWsleList(v188, v207, 0LL) )
        v25 = 2;
    }
    goto LABEL_337;
  }
  v40 = *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6;
  if ( a5 == -1 )
  {
    v44 = *(_DWORD *)(MiSearchNumaNodeTable((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) + 8);
    PfnChannel = MiGetPfnChannel(BugCheckParameter2, v45, v46);
    v48 = dword_140C4DEF8 & v20 | (v44 << byte_140C4DE8C);
    v42 = 0;
    v43 = (PfnChannel << byte_140C4DE8D) | v48;
    if ( (a3 & 0x3000000) != 0 )
      v42 = 0x10000;
  }
  else
  {
    v41 = dword_140C4DEF8 & v20;
    v42 = 48;
    v43 = v41 | a5 & ~dword_140C4DEF8;
  }
  if ( v206 == -1 )
  {
    Page = MiGetPage(v22, v43, v42);
    LODWORD(v22) = 0;
    v182 = Page;
    v25 = 0;
    if ( Page == -1 )
    {
      v37 = -1LL;
      goto LABEL_337;
    }
    v22 = 48 * Page - 0x58000000000LL;
LABEL_60:
    if ( v22 == BugCheckParameter2 )
    {
      v37 = v182;
      v25 = 1;
      LODWORD(v22) = 0;
      goto LABEL_337;
    }
    v55 = (unsigned __int8)MiLockPageInline(BugCheckParameter2, v50, v51);
    if ( (MiFlags & 0x8000) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(BugCheckParameter2);
      v57 = 0;
      if ( PagePrivilege )
      {
        v58 = LODWORD(v205[1]) | 0x2000;
        LODWORD(v205[1]) |= 0x2000u;
        goto LABEL_67;
      }
    }
    else
    {
      v57 = 0;
    }
    v58 = v205[1];
LABEL_67:
    v59 = 1LL;
    v60 = 0LL;
    if ( *(_WORD *)(BugCheckParameter2 + 32) != 1 )
      goto LABEL_68;
    v63 = v205[6];
    v64 = 8LL;
    if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) == 0 && (*(_BYTE *)BugCheckParameter2 & 1) != 0 )
    {
      v54 = 2LL;
    }
    else
    {
      v54 = 2LL;
      if ( LODWORD(v205[6]) != 2 && (v58 & 0x26) == 0 )
        goto LABEL_77;
    }
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) != 6
      || v189 != *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL)) )
    {
LABEL_77:
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !KiIrqlFlags )
        goto LABEL_86;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_86;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 0xFu || (unsigned __int8)v55 > 0xFu )
        goto LABEL_86;
      v62 = CurrentIrql < 2u;
LABEL_82:
      if ( !v62 )
      {
        v66 = v55 + 1;
        goto LABEL_84;
      }
      goto LABEL_86;
    }
    if ( (v58 & 0x20) == 0 )
    {
      v75 = MI_READ_PTE_LOCK_FREE(v187);
      v57 = 0;
      v60 = v75;
      v59 = 1LL;
      v64 = 8LL;
    }
    if ( v63 != 3 && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v183 == 1 )
    {
      if ( (v58 & 0x10) == 0 )
      {
LABEL_68:
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !KiIrqlFlags )
          goto LABEL_86;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_86;
        v61 = KeGetCurrentIrql();
        if ( v61 > 0xFu || (unsigned __int8)v55 > 0xFu )
          goto LABEL_86;
        v62 = v61 < 2u;
        goto LABEL_82;
      }
      v58 |= 0x208u;
      LODWORD(v205[1]) = v58;
    }
    if ( v63 != 2 )
    {
      if ( (v58 & 0x20) != 0 )
      {
        v76 = MiPrepareToStealNonPagedPool(BugCheckParameter2, v187);
        v57 = 0;
        v60 = v76;
        if ( !v76 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !KiIrqlFlags )
            goto LABEL_86;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_86;
          v77 = KeGetCurrentIrql();
          if ( v77 > 0xFu || (unsigned __int8)v55 > 0xFu )
            goto LABEL_86;
          goto LABEL_113;
        }
      }
      else if ( ((v58 & 8) == 0 || (v58 & 0x100) != 0) && ((v60 & 0x42) != 0 || (v58 & 0x2000) != 0) )
      {
        if ( (v58 & 0x100) != 0 )
        {
          MiWriteValidPteNewProtection(v187, v60 & 0xFFFFFFFFFFFFFFBDuLL);
        }
        else
        {
          v80 = 0;
          LODWORD(v205[1]) = v58 | 0x40;
          if ( (unsigned int)MiPteInShadowRange(v187, 1LL) )
          {
            HasShadow = MiPteHasShadow(v81, v78, v79, v82);
            v84 = 1;
            v80 = HasShadow != 0;
          }
          else
          {
            v84 = 1;
          }
          v85 = v187;
          *v187 = v60 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( v80 )
            MiWritePteShadow(v85, v60 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
          v190 = v84;
        }
        v86 = MiTbFlushType(v188, v78, v79);
        v87 = v185;
        KeFlushSingleTb(v185, v86, v183);
LABEL_129:
        v88 = v183;
        if ( v183 == 1 )
        {
          if ( (v205[1] & 4) != 0 )
            v88 = 2;
          v183 = v88;
        }
        MiLockNestedPageAtDpcInline(v22, v59, v54, v64);
        MiFinalizePageAttribute(v22, v40, 1LL);
        if ( LODWORD(v205[6]) == 2 )
        {
          IsPageFileHash = MiVaIsPageFileHash(v189, v87);
          v57 = 0;
          v196 = IsPageFileHash;
          if ( !IsPageFileHash )
            goto LABEL_146;
          v90 = (volatile LONG *)(IsPageFileHash + 232);
          v180 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(IsPageFileHash + 232));
          if ( v196 != MiVaIsPageFileHash(v189, v185)
            || !(unsigned int)MiSmallVaStillMapsFrame(v185, BugCheckParameter2a) )
          {
            ExReleaseSpinLockSharedFromDpcLevel(v90);
            v57 = 0;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v91 = KeGetCurrentIrql(), v91 <= 0xFu) )
            {
              v92 = v180;
              if ( v180 <= 0xFu && v91 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v59 = -1LL << (v180 + 1);
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v95 = ~(unsigned __int16)v59;
                v134 = (v95 & SchedulerAssist[5]) == 0;
                v54 = (unsigned int)v95 & SchedulerAssist[5];
                SchedulerAssist[5] = v54;
                if ( v134 )
                {
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  v57 = 0;
                }
              }
            }
            else
            {
              v92 = v180;
            }
            __writecr8(v92);
LABEL_146:
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !KiIrqlFlags )
              goto LABEL_86;
            if ( (KiIrqlFlags & 1) == 0 )
              goto LABEL_86;
            v77 = KeGetCurrentIrql();
            if ( v77 > 0xFu || (unsigned __int8)v55 > 0xFu )
              goto LABEL_86;
LABEL_113:
            if ( v77 >= 2u )
            {
              v66 = v55 + 1;
LABEL_84:
              v67 = KeGetCurrentPrcb();
              v59 = -1LL << v66;
              v68 = ~(unsigned __int16)(-1LL << v66);
              v69 = v67->SchedulerAssist;
              v134 = (v68 & v69[5]) == 0;
              v54 = (unsigned int)v68 & v69[5];
              v69[5] = v54;
              if ( v134 )
              {
                KiRemoveSystemWorkPriorityKick(v67);
                v57 = 0;
              }
            }
LABEL_86:
            __writecr8(v55);
LABEL_87:
            v10 = v22;
            v25 = v57;
LABEL_88:
            if ( !v10 )
            {
              v37 = v182;
              LODWORD(v22) = 0;
              goto LABEL_337;
            }
            v70 = (unsigned __int8)MiLockPageInline(v10, v59, v54);
            *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            LODWORD(v22) = 0;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v71 = KeGetCurrentIrql();
                if ( v71 <= 0xFu && (unsigned __int8)v70 <= 0xFu && v71 >= 2u )
                {
                  v72 = KeGetCurrentPrcb();
                  v73 = v72->SchedulerAssist;
                  v74 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v70 + 1));
                  v134 = (v74 & v73[5]) == 0;
                  v73[5] &= v74;
                  if ( v134 )
                    KiRemoveSystemWorkPriorityKick(v72);
                }
              }
            }
            __writecr8(v70);
            goto LABEL_331;
          }
        }
        MiCopyPfnEntryEx(v22, BugCheckParameter2);
        v99 = BugCheckParameter2a;
        if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) == BugCheckParameter2a )
          *(_QWORD *)(v22 + 40) ^= (v182 ^ *(_QWORD *)(v22 + 40)) & 0xFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v100 = LODWORD(v205[1]);
        if ( (v205[1] & 0x20) == 0 && LODWORD(v205[6]) != v98 )
        {
          if ( (v205[1] & 0x200) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v101 = KeGetCurrentIrql();
                if ( v101 <= 0xFu && (unsigned __int8)v55 <= 0xFu && v101 >= (unsigned __int8)v98 )
                {
                  v102 = v55 + 1;
LABEL_178:
                  v104 = KeGetCurrentPrcb();
                  v105 = ~(unsigned __int16)(-1LL << v102);
                  v106 = v104->SchedulerAssist;
                  v134 = (v105 & v106[5]) == 0;
                  v96 = (unsigned int)v105 & v106[5];
                  v106[5] = v96;
                  if ( v134 )
                    KiRemoveSystemWorkPriorityKick(v104);
                  v97 = 0LL;
                  goto LABEL_181;
                }
              }
            }
            goto LABEL_181;
          }
          v96 = v183;
          if ( ((LODWORD(v205[1]) >> 3) & 1) == 0 && !v183 || (v205[1] & 0xA) == 0xA || (v205[1] & 0x100) != 0 )
          {
            *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
            goto LABEL_172;
          }
          if ( ((LODWORD(v205[1]) >> 3) & 1) != 0 && (v205[1] & (unsigned __int8)v98) == 0 && !v183
            || LODWORD(v205[6]) == 3 && (v205[1] & 4) != 0 )
          {
LABEL_172:
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v103 = KeGetCurrentIrql();
                if ( v103 <= 0xFu && (unsigned __int8)v55 <= 0xFu && v103 >= (unsigned __int8)v98 )
                {
                  v102 = v55 + 1;
                  goto LABEL_178;
                }
              }
            }
LABEL_181:
            __writecr8(v55);
            v100 = LODWORD(v205[1]);
            LOBYTE(v55) = 17;
          }
        }
        if ( (v100 & 0x200) != 0 )
        {
          v189 = MiLockProtoPoolPage(v185, v181);
          v107 = v189;
          if ( !v189 )
          {
LABEL_184:
            MiSetOriginalPtePfnFromFreeList(v22 + 16);
            goto LABEL_87;
          }
          if ( *(_WORD *)(v189 + 32) > 2u )
          {
LABEL_186:
            MiUnlockProtoPoolPage(v107, v181[0]);
            MiSetOriginalPtePfnFromFreeList(v22 + 16);
            v57 = 0;
            goto LABEL_87;
          }
          v60 = MI_READ_PTE_LOCK_FREE(v187);
          if ( (v60 & 0x42) != 0 )
          {
            v193 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v107 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v193, v108, v96, v109);
              while ( *(__int64 *)(v107 + 24) < 0 );
            }
            if ( *(_WORD *)(v107 + 32) > 2u )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v107 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_186;
            }
            MiWriteValidPteNewProtection(v187, v60 & 0xFFFFFFFFFFFFFFBDuLL);
            KeFlushSingleTb(v185, 0, 1u);
            v110 = MiCaptureDirtyBitToPfn(v107);
            _InterlockedAnd64((volatile signed __int64 *)(v107 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v110 )
              MiReleasePageFileInfo(
                *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v107 + 40) >> 39) & 0x3FFLL)),
                v110,
                1);
            v194 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v194, v111, v112, v113);
              while ( *(__int64 *)(v22 + 24) < 0 );
            }
            MiCaptureDirtyBitToPfn(v22);
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v100 = LODWORD(v205[1]);
          v97 = 0LL;
          v99 = BugCheckParameter2a;
        }
        else
        {
          v181[0] = 17;
          v189 = v97;
        }
        if ( (v100 & 0x200) == 0
          && (LODWORD(v205[6]) != 3 || (v100 & 4) == 0)
          && ((v100 & 8) == 0 || (v100 & 2) != 0 || v183 != (_DWORD)v97) )
        {
          if ( (_BYTE)v55 != 17 )
          {
            MiLockNestedPageAtDpcInline(v22, v100, v96, v97);
            LOWORD(v100) = v205[1];
          }
          v114 = ((_BYTE)v55 != 17 ? 4 : 0) | 2;
          if ( (v100 & 0x2000) == 0 )
            v114 = (_BYTE)v55 != 17 ? 4 : 0;
          MiCopyPage(v182, BugCheckParameter2a, v186, v114);
          if ( (v114 & 4) != 0 )
            _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v118 = v205[1];
          if ( (v205[1] & 0x20) == 0 && (_BYTE)v55 != 17 )
            *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
          goto LABEL_264;
        }
        PteFromCopyList = MiGetPteFromCopyList((unsigned int *)v186, v182, v99);
        v195 = (unsigned __int64 *)PteFromCopyList;
        if ( (v205[1] & 0x200) != 0 )
        {
          LODWORD(v186) = MiReplacePageOfProtoPool(
                            v185,
                            v99,
                            v182,
                            (__int64)(((_QWORD)PteFromCopyList << 25) - (_QWORD)v192) >> 16);
          goto LABEL_229;
        }
        CurrentThread = KeGetCurrentThread();
        v200[1] = v185;
        v200[3] = v99;
        v200[4] = v182;
        v120 = BugCheckParameter2a;
        v200[2] = (__int64)(((_QWORD)PteFromCopyList << 25) - (_QWORD)v192) >> 16;
        v203 = 0LL;
        Flink = 0LL;
        v121 = 1;
        v200[0] = v188;
        v202 = CurrentThread->ApcState.Process;
        v122 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
        LODWORD(v186) = 1;
        if ( v122 == BugCheckParameter2a )
        {
          if ( (*(_BYTE *)(v188 + 187) & 2) != 0
            || _interlockedbittestandset((volatile signed __int32 *)&Process[2].Header.WaitListHead.Flink + 1, 1u) )
          {
            LODWORD(v186) = 0;
            goto LABEL_229;
          }
          v123 = v202;
          v124 = LODWORD(v205[1]) | 0x400;
          LODWORD(v205[1]) |= 0x400u;
          if ( v202->DirectoryTableBase >> 12 != v120 )
          {
            HIDWORD(v203) = 1;
            Flink = v202[1].ProcessListEntry.Flink;
            LODWORD(v205[1]) = v124 | 0x4000;
          }
          LOBYTE(v123) = 17;
          MiReleaseFaultState(&v205[3], v123, 0LL);
          KeSwapDirectoryTableBase(v202, HIDWORD(v203), v200);
          SharedVm = MiGetSharedVm(v188);
          ExAcquireSpinLockExclusive(SharedVm);
          v126 = Process;
          SharedVm[1] = 0;
          _InterlockedAnd((volatile signed __int32 *)&v126[2].Header.WaitListHead.Flink + 1, 0xFFFFFFFD);
          v121 = (int)v186;
        }
        else
        {
          MiReplacePageTablePage(v200);
        }
        if ( (int)v203 < 0 )
          v121 = 0;
        LODWORD(v186) = v121;
LABEL_229:
        v127 = ZeroPte;
        LODWORD(BugCheckParameter2a) = 0;
        v128 = MiPteInShadowRange(v195, 0LL);
        v132 = 0LL;
        if ( v128 )
        {
          if ( (unsigned int)MiPteHasShadow(v129, 0LL, v130, v131) )
          {
            v133 = v132 + 1;
            if ( HIBYTE(word_140C4E008) != (_BYTE)v132 )
              goto LABEL_238;
            v134 = ((unsigned __int8)ZeroPte & (unsigned __int8)(v132 + 1)) == 0;
            goto LABEL_233;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v134 = (ZeroPte & 1) == 0;
            v133 = BugCheckParameter2a;
LABEL_233:
            if ( !v134 )
              v127 = ZeroPte | 0x8000000000000000uLL;
LABEL_238:
            v135 = v195;
            *v195 = v127;
            if ( v133 )
            {
              MiWritePteShadow(v135, v127);
              v132 = 0LL;
            }
            v136 = ZeroPte;
            LODWORD(BugCheckParameter2a) = v132;
            v137 = MiPteInShadowRange(v135 + 1, v132);
            v142 = 0;
            if ( !v137 )
              goto LABEL_248;
            if ( (unsigned int)MiPteHasShadow(v139, v138, v140, v141) )
            {
              v143 = v142 + 1;
              LODWORD(BugCheckParameter2a) = v142 + 1;
              if ( HIBYTE(word_140C4E008) == (_BYTE)v142 )
              {
LABEL_246:
                if ( ((unsigned __int8)ZeroPte & (unsigned __int8)v143) != 0 )
                  v136 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v143 = 1;
              goto LABEL_246;
            }
LABEL_248:
            v144 = v195 + 1;
            v195[1] = v136;
            if ( (_DWORD)BugCheckParameter2a != v142 )
              MiWritePteShadow(v144, v136);
            if ( (_DWORD)v186 == v142 )
            {
              if ( (v205[1] & 0x200) != 0 )
                MiUnlockProtoPoolPage(v189, v181[0]);
              goto LABEL_184;
            }
            if ( (v205[1] & 0x200) != 0 )
            {
              *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
              *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(BugCheckParameter2 + 24) & 0xC000000000000000uLL | 1;
              MiLockNestedPageAtDpcInline(v22, 0xC000000000000001uLL, v140, v141);
            }
            else
            {
              v145 = (unsigned __int8)MiLockPageInline(BugCheckParameter2, v138, v140);
              *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
              v115 = 1LL;
              *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(BugCheckParameter2 + 24) & 0xC000000000000000uLL | 1;
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v146 = KeGetCurrentIrql();
                  if ( v146 <= 0xFu && (unsigned __int8)v145 <= 0xFu && v146 >= 2u )
                  {
                    v147 = KeGetCurrentPrcb();
                    v115 = -1LL << ((unsigned __int8)v145 + 1);
                    v117 = (__int64)v147->SchedulerAssist;
                    v148 = ~(unsigned __int16)v115;
                    v134 = (v148 & *(_DWORD *)(v117 + 20)) == 0;
                    v116 = (unsigned int)v148 & *(_DWORD *)(v117 + 20);
                    *(_DWORD *)(v117 + 20) = v116;
                    if ( v134 )
                      KiRemoveSystemWorkPriorityKick(v147);
                  }
                }
              }
              __writecr8(v145);
              LOBYTE(v55) = 17;
            }
            v118 = v205[1];
LABEL_264:
            v149 = v60 ^ (v60 ^ (v182 << 12)) & 0xFFFFFFFFF000LL;
            if ( (v118 & 0x20) != 0 )
            {
              MiLockNestedPageAtDpcInline(v22, v115, v116, v117);
              if ( v60 != _InterlockedCompareExchange64((volatile signed __int64 *)v187, v149 | 0x20, v60) )
              {
                MiSetOriginalPtePfnFromFreeList(v22 + 16);
                *(_BYTE *)(v22 + 34) = *(_BYTE *)(v22 + 34) & 0xF8 | 5;
                _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v57 = 0;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v150 = KeGetCurrentIrql();
                    if ( v150 <= 0xFu && (unsigned __int8)v55 <= 0xFu && v150 >= 2u )
                    {
                      v151 = KeGetCurrentPrcb();
                      v59 = -1LL << ((unsigned __int8)v55 + 1);
                      v152 = v151->SchedulerAssist;
                      v153 = ~(unsigned __int16)v59;
                      v134 = (v153 & v152[5]) == 0;
                      v54 = (unsigned int)v153 & v152[5];
                      v152[5] = v54;
                      if ( v134 )
                      {
                        KiRemoveSystemWorkPriorityKick(v151);
                        v57 = 0;
                      }
                    }
                  }
                }
                __writecr8((unsigned __int8)v55);
                goto LABEL_87;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v118 = v205[1];
              *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
LABEL_303:
              if ( (v118 & 0x200) != 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiUnlockProtoPoolPage(v189, v181[0]);
                LOBYTE(v55) = 17;
              }
              else if ( (v118 & 0x10) != 0 && (v118 & 0x40) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 3 )
                MiClearPfnImageVerified(BugCheckParameter2);
              if ( LODWORD(v205[6]) == 2 )
              {
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v196 + 232));
                LODWORD(v22) = 0;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v167 = KeGetCurrentIrql(), v167 <= 0xFu) )
                {
                  v168 = v180;
                  if ( v180 <= 0xFu && v167 >= 2u )
                  {
                    v169 = KeGetCurrentPrcb();
                    v115 = -1LL << (v180 + 1);
                    v170 = v169->SchedulerAssist;
                    v171 = ~(unsigned __int16)v115;
                    v134 = (v171 & v170[5]) == 0;
                    v116 = (unsigned int)v171 & v170[5];
                    v170[5] = v116;
                    if ( v134 )
                      KiRemoveSystemWorkPriorityKick(v169);
                  }
                }
                else
                {
                  v168 = v180;
                }
                __writecr8(v168);
              }
              else
              {
                LODWORD(v22) = 0;
              }
              if ( (_BYTE)v55 == 17 )
                LOBYTE(v55) = MiLockPageInline(BugCheckParameter2, v115, v116);
              *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
              *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
              v172 = *(_BYTE *)(BugCheckParameter2 + 35) & 0xDF;
              *(_WORD *)(BugCheckParameter2 + 32) = 0;
              *(_BYTE *)(BugCheckParameter2 + 35) = v172;
              *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v173 = KeGetCurrentIrql();
                  if ( v173 <= 0xFu && (unsigned __int8)v55 <= 0xFu && v173 >= 2u )
                  {
                    v174 = KeGetCurrentPrcb();
                    v175 = v174->SchedulerAssist;
                    v176 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v55 + 1));
                    v134 = (v176 & v175[5]) == 0;
                    v175[5] &= v176;
                    if ( v134 )
                      KiRemoveSystemWorkPriorityKick(v174);
                  }
                }
              }
              __writecr8((unsigned __int8)v55);
              v10 = v198;
              v25 = 1;
LABEL_331:
              v37 = v182;
              goto LABEL_337;
            }
            if ( (v118 & 0x400) != 0 )
            {
              if ( (v118 & 0x4000) != 0 )
              {
                v154 = Process[1].ProcessListEntry.Flink;
                v192 = v154;
                if ( !v154 )
                  goto LABEL_283;
                v155 = (unsigned __int64 *)((((unsigned __int64)v154 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                PteShadow = *v155;
                v157 = MiPteInShadowRange(v155, v115);
                v158 = 0LL;
                if ( v157 )
                  PteShadow = MiReadPteShadow(v155, PteShadow);
                v159 = v158;
                if ( ((PteShadow >> 12) & 0xFFFFFFFFFLL) == v182 )
                  v159 = v192;
                if ( !v159 )
                {
LABEL_283:
                  v25 = 2;
                  v10 = BugCheckParameter2;
                  MiSetOriginalPtePfnFromFreeList(BugCheckParameter2 + 16);
                  goto LABEL_88;
                }
                goto LABEL_301;
              }
              goto LABEL_300;
            }
            if ( (v118 & 0x40) == 0 )
            {
              if ( (v118 & 0x200) == 0 && (v118 & 0x10) != 0 )
                MiLockNestedPageAtDpcInline(v22, v115, v116, v117);
              MiWriteValidPteNewPage(v187, v149, 0LL);
              v118 = v205[1];
LABEL_300:
              LODWORD(v158) = 0;
LABEL_301:
              if ( v190 == (_DWORD)v158 )
              {
                v166 = MiTbFlushType(v188, v115, v116);
                KeFlushSingleTb(v185, v166, v183);
                v118 = v205[1];
              }
              goto LABEL_303;
            }
            v160 = v187;
            v161 = 0;
            v162 = MiPteInShadowRange(v187, v115);
            LODWORD(v158) = 0;
            if ( v162 )
            {
              if ( (unsigned int)MiPteHasShadow(v163, v115, v116, v164) )
              {
                v165 = (_BYTE)v158 + 1;
                v161 = (_DWORD)v158 + 1;
                if ( HIBYTE(word_140C4E008) == (_BYTE)v158 )
                {
LABEL_291:
                  if ( ((unsigned __int8)v149 & (unsigned __int8)v165) != 0 )
                    v149 |= 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v165 = 1;
                goto LABEL_291;
              }
            }
            *v160 = v149;
            if ( v161 )
              MiWritePteShadow(v160, v149);
            v118 = v205[1];
            goto LABEL_301;
          }
        }
        v133 = BugCheckParameter2a;
        goto LABEL_238;
      }
    }
    v87 = v185;
    goto LABEL_129;
  }
  v52 = MiSearchNumaNodeTable(BugCheckParameter2a);
  v197 = 1LL;
  PageChain = MiGetPageChain(v22, v188, *(_DWORD *)(v52 + 8) + 1, v40, v42, v206, &v197);
  v22 = PageChain;
  if ( PageChain )
  {
    v50 = (unsigned __int128)((PageChain + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v182 = (PageChain + 0x58000000000LL) / 48;
    goto LABEL_60;
  }
  v37 = -1LL;
  v25 = 0;
LABEL_337:
  MiUnlockStealVm(v205);
  if ( v10 )
    MiReleaseFreshPage(v10);
  MiLockPageInline(BugCheckParameter2, v177, v178);
  if ( v25 == 1 )
  {
    if ( v199 )
      *v199 = v37;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) != 6 )
      v25 = 2;
    if ( v25 == 2 && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
      return (unsigned int)v22;
  }
  return v25;
}
