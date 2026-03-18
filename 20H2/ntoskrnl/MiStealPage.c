/*
 * XREFs of MiStealPage @ 0x1403523FC
 * Callers:
 *     MiTradePage @ 0x14034AE80 (MiTradePage.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     MiGetPageChain @ 0x140274030 (MiGetPageChain.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiGetSharedVm @ 0x14027C730 (MiGetSharedVm.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     MiGetPteFromCopyList @ 0x140290F30 (MiGetPteFromCopyList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402970F0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiHyperSpaceSize @ 0x140299518 (MiHyperSpaceSize.c)
 *     MiWriteValidPteNewProtection @ 0x14029F0A0 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiFreeWsleList @ 0x1402AAA70 (MiFreeWsleList.c)
 *     MiGetPagePrivilege @ 0x1402ABE40 (MiGetPagePrivilege.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1402AEBA0 (MiSearchNumaNodeTable.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x1402BA458 (MiTbFlushType.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1402CFBA0 (MI_WSLE_LOG_ACCESS.c)
 *     MiReleaseFaultState @ 0x1402D0698 (MiReleaseFaultState.c)
 *     ExAcquireSpinLockShared @ 0x1402D2DC0 (ExAcquireSpinLockShared.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     ExAcquireSpinLockExclusive @ 0x1402D4460 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x14030DC80 (MiLockNestedPageAtDpcInline.c)
 *     MiReplacePageTablePage @ 0x140313100 (MiReplacePageTablePage.c)
 *     MiWriteValidPteNewPage @ 0x140313E68 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReplacePageOfProtoPool @ 0x1403191F4 (MiReplacePageOfProtoPool.c)
 *     MiLockStealSystemVm @ 0x140321C88 (MiLockStealSystemVm.c)
 *     MiSmallVaStillMapsFrame @ 0x14032C748 (MiSmallVaStillMapsFrame.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiLockStealUserVm @ 0x1403415B0 (MiLockStealUserVm.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiClearPfnImageVerified @ 0x140349B58 (MiClearPfnImageVerified.c)
 *     MiVaIsPageFileHash @ 0x14034D29C (MiVaIsPageFileHash.c)
 *     MiGetPfnChannel @ 0x14034E084 (MiGetPfnChannel.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiFinalizePageAttribute @ 0x140350B14 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntryEx @ 0x140352310 (MiCopyPfnEntryEx.c)
 *     MiUnlockStealVm @ 0x140353A68 (MiUnlockStealVm.c)
 *     KeFlushSingleTb @ 0x140353AC8 (KeFlushSingleTb.c)
 *     KeSwapDirectoryTableBase @ 0x14038D314 (KeSwapDirectoryTableBase.c)
 *     MiPrepareToStealNonPagedPool @ 0x1403C484C (MiPrepareToStealNonPagedPool.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 __fastcall MiStealPage(ULONG_PTR a1, unsigned __int8 a2, int a3, __int128 *a4, int a5, __int64 *a6)
{
  unsigned __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // r11
  int v14; // r10d
  ULONG_PTR v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r15
  int v18; // r10d
  __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 v21; // r8
  _DWORD *v22; // r9
  int v23; // edx
  __int128 *v24; // rax
  int v25; // ecx
  char v26; // al
  __int64 v27; // rcx
  char WsleContents; // al
  char v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdi
  int v32; // r8d
  char v33; // al
  unsigned int v34; // r12d
  int v35; // eax
  unsigned int v36; // edi
  unsigned int v37; // ebx
  int v38; // ebx
  int PfnChannel; // eax
  int v40; // ebx
  __int64 Page; // rax
  __int64 v42; // rdx
  __int64 v43; // r8
  _DWORD *v44; // r9
  _QWORD *v45; // rax
  __int64 PageChain; // rax
  __int64 v47; // r8
  __int64 SchedulerAssist; // r9
  unsigned __int64 v49; // r13
  int PagePrivilege; // eax
  unsigned int v51; // r11d
  int v52; // ebx
  __int64 v53; // rdx
  signed __int64 v54; // rdi
  unsigned __int8 v55; // al
  bool v56; // cf
  int v57; // r14d
  unsigned __int8 CurrentIrql; // al
  char v59; // cl
  struct _KPRCB *v60; // r10
  int v61; // eax
  unsigned __int64 v62; // rdi
  unsigned __int8 v63; // al
  struct _KPRCB *v64; // r9
  _DWORD *v65; // r8
  int v66; // eax
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned __int8 v69; // al
  BOOL v70; // r14d
  __int64 v71; // r8
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
  __int64 v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // r9
  unsigned __int64 v98; // rax
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
  __int64 v116; // r8
  int v117; // edx
  int v118; // eax
  bool v119; // zf
  unsigned __int64 *v120; // r11
  unsigned __int64 v121; // rbx
  BOOL v122; // eax
  __int64 v123; // rdx
  __int64 v124; // r8
  _DWORD *v125; // r9
  int v126; // r11d
  char v127; // al
  __int64 v128; // rcx
  unsigned __int64 v129; // rbx
  unsigned __int8 v130; // al
  struct _KPRCB *v131; // r10
  int v132; // eax
  __int64 v133; // rbx
  unsigned __int8 v134; // al
  struct _KPRCB *v135; // r10
  int v136; // eax
  struct _LIST_ENTRY *v137; // rax
  unsigned __int64 *v138; // rdi
  unsigned __int64 PteShadow; // rbx
  BOOL v140; // eax
  struct _LIST_ENTRY *v141; // r11
  struct _LIST_ENTRY *v142; // rax
  __int64 *v143; // r12
  int v144; // edi
  BOOL v145; // eax
  char v146; // al
  unsigned int v147; // eax
  char v148; // dl
  unsigned __int8 v149; // al
  KIRQL v150; // di
  struct _KPRCB *v151; // r10
  int v152; // eax
  char v153; // al
  unsigned __int8 v154; // al
  struct _KPRCB *v155; // r9
  _DWORD *v156; // r8
  int v157; // eax
  __int64 v158; // rdx
  __int64 v159; // r8
  _DWORD *v160; // r9
  KIRQL v162; // [rsp+40h] [rbp-C0h]
  unsigned __int8 v163[7]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v164; // [rsp+48h] [rbp-B8h]
  unsigned int v165; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v167; // [rsp+60h] [rbp-A0h]
  __int128 *v168; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v169; // [rsp+70h] [rbp-90h]
  __int64 v170; // [rsp+78h] [rbp-88h]
  __int64 v171; // [rsp+80h] [rbp-80h]
  int v172; // [rsp+88h] [rbp-78h]
  _KPROCESS *Process; // [rsp+90h] [rbp-70h]
  struct _LIST_ENTRY *v174; // [rsp+98h] [rbp-68h]
  int v175; // [rsp+A0h] [rbp-60h] BYREF
  int v176; // [rsp+A4h] [rbp-5Ch] BYREF
  unsigned __int64 *v177; // [rsp+A8h] [rbp-58h]
  __int64 v178; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v179; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v180; // [rsp+C0h] [rbp-40h]
  __int64 *v181; // [rsp+C8h] [rbp-38h]
  _QWORD v182[5]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-8h]
  _KPROCESS *v184; // [rsp+100h] [rbp+0h]
  __int64 v185; // [rsp+108h] [rbp+8h]
  struct _LIST_ENTRY *Flink; // [rsp+110h] [rbp+10h]
  _QWORD v187[15]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v188; // [rsp+198h] [rbp+98h]
  _QWORD v189[24]; // [rsp+1A0h] [rbp+A0h] BYREF

  v168 = a4;
  v181 = a6;
  v163[0] = 0;
  v162 = 0;
  memset((char *)v187 + 4, 0, 0x74uLL);
  v9 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v180 = 0LL;
  v178 = 0LL;
  v10 = 0LL;
  v172 = 0;
  v169 = (unsigned __int64 *)v9;
  LODWORD(v187[0]) = a3;
  v188 = -1LL;
  v174 = 0LL;
  v167 = (__int64)(v9 << 25) >> 16;
  LeafVa = MiGetLeafVa(v167);
  if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    v14 = LODWORD(v187[1]) | 1;
  else
    v14 = LODWORD(v187[1]) | 8;
  LODWORD(v187[1]) = v14;
  v164 = v13;
  v15 = (__int64)(a1 + 0x58000000000LL) / 48;
  BugCheckParameter2 = v15;
  if ( a6 )
    *a6 = v13;
  v16 = (*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL;
  Process = 0LL;
  v17 = *(_QWORD *)(qword_140C4E4C8 + 8 * v16);
  v171 = v17;
  if ( LeafVa < 0xFFFF800000000000uLL )
    goto LABEL_15;
  if ( LeafVa >= qword_140C4F9B8 && LeafVa <= qword_140C4E1E8 )
  {
    v18 = v14 | 8;
    if ( (v18 & 1) != 0 )
    {
      v14 = v18 | 2;
      if ( v167 >= qword_140C4E1E0 && v167 < qword_140C4E1E0 + MiHyperSpaceSize() )
        v14 |= 0x100u;
    }
    else
    {
      v14 = v18 | 4;
    }
LABEL_15:
    v14 |= 0x1000u;
    LODWORD(v187[1]) = v14;
  }
  if ( (v14 & 0x1000) != 0 )
  {
    v20 = MiLockStealUserVm(v17, a1, a2, v9, (__int64)v187);
    if ( v20 != 1 )
      goto LABEL_18;
    v23 = v187[6];
    Process = KeGetCurrentThread()->ApcState.Process;
    v170 = v187[3];
    v165 = 0;
    v24 = v168;
LABEL_22:
    LOBYTE(v25) = v187[1];
    goto LABEL_23;
  }
  v20 = MiLockStealSystemVm(a1, a2, v9, (__int64)v187);
  if ( v20 != 1 )
  {
LABEL_18:
    MiLockPageInline(a1, v19, v21, v22);
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      return 0;
    return v20;
  }
  v23 = v187[6];
  v20 = 0;
  v170 = v187[3];
  v32 = 1;
  v165 = 1;
  v33 = *(_BYTE *)(v187[3] + 184LL) & 7;
  if ( v33 == 7 )
  {
    v24 = v168;
    if ( !*((_QWORD *)v168 + 2) )
    {
      v31 = v164;
      LODWORD(v17) = 0;
      goto LABEL_339;
    }
    v165 = 2;
  }
  else
  {
    if ( ((v33 - 1) & 0xFD) != 0 )
    {
      if ( LODWORD(v187[6]) == 1 )
        v32 = 2;
      v165 = v32;
    }
    v24 = v168;
  }
  if ( LODWORD(v187[6]) != 3 )
    goto LABEL_22;
  if ( (v187[1] & 1) != 0 )
    v25 = LODWORD(v187[1]) | 0xA;
  else
    v25 = LODWORD(v187[1]) | 0xC;
  LODWORD(v187[1]) = v25;
LABEL_23:
  if ( !*((_QWORD *)v24 + 2) )
  {
    LODWORD(v17) = 0;
    v20 = 0;
    if ( (v25 & 0x20) != 0
      || (*(_BYTE *)(a1 + 34) & 0x10) != 0
      || v23 == 2
      || (v25 & 8) != 0
      || (v26 = MI_READ_PTE_LOCK_FREE(v9), v27 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL, v27 == v15)
      || (v26 & 0x42) != 0
      || (*(_BYTE *)(a1 + 35) & 8) != 0
      || (WsleContents = MiGetWsleContents(v27, v167), (WsleContents & 0xF) == v29) )
    {
      v31 = v164;
    }
    else
    {
      memset(v189, 0, 0xB8uLL);
      LODWORD(v189[0]) = MiTbFlushType(v170);
      WORD2(v189[0]) = 4;
      v189[2] = 0LL;
      LODWORD(v189[1]) = 20;
      v189[3] = 0LL;
      if ( dword_140C4E6A8 )
        MI_WSLE_LOG_ACCESS(v30, v9);
      MiInsertTbFlushEntry((__int64)v189, v167, 1LL, 0);
      v31 = v164;
      if ( !MiFreeWsleList(v170, (__int64)v189, 0) )
        v20 = 2;
    }
    goto LABEL_339;
  }
  v34 = *(unsigned __int8 *)(a1 + 34) >> 6;
  if ( a5 == -1 )
  {
    v38 = *((_DWORD *)MiSearchNumaNodeTable((__int64)(a1 + 0x58000000000LL) / 48) + 2);
    PfnChannel = MiGetPfnChannel(a1);
    v40 = dword_140C4DD78 & v15 | (v38 << byte_140C4DD0C);
    v36 = 0;
    v37 = (PfnChannel << byte_140C4DD0D) | v40;
    if ( (a3 & 0x3000000) != 0 )
      v36 = 0x10000;
  }
  else
  {
    v35 = dword_140C4DD78 & v15;
    v36 = 48;
    v37 = v35 | a5 & ~dword_140C4DD78;
  }
  if ( v188 == -1 )
  {
    Page = MiGetPage(v17, v37, v36);
    LODWORD(v17) = 0;
    v164 = Page;
    v20 = 0;
    if ( Page == -1 )
    {
      v31 = -1LL;
      goto LABEL_339;
    }
    v17 = 48 * Page - 0x58000000000LL;
LABEL_60:
    if ( v17 == a1 )
    {
      v31 = v164;
      v20 = 1;
      LODWORD(v17) = 0;
      goto LABEL_339;
    }
    v49 = (unsigned __int8)MiLockPageInline(a1, v42, v43, v44);
    if ( (MiFlags & 0x8000) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(a1, 1, 0LL);
      v51 = 0;
      if ( PagePrivilege )
      {
        v52 = LODWORD(v187[1]) | 0x2000;
        LODWORD(v187[1]) |= 0x2000u;
        goto LABEL_67;
      }
    }
    else
    {
      v51 = 0;
    }
    v52 = v187[1];
LABEL_67:
    v53 = 1LL;
    v54 = 0LL;
    if ( *(_WORD *)(a1 + 32) != 1 )
      goto LABEL_68;
    v57 = v187[6];
    SchedulerAssist = 8LL;
    if ( (*(_BYTE *)(a1 + 35) & 8) == 0 && (*(_BYTE *)a1 & 1) != 0 )
    {
      v47 = 2LL;
    }
    else
    {
      v47 = 2LL;
      if ( LODWORD(v187[6]) != 2 && (v52 & 0x26) == 0 )
        goto LABEL_77;
    }
    if ( (*(_BYTE *)(a1 + 34) & 7) != 6
      || v171 != *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL)) )
    {
LABEL_77:
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !KiIrqlFlags )
        goto LABEL_86;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_86;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 0xFu || (unsigned __int8)v49 > 0xFu )
        goto LABEL_86;
      v56 = CurrentIrql < 2u;
LABEL_82:
      if ( !v56 )
      {
        v59 = v49 + 1;
        goto LABEL_84;
      }
      goto LABEL_86;
    }
    if ( (v52 & 0x20) == 0 )
    {
      v67 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v169);
      v51 = 0;
      v54 = v67;
      v53 = 1LL;
      SchedulerAssist = 8LL;
    }
    if ( v57 != 3 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v165 == 1 )
    {
      if ( (v52 & 0x10) == 0 )
      {
LABEL_68:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !KiIrqlFlags )
          goto LABEL_86;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_86;
        v55 = KeGetCurrentIrql();
        if ( v55 > 0xFu || (unsigned __int8)v49 > 0xFu )
          goto LABEL_86;
        v56 = v55 < 2u;
        goto LABEL_82;
      }
      v52 |= 0x208u;
      LODWORD(v187[1]) = v52;
    }
    if ( v57 != 2 )
    {
      if ( (v52 & 0x20) != 0 )
      {
        v68 = MiPrepareToStealNonPagedPool(a1, v169);
        v51 = 0;
        v54 = v68;
        if ( !v68 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !KiIrqlFlags )
            goto LABEL_86;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_86;
          v69 = KeGetCurrentIrql();
          if ( v69 > 0xFu || (unsigned __int8)v49 > 0xFu )
            goto LABEL_86;
          goto LABEL_113;
        }
      }
      else if ( ((v52 & 8) == 0 || (v52 & 0x100) != 0) && ((v54 & 0x42) != 0 || (v52 & 0x2000) != 0) )
      {
        if ( (v52 & 0x100) != 0 )
        {
          MiWriteValidPteNewProtection((unsigned __int64)v169, v54 & 0xFFFFFFFFFFFFFFBDuLL);
        }
        else
        {
          v70 = 0;
          LODWORD(v187[1]) = v52 | 0x40;
          if ( MiPteInShadowRange((unsigned __int64)v169) )
          {
            HasShadow = MiPteHasShadow();
            v73 = 1;
            v70 = HasShadow != 0;
          }
          else
          {
            v73 = 1;
          }
          v74 = (__int64 *)v169;
          *v169 = v54 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( v70 )
            MiWritePteShadow((__int64)v74, v54 & 0xFFFFFFFFFFFFFBFEuLL | 0x400, v71);
          v172 = v73;
        }
        v75 = MiTbFlushType(v170);
        v76 = v167;
        KeFlushSingleTb(v167, v75);
LABEL_129:
        v77 = v165;
        if ( v165 == 1 )
        {
          if ( (v187[1] & 4) != 0 )
            v77 = 2;
          v165 = v77;
        }
        MiLockNestedPageAtDpcInline(v17, v53, v47, SchedulerAssist);
        MiFinalizePageAttribute(v17, v34, 1);
        if ( LODWORD(v187[6]) == 2 )
        {
          IsPageFileHash = MiVaIsPageFileHash(v171, v76);
          v51 = 0;
          v178 = IsPageFileHash;
          if ( !IsPageFileHash )
            goto LABEL_146;
          v79 = (volatile LONG *)(IsPageFileHash + 232);
          v162 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(IsPageFileHash + 232));
          if ( v178 != MiVaIsPageFileHash(v171, v167) || !MiSmallVaStillMapsFrame(v167, BugCheckParameter2) )
          {
            ExReleaseSpinLockSharedFromDpcLevel(v79);
            v51 = 0;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v80 = KeGetCurrentIrql(), v80 <= 0xFu) )
            {
              v81 = v162;
              if ( v162 <= 0xFu && v80 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v53 = -1LL << (v162 + 1);
                SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
                v83 = ~(unsigned __int16)v53;
                v119 = (v83 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
                v47 = (unsigned int)v83 & *(_DWORD *)(SchedulerAssist + 20);
                *(_DWORD *)(SchedulerAssist + 20) = v47;
                if ( v119 )
                {
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  v51 = 0;
                }
              }
            }
            else
            {
              v81 = v162;
            }
            __writecr8(v81);
LABEL_146:
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !KiIrqlFlags )
              goto LABEL_86;
            if ( (KiIrqlFlags & 1) == 0 )
              goto LABEL_86;
            v69 = KeGetCurrentIrql();
            if ( v69 > 0xFu || (unsigned __int8)v49 > 0xFu )
              goto LABEL_86;
LABEL_113:
            if ( v69 >= 2u )
            {
              v59 = v49 + 1;
LABEL_84:
              v60 = KeGetCurrentPrcb();
              v53 = -1LL << v59;
              v61 = ~(unsigned __int16)(-1LL << v59);
              SchedulerAssist = (__int64)v60->SchedulerAssist;
              v119 = (v61 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
              v47 = (unsigned int)v61 & *(_DWORD *)(SchedulerAssist + 20);
              *(_DWORD *)(SchedulerAssist + 20) = v47;
              if ( v119 )
              {
                KiRemoveSystemWorkPriorityKick(v60);
                v51 = 0;
              }
            }
LABEL_86:
            __writecr8(v49);
LABEL_87:
            v10 = v17;
            v20 = v51;
LABEL_88:
            if ( !v10 )
            {
              v31 = v164;
              LODWORD(v17) = 0;
              goto LABEL_339;
            }
            v62 = (unsigned __int8)MiLockPageInline(v10, v53, v47, (_DWORD *)SchedulerAssist);
            *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            LODWORD(v17) = 0;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v63 = KeGetCurrentIrql();
                if ( v63 <= 0xFu && (unsigned __int8)v62 <= 0xFu && v63 >= 2u )
                {
                  v64 = KeGetCurrentPrcb();
                  v65 = v64->SchedulerAssist;
                  v66 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v62 + 1));
                  v119 = (v66 & v65[5]) == 0;
                  v65[5] &= v66;
                  if ( v119 )
                    KiRemoveSystemWorkPriorityKick(v64);
                }
              }
            }
            __writecr8(v62);
            goto LABEL_333;
          }
        }
        MiCopyPfnEntryEx(v17, a1);
        v87 = BugCheckParameter2;
        if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == BugCheckParameter2 )
          *(_QWORD *)(v17 + 40) ^= (v164 ^ *(_QWORD *)(v17 + 40)) & 0xFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v88 = LODWORD(v187[1]);
        if ( (v187[1] & 0x20) == 0 && LODWORD(v187[6]) != v86 )
        {
          if ( (v187[1] & 0x200) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v89 = KeGetCurrentIrql();
                if ( v89 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v89 >= (unsigned __int8)v86 )
                {
                  v90 = v49 + 1;
LABEL_178:
                  v92 = KeGetCurrentPrcb();
                  v93 = ~(unsigned __int16)(-1LL << v90);
                  v94 = v92->SchedulerAssist;
                  v119 = (v93 & v94[5]) == 0;
                  v84 = (unsigned int)v93 & v94[5];
                  v94[5] = v84;
                  if ( v119 )
                    KiRemoveSystemWorkPriorityKick(v92);
                  v85 = 0LL;
                  goto LABEL_181;
                }
              }
            }
            goto LABEL_181;
          }
          v84 = v165;
          if ( ((LODWORD(v187[1]) >> 3) & 1) == 0 && !v165 || (v187[1] & 0xA) == 0xA || (v187[1] & 0x100) != 0 )
          {
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
            goto LABEL_172;
          }
          if ( ((LODWORD(v187[1]) >> 3) & 1) != 0 && (v187[1] & (unsigned __int8)v86) == 0 && !v165
            || LODWORD(v187[6]) == 3 && (v187[1] & 4) != 0 )
          {
LABEL_172:
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v91 = KeGetCurrentIrql();
                if ( v91 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v91 >= (unsigned __int8)v86 )
                {
                  v90 = v49 + 1;
                  goto LABEL_178;
                }
              }
            }
LABEL_181:
            __writecr8(v49);
            v88 = LODWORD(v187[1]);
            LOBYTE(v49) = 17;
          }
        }
        if ( (v88 & 0x200) != 0 )
        {
          v171 = MiLockProtoPoolPage(v167, v163);
          v95 = v171;
          if ( !v171 )
          {
LABEL_184:
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v17 + 16));
            goto LABEL_87;
          }
          if ( *(_WORD *)(v171 + 32) > 2u )
          {
LABEL_186:
            MiUnlockProtoPoolPage(v95, v163[0]);
            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v17 + 16));
            v51 = 0;
            goto LABEL_87;
          }
          v54 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v169);
          if ( (v54 & 0x42) != 0 )
          {
            v175 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v95 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v175, v96, v84, v97);
              while ( *(__int64 *)(v95 + 24) < 0 );
            }
            if ( *(_WORD *)(v95 + 32) > 2u )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v95 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_186;
            }
            MiWriteValidPteNewProtection((unsigned __int64)v169, v54 & 0xFFFFFFFFFFFFFFBDuLL);
            KeFlushSingleTb(v167, 0LL);
            v98 = MiCaptureDirtyBitToPfn(v95);
            _InterlockedAnd64((volatile signed __int64 *)(v95 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v98 )
              MiReleasePageFileInfo(
                *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v95 + 40) >> 39) & 0x3FFLL)),
                v98,
                1);
            v176 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v176, v99, v100, v101);
              while ( *(__int64 *)(v17 + 24) < 0 );
            }
            MiCaptureDirtyBitToPfn(v17);
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v88 = LODWORD(v187[1]);
          v85 = 0LL;
          v87 = BugCheckParameter2;
        }
        else
        {
          v163[0] = 17;
          v171 = v85;
        }
        if ( (v88 & 0x200) == 0
          && (LODWORD(v187[6]) != 3 || (v88 & 4) == 0)
          && ((v88 & 8) == 0 || (v88 & 2) != 0 || v165 != (_DWORD)v85) )
        {
          if ( (_BYTE)v49 != 17 )
          {
            MiLockNestedPageAtDpcInline(v17, v88, v84, v85);
            LOWORD(v88) = v187[1];
          }
          v102 = ((_BYTE)v49 != 17 ? 4 : 0) | 2;
          if ( (v88 & 0x2000) == 0 )
            v102 = (_BYTE)v49 != 17 ? 4 : 0;
          MiCopyPage(v164, BugCheckParameter2, v168, v102);
          if ( (v102 & 4) != 0 )
            _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v106 = v187[1];
          if ( (v187[1] & 0x20) == 0 && (_BYTE)v49 != 17 )
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
          goto LABEL_264;
        }
        PteFromCopyList = MiGetPteFromCopyList((unsigned int *)v168, v164, v87);
        v177 = (unsigned __int64 *)PteFromCopyList;
        if ( (v187[1] & 0x200) != 0 )
        {
          LODWORD(v168) = MiReplacePageOfProtoPool(
                            v167,
                            v87,
                            v164,
                            (__int64)(((_QWORD)PteFromCopyList << 25) - (_QWORD)v174) >> 16);
          goto LABEL_229;
        }
        CurrentThread = KeGetCurrentThread();
        v182[1] = v167;
        v182[3] = v87;
        v182[4] = v164;
        v108 = BugCheckParameter2;
        v182[2] = (__int64)(((_QWORD)PteFromCopyList << 25) - (_QWORD)v174) >> 16;
        v185 = 0LL;
        Flink = 0LL;
        v109 = 1;
        v182[0] = v170;
        v184 = CurrentThread->ApcState.Process;
        v110 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
        LODWORD(v168) = 1;
        if ( v110 == BugCheckParameter2 )
        {
          if ( (*(_BYTE *)(v170 + 187) & 2) != 0
            || _interlockedbittestandset((volatile signed __int32 *)&Process[2].Header.WaitListHead.Flink + 1, 1u) )
          {
            LODWORD(v168) = 0;
            goto LABEL_229;
          }
          v111 = LODWORD(v187[1]) | 0x400;
          LODWORD(v187[1]) |= 0x400u;
          if ( v184->DirectoryTableBase >> 12 != v108 )
          {
            HIDWORD(v185) = 1;
            Flink = v184[1].ProcessListEntry.Flink;
            LODWORD(v187[1]) = v111 | 0x4000;
          }
          MiReleaseFaultState((__int64)&v187[3], 0x11u, 0LL);
          KeSwapDirectoryTableBase(v184, HIDWORD(v185), v182);
          SharedVm = MiGetSharedVm(v170);
          ExAcquireSpinLockExclusive(SharedVm);
          v113 = Process;
          SharedVm[1] = 0;
          _InterlockedAnd((volatile signed __int32 *)&v113[2].Header.WaitListHead.Flink + 1, 0xFFFFFFFD);
          v109 = (int)v168;
        }
        else
        {
          MiReplacePageTablePage((unsigned __int64)v182);
        }
        if ( (int)v185 < 0 )
          v109 = 0;
        LODWORD(v168) = v109;
LABEL_229:
        v114 = ZeroPte;
        LODWORD(BugCheckParameter2) = 0;
        v115 = MiPteInShadowRange((unsigned __int64)v177);
        v117 = 0;
        if ( v115 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v118 = v117 + 1;
            if ( HIBYTE(word_140C4DE88) != (_BYTE)v117 )
              goto LABEL_238;
            v119 = ((unsigned __int8)ZeroPte & (unsigned __int8)(v117 + 1)) == 0;
            goto LABEL_233;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v119 = (ZeroPte & 1) == 0;
            v118 = BugCheckParameter2;
LABEL_233:
            if ( !v119 )
              v114 = ZeroPte | 0x8000000000000000uLL;
LABEL_238:
            v120 = v177;
            *v177 = v114;
            if ( v118 )
            {
              MiWritePteShadow((__int64)v120, v114, v116);
              v117 = 0;
            }
            v121 = ZeroPte;
            LODWORD(BugCheckParameter2) = v117;
            v122 = MiPteInShadowRange((unsigned __int64)(v120 + 1));
            v126 = 0;
            if ( !v122 )
              goto LABEL_248;
            if ( (unsigned int)MiPteHasShadow() )
            {
              v127 = v126 + 1;
              LODWORD(BugCheckParameter2) = v126 + 1;
              if ( HIBYTE(word_140C4DE88) == (_BYTE)v126 )
              {
LABEL_246:
                if ( ((unsigned __int8)ZeroPte & (unsigned __int8)v127) != 0 )
                  v121 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v127 = 1;
              goto LABEL_246;
            }
LABEL_248:
            v128 = (__int64)(v177 + 1);
            v177[1] = v121;
            if ( (_DWORD)BugCheckParameter2 != v126 )
              MiWritePteShadow(v128, v121, v124);
            if ( (_DWORD)v168 == v126 )
            {
              if ( (v187[1] & 0x200) != 0 )
                MiUnlockProtoPoolPage(v171, v163[0]);
              goto LABEL_184;
            }
            if ( (v187[1] & 0x200) != 0 )
            {
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
              MiLockNestedPageAtDpcInline(v17, 0xC000000000000001uLL, v124, (__int64)v125);
            }
            else
            {
              v129 = (unsigned __int8)MiLockPageInline(a1, v123, v124, v125);
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
              v103 = 1LL;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v130 = KeGetCurrentIrql();
                  if ( v130 <= 0xFu && (unsigned __int8)v129 <= 0xFu && v130 >= 2u )
                  {
                    v131 = KeGetCurrentPrcb();
                    v103 = -1LL << ((unsigned __int8)v129 + 1);
                    v105 = v131->SchedulerAssist;
                    v132 = ~(unsigned __int16)v103;
                    v119 = (v132 & v105[5]) == 0;
                    v104 = (unsigned int)v132 & v105[5];
                    v105[5] = v104;
                    if ( v119 )
                      KiRemoveSystemWorkPriorityKick(v131);
                  }
                }
              }
              __writecr8(v129);
              LOBYTE(v49) = 17;
            }
            v106 = v187[1];
LABEL_264:
            v133 = v54 ^ (v54 ^ (v164 << 12)) & 0xFFFFFFFFF000LL;
            if ( (v106 & 0x20) != 0 )
            {
              MiLockNestedPageAtDpcInline(v17, v103, v104, (__int64)v105);
              if ( v54 != _InterlockedCompareExchange64((volatile signed __int64 *)v169, v133 | 0x20, v54) )
              {
                MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v17 + 16));
                *(_BYTE *)(v17 + 34) = *(_BYTE *)(v17 + 34) & 0xF8 | 5;
                _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v51 = 0;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v134 = KeGetCurrentIrql();
                    if ( v134 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v134 >= 2u )
                    {
                      v135 = KeGetCurrentPrcb();
                      v53 = -1LL << ((unsigned __int8)v49 + 1);
                      SchedulerAssist = (__int64)v135->SchedulerAssist;
                      v136 = ~(unsigned __int16)v53;
                      v119 = (v136 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
                      v47 = (unsigned int)v136 & *(_DWORD *)(SchedulerAssist + 20);
                      *(_DWORD *)(SchedulerAssist + 20) = v47;
                      if ( v119 )
                      {
                        KiRemoveSystemWorkPriorityKick(v135);
                        v51 = 0;
                      }
                    }
                  }
                }
                __writecr8((unsigned __int8)v49);
                goto LABEL_87;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v106 = v187[1];
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
LABEL_303:
              if ( (v106 & 0x200) != 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                MiUnlockProtoPoolPage(v171, v163[0]);
                LOBYTE(v49) = 17;
              }
              else if ( (v106 & 0x10) != 0 && (v106 & 0x40) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 3 )
              {
                v148 = 12;
                if ( (_BYTE)v49 == 17 )
                  v148 = 8;
                MiClearPfnImageVerified(a1, v148);
              }
              if ( LODWORD(v187[6]) == 2 )
              {
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v178 + 232));
                LODWORD(v17) = 0;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v149 = KeGetCurrentIrql(), v149 <= 0xFu) )
                {
                  v150 = v162;
                  if ( v162 <= 0xFu && v149 >= 2u )
                  {
                    v151 = KeGetCurrentPrcb();
                    v103 = -1LL << (v162 + 1);
                    v105 = v151->SchedulerAssist;
                    v152 = ~(unsigned __int16)v103;
                    v119 = (v152 & v105[5]) == 0;
                    v104 = (unsigned int)v152 & v105[5];
                    v105[5] = v104;
                    if ( v119 )
                      KiRemoveSystemWorkPriorityKick(v151);
                  }
                }
                else
                {
                  v150 = v162;
                }
                __writecr8(v150);
              }
              else
              {
                LODWORD(v17) = 0;
              }
              if ( (_BYTE)v49 == 17 )
                LOBYTE(v49) = MiLockPageInline(a1, v103, v104, v105);
              *(_QWORD *)(a1 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
              *(_BYTE *)(a1 + 34) &= 0xC7u;
              v153 = *(_BYTE *)(a1 + 35) & 0xDF;
              *(_WORD *)(a1 + 32) = 0;
              *(_BYTE *)(a1 + 35) = v153;
              *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v154 = KeGetCurrentIrql();
                  if ( v154 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v154 >= 2u )
                  {
                    v155 = KeGetCurrentPrcb();
                    v156 = v155->SchedulerAssist;
                    v157 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v49 + 1));
                    v119 = (v157 & v156[5]) == 0;
                    v156[5] &= v157;
                    if ( v119 )
                      KiRemoveSystemWorkPriorityKick(v155);
                  }
                }
              }
              __writecr8((unsigned __int8)v49);
              v10 = v180;
              v20 = 1;
LABEL_333:
              v31 = v164;
              goto LABEL_339;
            }
            if ( (v106 & 0x400) != 0 )
            {
              if ( (v106 & 0x4000) != 0 )
              {
                v137 = Process[1].ProcessListEntry.Flink;
                v174 = v137;
                if ( !v137 )
                  goto LABEL_283;
                v138 = (unsigned __int64 *)((((unsigned __int64)v137 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                PteShadow = *v138;
                v140 = MiPteInShadowRange((unsigned __int64)v138);
                v141 = 0LL;
                if ( v140 )
                  PteShadow = MiReadPteShadow((unsigned __int64)v138, PteShadow);
                v142 = v141;
                if ( ((PteShadow >> 12) & 0xFFFFFFFFFLL) == v164 )
                  v142 = v174;
                if ( !v142 )
                {
LABEL_283:
                  v20 = 2;
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
                MiLockNestedPageAtDpcInline(v17, v103, v104, (__int64)v105);
              MiWriteValidPteNewPage((__int64 *)v169, v133, 0);
              v106 = v187[1];
LABEL_300:
              LODWORD(v141) = 0;
LABEL_301:
              if ( v172 == (_DWORD)v141 )
              {
                v147 = MiTbFlushType(v170);
                KeFlushSingleTb(v167, v147);
                v106 = v187[1];
              }
              goto LABEL_303;
            }
            v143 = (__int64 *)v169;
            v144 = 0;
            v145 = MiPteInShadowRange((unsigned __int64)v169);
            LODWORD(v141) = 0;
            if ( v145 )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v146 = (_BYTE)v141 + 1;
                v144 = (_DWORD)v141 + 1;
                if ( HIBYTE(word_140C4DE88) == (_BYTE)v141 )
                {
LABEL_291:
                  if ( ((unsigned __int8)v133 & (unsigned __int8)v146) != 0 )
                    v133 |= 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v146 = 1;
                goto LABEL_291;
              }
            }
            *v143 = v133;
            if ( v144 )
              MiWritePteShadow((__int64)v143, v133, v104);
            v106 = v187[1];
            goto LABEL_301;
          }
        }
        v118 = BugCheckParameter2;
        goto LABEL_238;
      }
    }
    v76 = v167;
    goto LABEL_129;
  }
  v45 = MiSearchNumaNodeTable(BugCheckParameter2);
  v179 = 1LL;
  PageChain = MiGetPageChain(v17, v170, *((_DWORD *)v45 + 2) + 1, v34, v36, v188, &v179);
  v17 = PageChain;
  if ( PageChain )
  {
    v42 = (unsigned __int128)((PageChain + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v164 = (PageChain + 0x58000000000LL) / 48;
    goto LABEL_60;
  }
  v31 = -1LL;
  v20 = 0;
LABEL_339:
  MiUnlockStealVm(v187);
  if ( v10 )
    MiReleaseFreshPage(v10);
  MiLockPageInline(a1, v158, v159, v160);
  if ( v20 == 1 )
  {
    if ( v181 )
      *v181 = v31;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
      v20 = 2;
    if ( v20 == 2 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      return (unsigned int)v17;
  }
  return v20;
}
