/*
 * XREFs of MiStealPage @ 0x140259C44
 * Callers:
 *     MiTradePage @ 0x14030B930 (MiTradePage.c)
 * Callees:
 *     MiLockStealSystemVm @ 0x1402150E4 (MiLockStealSystemVm.c)
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     MiReplacePageTablePage @ 0x140224260 (MiReplacePageTablePage.c)
 *     MiWriteValidPteNewPage @ 0x140234AD8 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSmallVaStillMapsFrame @ 0x14024C6F8 (MiSmallVaStillMapsFrame.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiReplacePageOfProtoPool @ 0x140256EFC (MiReplacePageOfProtoPool.c)
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiLockStealUserVm @ 0x140258F74 (MiLockStealUserVm.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiUnlockStealVm @ 0x14025B2B0 (MiUnlockStealVm.c)
 *     MiCopyPfnEntryEx @ 0x14025B9D0 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14025C3D4 (MiFinalizePageAttribute.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     MiGetPageChain @ 0x1402B7610 (MiGetPageChain.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiGetPteFromCopyList @ 0x1402E51D0 (MiGetPteFromCopyList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiVaIsPageFileHash @ 0x14030DD4C (MiVaIsPageFileHash.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140313DD0 (MI_WSLE_LOG_ACCESS.c)
 *     MiReleaseFaultState @ 0x14031A244 (MiReleaseFaultState.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiHyperSpaceSize @ 0x14031CC88 (MiHyperSpaceSize.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     MiGetPagePrivilege @ 0x140333440 (MiGetPagePrivilege.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x140341F58 (MiTbFlushType.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeSwapDirectoryTableBase @ 0x14038DB84 (KeSwapDirectoryTableBase.c)
 *     MiPrepareToStealNonPagedPool @ 0x1403C53DC (MiPrepareToStealNonPagedPool.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall MiStealPage(
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a2,
        int a3,
        __int64 a4,
        int a5,
        __int64 *a6)
{
  unsigned __int64 v9; // r12
  ULONG_PTR v10; // r13
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // r11
  int v14; // r10d
  ULONG_PTR v15; // rdi
  __int64 v16; // rcx
  __int64 PageChain; // r15
  int v18; // r10d
  unsigned int v19; // ebx
  int v20; // edx
  __int64 v21; // rax
  int v22; // ecx
  char v23; // al
  __int64 v24; // rcx
  char WsleContents; // al
  char v26; // r9
  __int64 v27; // rcx
  __int64 v28; // rdi
  unsigned int v29; // r8d
  char v30; // al
  unsigned int v31; // r12d
  int v32; // eax
  unsigned int v33; // edi
  unsigned int v34; // ebx
  int v35; // ebx
  int PfnChannel; // eax
  int v37; // ebx
  __int64 Page; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // r13
  int PagePrivilege; // eax
  unsigned int v42; // r11d
  int v43; // ebx
  signed __int64 v44; // rdi
  unsigned __int8 v45; // al
  bool v46; // cf
  int v47; // r14d
  unsigned __int8 CurrentIrql; // al
  char v49; // cl
  struct _KPRCB *v50; // r10
  int v51; // eax
  _DWORD *v52; // r9
  unsigned __int64 v53; // rdi
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r9
  _DWORD *v56; // r8
  int v57; // eax
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned __int8 v60; // al
  BOOL v61; // r14d
  int HasShadow; // eax
  int v63; // r11d
  __int64 *v64; // rax
  unsigned int v65; // eax
  unsigned __int64 v66; // rbx
  int v67; // eax
  __int64 IsPageFileHash; // rax
  volatile LONG *v69; // rbx
  unsigned __int8 v70; // al
  KIRQL v71; // di
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v74; // eax
  __int64 v75; // r9
  int v76; // r10d
  ULONG_PTR v77; // rbx
  __int16 v78; // dx
  unsigned __int8 v79; // al
  char v80; // cl
  unsigned __int8 v81; // al
  struct _KPRCB *v82; // r10
  int v83; // eax
  _DWORD *v84; // r9
  __int64 v85; // rdx
  __int64 v86; // rbx
  __int64 v87; // rdx
  unsigned __int64 v88; // rax
  unsigned int v89; // ebx
  __int64 v90; // rdx
  __int16 v91; // r12
  __int64 PteFromCopyList; // rax
  ULONG_PTR v93; // r8
  int v94; // ebx
  __int64 v95; // rax
  _KPROCESS *v96; // rdx
  int v97; // ecx
  __int64 v98; // rdx
  __int64 SharedVm; // rbx
  _KPROCESS *v100; // rax
  unsigned __int64 v101; // rbx
  int v102; // eax
  int v103; // edx
  int v104; // eax
  bool v105; // zf
  __int64 v106; // r11
  unsigned __int64 v107; // rbx
  int v108; // eax
  int v109; // r11d
  char v110; // al
  __int64 v111; // rcx
  unsigned __int64 v112; // rbx
  unsigned __int8 v113; // al
  struct _KPRCB *v114; // r10
  _DWORD *v115; // r9
  int v116; // eax
  __int64 v117; // rbx
  unsigned __int8 v118; // al
  struct _KPRCB *v119; // r10
  _DWORD *v120; // r9
  int v121; // eax
  struct _LIST_ENTRY *v122; // rax
  unsigned __int64 *v123; // rdi
  unsigned __int64 PteShadow; // rbx
  int v125; // eax
  struct _LIST_ENTRY *v126; // r11
  struct _LIST_ENTRY *v127; // rax
  __int64 *v128; // r12
  int v129; // edi
  int v130; // eax
  char v131; // al
  unsigned int v132; // eax
  char v133; // dl
  unsigned __int8 v134; // al
  KIRQL v135; // di
  struct _KPRCB *v136; // r10
  _DWORD *v137; // r9
  int v138; // eax
  char v139; // al
  unsigned __int8 v140; // al
  struct _KPRCB *v141; // r9
  _DWORD *v142; // r8
  int v143; // eax
  KIRQL v145; // [rsp+40h] [rbp-C0h]
  char v146[7]; // [rsp+41h] [rbp-BFh] BYREF
  __int64 v147; // [rsp+48h] [rbp-B8h]
  unsigned int v148; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2a; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v150; // [rsp+60h] [rbp-A0h]
  __int64 v151; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v152; // [rsp+70h] [rbp-90h]
  __int64 v153; // [rsp+78h] [rbp-88h]
  __int64 v154; // [rsp+80h] [rbp-80h]
  int v155; // [rsp+88h] [rbp-78h]
  _KPROCESS *Process; // [rsp+90h] [rbp-70h]
  struct _LIST_ENTRY *v157; // [rsp+98h] [rbp-68h]
  int v158; // [rsp+A0h] [rbp-60h] BYREF
  int v159; // [rsp+A4h] [rbp-5Ch] BYREF
  _QWORD *v160; // [rsp+A8h] [rbp-58h]
  __int64 v161; // [rsp+B0h] [rbp-50h]
  __int64 v162; // [rsp+B8h] [rbp-48h] BYREF
  ULONG_PTR v163; // [rsp+C0h] [rbp-40h]
  __int64 *v164; // [rsp+C8h] [rbp-38h]
  _QWORD v165[5]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-8h]
  _KPROCESS *v167; // [rsp+100h] [rbp+0h]
  __int64 v168; // [rsp+108h] [rbp+8h]
  struct _LIST_ENTRY *Flink; // [rsp+110h] [rbp+10h]
  _QWORD v170[15]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v171; // [rsp+198h] [rbp+98h]
  _QWORD v172[24]; // [rsp+1A0h] [rbp+A0h] BYREF

  v151 = a4;
  v164 = a6;
  v146[0] = 0;
  v145 = 0;
  memset((char *)v170 + 4, 0, 0x74uLL);
  v9 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
  v163 = 0LL;
  v161 = 0LL;
  v10 = 0LL;
  v155 = 0;
  v152 = (unsigned __int64 *)v9;
  LODWORD(v170[0]) = a3;
  v171 = -1LL;
  v157 = 0LL;
  v150 = (__int64)(v9 << 25) >> 16;
  LeafVa = MiGetLeafVa(v150);
  if ( v12 < 0xFFFFF68000000000uLL || v12 > 0xFFFFF6FFFFFFFFFFuLL )
    v14 = LODWORD(v170[1]) | 1;
  else
    v14 = LODWORD(v170[1]) | 8;
  LODWORD(v170[1]) = v14;
  v147 = v13;
  v15 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  BugCheckParameter2a = v15;
  if ( a6 )
    *a6 = v13;
  v16 = (*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL;
  Process = 0LL;
  PageChain = *(_QWORD *)(qword_140C4E688 + 8 * v16);
  v154 = PageChain;
  if ( LeafVa < 0xFFFF800000000000uLL )
    goto LABEL_15;
  if ( LeafVa >= qword_140C4FB78 && LeafVa <= qword_140C4E3A8 )
  {
    v18 = v14 | 8;
    if ( (v18 & 1) != 0 )
    {
      v14 = v18 | 2;
      if ( v150 >= qword_140C4E3A0 && v150 < qword_140C4E3A0 + MiHyperSpaceSize(2LL) )
        v14 |= 0x100u;
    }
    else
    {
      v14 = v18 | 4;
    }
LABEL_15:
    v14 |= 0x1000u;
    LODWORD(v170[1]) = v14;
  }
  if ( (v14 & 0x1000) != 0 )
  {
    v19 = MiLockStealUserVm(PageChain, BugCheckParameter2, a2, v9, (__int64)v170);
    if ( v19 != 1 )
      goto LABEL_18;
    v20 = v170[6];
    Process = KeGetCurrentThread()->ApcState.Process;
    v153 = v170[3];
    v148 = 0;
    v21 = v151;
LABEL_22:
    LOBYTE(v22) = v170[1];
    goto LABEL_23;
  }
  v19 = MiLockStealSystemVm(BugCheckParameter2, a2, v9, (__int64)v170);
  if ( v19 != 1 )
  {
LABEL_18:
    MiLockPageInline(BugCheckParameter2);
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
      return 0;
    return v19;
  }
  v20 = v170[6];
  v19 = 0;
  v153 = v170[3];
  v29 = 1;
  v148 = 1;
  v30 = *(_BYTE *)(v170[3] + 184LL) & 7;
  if ( v30 == 7 )
  {
    v21 = v151;
    if ( !*(_QWORD *)(v151 + 16) )
    {
      v28 = v147;
      LODWORD(PageChain) = 0;
      goto LABEL_338;
    }
    v148 = 2;
  }
  else
  {
    if ( ((v30 - 1) & 0xFD) != 0 )
    {
      if ( LODWORD(v170[6]) == 1 )
        v29 = 2;
      v148 = v29;
    }
    v21 = v151;
  }
  if ( LODWORD(v170[6]) != 3 )
    goto LABEL_22;
  if ( (v170[1] & 1) != 0 )
    v22 = LODWORD(v170[1]) | 0xA;
  else
    v22 = LODWORD(v170[1]) | 0xC;
  LODWORD(v170[1]) = v22;
LABEL_23:
  if ( !*(_QWORD *)(v21 + 16) )
  {
    LODWORD(PageChain) = 0;
    v19 = 0;
    if ( (v22 & 0x20) != 0
      || (*(_BYTE *)(BugCheckParameter2 + 34) & 0x10) != 0
      || v20 == 2
      || (v22 & 8) != 0
      || (v23 = MI_READ_PTE_LOCK_FREE(v9), v24 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL, v24 == v15)
      || (v23 & 0x42) != 0
      || (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0
      || (WsleContents = MiGetWsleContents(v24, v150), (WsleContents & 0xF) == v26) )
    {
      v28 = v147;
    }
    else
    {
      memset(v172, 0, 0xB8uLL);
      LODWORD(v172[0]) = MiTbFlushType(v153);
      WORD2(v172[0]) = 4;
      v172[2] = 0LL;
      LODWORD(v172[1]) = 20;
      v172[3] = 0LL;
      if ( dword_140C4E868 )
        MI_WSLE_LOG_ACCESS(v27, v9);
      MiInsertTbFlushEntry(v172, v150, 1LL, 0LL);
      v28 = v147;
      if ( !MiFreeWsleList(v153, v172, 0LL) )
        v19 = 2;
    }
    goto LABEL_338;
  }
  v31 = *(unsigned __int8 *)(BugCheckParameter2 + 34) >> 6;
  if ( a5 == -1 )
  {
    v35 = *(_DWORD *)(MiSearchNumaNodeTable((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) + 8);
    PfnChannel = MiGetPfnChannel(BugCheckParameter2);
    v37 = dword_140C4DF38 & v15 | (v35 << byte_140C4DECC);
    v33 = 0;
    v34 = (PfnChannel << byte_140C4DECD) | v37;
    if ( (a3 & 0x3000000) != 0 )
      v33 = 0x10000;
  }
  else
  {
    v32 = dword_140C4DF38 & v15;
    v33 = 48;
    v34 = v32 | a5 & ~dword_140C4DF38;
  }
  if ( v171 == -1 )
  {
    Page = MiGetPage(PageChain, v34, v33);
    LODWORD(PageChain) = 0;
    v147 = Page;
    v19 = 0;
    if ( Page == -1 )
    {
      v28 = -1LL;
      goto LABEL_338;
    }
    PageChain = 48 * Page - 0x58000000000LL;
LABEL_60:
    if ( PageChain == BugCheckParameter2 )
    {
      v28 = v147;
      v19 = 1;
      LODWORD(PageChain) = 0;
      goto LABEL_338;
    }
    v40 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
    if ( (MiFlags & 0x8000) != 0 )
    {
      PagePrivilege = MiGetPagePrivilege(BugCheckParameter2);
      v42 = 0;
      if ( PagePrivilege )
      {
        v43 = LODWORD(v170[1]) | 0x2000;
        LODWORD(v170[1]) |= 0x2000u;
        goto LABEL_67;
      }
    }
    else
    {
      v42 = 0;
    }
    v43 = v170[1];
LABEL_67:
    v44 = 0LL;
    if ( *(_WORD *)(BugCheckParameter2 + 32) != 1 )
      goto LABEL_68;
    v47 = v170[6];
    if ( ((*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 || (*(_BYTE *)BugCheckParameter2 & 1) == 0)
      && LODWORD(v170[6]) != 2
      && (v43 & 0x26) == 0
      || (*(_BYTE *)(BugCheckParameter2 + 34) & 7) != 6
      || v154 != *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL)) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( !KiIrqlFlags )
        goto LABEL_86;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_86;
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql > 0xFu || (unsigned __int8)v40 > 0xFu )
        goto LABEL_86;
      v46 = CurrentIrql < 2u;
LABEL_82:
      if ( !v46 )
      {
        v49 = v40 + 1;
        goto LABEL_84;
      }
      goto LABEL_86;
    }
    if ( (v43 & 0x20) == 0 )
    {
      v58 = MI_READ_PTE_LOCK_FREE(v152);
      v42 = 0;
      v44 = v58;
    }
    if ( v47 != 3 && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v148 == 1 )
    {
      if ( (v43 & 0x10) == 0 )
      {
LABEL_68:
        _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !KiIrqlFlags )
          goto LABEL_86;
        if ( (KiIrqlFlags & 1) == 0 )
          goto LABEL_86;
        v45 = KeGetCurrentIrql();
        if ( v45 > 0xFu || (unsigned __int8)v40 > 0xFu )
          goto LABEL_86;
        v46 = v45 < 2u;
        goto LABEL_82;
      }
      v43 |= 0x208u;
      LODWORD(v170[1]) = v43;
    }
    if ( v47 != 2 )
    {
      if ( (v43 & 0x20) != 0 )
      {
        v59 = MiPrepareToStealNonPagedPool(BugCheckParameter2, v152);
        v42 = 0;
        v44 = v59;
        if ( !v59 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( !KiIrqlFlags )
            goto LABEL_86;
          if ( (KiIrqlFlags & 1) == 0 )
            goto LABEL_86;
          v60 = KeGetCurrentIrql();
          if ( v60 > 0xFu || (unsigned __int8)v40 > 0xFu )
            goto LABEL_86;
          goto LABEL_112;
        }
      }
      else if ( ((v43 & 8) == 0 || (v43 & 0x100) != 0) && ((v44 & 0x42) != 0 || (v43 & 0x2000) != 0) )
      {
        if ( (v43 & 0x100) != 0 )
        {
          MiWriteValidPteNewProtection(v152, v44 & 0xFFFFFFFFFFFFFFBDuLL);
        }
        else
        {
          v61 = 0;
          LODWORD(v170[1]) = v43 | 0x40;
          if ( (unsigned int)MiPteInShadowRange(v152) )
          {
            HasShadow = MiPteHasShadow();
            v63 = 1;
            v61 = HasShadow != 0;
          }
          else
          {
            v63 = 1;
          }
          v64 = (__int64 *)v152;
          *v152 = v44 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( v61 )
            MiWritePteShadow((__int64)v64, v44 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
          v155 = v63;
        }
        v65 = MiTbFlushType(v153);
        v66 = v150;
        KeFlushSingleTb(v150, v65, v148);
LABEL_128:
        v67 = v148;
        if ( v148 == 1 )
        {
          if ( (v170[1] & 4) != 0 )
            v67 = 2;
          v148 = v67;
        }
        MiLockNestedPageAtDpcInline(PageChain);
        MiFinalizePageAttribute(PageChain, v31, 1LL);
        if ( LODWORD(v170[6]) == 2 )
        {
          IsPageFileHash = MiVaIsPageFileHash(v154, v66);
          v42 = 0;
          v161 = IsPageFileHash;
          if ( !IsPageFileHash )
            goto LABEL_145;
          v69 = (volatile LONG *)(IsPageFileHash + 232);
          v145 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(IsPageFileHash + 232));
          if ( v161 != MiVaIsPageFileHash(v154, v150) || !MiSmallVaStillMapsFrame(v150, BugCheckParameter2a) )
          {
            ExReleaseSpinLockSharedFromDpcLevel(v69);
            v42 = 0;
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v70 = KeGetCurrentIrql(), v70 <= 0xFu) )
            {
              v71 = v145;
              if ( v145 <= 0xFu && v70 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v74 = ~(unsigned __int16)(-1LL << (v145 + 1));
                v105 = (v74 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v74;
                if ( v105 )
                {
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  v42 = 0;
                }
              }
            }
            else
            {
              v71 = v145;
            }
            __writecr8(v71);
LABEL_145:
            _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( !KiIrqlFlags )
              goto LABEL_86;
            if ( (KiIrqlFlags & 1) == 0 )
              goto LABEL_86;
            v60 = KeGetCurrentIrql();
            if ( v60 > 0xFu || (unsigned __int8)v40 > 0xFu )
              goto LABEL_86;
LABEL_112:
            if ( v60 >= 2u )
            {
              v49 = v40 + 1;
LABEL_84:
              v50 = KeGetCurrentPrcb();
              v51 = ~(unsigned __int16)(-1LL << v49);
              v52 = v50->SchedulerAssist;
              v105 = (v51 & v52[5]) == 0;
              v52[5] &= v51;
              if ( v105 )
              {
                KiRemoveSystemWorkPriorityKick(v50);
                v42 = 0;
              }
            }
LABEL_86:
            __writecr8(v40);
LABEL_87:
            v10 = PageChain;
            v19 = v42;
LABEL_88:
            if ( !v10 )
            {
              v28 = v147;
              LODWORD(PageChain) = 0;
              goto LABEL_338;
            }
            v53 = (unsigned __int8)MiLockPageInline(v10);
            *(_BYTE *)(v10 + 34) = *(_BYTE *)(v10 + 34) & 0xF8 | 5;
            _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            LODWORD(PageChain) = 0;
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v54 = KeGetCurrentIrql();
                if ( v54 <= 0xFu && (unsigned __int8)v53 <= 0xFu && v54 >= 2u )
                {
                  v55 = KeGetCurrentPrcb();
                  v56 = v55->SchedulerAssist;
                  v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v53 + 1));
                  v105 = (v57 & v56[5]) == 0;
                  v56[5] &= v57;
                  if ( v105 )
                    KiRemoveSystemWorkPriorityKick(v55);
                }
              }
            }
            __writecr8(v53);
            goto LABEL_332;
          }
        }
        MiCopyPfnEntryEx(PageChain, BugCheckParameter2);
        v77 = BugCheckParameter2a;
        if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL) == BugCheckParameter2a )
          *(_QWORD *)(PageChain + 40) ^= (v147 ^ *(_QWORD *)(PageChain + 40)) & 0xFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v78 = v170[1];
        if ( (v170[1] & 0x20) == 0 && LODWORD(v170[6]) != v76 )
        {
          if ( (v170[1] & 0x200) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v79 = KeGetCurrentIrql();
                if ( v79 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v79 >= (unsigned __int8)v76 )
                {
                  v80 = v40 + 1;
LABEL_177:
                  v82 = KeGetCurrentPrcb();
                  v83 = ~(unsigned __int16)(-1LL << v80);
                  v84 = v82->SchedulerAssist;
                  v105 = (v83 & v84[5]) == 0;
                  v84[5] &= v83;
                  if ( v105 )
                    KiRemoveSystemWorkPriorityKick(v82);
                  v75 = 0LL;
                  goto LABEL_180;
                }
              }
            }
            goto LABEL_180;
          }
          if ( ((LODWORD(v170[1]) >> 3) & 1) == 0 && !v148 || (v170[1] & 0xA) == 0xA || (v170[1] & 0x100) != 0 )
          {
            *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
            goto LABEL_171;
          }
          if ( ((LODWORD(v170[1]) >> 3) & 1) != 0 && (v170[1] & (unsigned __int8)v76) == 0 && !v148
            || LODWORD(v170[6]) == 3 && (v170[1] & 4) != 0 )
          {
LABEL_171:
            _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v81 = KeGetCurrentIrql();
                if ( v81 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v81 >= (unsigned __int8)v76 )
                {
                  v80 = v40 + 1;
                  goto LABEL_177;
                }
              }
            }
LABEL_180:
            __writecr8(v40);
            v78 = v170[1];
            LOBYTE(v40) = 17;
          }
        }
        if ( (v78 & 0x200) != 0 )
        {
          v154 = MiLockProtoPoolPage(v150, v146);
          v86 = v154;
          if ( !v154 )
          {
LABEL_183:
            MiSetOriginalPtePfnFromFreeList(PageChain + 16, v85);
            goto LABEL_87;
          }
          if ( *(_WORD *)(v154 + 32) > 2u )
          {
LABEL_185:
            LOBYTE(v85) = v146[0];
            MiUnlockProtoPoolPage(v86, v85);
            MiSetOriginalPtePfnFromFreeList(PageChain + 16, v87);
            v42 = 0;
            goto LABEL_87;
          }
          v44 = MI_READ_PTE_LOCK_FREE(v152);
          if ( (v44 & 0x42) != 0 )
          {
            v158 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v86 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v158);
              while ( *(__int64 *)(v86 + 24) < 0 );
            }
            if ( *(_WORD *)(v86 + 32) > 2u )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v86 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              goto LABEL_185;
            }
            MiWriteValidPteNewProtection(v152, v44 & 0xFFFFFFFFFFFFFFBDuLL);
            KeFlushSingleTb(v150, 0, 1u);
            v88 = MiCaptureDirtyBitToPfn(v86);
            _InterlockedAnd64((volatile signed __int64 *)(v86 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( v88 )
              MiReleasePageFileInfo(
                *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v86 + 40) >> 39) & 0x3FFLL)),
                v88,
                1);
            v159 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(PageChain + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v159);
              while ( *(__int64 *)(PageChain + 24) < 0 );
            }
            MiCaptureDirtyBitToPfn(PageChain);
            _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v78 = v170[1];
          LODWORD(v75) = 0;
          v77 = BugCheckParameter2a;
        }
        else
        {
          v146[0] = 17;
          v154 = v75;
        }
        if ( (v78 & 0x200) == 0
          && (LODWORD(v170[6]) != 3 || (v78 & 4) == 0)
          && ((v78 & 8) == 0 || (v78 & 2) != 0 || v148 != (_DWORD)v75) )
        {
          if ( (_BYTE)v40 != 17 )
          {
            MiLockNestedPageAtDpcInline(PageChain);
            v78 = v170[1];
          }
          v89 = ((_BYTE)v40 != 17 ? 4 : 0) | 2;
          if ( (v78 & 0x2000) == 0 )
            v89 = (_BYTE)v40 != 17 ? 4 : 0;
          MiCopyPage(v147, BugCheckParameter2a, v151, v89);
          if ( (v89 & 4) != 0 )
            _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v91 = v170[1];
          if ( (v170[1] & 0x20) == 0 && (_BYTE)v40 != 17 )
            *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
          goto LABEL_263;
        }
        PteFromCopyList = MiGetPteFromCopyList(v151, v147, v77);
        v160 = (_QWORD *)PteFromCopyList;
        if ( (v170[1] & 0x200) != 0 )
        {
          LODWORD(v151) = MiReplacePageOfProtoPool(v150, v77, v147, ((PteFromCopyList << 25) - (__int64)v157) >> 16);
          goto LABEL_228;
        }
        CurrentThread = KeGetCurrentThread();
        v165[1] = v150;
        v165[3] = v77;
        v165[4] = v147;
        v93 = BugCheckParameter2a;
        v165[2] = ((PteFromCopyList << 25) - (__int64)v157) >> 16;
        v168 = 0LL;
        Flink = 0LL;
        v94 = 1;
        v165[0] = v153;
        v167 = CurrentThread->ApcState.Process;
        v95 = *(_QWORD *)(BugCheckParameter2 + 40) & 0xFFFFFFFFFLL;
        LODWORD(v151) = 1;
        if ( v95 == BugCheckParameter2a )
        {
          if ( (*(_BYTE *)(v153 + 187) & 2) != 0
            || _interlockedbittestandset((volatile signed __int32 *)&Process[2].Header.WaitListHead.Flink + 1, 1u) )
          {
            LODWORD(v151) = 0;
            goto LABEL_228;
          }
          v96 = v167;
          v97 = LODWORD(v170[1]) | 0x400;
          LODWORD(v170[1]) |= 0x400u;
          if ( v167->DirectoryTableBase >> 12 != v93 )
          {
            HIDWORD(v168) = 1;
            Flink = v167[1].ProcessListEntry.Flink;
            LODWORD(v170[1]) = v97 | 0x4000;
          }
          LOBYTE(v96) = 17;
          MiReleaseFaultState(&v170[3], v96, 0LL);
          KeSwapDirectoryTableBase(v167, HIDWORD(v168), v165);
          SharedVm = MiGetSharedVm(v153, v98);
          ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)SharedVm);
          v100 = Process;
          *(_DWORD *)(SharedVm + 4) = 0;
          _InterlockedAnd((volatile signed __int32 *)&v100[2].Header.WaitListHead.Flink + 1, 0xFFFFFFFD);
          v94 = v151;
        }
        else
        {
          MiReplacePageTablePage((__int64)v165);
        }
        if ( (int)v168 < 0 )
          v94 = 0;
        LODWORD(v151) = v94;
LABEL_228:
        v101 = ZeroPte;
        LODWORD(BugCheckParameter2a) = 0;
        v102 = MiPteInShadowRange(v160);
        v103 = 0;
        if ( v102 )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v104 = v103 + 1;
            if ( HIBYTE(word_140C4E048) != (_BYTE)v103 )
              goto LABEL_237;
            v105 = ((unsigned __int8)ZeroPte & (unsigned __int8)(v103 + 1)) == 0;
            goto LABEL_232;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v105 = (ZeroPte & 1) == 0;
            v104 = BugCheckParameter2a;
LABEL_232:
            if ( !v105 )
              v101 = ZeroPte | 0x8000000000000000uLL;
LABEL_237:
            v106 = (__int64)v160;
            *v160 = v101;
            if ( v104 )
            {
              MiWritePteShadow(v106, v101);
              v103 = 0;
            }
            v107 = ZeroPte;
            LODWORD(BugCheckParameter2a) = v103;
            v108 = MiPteInShadowRange(v106 + 8);
            v109 = 0;
            if ( !v108 )
              goto LABEL_247;
            if ( (unsigned int)MiPteHasShadow() )
            {
              v110 = v109 + 1;
              LODWORD(BugCheckParameter2a) = v109 + 1;
              if ( HIBYTE(word_140C4E048) == (_BYTE)v109 )
              {
LABEL_245:
                if ( ((unsigned __int8)ZeroPte & (unsigned __int8)v110) != 0 )
                  v107 = ZeroPte | 0x8000000000000000uLL;
              }
            }
            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            {
              v110 = 1;
              goto LABEL_245;
            }
LABEL_247:
            v111 = (__int64)(v160 + 1);
            v160[1] = v107;
            if ( (_DWORD)BugCheckParameter2a != v109 )
              MiWritePteShadow(v111, v107);
            if ( (_DWORD)v151 == v109 )
            {
              if ( (v170[1] & 0x200) != 0 )
              {
                LOBYTE(v85) = v146[0];
                MiUnlockProtoPoolPage(v154, v85);
              }
              goto LABEL_183;
            }
            if ( (v170[1] & 0x200) != 0 )
            {
              *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
              *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(BugCheckParameter2 + 24) & 0xC000000000000000uLL | 1;
              MiLockNestedPageAtDpcInline(PageChain);
            }
            else
            {
              v112 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
              *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
              v90 = 1LL;
              *(_QWORD *)(BugCheckParameter2 + 24) = *(_QWORD *)(BugCheckParameter2 + 24) & 0xC000000000000000uLL | 1;
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v113 = KeGetCurrentIrql();
                  if ( v113 <= 0xFu && (unsigned __int8)v112 <= 0xFu && v113 >= 2u )
                  {
                    v114 = KeGetCurrentPrcb();
                    v90 = -1LL << ((unsigned __int8)v112 + 1);
                    v115 = v114->SchedulerAssist;
                    v116 = ~(unsigned __int16)v90;
                    v105 = (v116 & v115[5]) == 0;
                    v115[5] &= v116;
                    if ( v105 )
                      KiRemoveSystemWorkPriorityKick(v114);
                  }
                }
              }
              __writecr8(v112);
              LOBYTE(v40) = 17;
            }
            v91 = v170[1];
LABEL_263:
            v117 = v44 ^ (v44 ^ (v147 << 12)) & 0xFFFFFFFFF000LL;
            if ( (v91 & 0x20) != 0 )
            {
              MiLockNestedPageAtDpcInline(PageChain);
              if ( v44 != _InterlockedCompareExchange64((volatile signed __int64 *)v152, v117 | 0x20, v44) )
              {
                MiSetOriginalPtePfnFromFreeList(PageChain + 16, v90);
                *(_BYTE *)(PageChain + 34) = *(_BYTE *)(PageChain + 34) & 0xF8 | 5;
                _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v42 = 0;
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v118 = KeGetCurrentIrql();
                    if ( v118 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v118 >= 2u )
                    {
                      v119 = KeGetCurrentPrcb();
                      v120 = v119->SchedulerAssist;
                      v121 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
                      v105 = (v121 & v120[5]) == 0;
                      v120[5] &= v121;
                      if ( v105 )
                      {
                        KiRemoveSystemWorkPriorityKick(v119);
                        v42 = 0;
                      }
                    }
                  }
                }
                __writecr8((unsigned __int8)v40);
                goto LABEL_87;
              }
              _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
              v91 = v170[1];
              *(_BYTE *)(BugCheckParameter2 + 34) = *(_BYTE *)(BugCheckParameter2 + 34) & 0xF8 | 5;
LABEL_302:
              if ( (v91 & 0x200) != 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
                _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                LOBYTE(v90) = v146[0];
                MiUnlockProtoPoolPage(v154, v90);
                LOBYTE(v40) = 17;
              }
              else if ( (v91 & 0x10) != 0 && (v91 & 0x40) == 0 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(PageChain + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              if ( ((*(_QWORD *)(BugCheckParameter2 + 40) >> 60) & 7) == 3 )
              {
                v133 = 12;
                if ( (_BYTE)v40 == 17 )
                  v133 = 8;
                MiClearPfnImageVerified(BugCheckParameter2, v133);
              }
              if ( LODWORD(v170[6]) == 2 )
              {
                ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v161 + 232));
                LODWORD(PageChain) = 0;
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v134 = KeGetCurrentIrql(), v134 <= 0xFu) )
                {
                  v135 = v145;
                  if ( v145 <= 0xFu && v134 >= 2u )
                  {
                    v136 = KeGetCurrentPrcb();
                    v137 = v136->SchedulerAssist;
                    v138 = ~(unsigned __int16)(-1LL << (v145 + 1));
                    v105 = (v138 & v137[5]) == 0;
                    v137[5] &= v138;
                    if ( v105 )
                      KiRemoveSystemWorkPriorityKick(v136);
                  }
                }
                else
                {
                  v135 = v145;
                }
                __writecr8(v135);
              }
              else
              {
                LODWORD(PageChain) = 0;
              }
              if ( (_BYTE)v40 == 17 )
                LOBYTE(v40) = MiLockPageInline(BugCheckParameter2);
              *(_QWORD *)(BugCheckParameter2 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
              *(_BYTE *)(BugCheckParameter2 + 34) &= 0xC7u;
              v139 = *(_BYTE *)(BugCheckParameter2 + 35) & 0xDF;
              *(_WORD *)(BugCheckParameter2 + 32) = 0;
              *(_BYTE *)(BugCheckParameter2 + 35) = v139;
              *(_QWORD *)(BugCheckParameter2 + 24) &= 0xC000000000000000uLL;
              _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v140 = KeGetCurrentIrql();
                  if ( v140 <= 0xFu && (unsigned __int8)v40 <= 0xFu && v140 >= 2u )
                  {
                    v141 = KeGetCurrentPrcb();
                    v142 = v141->SchedulerAssist;
                    v143 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v40 + 1));
                    v105 = (v143 & v142[5]) == 0;
                    v142[5] &= v143;
                    if ( v105 )
                      KiRemoveSystemWorkPriorityKick(v141);
                  }
                }
              }
              __writecr8((unsigned __int8)v40);
              v10 = v163;
              v19 = 1;
LABEL_332:
              v28 = v147;
              goto LABEL_338;
            }
            if ( (v91 & 0x400) != 0 )
            {
              if ( (v91 & 0x4000) != 0 )
              {
                v122 = Process[1].ProcessListEntry.Flink;
                v157 = v122;
                if ( !v122 )
                  goto LABEL_282;
                v123 = (unsigned __int64 *)((((unsigned __int64)v122 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                PteShadow = *v123;
                v125 = MiPteInShadowRange(v123);
                v126 = 0LL;
                if ( v125 )
                  PteShadow = MiReadPteShadow(v123, PteShadow);
                v127 = v126;
                if ( ((PteShadow >> 12) & 0xFFFFFFFFFLL) == v147 )
                  v127 = v157;
                if ( !v127 )
                {
LABEL_282:
                  v19 = 2;
                  v10 = BugCheckParameter2;
                  MiSetOriginalPtePfnFromFreeList(BugCheckParameter2 + 16, v90);
                  goto LABEL_88;
                }
                goto LABEL_300;
              }
              goto LABEL_299;
            }
            if ( (v91 & 0x40) == 0 )
            {
              if ( (v91 & 0x200) == 0 && (v91 & 0x10) != 0 )
                MiLockNestedPageAtDpcInline(PageChain);
              MiWriteValidPteNewPage((__int64 *)v152, v117, 0);
              v91 = v170[1];
LABEL_299:
              LODWORD(v126) = 0;
LABEL_300:
              if ( v155 == (_DWORD)v126 )
              {
                v132 = MiTbFlushType(v153);
                KeFlushSingleTb(v150, v132, v148);
                v91 = v170[1];
              }
              goto LABEL_302;
            }
            v128 = (__int64 *)v152;
            v129 = 0;
            v130 = MiPteInShadowRange(v152);
            LODWORD(v126) = 0;
            if ( v130 )
            {
              if ( (unsigned int)MiPteHasShadow() )
              {
                v131 = (_BYTE)v126 + 1;
                v129 = (_DWORD)v126 + 1;
                if ( HIBYTE(word_140C4E048) == (_BYTE)v126 )
                {
LABEL_290:
                  if ( ((unsigned __int8)v117 & (unsigned __int8)v131) != 0 )
                    v117 |= 0x8000000000000000uLL;
                }
              }
              else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
              {
                v131 = 1;
                goto LABEL_290;
              }
            }
            *v128 = v117;
            if ( v129 )
              MiWritePteShadow((__int64)v128, v117);
            v91 = v170[1];
            goto LABEL_300;
          }
        }
        v104 = BugCheckParameter2a;
        goto LABEL_237;
      }
    }
    v66 = v150;
    goto LABEL_128;
  }
  v39 = MiSearchNumaNodeTable(BugCheckParameter2a);
  v162 = 1LL;
  PageChain = MiGetPageChain(PageChain, v153, *(_DWORD *)(v39 + 8) + 1, v31, v33, v171, (__int64)&v162);
  if ( PageChain )
  {
    v147 = (PageChain + 0x58000000000LL) / 48;
    goto LABEL_60;
  }
  v28 = -1LL;
  v19 = 0;
LABEL_338:
  MiUnlockStealVm(v170);
  if ( v10 )
    MiReleaseFreshPage(v10);
  MiLockPageInline(BugCheckParameter2);
  if ( v19 == 1 )
  {
    if ( v164 )
      *v164 = v28;
  }
  else
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) != 6 )
      v19 = 2;
    if ( v19 == 2 && (*(_QWORD *)(BugCheckParameter2 + 24) & 0x4000000000000000LL) != 0 )
      return (unsigned int)PageChain;
  }
  return v19;
}
