/*
 * XREFs of MmUnmapViewInSystemCache @ 0x140313AE0
 * Callers:
 *     CcUnmapVacb @ 0x1406EA378 (CcUnmapVacb.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiUnlockWsle @ 0x14026FC1C (MiUnlockWsle.c)
 *     MiGetWsleContents @ 0x140270D40 (MiGetWsleContents.c)
 *     MiRebuildPageTableLeafAges @ 0x140285060 (MiRebuildPageTableLeafAges.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiLockSetPfnPriority @ 0x14028BE6C (MiLockSetPfnPriority.c)
 *     MiRemoveWsleList @ 0x14028EBD0 (MiRemoveWsleList.c)
 *     MiCompressTbFlushList @ 0x1402A32E0 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402BB418 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetOptimal @ 0x14030FC94 (MiLockWorkingSetOptimal.c)
 *     MiReleaseSystemCacheView @ 0x14030FCFC (MiReleaseSystemCacheView.c)
 *     MiManageSubsectionView @ 0x140311100 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x140311FB0 (MiGetSystemCacheReverseMap.c)
 *     MiCheckControlArea @ 0x140314AB0 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveViewsFromSection @ 0x140314F78 (MiRemoveViewsFromSection.c)
 *     MiSectionControlArea @ 0x140315260 (MiSectionControlArea.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14032C3E0 (MiDecrementAndInsertStandbyPages.c)
 *     MiLogPageAccess @ 0x14033A650 (MiLogPageAccess.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     qsort @ 0x1403D2AC0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1405550EC (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  unsigned __int64 v4; // r15
  ULONG_PTR v5; // r14
  __int64 v6; // rbp
  int v7; // r13d
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  _QWORD *SystemCacheReverseMap; // rcx
  _DWORD *v12; // r9
  ULONG_PTR v13; // rax
  unsigned int *MmInternal; // rbx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  ULONG_PTR v17; // rbp
  char *v18; // rcx
  size_t v19; // r8
  __int64 v20; // rdi
  __int64 v21; // r12
  unsigned __int64 Flink; // rdx
  __int64 v23; // rbx
  unsigned __int64 v24; // rsi
  char v25; // cl
  unsigned int v26; // r9d
  char v27; // r8
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  size_t v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // rcx
  unsigned __int64 v33; // rbx
  __int64 v34; // rbx
  __int64 v35; // rax
  char v36; // bp
  __int64 v37; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v39; // rsi
  __int64 v40; // rdx
  int v41; // r14d
  __int64 v42; // r13
  unsigned int v43; // r12d
  __int64 v44; // rdi
  int v45; // ecx
  unsigned __int8 v46; // bl
  ULONG_PTR v47; // rsi
  __int64 v48; // rbx
  unsigned __int8 v49; // bl
  __int64 v50; // r12
  __int64 v51; // rbp
  unsigned __int64 v52; // rdi
  __int64 v53; // rax
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  _QWORD *v56; // rbp
  unsigned __int64 v57; // rsi
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rdx
  unsigned __int64 v61; // rbx
  int v62; // ecx
  __int64 v63; // rcx
  unsigned __int64 v64; // rsi
  __int64 v65; // rbx
  __int64 v66; // rdx
  unsigned __int64 v67; // r14
  unsigned __int64 v68; // r15
  unsigned __int64 v69; // rbx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r14
  __int64 v73; // rbp
  signed __int8 v74; // al
  __int64 v75; // rax
  __int64 v76; // rbp
  unsigned __int64 v77; // rcx
  unsigned __int64 v78; // r8
  __int64 v79; // rcx
  unsigned __int64 v80; // r8
  unsigned __int64 v81; // rcx
  char WsleContents; // si
  unsigned __int64 v83; // rbx
  __int64 v84; // rdx
  bool v85; // zf
  char *v86; // rax
  char v87; // al
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // r9
  __int64 v91; // rax
  __int64 v92; // r11
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // r10
  __int64 v95; // r8
  __int64 v96; // rax
  unsigned __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rax
  struct _LIST_ENTRY *v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rdx
  struct _LIST_ENTRY *v103; // rax
  __int64 v104; // rax
  char v105; // r8^7
  struct _LIST_ENTRY *v106; // rax
  __int64 v107; // rax
  __int64 v108; // r8
  __int64 v109; // rcx
  __int64 v111; // r8
  __int64 v112; // r8
  unsigned __int64 v113; // rbx
  __int64 v114; // r8
  struct _LIST_ENTRY *v115; // rax
  __int64 v116; // rdx
  __int64 v117; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v120; // eax
  _DWORD *v121; // r9
  __int64 v122; // r8
  unsigned __int64 v123; // rdx
  __int64 v124; // r8
  __int64 v125; // r8
  unsigned __int64 v126; // rdx
  signed __int32 v127[8]; // [rsp+0h] [rbp-118h] BYREF
  char v128; // [rsp+30h] [rbp-E8h]
  int v129; // [rsp+34h] [rbp-E4h]
  int v130; // [rsp+38h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-D8h]
  __int64 v132; // [rsp+48h] [rbp-D0h] BYREF
  int v133; // [rsp+50h] [rbp-C8h]
  int v134; // [rsp+54h] [rbp-C4h]
  int v135; // [rsp+58h] [rbp-C0h]
  __int64 v136; // [rsp+60h] [rbp-B8h]
  int v137; // [rsp+68h] [rbp-B0h] BYREF
  ULONG_PTR v138; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v139; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v140; // [rsp+80h] [rbp-98h]
  char *v141; // [rsp+88h] [rbp-90h]
  _QWORD *v142; // [rsp+90h] [rbp-88h]
  __int64 v143; // [rsp+98h] [rbp-80h]
  ULONG_PTR v144; // [rsp+A0h] [rbp-78h]
  unsigned __int64 v145; // [rsp+A8h] [rbp-70h]
  __int64 v146; // [rsp+B0h] [rbp-68h]
  __int64 v147; // [rsp+B8h] [rbp-60h]
  _QWORD *v148; // [rsp+C0h] [rbp-58h]
  ULONG_PTR v149; // [rsp+120h] [rbp+8h]
  unsigned __int8 v152; // [rsp+138h] [rbp+20h] BYREF

  v149 = BugCheckParameter3;
  v152 = 0;
  v4 = BugCheckParameter3;
  v5 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v148 = (_QWORD *)v5;
  v144 = v5 + 512;
  v146 = 48 * MiGetContainingPageTable(v5) - 0x58000000000LL;
  v6 = MiSectionControlArea(BugCheckParameter4);
  v147 = v6;
  v7 = 0;
  v133 = 0;
  v8 = *(_QWORD *)(v6 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v129 = 0;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v139 = v8;
  v130 = 0;
  v135 = 0;
  v140 = 0LL;
  v143 = *(_QWORD *)(qword_140C4E648 + 8 * v9);
  v134 = 2;
  v10 = v143 + 7232;
  v136 = v143 + 7232;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v4);
  v142 = SystemCacheReverseMap;
  v13 = SystemCacheReverseMap[3];
  v138 = v13;
  if ( v13 )
  {
    if ( (v13 & 1) != 0 )
    {
      v13 &= ~1uLL;
      v134 = 4;
      v138 = v13;
      SystemCacheReverseMap[3] = v13;
    }
    if ( *(_QWORD *)v13 != v6 )
      KeBugCheckEx(0x1Au, 0x782uLL, (ULONG_PTR)SystemCacheReverseMap, v4, BugCheckParameter4);
  }
  v145 = MiLockWorkingSetOptimal(v10, v5, &v152, v12);
  MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
  v15 = *(_QWORD *)MmInternal;
  v16 = MmInternal[6];
  *(_DWORD *)(v15 + 12) = 0;
  *(_DWORD *)v15 = 0;
  *(_WORD *)(v15 + 4) = 0;
  *(_QWORD *)(v15 + 16) = 0LL;
  *(_DWORD *)(v15 + 8) = v16;
  *(_QWORD *)(v15 + 24) = 0LL;
  v17 = *((_QWORD *)MmInternal + 1);
  v18 = (char *)*((_QWORD *)MmInternal + 2);
  v19 = 8LL * MmInternal[6];
  BugCheckParameter2 = v17;
  v141 = v18;
  memset(v18, 0, v19);
  v20 = *(_QWORD *)MmInternal;
  v21 = 0LL;
  Flink = 0xFFFFF6FB7DBED7F8uLL;
  *(_BYTE *)(*(_QWORD *)MmInternal + 4LL) |= 4u;
  while ( 1 )
  {
    v23 = 1LL;
    v24 = v4;
    if ( *(_DWORD *)v20 != 1 )
    {
      v25 = *(_BYTE *)(v20 + 4);
      if ( (v25 & 8) == 0 && v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_BYTE *)(v20 + 4) = v25 | 8;
    }
    v26 = *(_DWORD *)(v20 + 12);
    if ( v26 )
    {
      v27 = *(_BYTE *)(v20 + 4) & 4;
      if ( !v27 )
      {
        v92 = v20 + 8LL * (v26 - 1);
        v93 = *(_QWORD *)(v92 + 24);
        if ( (v93 & 0xC00) == 0 )
        {
          v94 = *(_QWORD *)(v92 + 24) & 0x3FFLL;
          if ( (v93 & 0xFFFFFFFFFFFFF000uLL) + ((v94 + 1) << 12) == v4 && v94 + 1 >= v94 )
          {
            Flink = 0xFFFFF6FB7DBED7F8uLL;
            if ( v94 + 1 <= 0x3FF )
            {
              ++*(_QWORD *)(v20 + 16);
              *(_QWORD *)(v92 + 24) = ((unsigned __int16)v93 ^ (unsigned __int16)(v93 + 1)) & 0x3FF ^ v93;
              goto LABEL_18;
            }
          }
          else
          {
            Flink = 0xFFFFF6FB7DBED7F8uLL;
          }
        }
      }
      if ( !v27 )
      {
        v95 = v20 + 8LL * (v26 - 1);
        v96 = *(_QWORD *)(v95 + 24);
        if ( (v96 & 0xC00) == 0 )
        {
          if ( (v96 & 0xFFFFFFFFFFFFF000uLL) == v4 + 4096 && (v97 = *(_QWORD *)(v95 + 24) & 0x3FFLL, v97 + 1 >= v97) )
          {
            Flink = 0xFFFFF6FB7DBED7F8uLL;
            if ( v97 + 1 <= 0x3FF )
            {
              ++*(_QWORD *)(v20 + 16);
              *(_QWORD *)(v95 + 24) = ((unsigned __int16)(v96 - 4096) ^ (unsigned __int16)(v96 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v96 - 4096);
              goto LABEL_18;
            }
          }
          else
          {
            Flink = 0xFFFFF6FB7DBED7F8uLL;
          }
        }
      }
    }
    if ( v26 >= *(_DWORD *)(v20 + 8) )
    {
      *(_BYTE *)(v20 + 5) = 1;
    }
    else
    {
      while ( 1 )
      {
        v28 = (unsigned __int64)(v23 - 1) > 0x3FF ? 1024LL : v23;
        v29 = v24 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v28 - 1) & 0x3FF;
        v23 -= v28;
        v24 += v28 << 12;
        *(_QWORD *)(v20 + 8LL * (unsigned int)(*(_DWORD *)(v20 + 12))++ + 24) = v29;
        v30 = *(unsigned int *)(v20 + 12);
        *(_QWORD *)(v20 + 16) += v28;
        if ( (_DWORD)v30 == *(_DWORD *)(v20 + 8) && (*(_BYTE *)(v20 + 4) & 4) == 0 )
        {
          qsort((void *)(v20 + 24), v30, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
          MiCompressTbFlushList(v20);
          v98 = *(unsigned int *)(v20 + 12);
          if ( (_DWORD)v98 == *(_DWORD *)(v20 + 8) )
            break;
        }
        if ( !v23 )
        {
          Flink = 0xFFFFF6FB7DBED7F8uLL;
          goto LABEL_18;
        }
      }
      Flink = 0xFFFFF6FB7DBED7F8uLL;
      if ( v23 )
      {
        *(_BYTE *)(v20 + 5) = 1;
        *(_QWORD *)(v20 + 16) = v98;
      }
    }
LABEL_18:
    v31 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v31 & 1) != 0
      && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
    {
      Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v99 = *(_QWORD *)(Flink + 8 * ((v5 >> 3) & 0x1FF));
        Flink = v31 | 0x20;
        if ( (v99 & 0x20) == 0 )
          Flink = *(_QWORD *)v5;
        v31 = Flink;
        if ( (v99 & 0x42) != 0 )
          v31 = Flink | 0x42;
      }
    }
    v132 = v31;
    *(_QWORD *)(v17 + 8 * v21) = v31;
    if ( (v31 & 1) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(&v132, Flink)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
      {
        v100 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v100 )
        {
          v101 = *((_QWORD *)&v100->Flink + (((unsigned __int64)&v132 >> 3) & 0x1FF));
          v102 = v31 | 0x20;
          if ( (v101 & 0x20) == 0 )
            v102 = v31;
          v31 = v102;
          if ( (v101 & 0x42) != 0 )
            v31 = v102 | 0x42;
        }
      }
      v76 = 48 * ((v31 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( dword_140C4E828 )
      {
        v77 = (__int64)(v5 << 25) >> 16;
        if ( v77 >= 0xFFFFF68000000000uLL && v77 <= 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_115;
        v78 = ((v77 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v79 = *(_QWORD *)v78;
        if ( v78 >= 0xFFFFF6FB7DBED000uLL
          && v78 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v79 & 1) != 0
          && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0) )
        {
          v103 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v103 )
          {
            v104 = *((_QWORD *)&v103->Flink + ((v78 >> 3) & 0x1FF));
            v105 = HIBYTE(*(_QWORD *)v78);
            if ( (v104 & 0x20) == 0 )
              v105 = HIBYTE(v79);
            HIBYTE(v79) = v105;
            if ( (v104 & 0x42) != 0 )
              HIBYTE(v79) = v105;
          }
        }
        if ( (HIBYTE(v79) & 0xF) != 7 )
        {
LABEL_115:
          if ( (*(_BYTE *)v5 & 0x20) != 0 )
            MiLogPageAccess(v136, v5);
        }
      }
      if ( (a3 & 1) != 0 && (*(_QWORD *)(v76 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v87 = *(_BYTE *)(v76 + 35);
        if ( ((v87 & 8) != 0 || (v87 & 7u) > 2) && (unsigned int)MiGetPfnPriority(v76) <= 5 )
          MiLockSetPfnPriority(v88, 2LL, v89, v90);
      }
      v80 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v81 = *(_QWORD *)v80;
      if ( v80 >= 0xFFFFF6FB7DBED000uLL
        && v80 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v81 & 1) != 0
        && ((v81 & 0x20) == 0 || (v81 & 0x42) == 0) )
      {
        v106 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v106 )
        {
          v107 = *((_QWORD *)&v106->Flink + ((v80 >> 3) & 0x1FF));
          v108 = v81 | 0x20;
          if ( (v107 & 0x20) == 0 )
            v108 = v81;
          v81 = v108;
          if ( (v107 & 0x42) != 0 )
            v81 = v108 | 0x42;
        }
      }
      WsleContents = HIBYTE(v81) & 0xF | (16 * ((v81 >> 60) & 7));
      if ( (HIBYTE(v81) & 0xF) == 8 )
      {
        MiUnlockWsle(v136, v4, v76);
        WsleContents = MiGetWsleContents(v109, v4);
      }
      v83 = ZeroPte;
      v84 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow() )
          v84 |= 0x20uLL;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        v84 = 32LL;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v84 & 0x20) != 0 )
      {
        if ( !(unsigned int)MiPteInShadowRange(v5, v84) )
          goto LABEL_101;
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
            v83 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)v5 = v83;
          MiWritePteShadow(v5, v83, v111);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v83 = ZeroPte | 0x8000000000000000uLL;
          }
LABEL_101:
          *(_QWORD *)v5 = v83;
        }
LABEL_102:
        v135 = 1;
      }
      else if ( (MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v5, ZeroPte) & 0x20) != 0 )
      {
        goto LABEL_102;
      }
      v85 = v139 == 0;
      v86 = v141;
      v141[8 * v21] = WsleContents;
      v86[8 * v21 + 1] = 1;
      if ( !v85 )
        v140 = *(_QWORD *)(v76 + 8) | 0x8000000000000000uLL;
      v17 = BugCheckParameter2;
      v130 = v7 + 1;
      goto LABEL_28;
    }
    if ( (v31 & 0x400) == 0 )
      break;
    if ( v139 )
    {
      v32 = v31;
      if ( qword_140C4DF40 && (v31 & 0x10) == 0 )
        v32 = v31 & ~qword_140C4DF40;
      v140 = v32 >> 16;
    }
    v33 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v5, Flink) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
          v33 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v5 = v33;
        MiWritePteShadow(v5, v33, v112);
        goto LABEL_28;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v33 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v5 = v33;
LABEL_28:
    ++v7;
    Flink = 0xFFFFF6FB7DBED7F8uLL;
    v4 += 4096LL;
    v133 = v7;
    ++v21;
    v149 = v4;
    v5 += 8LL;
    if ( v5 >= v144 )
      goto LABEL_29;
  }
  v113 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v5, Flink) )
  {
LABEL_226:
    *(_QWORD *)v5 = v113;
    goto LABEL_29;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v113 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_226;
  }
  if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
    v113 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)v5 = v113;
  MiWritePteShadow(v5, v113, v114);
LABEL_29:
  v34 = v136;
  if ( v130 )
  {
    v35 = MiRemoveWsleList(v136, v20, v141, v130);
    if ( v35 )
      MiRebuildPageTableLeafAges(0LL, v35 << 25 >> 16 << 25 >> 16);
  }
  if ( v142[2] )
  {
    v36 = 1;
    v142[2] = 0LL;
  }
  else
  {
    v36 = 0;
  }
  v128 = v36;
  MiUnlockPageTableInternal(v34, v145);
  MiUnlockWorkingSetShared(v34, 2u);
  _InterlockedOr(v127, 0);
  v39 = v133;
  v40 = 0LL;
  v41 = KiTbFlushTimeStamp;
  v42 = 0LL;
  v130 = KiTbFlushTimeStamp;
  v43 = 0;
  v44 = 0LL;
  if ( v133 > 0 )
  {
    SchedulerAssist = (_DWORD *)BugCheckParameter2;
    v45 = 0;
    while ( 2 )
    {
      if ( (SchedulerAssist[2 * v44] & 1) == 0 )
        goto LABEL_37;
      ++v42;
      v67 = *(_QWORD *)&SchedulerAssist[2 * v129];
      v68 = (unsigned __int64)&SchedulerAssist[2 * v129];
      v69 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v68, 0LL)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v67 & 1) != 0
        && ((v67 & 0x20) == 0 || (v67 & 0x42) == 0) )
      {
        v115 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v115 )
        {
          v116 = v67 | 0x20;
          v117 = *((_QWORD *)&v115->Flink + ((v68 >> 3) & 0x1FF));
          if ( (v117 & 0x20) == 0 )
            v116 = v67;
          v67 = v116;
          if ( (v117 & 0x42) != 0 )
            v67 = v116 | 0x42;
        }
      }
      v72 = (v67 >> 12) & 0xFFFFFFFFFLL;
      v73 = 48 * v72 - 0x58000000000LL;
      v74 = _interlockedbittestandset64((volatile signed __int32 *)(v73 + 24), 0x3FuLL);
      if ( v43 )
      {
        if ( v74 )
        {
          LOBYTE(v70) = 2;
          MiDecrementAndInsertStandbyPages(BugCheckParameter2, v43, v70);
          v40 = 0LL;
          SchedulerAssist = (_DWORD *)BugCheckParameter2;
          v45 = v129 - 1;
          --v44;
          v43 = 0;
          --v42;
          goto LABEL_37;
        }
LABEL_76:
        v40 = 0LL;
      }
      else
      {
        v40 = 0LL;
        v137 = 0;
        if ( v74 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v137, v40, v70, v71);
            while ( *(__int64 *)(v73 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v73 + 24), 0x3FuLL) );
          goto LABEL_76;
        }
      }
      SchedulerAssist = (_DWORD *)BugCheckParameter2;
      if ( (*(_BYTE *)(BugCheckParameter2 + 8 * v44) & 0x42) != 0 )
      {
        v91 = MiCaptureDirtyBitToPfn(48 * v72 - 0x58000000000LL);
        SchedulerAssist = (_DWORD *)BugCheckParameter2;
        v69 = v91;
LABEL_122:
        if ( v43 )
        {
          LOBYTE(v37) = 17;
          MiDecrementAndInsertStandbyPages(SchedulerAssist, v43, v37);
          v43 = 0;
        }
        MiDecrementShareCount(48 * v72 - 0x58000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v73 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v69 )
          MiReleasePageFileInfo(v143, v69, 0);
        v45 = v129;
        v40 = 0LL;
        SchedulerAssist = (_DWORD *)BugCheckParameter2;
        goto LABEL_37;
      }
      v37 = 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v73 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || *(_WORD *)(v73 + 32) != 1
        || (*(_QWORD *)(v73 + 24) & 0x4000000000000000LL) != 0
        || (*(_BYTE *)(v73 + 35) & 0x40) != 0
        || (*(_BYTE *)(v73 + 34) & 0x10) != 0 )
      {
        goto LABEL_122;
      }
      v45 = v129;
      v75 = v43++;
      *(_QWORD *)(BugCheckParameter2 + 8 * v75) = v73;
LABEL_37:
      ++v45;
      ++v44;
      v129 = v45;
      if ( v44 >= v39 )
      {
        if ( v43 )
        {
          LOBYTE(v37) = 2;
          MiDecrementAndInsertStandbyPages(SchedulerAssist, v43, v37);
        }
        v4 = v149;
        v41 = v130;
        v36 = v128;
        break;
      }
      continue;
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v46 = v152;
    if ( v152 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v46 = v152;
      v40 = -1LL << (v152 + 1);
      v120 = ~(unsigned __int16)v40;
      v85 = (v120 & SchedulerAssist[5]) == 0;
      v37 = (unsigned int)v120 & SchedulerAssist[5];
      SchedulerAssist[5] = v37;
      if ( v85 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v46 = v152;
  }
  __writecr8(v46);
  v47 = v138;
  if ( v36 == 1 )
    MiManageSubsectionView((__int64 *)v138, v142, v134);
  if ( v42 )
  {
    v48 = v146;
    MiLockPageInline(v146, v40, v37, SchedulerAssist);
    *(_QWORD *)(v48 + 24) ^= (*(_QWORD *)(v48 + 24) ^ (*(_QWORD *)(v48 + 24) - v42)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v49 = v152;
  }
  else
  {
    v49 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
    {
      v121 = KeGetCurrentPrcb()->SchedulerAssist;
      v121[5] |= ~((unsigned __int8)(1LL << (v49 + 1)) - 1) & 4;
    }
    v152 = v49;
  }
  v50 = 0LL;
  if ( !v139 )
    v47 = 0LL;
  v51 = v147;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v147 + 72));
  if ( v47 )
  {
    v52 = v140;
    while ( 1 )
    {
      v53 = MiRemoveViewsFromSection(v47);
      v54 = *(_QWORD *)(v47 + 8);
      v50 += v53;
      if ( v52 >= v54 && v52 < v54 + 8LL * *(unsigned int *)(v47 + 44) )
        break;
      v47 = *(_QWORD *)(v47 + 16);
      if ( !v47 )
        KeBugCheckEx(0x1Au, 0x783uLL, BugCheckParameter2, v4, BugCheckParameter4);
    }
  }
  --*(_QWORD *)(v51 + 40);
  --*(_DWORD *)(v51 + 88);
  MiCheckControlArea(v51, v49);
  if ( v50 )
    MiReturnCrossPartitionSectionCharges(v143, 1LL, v50);
  v55 = MiSwizzleInvalidPte((unsigned __int64)(v41 & 0xFFFFF) << 28);
  v56 = v148;
  v57 = v55;
  v132 = v55;
  v58 = v55;
  if ( (unsigned int)MiPteInShadowRange(v148 + 2, v59) )
  {
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v57 & 1) != 0 )
      {
        v58 |= 0x8000000000000000uLL;
      }
      goto LABEL_56;
    }
    v123 = v57;
    if ( !HIBYTE(word_140C4E008) && (v57 & 1) != 0 )
      v123 = v57 | 0x8000000000000000uLL;
    v56[2] = v123;
    MiWritePteShadow((__int64)(v56 + 2), v123, v122);
  }
  else
  {
LABEL_56:
    v56[2] = v58;
  }
  v61 = ZeroPte;
  if ( (unsigned int)MiPteInShadowRange(v56 + 1, v60) )
  {
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v61 = ZeroPte | 0x8000000000000000uLL;
      }
      goto LABEL_58;
    }
    if ( !HIBYTE(word_140C4E008) && (ZeroPte & 1) != 0 )
      v61 = ZeroPte | 0x8000000000000000uLL;
    v56[1] = v61;
    MiWritePteShadow((__int64)(v56 + 1), v61, v124);
  }
  else
  {
LABEL_58:
    v56[1] = v61;
  }
  v62 = v132;
  if ( v135 == 1 )
  {
    if ( qword_140C4DF40 )
    {
      if ( (v132 & 0x10) != 0 )
        v62 = v132 & 0xFFFFFFEF;
      else
        v62 = v132 & ~(_DWORD)qword_140C4DF40;
    }
    v63 = v62 & 0xFFFFFFF | 0x20000000LL;
  }
  else
  {
    if ( qword_140C4DF40 )
    {
      if ( (v132 & 0x10) != 0 )
        v62 = v132 & 0xFFFFFFEF;
      else
        v62 = v132 & ~(_DWORD)qword_140C4DF40;
    }
    v63 = v62 & 0xFFFFFFF;
  }
  v132 = MiSwizzleInvalidPte(v63);
  v64 = v132;
  v65 = v132;
  if ( (unsigned int)MiPteInShadowRange(v56 + 3, v66) )
  {
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v64 & 1) != 0 )
      {
        v65 |= 0x8000000000000000uLL;
      }
      goto LABEL_65;
    }
    v126 = v64;
    if ( !HIBYTE(word_140C4E008) && (v64 & 1) != 0 )
      v126 = v64 | 0x8000000000000000uLL;
    v56[3] = v126;
    MiWritePteShadow((__int64)(v56 + 3), v126, v125);
  }
  else
  {
LABEL_65:
    v56[3] = v65;
  }
  if ( (a3 & 2) == 0 )
    MiReleaseSystemCacheView((unsigned __int64)v56);
}
