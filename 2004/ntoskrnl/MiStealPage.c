/*
 * XREFs of MiStealPage @ 0x14031A7E0
 * Callers:
 *     MiTradePage @ 0x140224F90 (MiTradePage.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiSearchNumaNodeTable @ 0x14023A180 (MiSearchNumaNodeTable.c)
 *     MiTbFlushType @ 0x140245D64 (MiTbFlushType.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140247160 (MI_WSLE_LOG_ACCESS.c)
 *     MiReadPteShadow @ 0x140254430 (MiReadPteShadow.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiReleaseFaultState @ 0x14025BE38 (MiReleaseFaultState.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiGetPageChain @ 0x1402A4CF0 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiFreeWsleList @ 0x1402B2F00 (MiFreeWsleList.c)
 *     MiGetPagePrivilege @ 0x1402B42D0 (MiGetPagePrivilege.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiGetPteFromCopyList @ 0x1402B4DE0 (MiGetPteFromCopyList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiHyperSpaceSize @ 0x1402BDFC8 (MiHyperSpaceSize.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiReplacePageOfProtoPool @ 0x1402F4350 (MiReplacePageOfProtoPool.c)
 *     MiClearPfnImageVerified @ 0x1402F7658 (MiClearPfnImageVerified.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x14031A534 (MiGetPfnChannel.c)
 *     MiUnlockStealVm @ 0x14031BE4C (MiUnlockStealVm.c)
 *     MiCopyPfnEntryEx @ 0x14031C670 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14031CC14 (MiFinalizePageAttribute.c)
 *     KeFlushSingleTb @ 0x14031CE3C (KeFlushSingleTb.c)
 *     MiLockStealUserVm @ 0x14031D3F8 (MiLockStealUserVm.c)
 *     MiSmallVaStillMapsFrame @ 0x140320F80 (MiSmallVaStillMapsFrame.c)
 *     MiLockStealSystemVm @ 0x140321188 (MiLockStealSystemVm.c)
 *     MiWriteValidPteNewPage @ 0x14032D750 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x14033B220 (MiLockNestedPageAtDpcInline.c)
 *     MiVaIsPageFileHash @ 0x14033C948 (MiVaIsPageFileHash.c)
 *     MiReplacePageTablePage @ 0x14034221C (MiReplacePageTablePage.c)
 *     KeSwapDirectoryTableBase @ 0x14038B014 (KeSwapDirectoryTableBase.c)
 *     MiPrepareToStealNonPagedPool @ 0x1403C20DC (MiPrepareToStealNonPagedPool.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x14040A280 (memset.c)
 */

__int64 __fastcall MiStealPage(ULONG_PTR a1, char a2, int a3, __int128 *a4, int a5, __int64 *a6)
{
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // r8
  int v15; // r10d
  __int64 v16; // rdx
  ULONG_PTR v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r15
  int v20; // r10d
  __int64 v21; // rdx
  unsigned int v22; // ebx
  __int64 v23; // r8
  _DWORD *v24; // r9
  int v25; // edx
  __int128 *v26; // rax
  int v27; // ecx
  char v28; // al
  __int64 v29; // rcx
  char WsleContents; // al
  char v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rdi
  int v34; // r8d
  char v35; // al
  unsigned int v36; // r12d
  int v37; // eax
  unsigned int v38; // edi
  unsigned int v39; // ebx
  int v40; // ebx
  int PfnChannel; // eax
  int v42; // ebx
  __int64 Page; // rax
  __int64 v44; // rdx
  __int64 v45; // r8
  _DWORD *v46; // r9
  __int64 v47; // r15
  _QWORD *v48; // rax
  __int64 PageChain; // rax
  __int64 v50; // r8
  __int64 SchedulerAssist; // r9
  unsigned __int64 v52; // r13
  int PagePrivilege; // eax
  unsigned int v54; // r11d
  int v55; // ebx
  __int64 v56; // rdx
  signed __int64 v57; // rdi
  unsigned __int8 v58; // al
  bool v59; // cf
  int v60; // r14d
  unsigned __int8 CurrentIrql; // al
  char v62; // cl
  struct _KPRCB *v63; // r10
  int v64; // eax
  unsigned __int64 v65; // rdi
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r9
  _DWORD *v68; // r8
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rax
  unsigned __int8 v72; // al
  BOOL v73; // r14d
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  int HasShadow; // eax
  int v79; // r11d
  unsigned __int64 *v80; // rax
  unsigned int v81; // eax
  unsigned __int64 v82; // rbx
  int v83; // eax
  __int64 IsPageFileHash; // rax
  volatile LONG *v85; // rbx
  unsigned __int8 v86; // al
  KIRQL v87; // di
  struct _KPRCB *CurrentPrcb; // r10
  int v89; // eax
  __int64 v90; // r9
  int v91; // r10d
  ULONG_PTR v92; // rbx
  __int16 v93; // dx
  unsigned __int8 v94; // al
  char v95; // cl
  unsigned __int8 v96; // al
  struct _KPRCB *v97; // r10
  int v98; // eax
  _DWORD *v99; // r9
  __int64 v100; // rdx
  __int64 v101; // r8
  _DWORD *v102; // r9
  __int64 v103; // rbx
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // r8
  __int64 v108; // r9
  unsigned __int64 v109; // rax
  __int64 v110; // rdx
  __int64 v111; // r8
  __int64 v112; // r9
  int v113; // ebx
  __int64 v114; // rdx
  __int64 v115; // r8
  _DWORD *v116; // r9
  __int16 v117; // r12
  unsigned __int64 *PteFromCopyList; // rax
  ULONG_PTR v119; // r8
  int v120; // ebx
  __int64 v121; // rax
  int v122; // ecx
  LONG *SharedVm; // rbx
  _KPROCESS *v124; // rax
  unsigned __int64 v125; // rbx
  BOOL v126; // eax
  __int64 v127; // rcx
  __int64 v128; // r8
  __int64 v129; // r9
  int v130; // edx
  int v131; // eax
  bool v132; // zf
  unsigned __int64 *v133; // r11
  unsigned __int64 v134; // rbx
  BOOL v135; // eax
  __int64 v136; // rcx
  int v137; // r11d
  char v138; // al
  _QWORD *v139; // rcx
  unsigned __int64 v140; // rbx
  unsigned __int8 v141; // al
  struct _KPRCB *v142; // r10
  int v143; // eax
  __int64 v144; // rbx
  unsigned __int8 v145; // al
  struct _KPRCB *v146; // r10
  int v147; // eax
  struct _LIST_ENTRY *v148; // rax
  unsigned __int64 *v149; // rdi
  unsigned __int64 PteShadow; // rbx
  BOOL v151; // eax
  struct _LIST_ENTRY *v152; // r11
  struct _LIST_ENTRY *v153; // rax
  unsigned __int64 *v154; // r12
  int v155; // edi
  BOOL v156; // eax
  __int64 v157; // rcx
  char v158; // al
  unsigned int v159; // eax
  char v160; // dl
  unsigned __int8 v161; // al
  KIRQL v162; // di
  struct _KPRCB *v163; // r10
  int v164; // eax
  char v165; // al
  unsigned __int8 v166; // al
  struct _KPRCB *v167; // r9
  _DWORD *v168; // r8
  int v169; // eax
  __int64 v170; // rdx
  __int64 v171; // r8
  _DWORD *v172; // r9
  KIRQL v174; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v175[7]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v176; // [rsp+48h] [rbp-B8h]
  unsigned int v177; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v179; // [rsp+60h] [rbp-A0h]
  __int128 *v180; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v181; // [rsp+70h] [rbp-90h]
  __int64 v182; // [rsp+78h] [rbp-88h]
  __int64 v183; // [rsp+80h] [rbp-80h]
  int v184; // [rsp+88h] [rbp-78h]
  _KPROCESS *Process; // [rsp+90h] [rbp-70h]
  struct _LIST_ENTRY *v186; // [rsp+98h] [rbp-68h]
  int v187; // [rsp+A0h] [rbp-60h] BYREF
  int v188; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned __int64 *v189; // [rsp+A8h] [rbp-58h]
  __int64 v190; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v191; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v192; // [rsp+C0h] [rbp-40h]
  __int64 *v193; // [rsp+C8h] [rbp-38h]
  _QWORD v194[5]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-8h]
  _KPROCESS *v196; // [rsp+100h] [rbp+0h]
  __int64 v197; // [rsp+108h] [rbp+8h]
  struct _LIST_ENTRY *Flink; // [rsp+110h] [rbp+10h]
  _QWORD v199[15]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v200; // [rsp+198h] [rbp+98h]
  _QWORD v201[24]; // [rsp+1A0h] [rbp+A0h] BYREF

  v180 = a4;
  v193 = a6;
  v175[0] = 0;
  v174 = 0;
  memset((char *)v199 + 4, 0, 0x74uLL);
  v9 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v192 = 0LL;
  v190 = 0LL;
  v10 = 0LL;
  v184 = 0;
  v181 = (unsigned __int64 *)v9;
  LODWORD(v199[0]) = a3;
  v200 = -1LL;
  v186 = 0LL;
  v179 = (__int64)(v9 << 25) >> 16;
  LeafVa = MiGetLeafVa(v179);
  v14 = 1LL;
  if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    v15 = LODWORD(v199[1]) | 1;
  else
    v15 = LODWORD(v199[1]) | 8;
  LODWORD(v199[1]) = v15;
  v176 = v13;
  v16 = (unsigned __int128)((__int64)(a1 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v17 = (__int64)(a1 + 0x58000000000LL) / 48;
  BugCheckParameter2 = v17;
  if ( a6 )
    *a6 = v13;
  v18 = (*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL;
  Process = 0LL;
  v19 = *(_QWORD *)(qword_140C4E448 + 8 * v18);
  v183 = v19;
  if ( LeafVa < 0xFFFF800000000000uLL )
    goto LABEL_15;
  if ( LeafVa >= qword_140C4F938 && LeafVa <= qword_140C4E168 )
  {
    v20 = v15 | 8;
    if ( (v20 & 1) != 0 )
    {
      v15 = v20 | 2;
      if ( v179 >= qword_140C4E160 && v179 < qword_140C4E160 + MiHyperSpaceSize() )
        v15 |= 0x100u;
    }
    else
    {
      v15 = v20 | 4;
    }
LABEL_15:
    v15 |= 0x1000u;
    LODWORD(v199[1]) = v15;
  }
  if ( (v15 & 0x1000) != 0 )
  {
    LOBYTE(v14) = a2;
    v22 = MiLockStealUserVm(v19, a1, v14, v9, v199);
    if ( v22 != 1 )
      goto LABEL_18;
    v25 = v199[6];
    Process = KeGetCurrentThread()->ApcState.Process;
    v182 = v199[3];
    v177 = 0;
    v26 = v180;
LABEL_22:
    LOBYTE(v27) = v199[1];
    goto LABEL_23;
  }
  LOBYTE(v16) = a2;
  v22 = MiLockStealSystemVm(a1, v16, v9, v199);
  if ( v22 != 1 )
  {
LABEL_18:
    MiLockPageInline(a1, v21, v23, v24);
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      return 0;
    return v22;
  }
  v25 = v199[6];
  v22 = 0;
  v182 = v199[3];
  v34 = 1;
  v177 = 1;
  v35 = *(_BYTE *)(v199[3] + 184LL) & 7;
  if ( v35 == 7 )
  {
    v26 = v180;
    if ( !*((_QWORD *)v180 + 2) )
    {
      v33 = v176;
      goto LABEL_338;
    }
    v177 = 2;
  }
  else
  {
    if ( ((v35 - 1) & 0xFD) != 0 )
    {
      if ( LODWORD(v199[6]) == 1 )
        v34 = 2;
      v177 = v34;
    }
    v26 = v180;
  }
  if ( LODWORD(v199[6]) != 3 )
    goto LABEL_22;
  if ( (v199[1] & 1) != 0 )
    v27 = LODWORD(v199[1]) | 0xA;
  else
    v27 = LODWORD(v199[1]) | 0xC;
  LODWORD(v199[1]) = v27;
LABEL_23:
  if ( !*((_QWORD *)v26 + 2) )
  {
    v22 = 0;
    if ( (v27 & 0x20) != 0
      || (*(_BYTE *)(a1 + 34) & 0x10) != 0
      || v25 == 2
      || (v27 & 8) != 0
      || (v28 = MI_READ_PTE_LOCK_FREE(v9), v29 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, v29 == v17)
      || (v28 & 0x42) != 0
      || (*(_BYTE *)(a1 + 35) & 8) != 0
      || (WsleContents = MiGetWsleContents(v29, v179), (WsleContents & 0xF) == v31) )
    {
      v33 = v176;
    }
    else
    {
      memset(v201, 0, 0xB8uLL);
      LODWORD(v201[0]) = MiTbFlushType(v182);
      WORD2(v201[0]) = 4;
      v201[2] = 0LL;
      LODWORD(v201[1]) = 20;
      v201[3] = 0LL;
      if ( dword_140C4E628 )
        MI_WSLE_LOG_ACCESS(v32, v9);
      MiInsertTbFlushEntry((__int64)v201, v179, 1LL, 0);
      v33 = v176;
      if ( !MiFreeWsleList(v182, (__int64)v201, 0) )
        v22 = 2;
    }
    goto LABEL_338;
  }
  v36 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( a5 == -1 )
  {
    v40 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(a1 + 0x58000000000LL) / 48) + 2);
    PfnChannel = MiGetPfnChannel(a1);
    v42 = dword_140C4DCF8 & v17 | (v40 << byte_140C4DC8C);
    v38 = 0;
    v39 = (PfnChannel << byte_140C4DC8D) | v42;
    if ( (a3 & 0x3000000) != 0 )
      v38 = 0x10000;
  }
  else
  {
    v37 = dword_140C4DCF8 & v17;
    v38 = 48;
    v39 = v37 | a5 & ~dword_140C4DCF8;
  }
  if ( v200 == -1 )
  {
    Page = MiGetPage(v19, v39, v38);
    v176 = Page;
    v22 = 0;
    if ( Page == -1 )
    {
      v33 = -1LL;
      goto LABEL_338;
    }
    v47 = 48 * Page - 0x58000000000LL;
LABEL_60:
    if ( v47 == a1 )
    {
      v33 = v176;
      v22 = 1;
      goto LABEL_338;
    }
    v52 = (unsigned __int8)MiLockPageInline(a1, v44, v45, v46);
    if ( (MiFlags & 0x8000) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(a1, 1, 0LL);
      v54 = 0;
      if ( PagePrivilege )
      {
        v55 = LODWORD(v199[1]) | 0x2000;
        LODWORD(v199[1]) |= 0x2000u;
        goto LABEL_67;
      }
    }
    else
    {
      v54 = 0;
    }
    v55 = v199[1];
LABEL_67:
    v56 = 1LL;
    v57 = 0LL;
    if ( *(_WORD *)(a1 + 32) != 1 )
      goto LABEL_68;
    v60 = v199[6];
    SchedulerAssist = 8LL;
    if ( (*(_BYTE *)(a1 + 35) & 8) == 0 && (*(_BYTE *)a1 & 1) != 0 )
    {
      v50 = 2LL;
    }
    else
    {
      v50 = 2LL;
      if ( LODWORD(v199[6]) != 2 && (v55 & 0x26) == 0 )
        goto LABEL_77;
    }
    if ( (*(_BYTE *)(a1 + 34) & 7) != 6
      || v183 != *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) )
    {
LABEL_77:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !KiIrqlFlags )
        goto LABEL_86;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_86;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 0xFu || (unsigned __int8)v52 > 0xFu )
        goto LABEL_86;
      v59 = CurrentIrql < 2u;
LABEL_82:
      if ( !v59 )
      {
        v62 = v52 + 1;
        goto LABEL_84;
      }
      goto LABEL_86;
    }
    if ( (v55 & 0x20) == 0 )
    {
      v70 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v181);
      v54 = 0;
      v57 = v70;
      v56 = 1LL;
      SchedulerAssist = 8LL;
    }
    if ( v60 != 3 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v177 == 1 )
    {
      if ( (v55 & 0x10) == 0 )
      {
LABEL_68:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !KiIrqlFlags )
          goto LABEL_86;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_86;
        v58 = KeGetCurrentIrql();
        if ( v58 > 0xFu || (unsigned __int8)v52 > 0xFu )
          goto LABEL_86;
        v59 = v58 < 2u;
        goto LABEL_82;
      }
      v55 |= 0x208u;
      LODWORD(v199[1]) = v55;
    }
    if ( v60 != 2 )
    {
      if ( (v55 & 0x20) != 0 )
      {
        v71 = MiPrepareToStealNonPagedPool(a1, v181);
        v54 = 0;
        v57 = v71;
        if ( !v71 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !KiIrqlFlags )
            goto LABEL_86;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_86;
          v72 = KeGetCurrentIrql();
          if ( v72 > 0xFu || (unsigned __int8)v52 > 0xFu )
            goto LABEL_86;
          goto LABEL_113;
        }
      }
      else if ( ((v55 & 8) == 0 || (v55 & 0x100) != 0) && ((v57 & 0x42) != 0 || (v55 & 0x2000) != 0) )
      {
        if ( (v55 & 0x100) != 0 )
        {
          MiWriteValidPteNewProtection((unsigned __int64)v181, v57 & 0xFFFFFFFFFFFFFFBDuLL);
        }
        else
        {
          v73 = 0;
          LODWORD(v199[1]) = v55 | 0x40;
          if ( MiPteInShadowRange((unsigned __int64)v181) )
          {
            HasShadow = MiPteHasShadow(v75, v74, v76, v77);
            v79 = 1;
            v73 = HasShadow != 0;
          }
          else
          {
            v79 = 1;
          }
          v80 = v181;
          *v181 = v57 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( v73 )
            MiWritePteShadow(v80, v57 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
          v184 = v79;
        }
        v81 = MiTbFlushType(v182);
        v82 = v179;
        KeFlushSingleTb(v179, v81, v177);
LABEL_129:
        v83 = v177;
        if ( v177 == 1 )
        {
          if ( (v199[1] & 4) != 0 )
            v83 = 2;
          v177 = v83;
        }
        MiLockNestedPageAtDpcInline(v47);
        MiFinalizePageAttribute(v47, v36, 1LL);
        if ( LODWORD(v199[6]) == 2 )
        {
          IsPageFileHash = MiVaIsPageFileHash(v183, v82);
          v54 = 0;
          v190 = IsPageFileHash;
          if ( !IsPageFileHash )
            goto LABEL_146;
          v85 = (volatile LONG *)(IsPageFileHash + 232);
          v174 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(IsPageFileHash + 232));
          if ( v190 != MiVaIsPageFileHash(v183, v179)
            || !(unsigned int)MiSmallVaStillMapsFrame(v179, BugCheckParameter2) )
          {
            ExReleaseSpinLockSharedFromDpcLevel(v85);
            v54 = 0;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v86 = KeGetCurrentIrql(), v86 <= 0xFu) )
            {
              v87 = v174;
              if ( v174 <= 0xFu && v86 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v56 = -1LL << (v174 + 1);
                SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
                v89 = ~(unsigned __int16)v56;
                v132 = (v89 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
                v50 = (unsigned int)v89 & *(_DWORD *)(SchedulerAssist + 20);
                *(_DWORD *)(SchedulerAssist + 20) = v50;
                if ( v132 )
                {
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  v54 = 0;
                }
              }
            }
            else
            {
              v87 = v174;
            }
            __writecr8(v87);
LABEL_146:
            _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !KiIrqlFlags )
              goto LABEL_86;
            if ( (KiIrqlFlags & 1) == 0 )
              goto LABEL_86;
            v72 = KeGetCurrentIrql();
            if ( v72 > 0xFu || (unsigned __int8)v52 > 0xFu )
              goto LABEL_86;
LABEL_113:
            if ( v72 >= 2u )
            {
              v62 = v52 + 1;
LABEL_84:
              v63 = KeGetCurrentPrcb();
              v56 = -1LL << v62;
              v64 = ~(unsigned __int16)(-1LL << v62);
              SchedulerAssist = (__int64)v63->SchedulerAssist;
              v132 = (v64 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
              v50 = (unsigned int)v64 & *(_DWORD *)(SchedulerAssist + 20);
              *(_DWORD *)(SchedulerAssist + 20) = v50;
              if ( v132 )
              {
                KiRemoveSystemWorkPriorityKick(v63);
                v54 = 0;
              }
            }
LABEL_86:
            __writecr8(v52);
LABEL_87:
            v10 = v47;
            v22 = v54;
LABEL_88:
            if ( !v10 )
            {
              v33 = v176;
              goto LABEL_338;
            }
            v65 = (unsigned __int8)MiLockPageInline(v10, v56, v50, (_DWORD *)SchedulerAssist);
            *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v66 = KeGetCurrentIrql();
                if ( v66 <= 0xFu && (unsigned __int8)v65 <= 0xFu && v66 >= 2u )
                {
                  v67 = KeGetCurrentPrcb();
                  v68 = v67->SchedulerAssist;
                  v69 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v65 + 1));
                  v132 = (v69 & v68[5]) == 0;
                  v68[5] &= v69;
                  if ( v132 )
                    KiRemoveSystemWorkPriorityKick(v67);
                }
              }
            }
            __writecr8(v65);
            goto LABEL_332;
          }
        }
        MiCopyPfnEntryEx(v47, a1);
        v92 = BugCheckParameter2;
        if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == BugCheckParameter2 )
          *(_QWORD *)(v47 + 40) ^= (v176 ^ *(_QWORD *)(v47 + 40)) & 0xFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v93 = v199[1];
        if ( (v199[1] & 0x20) == 0 && LODWORD(v199[6]) != v91 )
        {
          if ( (v199[1] & 0x200) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v94 = KeGetCurrentIrql();
                if ( v94 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v94 >= (unsigned __int8)v91 )
                {
                  v95 = v52 + 1;
LABEL_178:
                  v97 = KeGetCurrentPrcb();
                  v98 = ~(unsigned __int16)(-1LL << v95);
                  v99 = v97->SchedulerAssist;
                  v132 = (v98 & v99[5]) == 0;
                  v99[5] &= v98;
                  if ( v132 )
                    KiRemoveSystemWorkPriorityKick(v97);
                  v90 = 0LL;
                  goto LABEL_181;
                }
              }
            }
            goto LABEL_181;
          }
          if ( ((LODWORD(v199[1]) >> 3) & 1) == 0 && !v177 || (v199[1] & 0xA) == 0xA || (v199[1] & 0x100) != 0 )
          {
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
            goto LABEL_172;
          }
          if ( ((LODWORD(v199[1]) >> 3) & 1) != 0 && (v199[1] & (unsigned __int8)v91) == 0 && !v177
            || LODWORD(v199[6]) == 3 && (v199[1] & 4) != 0 )
          {
LABEL_172:
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v96 = KeGetCurrentIrql();
                if ( v96 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v96 >= (unsigned __int8)v91 )
                {
                  v95 = v52 + 1;
                  goto LABEL_178;
                }
              }
            }
LABEL_181:
            __writecr8(v52);
            v93 = v199[1];
            LOBYTE(v52) = 17;
          }
        }
        if ( (v93 & 0x200) != 0 )
        {
          v183 = MiLockProtoPoolPage(v179, v175);
          v103 = v183;
          if ( !v183 )
          {
LABEL_184:
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v47 + 16), v100, v101, (__int64)v102);
            goto LABEL_87;
          }
          if ( *(_WORD *)(v183 + 32) > 2u )
          {
LABEL_186:
            LOBYTE(v100) = v175[0];
            MiUnlockProtoPoolPage(v103, v100);
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v47 + 16), v104, v105, v106);
            v54 = 0;
            goto LABEL_87;
          }
          v57 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v181);
          if ( (v57 & 0x42) != 0 )
          {
            v187 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v103 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v187, v100, v107, v108);
              while ( *(__int64 *)(v103 + 24) < 0 );
            }
            if ( *(_WORD *)(v103 + 32) > 2u )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v103 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_186;
            }
            MiWriteValidPteNewProtection((unsigned __int64)v181, v57 & 0xFFFFFFFFFFFFFFBDuLL);
            KeFlushSingleTb(v179, 0LL, 1LL);
            v109 = MiCaptureDirtyBitToPfn(v103);
            _InterlockedAnd64((volatile signed __int64 *)(v103 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v109 )
              MiReleasePageFileInfo(
                *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v103 + 40) >> 39) & 0x3FFLL)),
                v109,
                1);
            v188 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v188, v110, v111, v112);
              while ( *(__int64 *)(v47 + 24) < 0 );
            }
            MiCaptureDirtyBitToPfn(v47);
            _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v93 = v199[1];
          LODWORD(v90) = 0;
          v92 = BugCheckParameter2;
        }
        else
        {
          v175[0] = 17;
          v183 = v90;
        }
        if ( (v93 & 0x200) == 0
          && (LODWORD(v199[6]) != 3 || (v93 & 4) == 0)
          && ((v93 & 8) == 0 || (v93 & 2) != 0 || v177 != (_DWORD)v90) )
        {
          if ( (_BYTE)v52 != 17 )
          {
            MiLockNestedPageAtDpcInline(v47);
            v93 = v199[1];
          }
          v113 = ((_BYTE)v52 != 17 ? 4 : 0) | 2;
          if ( (v93 & 0x2000) == 0 )
            v113 = (_BYTE)v52 != 17 ? 4 : 0;
          MiCopyPage(v176, BugCheckParameter2, v180, v113);
          if ( (v113 & 4) != 0 )
            _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v117 = v199[1];
          if ( (v199[1] & 0x20) == 0 && (_BYTE)v52 != 17 )
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
          goto LABEL_264;
        }
        PteFromCopyList = MiGetPteFromCopyList((unsigned int *)v180, v176, v92);
        v189 = PteFromCopyList;
        if ( (v199[1] & 0x200) != 0 )
        {
          LODWORD(v180) = MiReplacePageOfProtoPool(
                            v179,
                            v92,
                            v176,
                            (__int64)(((_QWORD)PteFromCopyList << 25) - (_QWORD)v186) >> 16);
          goto LABEL_229;
        }
        CurrentThread = KeGetCurrentThread();
        v194[1] = v179;
        v194[3] = v92;
        v194[4] = v176;
        v119 = BugCheckParameter2;
        v194[2] = (__int64)(((_QWORD)PteFromCopyList << 25) - (_QWORD)v186) >> 16;
        v197 = 0LL;
        Flink = 0LL;
        v120 = 1;
        v194[0] = v182;
        v196 = CurrentThread->ApcState.Process;
        v121 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
        LODWORD(v180) = 1;
        if ( v121 == BugCheckParameter2 )
        {
          if ( (*(_BYTE *)(v182 + 187) & 2) != 0
            || _interlockedbittestandset((volatile signed __int32 *)&Process[2].Header.WaitListHead.Flink + 1, 1u) )
          {
            LODWORD(v180) = 0;
            goto LABEL_229;
          }
          v122 = LODWORD(v199[1]) | 0x400;
          LODWORD(v199[1]) |= 0x400u;
          if ( v196->DirectoryTableBase >> 12 != v119 )
          {
            HIDWORD(v197) = 1;
            Flink = v196[1].ProcessListEntry.Flink;
            LODWORD(v199[1]) = v122 | 0x4000;
          }
          MiReleaseFaultState((__int64)&v199[3], 0x11u, 0LL);
          KeSwapDirectoryTableBase(v196, HIDWORD(v197), v194);
          SharedVm = MiGetSharedVm(v182);
          ExAcquireSpinLockExclusive(SharedVm);
          v124 = Process;
          SharedVm[1] = 0;
          _InterlockedAnd((volatile signed __int32 *)&v124[2].Header.WaitListHead.Flink + 1, 0xFFFFFFFD);
          v120 = (int)v180;
        }
        else
        {
          MiReplacePageTablePage(v194);
        }
        if ( (int)v197 < 0 )
          v120 = 0;
        LODWORD(v180) = v120;
LABEL_229:
        v125 = ZeroPte;
        LODWORD(BugCheckParameter2) = 0;
        v126 = MiPteInShadowRange((unsigned __int64)v189);
        v130 = 0;
        if ( v126 )
        {
          if ( (unsigned int)MiPteHasShadow(v127, 0LL, v128, v129) )
          {
            v131 = v130 + 1;
            if ( HIBYTE(word_140C4DE08) != (_BYTE)v130 )
              goto LABEL_238;
            v132 = ((unsigned __int8)ZeroPte & (unsigned __int8)(v130 + 1)) == 0;
            goto LABEL_233;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v132 = (ZeroPte & 1) == 0;
            v131 = BugCheckParameter2;
LABEL_233:
            if ( !v132 )
              v125 = ZeroPte | 0x8000000000000000uLL;
LABEL_238:
            v133 = v189;
            *v189 = v125;
            if ( v131 )
            {
              MiWritePteShadow(v133, v125);
              v130 = 0;
            }
            v134 = ZeroPte;
            LODWORD(BugCheckParameter2) = v130;
            v135 = MiPteInShadowRange((unsigned __int64)(v133 + 1));
            v137 = 0;
            if ( !v135 )
              goto LABEL_248;
            if ( (unsigned int)MiPteHasShadow(v136, v100, v101, v102) )
            {
              v138 = v137 + 1;
              LODWORD(BugCheckParameter2) = v137 + 1;
              if ( HIBYTE(word_140C4DE08) == (_BYTE)v137 )
              {
LABEL_246:
                if ( ((unsigned __int8)ZeroPte & (unsigned __int8)v138) != 0 )
                  v134 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v138 = 1;
              goto LABEL_246;
            }
LABEL_248:
            v139 = v189 + 1;
            v189[1] = v134;
            if ( (_DWORD)BugCheckParameter2 != v137 )
              MiWritePteShadow(v139, v134);
            if ( (_DWORD)v180 == v137 )
            {
              if ( (v199[1] & 0x200) != 0 )
              {
                LOBYTE(v100) = v175[0];
                MiUnlockProtoPoolPage(v183, v100);
              }
              goto LABEL_184;
            }
            if ( (v199[1] & 0x200) != 0 )
            {
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
              MiLockNestedPageAtDpcInline(v47);
            }
            else
            {
              v140 = (unsigned __int8)MiLockPageInline(a1, v100, v101, v102);
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
              v114 = 1LL;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v141 = KeGetCurrentIrql();
                  if ( v141 <= 0xFu && (unsigned __int8)v140 <= 0xFu && v141 >= 2u )
                  {
                    v142 = KeGetCurrentPrcb();
                    v114 = -1LL << ((unsigned __int8)v140 + 1);
                    v116 = v142->SchedulerAssist;
                    v143 = ~(unsigned __int16)v114;
                    v132 = (v143 & v116[5]) == 0;
                    v115 = (unsigned int)v143 & v116[5];
                    v116[5] = v115;
                    if ( v132 )
                      KiRemoveSystemWorkPriorityKick(v142);
                  }
                }
              }
              __writecr8(v140);
              LOBYTE(v52) = 17;
            }
            v117 = v199[1];
LABEL_264:
            v144 = v57 ^ (v57 ^ (v176 << 12)) & 0xFFFFFFFFF000LL;
            if ( (v117 & 0x20) != 0 )
            {
              MiLockNestedPageAtDpcInline(v47);
              if ( v57 != _InterlockedCompareExchange64((volatile signed __int64 *)v181, v144 | 0x20, v57) )
              {
                MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v47 + 16), v114, v115, (__int64)v116);
                *(_BYTE *)(v47 + 34) = *(_BYTE *)(v47 + 34) & 0xF8 | 5;
                _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v54 = 0;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v145 = KeGetCurrentIrql();
                    if ( v145 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v145 >= 2u )
                    {
                      v146 = KeGetCurrentPrcb();
                      v56 = -1LL << ((unsigned __int8)v52 + 1);
                      SchedulerAssist = (__int64)v146->SchedulerAssist;
                      v147 = ~(unsigned __int16)v56;
                      v132 = (v147 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
                      v50 = (unsigned int)v147 & *(_DWORD *)(SchedulerAssist + 20);
                      *(_DWORD *)(SchedulerAssist + 20) = v50;
                      if ( v132 )
                      {
                        KiRemoveSystemWorkPriorityKick(v146);
                        v54 = 0;
                      }
                    }
                  }
                }
                __writecr8((unsigned __int8)v52);
                goto LABEL_87;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v117 = v199[1];
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
LABEL_303:
              if ( (v117 & 0x200) != 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                LOBYTE(v114) = v175[0];
                MiUnlockProtoPoolPage(v183, v114);
                LOBYTE(v52) = 17;
              }
              else if ( (v117 & 0x10) != 0 && (v117 & 0x40) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
              {
                v160 = 12;
                if ( (_BYTE)v52 == 17 )
                  v160 = 8;
                MiClearPfnImageVerified(a1, v160);
              }
              if ( LODWORD(v199[6]) == 2 )
              {
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v190 + 232));
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v161 = KeGetCurrentIrql(), v161 <= 0xFu) )
                {
                  v162 = v174;
                  if ( v174 <= 0xFu && v161 >= 2u )
                  {
                    v163 = KeGetCurrentPrcb();
                    v114 = -1LL << (v174 + 1);
                    v116 = v163->SchedulerAssist;
                    v164 = ~(unsigned __int16)v114;
                    v132 = (v164 & v116[5]) == 0;
                    v115 = (unsigned int)v164 & v116[5];
                    v116[5] = v115;
                    if ( v132 )
                      KiRemoveSystemWorkPriorityKick(v163);
                  }
                }
                else
                {
                  v162 = v174;
                }
                __writecr8(v162);
              }
              if ( (_BYTE)v52 == 17 )
                LOBYTE(v52) = MiLockPageInline(a1, v114, v115, v116);
              *(_QWORD *)(a1 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
              *(_BYTE *)(a1 + 34) &= 0xC7u;
              v165 = *(_BYTE *)(a1 + 35) & 0xDF;
              *(_WORD *)(a1 + 32) = 0;
              *(_BYTE *)(a1 + 35) = v165;
              *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v166 = KeGetCurrentIrql();
                  if ( v166 <= 0xFu && (unsigned __int8)v52 <= 0xFu && v166 >= 2u )
                  {
                    v167 = KeGetCurrentPrcb();
                    v168 = v167->SchedulerAssist;
                    v169 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v52 + 1));
                    v132 = (v169 & v168[5]) == 0;
                    v168[5] &= v169;
                    if ( v132 )
                      KiRemoveSystemWorkPriorityKick(v167);
                  }
                }
              }
              __writecr8((unsigned __int8)v52);
              v10 = v192;
              v22 = 1;
LABEL_332:
              v33 = v176;
              goto LABEL_338;
            }
            if ( (v117 & 0x400) != 0 )
            {
              if ( (v117 & 0x4000) != 0 )
              {
                v148 = Process[1].ProcessListEntry.Flink;
                v186 = v148;
                if ( !v148 )
                  goto LABEL_283;
                v149 = (unsigned __int64 *)((((unsigned __int64)v148 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                PteShadow = *v149;
                v151 = MiPteInShadowRange((unsigned __int64)v149);
                v152 = 0LL;
                if ( v151 )
                  PteShadow = MiReadPteShadow((unsigned __int64)v149, PteShadow);
                v153 = v152;
                if ( ((PteShadow >> 12) & 0xFFFFFFFFFLL) == v176 )
                  v153 = v186;
                if ( !v153 )
                {
LABEL_283:
                  v22 = 2;
                  v10 = a1;
                  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a1 + 16), v114, v115, (__int64)v116);
                  goto LABEL_88;
                }
                goto LABEL_301;
              }
              goto LABEL_300;
            }
            if ( (v117 & 0x40) == 0 )
            {
              if ( (v117 & 0x200) == 0 && (v117 & 0x10) != 0 )
                MiLockNestedPageAtDpcInline(v47);
              MiWriteValidPteNewPage(v181, v144, 0LL);
              v117 = v199[1];
LABEL_300:
              LODWORD(v152) = 0;
LABEL_301:
              if ( v184 == (_DWORD)v152 )
              {
                v159 = MiTbFlushType(v182);
                KeFlushSingleTb(v179, v159, v177);
                v117 = v199[1];
              }
              goto LABEL_303;
            }
            v154 = v181;
            v155 = 0;
            v156 = MiPteInShadowRange((unsigned __int64)v181);
            LODWORD(v152) = 0;
            if ( v156 )
            {
              if ( (unsigned int)MiPteHasShadow(v157, v114, v115, v116) )
              {
                v158 = (_BYTE)v152 + 1;
                v155 = (_DWORD)v152 + 1;
                if ( HIBYTE(word_140C4DE08) == (_BYTE)v152 )
                {
LABEL_291:
                  if ( ((unsigned __int8)v144 & (unsigned __int8)v158) != 0 )
                    v144 |= 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v158 = 1;
                goto LABEL_291;
              }
            }
            *v154 = v144;
            if ( v155 )
              MiWritePteShadow(v154, v144);
            v117 = v199[1];
            goto LABEL_301;
          }
        }
        v131 = BugCheckParameter2;
        goto LABEL_238;
      }
    }
    v82 = v179;
    goto LABEL_129;
  }
  v48 = MiSearchNumaNodeTable(BugCheckParameter2);
  v191 = 1LL;
  PageChain = MiGetPageChain(v19, v182, *((_DWORD *)v48 + 2) + 1, v36, v38, v200, &v191);
  v47 = PageChain;
  if ( PageChain )
  {
    v44 = (unsigned __int128)((PageChain + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v176 = (PageChain + 0x58000000000LL) / 48;
    goto LABEL_60;
  }
  v33 = -1LL;
  v22 = 0;
LABEL_338:
  MiUnlockStealVm(v199);
  if ( v10 )
    MiReleaseFreshPage(v10);
  MiLockPageInline(a1, v170, v171, v172);
  if ( v22 == 1 )
  {
    if ( v193 )
      *v193 = v33;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
      v22 = 2;
    if ( v22 == 2 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      return 0;
  }
  return v22;
}
