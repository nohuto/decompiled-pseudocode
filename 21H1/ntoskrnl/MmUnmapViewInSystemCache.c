/*
 * XREFs of MmUnmapViewInSystemCache @ 0x1402A0380
 * Callers:
 *     CcUnmapVacb @ 0x1405EDEFC (CcUnmapVacb.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     MiManageSubsectionView @ 0x14022A510 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x14022B3C0 (MiGetSystemCacheReverseMap.c)
 *     MiReleaseSystemCacheView @ 0x14022F3DC (MiReleaseSystemCacheView.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiDecrementAndInsertStandbyPages @ 0x14028FAA0 (MiDecrementAndInsertStandbyPages.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     MiSectionControlArea @ 0x1402A1930 (MiSectionControlArea.c)
 *     MiRemoveViewsFromSection @ 0x1402A31B0 (MiRemoveViewsFromSection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiGetWsleContents @ 0x1402AFD20 (MiGetWsleContents.c)
 *     MiUnlockWsle @ 0x1402B6FC0 (MiUnlockWsle.c)
 *     MiLockWorkingSetOptimal @ 0x1402BC3DC (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiRebuildPageTableLeafAges @ 0x1402DE360 (MiRebuildPageTableLeafAges.c)
 *     MiRemoveWsleList @ 0x1402E8870 (MiRemoveWsleList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402F3E4C (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiCompressTbFlushList @ 0x1402F66E0 (MiCompressTbFlushList.c)
 *     MiLockSetPfnPriority @ 0x1403441E0 (MiLockSetPfnPriority.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     qsort @ 0x1403CE680 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054F5FC (MiReturnCrossPartitionSectionCharges.c)
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
  ULONG_PTR v12; // rax
  unsigned int *MmInternal; // rbx
  __int64 v14; // rdx
  unsigned int v15; // ecx
  ULONG_PTR v16; // rbp
  _BYTE *v17; // rcx
  size_t v18; // r8
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbx
  unsigned __int64 v22; // rsi
  char v23; // cl
  unsigned int v24; // r9d
  char v25; // r8
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  size_t v28; // rcx
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  unsigned __int64 v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  __int64 v35; // rax
  char v36; // bp
  __int64 v37; // r8
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // r14d
  __int64 v41; // r13
  unsigned int v42; // r12d
  __int64 v43; // rdi
  _QWORD *v44; // r9
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
  unsigned __int64 *v56; // rbp
  unsigned __int64 v57; // rsi
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // ecx
  __int64 v65; // rcx
  unsigned __int64 v66; // rsi
  __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  unsigned __int64 v70; // r14
  unsigned __int64 v71; // r15
  __int64 v72; // rbx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r14
  __int64 v76; // rbp
  signed __int8 v77; // al
  __int64 v78; // rax
  __int64 v79; // rbp
  unsigned __int64 v80; // rcx
  unsigned __int64 v81; // r8
  __int64 v82; // rcx
  unsigned __int64 v83; // r8
  unsigned __int64 v84; // rcx
  char WsleContents; // si
  unsigned __int64 v86; // rbx
  unsigned __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rcx
  bool v90; // zf
  _BYTE *v91; // rax
  char v92; // al
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // r11
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // r10
  __int64 v98; // r8
  __int64 v99; // rax
  unsigned __int64 v100; // rcx
  __int64 v101; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v103; // rax
  __int64 v104; // rdx
  struct _LIST_ENTRY *v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rdx
  struct _LIST_ENTRY *v108; // rax
  __int64 v109; // rax
  char v110; // r8^7
  struct _LIST_ENTRY *v111; // rax
  __int64 v112; // rax
  __int64 v113; // r8
  __int64 v114; // rcx
  unsigned __int64 v116; // rbx
  __int64 v117; // rdx
  __int64 v118; // rcx
  struct _LIST_ENTRY *v119; // rax
  __int64 v120; // rdx
  __int64 v121; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v125; // eax
  _DWORD *v126; // r9
  unsigned __int64 v127; // rdx
  unsigned __int64 v128; // rdx
  signed __int32 v129[8]; // [rsp+0h] [rbp-118h] BYREF
  ULONG_PTR BugCheckParameter4a; // [rsp+20h] [rbp-F8h]
  char v131; // [rsp+30h] [rbp-E8h]
  int v132; // [rsp+34h] [rbp-E4h]
  int v133; // [rsp+38h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-D8h]
  __int64 v135; // [rsp+48h] [rbp-D0h] BYREF
  int v136; // [rsp+50h] [rbp-C8h]
  int v137; // [rsp+54h] [rbp-C4h]
  int v138; // [rsp+58h] [rbp-C0h]
  __int64 v139; // [rsp+60h] [rbp-B8h]
  int v140; // [rsp+68h] [rbp-B0h] BYREF
  ULONG_PTR v141; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v142; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v143; // [rsp+80h] [rbp-98h]
  _BYTE *v144; // [rsp+88h] [rbp-90h]
  _QWORD *v145; // [rsp+90h] [rbp-88h]
  __int64 v146; // [rsp+98h] [rbp-80h]
  ULONG_PTR v147; // [rsp+A0h] [rbp-78h]
  __int64 v148; // [rsp+A8h] [rbp-70h]
  __int64 v149; // [rsp+B0h] [rbp-68h]
  __int64 v150; // [rsp+B8h] [rbp-60h]
  unsigned __int64 *v151; // [rsp+C0h] [rbp-58h]
  ULONG_PTR v152; // [rsp+120h] [rbp+8h]
  unsigned __int8 v155; // [rsp+138h] [rbp+20h] BYREF

  v152 = BugCheckParameter3;
  v155 = 0;
  v4 = BugCheckParameter3;
  v5 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v151 = (unsigned __int64 *)v5;
  v147 = v5 + 512;
  v149 = 48 * MiGetContainingPageTable(v5) - 0x58000000000LL;
  v6 = MiSectionControlArea(BugCheckParameter4);
  v150 = v6;
  v7 = 0;
  v136 = 0;
  v8 = *(_QWORD *)(v6 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v132 = 0;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v142 = v8;
  v133 = 0;
  v138 = 0;
  v143 = 0LL;
  v146 = *(_QWORD *)(qword_140C4E588 + 8 * v9);
  v137 = 2;
  v10 = v146 + 7232;
  v139 = v146 + 7232;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v4);
  v145 = SystemCacheReverseMap;
  v12 = SystemCacheReverseMap[3];
  v141 = v12;
  if ( v12 )
  {
    if ( (v12 & 1) != 0 )
    {
      v12 &= ~1uLL;
      v137 = 4;
      v141 = v12;
      SystemCacheReverseMap[3] = v12;
    }
    if ( *(_QWORD *)v12 != v6 )
      KeBugCheckEx(0x1Au, 0x782uLL, (ULONG_PTR)SystemCacheReverseMap, v4, BugCheckParameter4);
  }
  v148 = MiLockWorkingSetOptimal(v10, v5, &v155);
  MmInternal = (unsigned int *)KeGetCurrentPrcb()->MmInternal;
  v14 = *(_QWORD *)MmInternal;
  v15 = MmInternal[6];
  *(_DWORD *)(v14 + 12) = 0;
  *(_DWORD *)v14 = 0;
  *(_WORD *)(v14 + 4) = 0;
  *(_QWORD *)(v14 + 16) = 0LL;
  *(_DWORD *)(v14 + 8) = v15;
  *(_QWORD *)(v14 + 24) = 0LL;
  v16 = *((_QWORD *)MmInternal + 1);
  v17 = (_BYTE *)*((_QWORD *)MmInternal + 2);
  v18 = 8LL * MmInternal[6];
  BugCheckParameter2 = v16;
  v144 = v17;
  memset(v17, 0, v18);
  v19 = *(_QWORD *)MmInternal;
  v20 = 0LL;
  *(_BYTE *)(*(_QWORD *)MmInternal + 4LL) |= 4u;
  while ( 1 )
  {
    v21 = 1LL;
    v22 = v4;
    if ( *(_DWORD *)v19 != 1 )
    {
      v23 = *(_BYTE *)(v19 + 4);
      if ( (v23 & 8) == 0 && v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_BYTE *)(v19 + 4) = v23 | 8;
    }
    v24 = *(_DWORD *)(v19 + 12);
    if ( !v24 )
      goto LABEL_12;
    v25 = *(_BYTE *)(v19 + 4) & 4;
    if ( !v25 )
    {
      v95 = v19 + 8LL * (v24 - 1);
      v96 = *(_QWORD *)(v95 + 24);
      if ( (v96 & 0xC00) == 0 )
      {
        v97 = *(_QWORD *)(v95 + 24) & 0x3FFLL;
        if ( (v96 & 0xFFFFFFFFFFFFF000uLL) + ((v97 + 1) << 12) == v4 && v97 + 1 >= v97 && v97 + 1 <= 0x3FF )
        {
          ++*(_QWORD *)(v19 + 16);
          *(_QWORD *)(v95 + 24) = ((unsigned __int16)v96 ^ (unsigned __int16)(v96 + 1)) & 0x3FF ^ v96;
          goto LABEL_17;
        }
      }
    }
    if ( v25
      || (v98 = v19 + 8LL * (v24 - 1), v99 = *(_QWORD *)(v98 + 24), (v99 & 0xC00) != 0)
      || (v99 & 0xFFFFFFFFFFFFF000uLL) != v4 + 4096
      || (v100 = *(_QWORD *)(v98 + 24) & 0x3FFLL, v100 + 1 < v100)
      || v100 + 1 > 0x3FF )
    {
LABEL_12:
      if ( v24 >= *(_DWORD *)(v19 + 8) )
      {
        *(_BYTE *)(v19 + 5) = 1;
      }
      else
      {
        while ( 1 )
        {
          v26 = (unsigned __int64)(v21 - 1) > 0x3FF ? 1024LL : v21;
          v27 = v22 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v26 - 1) & 0x3FF;
          v21 -= v26;
          v22 += v26 << 12;
          *(_QWORD *)(v19 + 8LL * (unsigned int)(*(_DWORD *)(v19 + 12))++ + 24) = v27;
          v28 = *(unsigned int *)(v19 + 12);
          *(_QWORD *)(v19 + 16) += v26;
          if ( (_DWORD)v28 == *(_DWORD *)(v19 + 8) && (*(_BYTE *)(v19 + 4) & 4) == 0 )
          {
            qsort((void *)(v19 + 24), v28, 8uLL, MiTbFlushSort);
            MiCompressTbFlushList(v19);
            v101 = *(unsigned int *)(v19 + 12);
            if ( (_DWORD)v101 == *(_DWORD *)(v19 + 8) )
              break;
          }
          if ( !v21 )
            goto LABEL_17;
        }
        if ( v21 )
        {
          *(_BYTE *)(v19 + 5) = 1;
          *(_QWORD *)(v19 + 16) = v101;
        }
      }
    }
    else
    {
      ++*(_QWORD *)(v19 + 16);
      *(_QWORD *)(v98 + 24) = ((unsigned __int16)(v99 - 4096) ^ (unsigned __int16)(v99 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v99 - 4096);
    }
LABEL_17:
    v29 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v29 & 1) != 0
      && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v103 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v104 = v29 | 0x20;
        if ( (v103 & 0x20) == 0 )
          v104 = *(_QWORD *)v5;
        v29 = v104;
        if ( (v103 & 0x42) != 0 )
          v29 = v104 | 0x42;
      }
    }
    v135 = v29;
    *(_QWORD *)(v16 + 8 * v20) = v29;
    if ( (v29 & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v135)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v105 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v105 )
        {
          v106 = *((_QWORD *)&v105->Flink + (((unsigned __int64)&v135 >> 3) & 0x1FF));
          v107 = v29 | 0x20;
          if ( (v106 & 0x20) == 0 )
            v107 = v29;
          v29 = v107;
          if ( (v106 & 0x42) != 0 )
            v29 = v107 | 0x42;
        }
      }
      v79 = 48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( dword_140C4E768 )
      {
        v80 = (__int64)(v5 << 25) >> 16;
        if ( v80 >= 0xFFFFF68000000000uLL && v80 <= 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_114;
        v81 = ((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v82 = *(_QWORD *)v81;
        if ( v81 >= 0xFFFFF6FB7DBED000uLL
          && v81 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v82 & 1) != 0
          && ((v82 & 0x20) == 0 || (v82 & 0x42) == 0) )
        {
          v108 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v108 )
          {
            v109 = *((_QWORD *)&v108->Flink + ((v81 >> 3) & 0x1FF));
            v110 = HIBYTE(*(_QWORD *)v81);
            if ( (v109 & 0x20) == 0 )
              v110 = HIBYTE(v82);
            HIBYTE(v82) = v110;
            if ( (v109 & 0x42) != 0 )
              HIBYTE(v82) = v110;
          }
        }
        if ( (HIBYTE(v82) & 0xF) != 7 )
        {
LABEL_114:
          if ( (*(_BYTE *)v5 & 0x20) != 0 )
            MiLogPageAccess(v139, v5);
        }
      }
      if ( (a3 & 1) != 0 && (*(_QWORD *)(v79 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v92 = *(_BYTE *)(v79 + 35);
        if ( ((v92 & 8) != 0 || (v92 & 7u) > 2) && (unsigned int)MiGetPfnPriority(v79) <= 5 )
          MiLockSetPfnPriority(v93, 2LL);
      }
      v83 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v84 = *(_QWORD *)v83;
      if ( v83 >= 0xFFFFF6FB7DBED000uLL
        && v83 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v84 & 1) != 0
        && ((v84 & 0x20) == 0 || (v84 & 0x42) == 0) )
      {
        v111 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v111 )
        {
          v112 = *((_QWORD *)&v111->Flink + ((v83 >> 3) & 0x1FF));
          v113 = v84 | 0x20;
          if ( (v112 & 0x20) == 0 )
            v113 = v84;
          v84 = v113;
          if ( (v112 & 0x42) != 0 )
            v84 = v113 | 0x42;
        }
      }
      WsleContents = HIBYTE(v84) & 0xF | (16 * ((v84 >> 60) & 7));
      if ( (HIBYTE(v84) & 0xF) == 8 )
      {
        MiUnlockWsle(v139, v4, v79);
        WsleContents = MiGetWsleContents(v114, v4);
      }
      v86 = ZeroPte;
      v87 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v87) )
          LOBYTE(v87) = v87 | 0x20;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        LOBYTE(v87) = 32;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v87 & 0x20) != 0 )
      {
        if ( !MiPteInShadowRange(v5) )
          goto LABEL_100;
        if ( (unsigned int)MiPteHasShadow(v89, v88) )
        {
          if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
            v86 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)v5 = v86;
          MiWritePteShadow(v5, v86);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v86 = ZeroPte | 0x8000000000000000uLL;
          }
LABEL_100:
          *(_QWORD *)v5 = v86;
        }
LABEL_101:
        v138 = 1;
      }
      else if ( (MI_INTERLOCKED_EXCHANGE_PTE(v5, ZeroPte) & 0x20) != 0 )
      {
        goto LABEL_101;
      }
      v90 = v142 == 0;
      v91 = v144;
      v144[8 * v20] = WsleContents;
      v91[8 * v20 + 1] = 1;
      if ( !v90 )
        v143 = *(_QWORD *)(v79 + 8) | 0x8000000000000000uLL;
      v16 = BugCheckParameter2;
      v133 = v7 + 1;
      goto LABEL_27;
    }
    if ( (v29 & 0x400) == 0 )
      break;
    if ( v142 )
    {
      v30 = v29;
      if ( qword_140C4DE80 && (v29 & 0x10) == 0 )
        v30 = v29 & ~qword_140C4DE80;
      v143 = v30 >> 16;
    }
    v31 = ZeroPte;
    if ( MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow(v33, v32) )
      {
        if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
          v31 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v5 = v31;
        MiWritePteShadow(v5, v31);
        goto LABEL_27;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v31 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v5 = v31;
LABEL_27:
    ++v7;
    v4 += 4096LL;
    v136 = v7;
    ++v20;
    v152 = v4;
    v5 += 8LL;
    if ( v5 >= v147 )
      goto LABEL_28;
  }
  v116 = ZeroPte;
  if ( !MiPteInShadowRange(v5) )
  {
LABEL_225:
    *(_QWORD *)v5 = v116;
    goto LABEL_28;
  }
  if ( !(unsigned int)MiPteHasShadow(v118, v117) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v116 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_225;
  }
  if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
    v116 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)v5 = v116;
  MiWritePteShadow(v5, v116);
LABEL_28:
  v34 = v139;
  if ( v133 )
  {
    v35 = MiRemoveWsleList(v139, v19, v144, v133, BugCheckParameter4a);
    if ( v35 )
      MiRebuildPageTableLeafAges(0LL, v35 << 25 >> 16 << 25 >> 16);
  }
  if ( v145[2] )
  {
    v36 = 1;
    v145[2] = 0LL;
  }
  else
  {
    v36 = 0;
  }
  v131 = v36;
  MiUnlockPageTableInternal(v34, v148);
  MiUnlockWorkingSetShared(v34, 2u);
  _InterlockedOr(v129, 0);
  v38 = v136;
  v39 = 0LL;
  v40 = KiTbFlushTimeStamp;
  v41 = 0LL;
  v133 = KiTbFlushTimeStamp;
  v42 = 0;
  v43 = 0LL;
  if ( v136 > 0 )
  {
    v44 = (_QWORD *)BugCheckParameter2;
    v45 = 0;
    while ( 2 )
    {
      if ( (v44[v43] & 1) == 0 )
        goto LABEL_36;
      ++v41;
      v70 = v44[v132];
      v71 = (unsigned __int64)&v44[v132];
      v72 = 0LL;
      if ( MiPteInShadowRange(v71)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v70 & 1) != 0
        && ((v70 & 0x20) == 0 || (v70 & 0x42) == 0) )
      {
        v119 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v119 )
        {
          v120 = v70 | 0x20;
          v121 = *((_QWORD *)&v119->Flink + ((v71 >> 3) & 0x1FF));
          if ( (v121 & 0x20) == 0 )
            v120 = v70;
          v70 = v120;
          if ( (v121 & 0x42) != 0 )
            v70 = v120 | 0x42;
        }
      }
      v75 = (v70 >> 12) & 0xFFFFFFFFFLL;
      v76 = 48 * v75 - 0x58000000000LL;
      v77 = _interlockedbittestandset64((volatile signed __int32 *)(v76 + 24), 0x3FuLL);
      if ( v42 )
      {
        if ( v77 )
        {
          MiDecrementAndInsertStandbyPages((_QWORD *)BugCheckParameter2, v42, 2u);
          v39 = 0LL;
          v44 = (_QWORD *)BugCheckParameter2;
          v45 = v132 - 1;
          --v43;
          v42 = 0;
          --v41;
          goto LABEL_36;
        }
LABEL_75:
        v39 = 0LL;
      }
      else
      {
        v39 = 0LL;
        v140 = 0;
        if ( v77 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v140, v39, v73, v74);
            while ( *(__int64 *)(v76 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v76 + 24), 0x3FuLL) );
          goto LABEL_75;
        }
      }
      v44 = (_QWORD *)BugCheckParameter2;
      if ( (*(_BYTE *)(BugCheckParameter2 + 8 * v43) & 0x42) != 0 )
      {
        v94 = MiCaptureDirtyBitToPfn(48 * v75 - 0x58000000000LL);
        v44 = (_QWORD *)BugCheckParameter2;
        v72 = v94;
LABEL_121:
        if ( v42 )
        {
          MiDecrementAndInsertStandbyPages(v44, v42, 0x11u);
          v42 = 0;
        }
        MiDecrementShareCount(48 * v75 - 0x58000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v76 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v72 )
          MiReleasePageFileInfo(v146, v72, 0LL);
        v45 = v132;
        v39 = 0LL;
        v44 = (_QWORD *)BugCheckParameter2;
        goto LABEL_36;
      }
      v37 = 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v76 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || *(_WORD *)(v76 + 32) != 1
        || (*(_QWORD *)(v76 + 24) & 0x4000000000000000LL) != 0
        || (*(_BYTE *)(v76 + 35) & 0x40) != 0
        || (*(_BYTE *)(v76 + 34) & 0x10) != 0 )
      {
        goto LABEL_121;
      }
      v45 = v132;
      v78 = v42++;
      *(_QWORD *)(BugCheckParameter2 + 8 * v78) = v76;
LABEL_36:
      ++v45;
      ++v43;
      v132 = v45;
      if ( v43 >= v38 )
      {
        if ( v42 )
          MiDecrementAndInsertStandbyPages(v44, v42, 2u);
        v4 = v152;
        v40 = v133;
        v36 = v131;
        break;
      }
      continue;
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v46 = v155;
    if ( v155 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v46 = v155;
      v39 = -1LL << (v155 + 1);
      v125 = ~(unsigned __int16)v39;
      v90 = (v125 & SchedulerAssist[5]) == 0;
      v37 = (unsigned int)v125 & SchedulerAssist[5];
      SchedulerAssist[5] = v37;
      if ( v90 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v46 = v155;
  }
  __writecr8(v46);
  v47 = v141;
  if ( v36 == 1 )
    MiManageSubsectionView((__int64 *)v141, v145, v137);
  if ( v41 )
  {
    v48 = v149;
    MiLockPageInline(v149, v39, v37);
    *(_QWORD *)(v48 + 24) ^= (*(_QWORD *)(v48 + 24) ^ (*(_QWORD *)(v48 + 24) - v41)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v49 = v155;
  }
  else
  {
    v49 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v49 <= 0xFu )
    {
      v126 = KeGetCurrentPrcb()->SchedulerAssist;
      v126[5] |= ~((unsigned __int8)(1LL << (v49 + 1)) - 1) & 4;
    }
    v155 = v49;
  }
  v50 = 0LL;
  if ( !v142 )
    v47 = 0LL;
  v51 = v150;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v150 + 72));
  if ( v47 )
  {
    v52 = v143;
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
    MiReturnCrossPartitionSectionCharges(v146, 1LL, v50);
  v55 = MiSwizzleInvalidPte((unsigned __int64)(v40 & 0xFFFFF) << 28);
  v56 = v151;
  v57 = v55;
  v135 = v55;
  v58 = v55;
  if ( MiPteInShadowRange((unsigned __int64)(v151 + 2)) )
  {
    if ( !(unsigned int)MiPteHasShadow(v60, v59) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v57 & 1) != 0 )
      {
        v58 |= 0x8000000000000000uLL;
      }
      goto LABEL_55;
    }
    v127 = v57;
    if ( !HIBYTE(word_140C4DF48) && (v57 & 1) != 0 )
      v127 = v57 | 0x8000000000000000uLL;
    v56[2] = v127;
    MiWritePteShadow(v56 + 2, v127);
  }
  else
  {
LABEL_55:
    v56[2] = v58;
  }
  v61 = ZeroPte;
  if ( MiPteInShadowRange((unsigned __int64)(v56 + 1)) )
  {
    if ( !(unsigned int)MiPteHasShadow(v63, v62) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v61 = ZeroPte | 0x8000000000000000uLL;
      }
      goto LABEL_57;
    }
    if ( !HIBYTE(word_140C4DF48) && (ZeroPte & 1) != 0 )
      v61 = ZeroPte | 0x8000000000000000uLL;
    v56[1] = v61;
    MiWritePteShadow(v56 + 1, v61);
  }
  else
  {
LABEL_57:
    v56[1] = v61;
  }
  v64 = v135;
  if ( v138 == 1 )
  {
    if ( qword_140C4DE80 )
    {
      if ( (v135 & 0x10) != 0 )
        v64 = v135 & 0xFFFFFFEF;
      else
        v64 = v135 & ~(_DWORD)qword_140C4DE80;
    }
    v65 = v64 & 0xFFFFFFF | 0x20000000LL;
  }
  else
  {
    if ( qword_140C4DE80 )
    {
      if ( (v135 & 0x10) != 0 )
        v64 = v135 & 0xFFFFFFEF;
      else
        v64 = v135 & ~(_DWORD)qword_140C4DE80;
    }
    v65 = v64 & 0xFFFFFFF;
  }
  v135 = MiSwizzleInvalidPte(v65);
  v66 = v135;
  v67 = v135;
  if ( MiPteInShadowRange((unsigned __int64)(v56 + 3)) )
  {
    if ( !(unsigned int)MiPteHasShadow(v69, v68) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v66 & 1) != 0 )
      {
        v67 |= 0x8000000000000000uLL;
      }
      goto LABEL_64;
    }
    v128 = v66;
    if ( !HIBYTE(word_140C4DF48) && (v66 & 1) != 0 )
      v128 = v66 | 0x8000000000000000uLL;
    v56[3] = v128;
    MiWritePteShadow(v56 + 3, v128);
  }
  else
  {
LABEL_64:
    v56[3] = v67;
  }
  if ( (a3 & 2) == 0 )
    MiReleaseSystemCacheView(v56);
}
