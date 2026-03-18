/*
 * XREFs of MiStealPage @ 0x1402E97D4
 * Callers:
 *     MiTradePage @ 0x140277580 (MiTradePage.c)
 * Callees:
 *     KeSwapDirectoryTableBase @ 0x140216C28 (KeSwapDirectoryTableBase.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiLockStealSystemVm @ 0x140230F28 (MiLockStealSystemVm.c)
 *     MiLockNestedPageAtDpcInline @ 0x140239060 (MiLockNestedPageAtDpcInline.c)
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiPrepareToStealNonPagedPool @ 0x14024DE5C (MiPrepareToStealNonPagedPool.c)
 *     MiSmallVaStillMapsFrame @ 0x14024F014 (MiSmallVaStillMapsFrame.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiWriteValidPteNewPage @ 0x14026EDE4 (MiWriteValidPteNewPage.c)
 *     MiReplacePageOfProtoPool @ 0x14026FB78 (MiReplacePageOfProtoPool.c)
 *     MiLockProtoPoolPage @ 0x140273AF0 (MiLockProtoPoolPage.c)
 *     MI_WSLE_LOG_ACCESS @ 0x140274D10 (MI_WSLE_LOG_ACCESS.c)
 *     MiHyperSpaceSize @ 0x14027A0F4 (MiHyperSpaceSize.c)
 *     MiVaIsPageFileHash @ 0x14027B604 (MiVaIsPageFileHash.c)
 *     MiReleaseFaultState @ 0x14027DA5C (MiReleaseFaultState.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiSearchNumaNodeTable @ 0x1402C1550 (MiSearchNumaNodeTable.c)
 *     MiFreeWsleList @ 0x1402C1D70 (MiFreeWsleList.c)
 *     MiGetPteFromCopyList @ 0x1402CBF80 (MiGetPteFromCopyList.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiGetLeafVa @ 0x1402CFEB0 (MiGetLeafVa.c)
 *     MiReleasePageFileInfo @ 0x1402E20D0 (MiReleasePageFileInfo.c)
 *     MiFinalizePageAttribute @ 0x1402E5708 (MiFinalizePageAttribute.c)
 *     MiCopyPage @ 0x1402E7D60 (MiCopyPage.c)
 *     MiCopyPfnEntryEx @ 0x1402E8154 (MiCopyPfnEntryEx.c)
 *     MiGetPfnChannel @ 0x1402E8990 (MiGetPfnChannel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiUnlockStealVm @ 0x1402EA5E4 (MiUnlockStealVm.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MiLockStealUserVm @ 0x1402EACBC (MiLockStealUserVm.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiGetPageChain @ 0x140323D70 (MiGetPageChain.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiTbFlushType @ 0x140333AA0 (MiTbFlushType.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiGetWsleContents @ 0x14033A410 (MiGetWsleContents.c)
 *     MiCaptureDirtyBitToPfn @ 0x14033C2A0 (MiCaptureDirtyBitToPfn.c)
 *     MiSetPfnIdentity @ 0x14033C300 (MiSetPfnIdentity.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     MiReplacePageTablePage @ 0x14036CF60 (MiReplacePageTablePage.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiStealPage(
        __m128i *BugCheckParameter2,
        char a2,
        unsigned int a3,
        unsigned int *a4,
        int a5,
        unsigned __int64 *a6)
{
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  unsigned __int64 LeafVa; // r9
  unsigned __int64 v13; // r11
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  int v16; // r10d
  unsigned __int64 v17; // r13
  __int64 v18; // rcx
  __int64 v19; // r12
  unsigned int v20; // ebx
  int v21; // edx
  unsigned int *v22; // rax
  int v23; // ecx
  unsigned int v24; // r15d
  int v25; // ebx
  unsigned int v26; // ebx
  unsigned int v27; // edi
  unsigned __int64 v28; // r14
  __int64 Page; // rax
  __m128i *PageChain; // r13
  unsigned __int64 v31; // r12
  int v32; // ebx
  unsigned __int64 v33; // rdi
  int v34; // r14d
  BOOL v35; // r14d
  int v36; // r11d
  __int64 *v37; // rax
  unsigned int v38; // eax
  unsigned __int64 v39; // r14
  int v40; // eax
  ULONG_PTR v41; // rbx
  __int16 v42; // cx
  __int16 v43; // ax
  __int16 v44; // bx
  __int64 v45; // rdx
  __int16 v46; // r15
  __int64 v47; // rbx
  __int64 *v48; // r15
  int v49; // edi
  int v50; // eax
  int v51; // r11d
  __int8 v52; // al
  int v54; // r10d
  int v55; // r8d
  char v56; // al
  unsigned int v57; // eax
  int v58; // eax
  signed __int64 v59; // rbx
  unsigned __int64 *PteFromCopyList; // rax
  ULONG_PTR v61; // r10
  int v62; // ebx
  __int64 v63; // rax
  unsigned __int64 v64; // rbx
  int v65; // eax
  int v66; // edx
  int v67; // eax
  __int64 v68; // r11
  unsigned __int64 v69; // rbx
  int v70; // eax
  __int64 v71; // rdx
  __int64 v72; // r11
  __int64 v73; // rcx
  unsigned __int64 v74; // rbx
  __int64 v75; // rbx
  unsigned __int64 v76; // rax
  int v77; // ecx
  volatile LONG *SharedVm; // rbx
  _KPROCESS *v79; // rax
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 v81; // rax
  char v82; // al
  __int64 v83; // rcx
  __int64 v84; // rcx
  _QWORD *v85; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v89; // eax
  unsigned __int8 v90; // al
  struct _KPRCB *v91; // r10
  _DWORD *v92; // r9
  int v93; // eax
  unsigned __int8 v94; // al
  struct _KPRCB *v95; // r10
  _DWORD *v96; // r9
  int v97; // eax
  unsigned __int8 v98; // al
  char v99; // cl
  struct _KPRCB *v100; // r10
  int v101; // eax
  _DWORD *v102; // r9
  int HasShadow; // eax
  __int64 IsPageFileHash; // rax
  KIRQL v105; // r15
  unsigned __int8 v106; // al
  struct _KPRCB *v107; // r10
  _DWORD *v108; // r9
  int v109; // eax
  unsigned __int8 v110; // al
  unsigned __int8 v111; // al
  struct _KPRCB *v112; // r10
  _DWORD *v113; // r9
  int v114; // eax
  __int64 v115; // rcx
  bool v116; // zf
  int v117; // eax
  unsigned __int8 v118; // al
  struct _KPRCB *v119; // r10
  _DWORD *v120; // r9
  int v121; // eax
  unsigned __int8 v122; // al
  struct _KPRCB *v123; // r10
  _DWORD *v124; // r9
  int v125; // eax
  __m128i *v126; // r8
  char v127; // dl
  unsigned __int8 v128; // al
  KIRQL v129; // di
  struct _KPRCB *v130; // r10
  _DWORD *v131; // r9
  int v132; // eax
  unsigned __int8 v133; // al
  struct _KPRCB *v134; // r9
  _DWORD *v135; // r8
  int v136; // eax
  unsigned __int8 v137; // al
  struct _KPRCB *v138; // r10
  _DWORD *v139; // r9
  int v140; // eax
  unsigned __int64 v141; // rdi
  __m128i *v142; // rax
  unsigned __int8 v143; // al
  struct _KPRCB *v144; // r9
  _DWORD *v145; // r8
  int v146; // eax
  char v147; // [rsp+40h] [rbp-C0h] BYREF
  KIRQL v148; // [rsp+41h] [rbp-BFh]
  unsigned int v149; // [rsp+44h] [rbp-BCh]
  unsigned __int64 v150; // [rsp+48h] [rbp-B8h]
  __m128i *v151; // [rsp+50h] [rbp-B0h]
  unsigned int *v152; // [rsp+58h] [rbp-A8h]
  __int64 v153; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v154; // [rsp+68h] [rbp-98h]
  unsigned __int64 *v155; // [rsp+70h] [rbp-90h]
  __int64 v156; // [rsp+78h] [rbp-88h]
  ULONG_PTR v157; // [rsp+80h] [rbp-80h]
  __int64 v158; // [rsp+88h] [rbp-78h]
  int v159; // [rsp+90h] [rbp-70h]
  __int64 v160; // [rsp+98h] [rbp-68h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-60h]
  unsigned __int64 *v162; // [rsp+A8h] [rbp-58h]
  int v163; // [rsp+B0h] [rbp-50h] BYREF
  int v164; // [rsp+B4h] [rbp-4Ch] BYREF
  __int64 v165; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 *v166; // [rsp+C0h] [rbp-40h]
  _QWORD v167[5]; // [rsp+D0h] [rbp-30h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-8h]
  _KPROCESS *v169; // [rsp+100h] [rbp+0h]
  __int64 v170; // [rsp+108h] [rbp+8h]
  struct _LIST_ENTRY *v171; // [rsp+110h] [rbp+10h]
  _QWORD v172[15]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v173; // [rsp+198h] [rbp+98h]
  _QWORD v174[24]; // [rsp+1A0h] [rbp+A0h] BYREF

  v152 = a4;
  v166 = a6;
  v147 = 0;
  v148 = 0;
  ++MiCont;
  memset((char *)v172 + 4, 0, 0x74uLL);
  v9 = BugCheckParameter2->m128i_i64[1] | 0x8000000000000000uLL;
  LODWORD(v172[0]) = a3;
  v155 = (unsigned __int64 *)v9;
  v151 = 0LL;
  v160 = 0LL;
  v159 = 0;
  v173 = -1LL;
  v153 = 0LL;
  v10 = (__int64)(v9 << 25) >> 16;
  v154 = v10;
  LeafVa = MiGetLeafVa(v10);
  v14 = 8LL;
  if ( v10 < v15 || v10 > 0xFFFFF6FFFFFFFFFFuLL )
    v16 = LODWORD(v172[1]) | 1;
  else
    v16 = LODWORD(v172[1]) | 8;
  LODWORD(v172[1]) = v16;
  v150 = v13;
  v17 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)BugCheckParameter2[0x22000000000LL].m128i_i64 >> 4);
  v157 = v17;
  if ( a6 )
    *a6 = v13;
  v18 = ((unsigned __int64)BugCheckParameter2[2].m128i_i64[1] >> 43) & 0x3FF;
  Process = 0LL;
  v19 = *(_QWORD *)(qword_140C51F48 + 8 * v18);
  v158 = v19;
  if ( LeafVa < 0xFFFF800000000000uLL )
    goto LABEL_6;
  if ( LeafVa >= qword_140C540C0 && LeafVa <= qword_140C51BF0 )
  {
    v54 = v16 | 8;
    v14 = 1LL;
    if ( (v54 & 1) != 0 )
    {
      v16 = v54 | 2;
      if ( v10 >= qword_140C51BE8 && v10 < qword_140C51BE8 + MiHyperSpaceSize() )
        v16 |= 0x100u;
    }
    else
    {
      v16 = v54 | 4;
    }
LABEL_6:
    v16 |= 0x1000u;
    LODWORD(v172[1]) = v16;
  }
  if ( (v16 & 0x1000) != 0 )
  {
    LOBYTE(v11) = a2;
    v20 = MiLockStealUserVm(v19, BugCheckParameter2, v11, v9, v172);
    if ( v20 == 1 )
    {
      v20 = 0;
      v21 = v172[6];
      v149 = 0;
      Process = KeGetCurrentThread()->ApcState.Process;
      v156 = v172[3];
      v22 = v152;
LABEL_10:
      LOBYTE(v23) = v172[1];
      goto LABEL_11;
    }
LABEL_192:
    ++dword_140C29D2C;
    dword_140C29D30 = -1431655765 * ((__int64)BugCheckParameter2[0x22000000000LL].m128i_i64 >> 4);
    MiLockPageInline(BugCheckParameter2);
    if ( (BugCheckParameter2[1].m128i_i64[1] & 0x4000000000000000LL) != 0 )
      return 0;
    return v20;
  }
  LOBYTE(v14) = a2;
  v20 = MiLockStealSystemVm((__int64)BugCheckParameter2, v14, v9, (__int64)v172);
  if ( v20 != 1 )
    goto LABEL_192;
  v21 = v172[6];
  v20 = 0;
  v156 = v172[3];
  v55 = 1;
  v149 = 1;
  v56 = *(_BYTE *)(v172[3] + 184LL) & 7;
  if ( v56 == 7 )
  {
    v22 = v152;
    if ( !*((_QWORD *)v152 + 2) )
    {
      ++dword_140C29CEC;
      goto LABEL_88;
    }
    v149 = 2;
  }
  else
  {
    if ( ((v56 - 1) & 0xFD) != 0 )
    {
      if ( LODWORD(v172[6]) == 1 )
        v55 = 2;
      v149 = v55;
    }
    v22 = v152;
  }
  if ( LODWORD(v172[6]) != 3 )
    goto LABEL_10;
  if ( (v172[1] & 1) != 0 )
    v23 = LODWORD(v172[1]) | 0xA;
  else
    v23 = LODWORD(v172[1]) | 0xC;
  LODWORD(v172[1]) = v23;
LABEL_11:
  if ( *((_QWORD *)v22 + 2) )
  {
    v24 = BugCheckParameter2[2].m128i_u8[2] >> 6;
    if ( a5 == -1 )
    {
      v25 = *((_DWORD *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)BugCheckParameter2[0x22000000000LL].m128i_i64 >> 4))
            + 2);
      v26 = ((unsigned int)MiGetPfnChannel((__int64)BugCheckParameter2) << byte_140C506CD) | dword_140C50738 & v17 | (v25 << byte_140C506CC);
      v27 = (a3 >> 8) & 0x10000;
      if ( (a3 & 0x2000000) != 0 )
        v27 |= 0x20000u;
    }
    else
    {
      v27 = 48;
      v26 = dword_140C50738 & v17 | a5 & ~dword_140C50738;
    }
    v28 = -1LL;
    if ( v173 == -1 )
    {
      Page = MiGetPage(v19, v26, v27);
      v150 = Page;
      if ( Page == -1 )
      {
        ++dword_140C29D18;
        v20 = 0;
        goto LABEL_88;
      }
      PageChain = (__m128i *)(48 * Page - 0x220000000000LL);
      goto LABEL_18;
    }
    v85 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)BugCheckParameter2[0x22000000000LL].m128i_i64 >> 4));
    v165 = 1LL;
    PageChain = (__m128i *)MiGetPageChain(v19, v156, v154, *((_DWORD *)v85 + 2) + 1, v24, v27, v173, (__int64)&v165);
    if ( PageChain )
    {
      v150 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)PageChain[0x22000000000LL].m128i_i64 >> 4);
LABEL_18:
      if ( PageChain != BugCheckParameter2 )
      {
        v31 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
        if ( (MiFlags & 0x4000) != 0 && (unsigned int)MiGetPagePrivilege((ULONG_PTR)BugCheckParameter2) )
        {
          v32 = LODWORD(v172[1]) | 0x2000;
          LODWORD(v172[1]) |= 0x2000u;
        }
        else
        {
          v32 = v172[1];
        }
        v33 = 0LL;
        if ( BugCheckParameter2[2].m128i_i16[0] != 1 )
        {
          _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v31 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v89 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                v116 = (v89 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v89;
                if ( v116 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v31);
          ++dword_140C29D08;
          goto LABEL_360;
        }
        v34 = v172[6];
        if ( ((BugCheckParameter2[2].m128i_i8[3] & 8) != 0 || (BugCheckParameter2->m128i_i8[0] & 1) == 0)
          && LODWORD(v172[6]) != 2
          && (v32 & 0x26) == 0 )
        {
          _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v90 = KeGetCurrentIrql();
              if ( v90 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v90 >= 2u )
              {
                v91 = KeGetCurrentPrcb();
                v92 = v91->SchedulerAssist;
                v93 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                v116 = (v93 & v92[5]) == 0;
                v92[5] &= v93;
                if ( v116 )
                  KiRemoveSystemWorkPriorityKick(v91);
              }
            }
          }
          __writecr8(v31);
          ++dword_140C29D0C;
          goto LABEL_360;
        }
        if ( (BugCheckParameter2[2].m128i_i8[2] & 7) != 6
          || v158 != *(_QWORD *)(qword_140C51F48
                               + 8 * (((unsigned __int64)BugCheckParameter2[2].m128i_i64[1] >> 43) & 0x3FF)) )
        {
          _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v137 = KeGetCurrentIrql();
              if ( v137 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v137 >= 2u )
              {
                v138 = KeGetCurrentPrcb();
                v139 = v138->SchedulerAssist;
                v140 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                v116 = (v140 & v139[5]) == 0;
                v139[5] &= v140;
                if ( v116 )
                  KiRemoveSystemWorkPriorityKick(v138);
              }
            }
          }
          __writecr8(v31);
          ++dword_140C29D14;
          goto LABEL_360;
        }
        if ( (v32 & 0x20) == 0 )
          v33 = MI_READ_PTE_LOCK_FREE(v155);
        if ( v34 != 3 && (BugCheckParameter2[1].m128i_i64[1] & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v149 == 1 )
        {
          if ( (v32 & 0x10) == 0 )
          {
            ++dword_140C29D20;
            _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v94 = KeGetCurrentIrql();
                if ( v94 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v94 >= 2u )
                {
                  v95 = KeGetCurrentPrcb();
                  v96 = v95->SchedulerAssist;
                  v97 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                  v116 = (v97 & v96[5]) == 0;
                  v96[5] &= v97;
                  if ( v116 )
                    KiRemoveSystemWorkPriorityKick(v95);
                }
              }
            }
            __writecr8(v31);
            goto LABEL_360;
          }
          v32 |= 0x208u;
          LODWORD(v172[1]) = v32;
        }
        if ( v34 != 2 )
        {
          if ( (v32 & 0x20) != 0 )
          {
            v20 = 0;
            v33 = MiPrepareToStealNonPagedPool((__int64)BugCheckParameter2, (volatile signed __int64 *)v155);
            if ( !v33 )
            {
              _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v98 = KeGetCurrentIrql();
                  if ( v98 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v98 >= 2u )
                  {
                    v99 = v31 + 1;
                    goto LABEL_255;
                  }
                }
              }
LABEL_257:
              __writecr8(v31);
LABEL_361:
              v126 = PageChain;
              v151 = PageChain;
LABEL_362:
              if ( v126 )
              {
                v141 = (unsigned __int8)MiLockPageInline(v126);
                v142 = v151;
                v151[2].m128i_i8[2] = v151[2].m128i_i8[2] & 0xF8 | 5;
                _InterlockedAnd64(&v142[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                if ( KiIrqlFlags )
                {
                  if ( (KiIrqlFlags & 1) != 0 )
                  {
                    v143 = KeGetCurrentIrql();
                    if ( v143 <= 0xFu && (unsigned __int8)v141 <= 0xFu && v143 >= 2u )
                    {
                      v144 = KeGetCurrentPrcb();
                      v145 = v144->SchedulerAssist;
                      v146 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v141 + 1));
                      v116 = (v146 & v145[5]) == 0;
                      v145[5] &= v146;
                      if ( v116 )
                        KiRemoveSystemWorkPriorityKick(v144);
                    }
                  }
                }
                __writecr8(v141);
              }
              goto LABEL_88;
            }
          }
          else if ( ((v32 & 8) == 0 || (v32 & 0x100) != 0) && ((v33 & 0x42) != 0 || (v32 & 0x2000) != 0) )
          {
            if ( (v32 & 0x100) != 0 )
            {
              MiWriteValidPteNewProtection(v155, v33 & 0xFFFFFFFFFFFFFFBDuLL);
            }
            else
            {
              v35 = 0;
              LODWORD(v172[1]) = v32 | 0x40;
              if ( (unsigned int)MiPteInShadowRange(v155) )
              {
                HasShadow = MiPteHasShadow();
                v36 = 1;
                v35 = HasShadow != 0;
              }
              else
              {
                v36 = 1;
              }
              v37 = (__int64 *)v155;
              *v155 = v33 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
              if ( v35 )
                MiWritePteShadow((__int64)v37, v33 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
              v159 = v36;
            }
            v38 = MiTbFlushType(v156);
            v39 = v154;
            KeFlushSingleTb(v154, v38, v149);
LABEL_43:
            v40 = v149;
            if ( v149 == 1 )
            {
              if ( (v172[1] & 4) != 0 )
                v40 = 2;
              v149 = v40;
            }
            MiLockNestedPageAtDpcInline((__int64)PageChain);
            MiFinalizePageAttribute((__int64)PageChain, v24, 1u);
            if ( LODWORD(v172[6]) != 2 )
            {
              v41 = v157;
              goto LABEL_46;
            }
            IsPageFileHash = MiVaIsPageFileHash(v158, v39);
            v160 = IsPageFileHash;
            if ( IsPageFileHash )
            {
              v148 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(IsPageFileHash + 232));
              v105 = v148;
              if ( v160 == MiVaIsPageFileHash(v158, v39) )
              {
                v41 = v157;
                if ( MiSmallVaStillMapsFrame(v39, v157) )
                {
LABEL_46:
                  MiCopyPfnEntryEx(PageChain, BugCheckParameter2);
                  if ( (BugCheckParameter2[2].m128i_i64[1] & 0xFFFFFFFFFFLL) == v41 )
                    MiSetPfnPteFrame(PageChain, v150);
                  _InterlockedAnd64(&PageChain[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                  v42 = v172[1];
                  if ( (v172[1] & 0x20) == 0 && LODWORD(v172[6]) != 2 )
                  {
                    if ( (v172[1] & 0x200) == 0 )
                    {
                      if ( (v172[1] & 8) == 0 && !v149 || (v58 = v172[1] & 0xA, v58 == 10) || (v172[1] & 0x100) != 0 )
                      {
                        BugCheckParameter2[2].m128i_i8[2] = BugCheckParameter2[2].m128i_i8[2] & 0xF8 | 5;
                      }
                      else if ( (v58 != 8 || v149) && (LODWORD(v172[6]) != 3 || (v172[1] & 4) == 0) )
                      {
                        goto LABEL_56;
                      }
                    }
                    _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                    if ( KiIrqlFlags )
                    {
                      if ( (KiIrqlFlags & 1) != 0 )
                      {
                        v111 = KeGetCurrentIrql();
                        if ( v111 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v111 >= 2u )
                        {
                          v112 = KeGetCurrentPrcb();
                          v113 = v112->SchedulerAssist;
                          v114 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                          v116 = (v114 & v113[5]) == 0;
                          v113[5] &= v114;
                          if ( v116 )
                            KiRemoveSystemWorkPriorityKick(v112);
                        }
                      }
                    }
                    __writecr8(v31);
                    v42 = v172[1];
                    LOBYTE(v31) = 17;
                  }
LABEL_56:
                  if ( (v42 & 0x200) == 0 )
                  {
                    v147 = 17;
                    v158 = 0LL;
                    goto LABEL_58;
                  }
                  v158 = MiLockProtoPoolPage(v154, (__int64)&v147);
                  v75 = v158;
                  if ( !v158 )
                  {
                    ++dword_140C29D24;
                    goto LABEL_291;
                  }
                  if ( *(_WORD *)(v158 + 32) > 2u )
                  {
                    v71 = 1LL;
                    ++dword_140C29D28;
                  }
                  else
                  {
                    v33 = MI_READ_PTE_LOCK_FREE(v155);
                    if ( (v33 & 0x42) == 0 )
                    {
LABEL_177:
                      v42 = v172[1];
                      v41 = v157;
LABEL_58:
                      if ( (v42 & 0x200) == 0 && (LODWORD(v172[6]) != 3 || (v42 & 4) == 0) && ((v42 & 0xA) != 8 || v149) )
                      {
                        if ( (_BYTE)v31 == 17 )
                        {
                          v43 = 0;
                        }
                        else
                        {
                          LODWORD(v153) = 4;
                          MiLockNestedPageAtDpcInline((__int64)PageChain);
                          v42 = v172[1];
                          v43 = v153;
                        }
                        v44 = v43 | 2;
                        if ( (v42 & 0x2000) == 0 )
                          v44 = v43;
                        MiCopyPage(v150, v157, v152, v44);
                        if ( (v44 & 4) != 0 )
                          _InterlockedAnd64(&PageChain[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                        v46 = v172[1];
                        if ( (v172[1] & 0x20) == 0 && (_BYTE)v31 != 17 )
                          BugCheckParameter2[2].m128i_i8[2] = BugCheckParameter2[2].m128i_i8[2] & 0xF8 | 5;
LABEL_70:
                        v47 = v33 ^ (v33 ^ (v150 << 12)) & 0xFFFFFFFFFF000LL;
                        if ( (v46 & 0x20) != 0 )
                        {
                          v59 = v47 | 0x20;
                          MiLockNestedPageAtDpcInline((__int64)PageChain);
                          if ( (MiFlags & 0x4000000) != 0 )
                            _mm_lfence();
                          if ( v33 != _InterlockedCompareExchange64((volatile signed __int64 *)v155, v59, v33) )
                          {
                            MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&PageChain[1]);
                            PageChain[2].m128i_i8[2] = PageChain[2].m128i_i8[2] & 0xF8 | 5;
                            _InterlockedAnd64(&PageChain[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                            _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                            v20 = 0;
                            if ( KiIrqlFlags )
                            {
                              if ( (KiIrqlFlags & 1) != 0 )
                              {
                                v122 = KeGetCurrentIrql();
                                if ( v122 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v122 >= 2u )
                                {
                                  v123 = KeGetCurrentPrcb();
                                  v124 = v123->SchedulerAssist;
                                  v125 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                                  v116 = (v125 & v124[5]) == 0;
                                  v124[5] &= v125;
                                  if ( v116 )
                                    KiRemoveSystemWorkPriorityKick(v123);
                                }
                              }
                            }
                            __writecr8((unsigned __int8)v31);
                            goto LABEL_361;
                          }
                          _InterlockedAnd64(&PageChain[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                          v46 = v172[1];
                          BugCheckParameter2[2].m128i_i8[2] = BugCheckParameter2[2].m128i_i8[2] & 0xF8 | 5;
LABEL_79:
                          if ( (v46 & 0x200) != 0 )
                          {
                            _InterlockedAnd64(&PageChain[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                            _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                            LOBYTE(v45) = v147;
                            MiUnlockProtoPoolPage(v158, v45);
                            LOBYTE(v31) = 17;
                          }
                          else if ( (v46 & 0x50) == 0x10 )
                          {
                            _InterlockedAnd64(&PageChain[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                          }
                          if ( (((unsigned __int64)BugCheckParameter2[2].m128i_i64[1] >> 60) & 7) == 3 )
                          {
                            v127 = 12;
                            if ( (_BYTE)v31 == 17 )
                              v127 = 8;
                            MiClearPfnImageVerified((ULONG_PTR)BugCheckParameter2, v127);
                          }
                          if ( LODWORD(v172[6]) == 2 )
                          {
                            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v160 + 232));
                            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v128 = KeGetCurrentIrql(), v128 <= 0xFu) )
                            {
                              v129 = v148;
                              if ( v148 <= 0xFu && v128 >= 2u )
                              {
                                v130 = KeGetCurrentPrcb();
                                v131 = v130->SchedulerAssist;
                                v132 = ~(unsigned __int16)(-1LL << (v148 + 1));
                                v116 = (v132 & v131[5]) == 0;
                                v131[5] &= v132;
                                if ( v116 )
                                  KiRemoveSystemWorkPriorityKick(v130);
                              }
                            }
                            else
                            {
                              v129 = v148;
                            }
                            __writecr8(v129);
                          }
                          if ( (_BYTE)v31 == 17 )
                            LOBYTE(v31) = MiLockPageInline(BugCheckParameter2);
                          MiSetPfnIdentity(BugCheckParameter2, 0LL);
                          v52 = BugCheckParameter2[2].m128i_i8[2];
                          BugCheckParameter2[2].m128i_i64[1] &= ~0x8000000000000000uLL;
                          BugCheckParameter2[2].m128i_i8[2] = v52 & 0xC7;
                          BugCheckParameter2[2].m128i_i8[3] &= ~0x20u;
                          BugCheckParameter2[1].m128i_i64[1] &= 0xC000000000000000uLL;
                          BugCheckParameter2[2].m128i_i16[0] = 0;
                          _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                          if ( KiIrqlFlags )
                          {
                            if ( (KiIrqlFlags & 1) != 0 )
                            {
                              v133 = KeGetCurrentIrql();
                              if ( v133 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v133 >= 2u )
                              {
                                v134 = KeGetCurrentPrcb();
                                v135 = v134->SchedulerAssist;
                                v136 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v31 + 1));
                                v116 = (v136 & v135[5]) == 0;
                                v135[5] &= v136;
                                if ( v116 )
                                  KiRemoveSystemWorkPriorityKick(v134);
                              }
                            }
                          }
                          __writecr8((unsigned __int8)v31);
                          v20 = 1;
                          goto LABEL_88;
                        }
                        if ( (v46 & 0x400) != 0 )
                        {
                          if ( (v46 & 0x4000) != 0 )
                          {
                            Flink = Process[1].ProcessListEntry.Flink;
                            if ( !Flink
                              || (v81 = MI_READ_PTE_LOCK_FREE((((unsigned __int64)Flink >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL),
                                  ((v81 >> 12) & 0xFFFFFFFFFFLL) != v150) )
                            {
                              v151 = BugCheckParameter2;
                              v20 = 2;
                              MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&BugCheckParameter2[1]);
                              goto LABEL_362;
                            }
                          }
                        }
                        else
                        {
                          if ( (v46 & 0x40) != 0 )
                          {
                            v48 = (__int64 *)v155;
                            v49 = 0;
                            v50 = MiPteInShadowRange(v155);
                            v51 = 0;
                            if ( !v50 )
                            {
LABEL_74:
                              *v48 = v47;
                              if ( v49 )
                                MiWritePteShadow((__int64)v48, v47);
                              v46 = v172[1];
                              goto LABEL_77;
                            }
                            if ( (unsigned int)MiPteHasShadow() )
                            {
                              v49 = 1;
                              if ( HIBYTE(word_140C51864) != (_BYTE)v51 )
                                goto LABEL_74;
                            }
                            else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                            {
                              goto LABEL_74;
                            }
                            if ( (v47 & 1) != 0 )
                              v47 |= 0x8000000000000000uLL;
                            goto LABEL_74;
                          }
                          if ( (v46 & 0x200) == 0 && (v46 & 0x50) == 0x10 )
                            MiLockNestedPageAtDpcInline((__int64)PageChain);
                          MiWriteValidPteNewPage((__int64 *)v155, v47, 0);
                          v46 = v172[1];
                        }
                        v51 = 0;
LABEL_77:
                        if ( v159 == v51 )
                        {
                          v57 = MiTbFlushType(v156);
                          KeFlushSingleTb(v154, v57, v149);
                          v46 = v172[1];
                        }
                        goto LABEL_79;
                      }
                      PteFromCopyList = MiGetPteFromCopyList(v152, v150, v41);
                      v162 = PteFromCopyList;
                      if ( (v172[1] & 0x200) != 0 )
                      {
                        LODWORD(v152) = MiReplacePageOfProtoPool(
                                          v154,
                                          v41,
                                          v150,
                                          (((_QWORD)PteFromCopyList << 25) - v153) >> 16);
                        goto LABEL_139;
                      }
                      v61 = v157;
                      CurrentThread = KeGetCurrentThread();
                      v167[1] = v154;
                      v167[3] = v41;
                      v62 = 1;
                      v167[2] = (((_QWORD)PteFromCopyList << 25) - v153) >> 16;
                      v167[4] = v150;
                      v167[0] = v156;
                      v170 = 0LL;
                      v171 = 0LL;
                      v169 = CurrentThread->ApcState.Process;
                      v63 = BugCheckParameter2[2].m128i_i64[1] & 0xFFFFFFFFFFLL;
                      LODWORD(v152) = 1;
                      if ( v63 == v157 )
                      {
                        if ( (*(_BYTE *)(v156 + 187) & 2) != 0
                          || _interlockedbittestandset(
                               (volatile signed __int32 *)&Process[2].Header.WaitListHead.Flink + 1,
                               1u) )
                        {
                          LODWORD(v152) = 0;
                          goto LABEL_139;
                        }
                        v77 = LODWORD(v172[1]) | 0x400;
                        LODWORD(v172[1]) |= 0x400u;
                        if ( v169->DirectoryTableBase >> 12 != v61 )
                        {
                          HIDWORD(v170) = 1;
                          v171 = v169[1].ProcessListEntry.Flink;
                          LODWORD(v172[1]) = v77 | 0x4000;
                        }
                        MiReleaseFaultState((__int64)&v172[3], 17, 0LL);
                        KeSwapDirectoryTableBase((__int64)v169, SHIDWORD(v170), (__int64)v167);
                        SharedVm = (volatile LONG *)MiGetSharedVm(v156);
                        ExAcquireSpinLockExclusive(SharedVm);
                        v79 = Process;
                        *((_DWORD *)SharedVm + 1) = 0;
                        _InterlockedAnd((volatile signed __int32 *)&v79[2].Header.WaitListHead.Flink + 1, 0xFFFFFFFD);
                        v62 = (int)v152;
                      }
                      else
                      {
                        MiReplacePageTablePage(v167);
                      }
                      if ( (int)v170 < 0 )
                        v62 = 0;
                      LODWORD(v152) = v62;
LABEL_139:
                      v64 = ZeroPte;
                      LODWORD(v153) = 0;
                      v65 = MiPteInShadowRange(v162);
                      v66 = 0;
                      if ( !v65 )
                      {
LABEL_140:
                        v67 = v153;
                        goto LABEL_141;
                      }
                      if ( (unsigned int)MiPteHasShadow() )
                      {
                        v67 = 1;
                        if ( HIBYTE(word_140C51864) != (_BYTE)v66 )
                          goto LABEL_141;
                        v116 = (ZeroPte & 1) == 0;
                      }
                      else
                      {
                        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                          goto LABEL_140;
                        v116 = (ZeroPte & 1) == 0;
                        v67 = v153;
                      }
                      if ( !v116 )
                        v64 = ZeroPte | 0x8000000000000000uLL;
LABEL_141:
                      v68 = (__int64)v162;
                      *v162 = v64;
                      if ( v67 )
                      {
                        MiWritePteShadow(v68, v64);
                        v66 = 0;
                      }
                      v69 = ZeroPte;
                      LODWORD(v153) = v66;
                      v70 = MiPteInShadowRange(v68 + 8);
                      v71 = 0LL;
                      if ( !v70 )
                      {
                        v72 = 1LL;
                        goto LABEL_145;
                      }
                      v117 = MiPteHasShadow();
                      v72 = 1LL;
                      if ( v117 )
                      {
                        LODWORD(v153) = 1;
                        if ( HIBYTE(word_140C51864) != (_BYTE)v71 )
                          goto LABEL_145;
                      }
                      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
                      {
                        goto LABEL_145;
                      }
                      if ( (ZeroPte & 1) != 0 )
                        v69 = ZeroPte | 0x8000000000000000uLL;
LABEL_145:
                      v73 = (__int64)(v162 + 1);
                      v162[1] = v69;
                      if ( (_DWORD)v153 != (_DWORD)v71 )
                      {
                        MiWritePteShadow(v73, v69);
                        v71 = 0LL;
                      }
                      if ( (_DWORD)v152 != (_DWORD)v71 )
                      {
                        if ( (v172[1] & 0x200) != 0 )
                        {
                          BugCheckParameter2[2].m128i_i8[2] = BugCheckParameter2[2].m128i_i8[2] & 0xF8 | 5;
                          BugCheckParameter2[1].m128i_i64[1] = v72 | BugCheckParameter2[1].m128i_i64[1] & 0xC000000000000001uLL;
                          MiLockNestedPageAtDpcInline((__int64)PageChain);
                        }
                        else
                        {
                          dword_140C29CD0 += v72;
                          v74 = (unsigned __int8)MiLockPageInline(BugCheckParameter2);
                          BugCheckParameter2[2].m128i_i8[2] = BugCheckParameter2[2].m128i_i8[2] & 0xF8 | 5;
                          v45 = 1LL;
                          BugCheckParameter2[1].m128i_i64[1] = BugCheckParameter2[1].m128i_i64[1] & 0xC000000000000000uLL | 1;
                          _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                          if ( KiIrqlFlags )
                          {
                            if ( (KiIrqlFlags & 1) != 0 )
                            {
                              v118 = KeGetCurrentIrql();
                              if ( v118 <= 0xFu && (unsigned __int8)v74 <= 0xFu && v118 >= 2u )
                              {
                                v119 = KeGetCurrentPrcb();
                                v45 = -1LL << ((unsigned __int8)v74 + 1);
                                v120 = v119->SchedulerAssist;
                                v121 = ~(unsigned __int16)v45;
                                v116 = (v121 & v120[5]) == 0;
                                v120[5] &= v121;
                                if ( v116 )
                                  KiRemoveSystemWorkPriorityKick(v119);
                              }
                            }
                          }
                          __writecr8(v74);
                          LOBYTE(v31) = 17;
                        }
                        v46 = v172[1];
                        goto LABEL_70;
                      }
                      if ( (v172[1] & 0x200) != 0 )
                      {
                        v115 = v158;
                        goto LABEL_290;
                      }
LABEL_291:
                      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&PageChain[1]);
LABEL_360:
                      v20 = 0;
                      goto LABEL_361;
                    }
                    v163 = 0;
                    while ( _interlockedbittestandset64((volatile signed __int32 *)(v75 + 24), 0x3FuLL) )
                    {
                      do
                        KeYieldProcessorEx(&v163);
                      while ( *(__int64 *)(v75 + 24) < 0 );
                    }
                    if ( *(_WORD *)(v75 + 32) <= 2u )
                    {
                      MiWriteValidPteNewProtection(v155, v33 & 0xFFFFFFFFFFFFFFBDuLL);
                      KeFlushSingleTb(v154, 0LL, 1LL);
                      v76 = MiCaptureDirtyBitToPfn(v75);
                      _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      if ( v76 )
                        MiReleasePageFileInfo(
                          *(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v75 + 40) >> 43) & 0x3FFLL)),
                          v76,
                          1);
                      v164 = 0;
                      while ( _interlockedbittestandset64(&PageChain[1].m128i_i32[2], 0x3FuLL) )
                      {
                        do
                          KeYieldProcessorEx(&v164);
                        while ( PageChain[1].m128i_i64[1] < 0 );
                      }
                      MiCaptureDirtyBitToPfn(PageChain);
                      _InterlockedAnd64(&PageChain[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
                      goto LABEL_177;
                    }
                    v71 = 1LL;
                    ++dword_140C29D28;
                    _InterlockedAnd64((volatile signed __int64 *)(v75 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  v115 = v75;
LABEL_290:
                  LOBYTE(v71) = v147;
                  MiUnlockProtoPoolPage(v115, v71);
                  goto LABEL_291;
                }
              }
              IsPageFileHash = v160;
            }
            else
            {
              v105 = 0;
            }
            v20 = 0;
            ++dword_140C29CFC;
            if ( IsPageFileHash )
            {
              ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(IsPageFileHash + 232));
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v106 = KeGetCurrentIrql();
                  if ( v106 <= 0xFu && v105 <= 0xFu && v106 >= 2u )
                  {
                    v107 = KeGetCurrentPrcb();
                    v108 = v107->SchedulerAssist;
                    v109 = ~(unsigned __int16)(-1LL << (v105 + 1));
                    v116 = (v109 & v108[5]) == 0;
                    v108[5] &= v109;
                    if ( v116 )
                      KiRemoveSystemWorkPriorityKick(v107);
                  }
                }
              }
              __writecr8(v105);
            }
            _InterlockedAnd64(&PageChain[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            _InterlockedAnd64(&BugCheckParameter2[1].m128i_i64[1], 0x7FFFFFFFFFFFFFFFuLL);
            if ( KiIrqlFlags )
            {
              if ( (KiIrqlFlags & 1) != 0 )
              {
                v110 = KeGetCurrentIrql();
                if ( v110 <= 0xFu && (unsigned __int8)v31 <= 0xFu && v110 >= 2u )
                {
                  v99 = v31 + 1;
LABEL_255:
                  v100 = KeGetCurrentPrcb();
                  v101 = ~(unsigned __int16)(-1LL << v99);
                  v102 = v100->SchedulerAssist;
                  v116 = (v101 & v102[5]) == 0;
                  v102[5] &= v101;
                  if ( v116 )
                    KiRemoveSystemWorkPriorityKick(v100);
                  goto LABEL_257;
                }
              }
            }
            goto LABEL_257;
          }
        }
        v39 = v154;
        goto LABEL_43;
      }
      v20 = 1;
LABEL_88:
      v28 = v150;
      goto LABEL_89;
    }
    ++dword_140C29D1C;
    v20 = 0;
  }
  else
  {
    if ( (v23 & 0x20) != 0 || (BugCheckParameter2[2].m128i_i8[2] & 0x10) != 0 || v21 == 2 || (v23 & 8) != 0 )
    {
      ++dword_140C29D98;
      goto LABEL_88;
    }
    v82 = MI_READ_PTE_LOCK_FREE(v9);
    v83 = BugCheckParameter2[2].m128i_i64[1] & 0xFFFFFFFFFFLL;
    if ( v83 == v17 )
    {
      ++dword_140C29D94;
      goto LABEL_88;
    }
    if ( (v82 & 0x42) != 0 )
    {
      ++dword_140C29D98;
      goto LABEL_88;
    }
    if ( (BugCheckParameter2[2].m128i_i8[3] & 8) != 0 )
      goto LABEL_88;
    v20 = 0;
    if ( (MiGetWsleContents(v83, (__int64)(v9 << 25) >> 16) & 0xF) == 8 )
      goto LABEL_88;
    memset(v174, 0, 0xB8uLL);
    LODWORD(v174[0]) = MiTbFlushType(v156);
    WORD2(v174[0]) = 4;
    v174[2] = 0LL;
    LODWORD(v174[1]) = 20;
    v174[3] = 0LL;
    if ( dword_140C52B68 )
      MI_WSLE_LOG_ACCESS(v84, (_BYTE *)v9);
    MiInsertTbFlushEntry((__int64)v174, (__int64)(v9 << 25) >> 16, 1LL, 0);
    v28 = v150;
    if ( !MiFreeWsleList(v156, (__int64)v174, 0) )
      v20 = 2;
  }
LABEL_89:
  MiUnlockStealVm(v172);
  if ( v151 )
    MiReleaseFreshPage((__int64)v151);
  MiLockPageInline(BugCheckParameter2);
  if ( v20 == 1 )
  {
    if ( v166 )
      *v166 = v28;
    ++dword_140C29CC4;
  }
  else
  {
    if ( (BugCheckParameter2[2].m128i_i8[2] & 7) == 6 )
    {
      if ( v20 != 2 )
        return v20;
    }
    else
    {
      v20 = 2;
    }
    if ( (BugCheckParameter2[1].m128i_i64[1] & 0x4000000000000000LL) != 0 )
      return 0;
    else
      ++dword_140C29CC8;
  }
  return v20;
}
