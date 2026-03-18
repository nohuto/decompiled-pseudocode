/*
 * XREFs of MmUnmapViewInSystemCache @ 0x140247350
 * Callers:
 *     CcUnmapVacb @ 0x1406973FC (CcUnmapVacb.c)
 * Callees:
 *     MiDecrementAndInsertStandbyPages @ 0x140236A50 (MiDecrementAndInsertStandbyPages.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLogPageAccess @ 0x140245760 (MiLogPageAccess.c)
 *     MiSectionControlArea @ 0x140248900 (MiSectionControlArea.c)
 *     MiRemoveViewsFromSection @ 0x14024A180 (MiRemoveViewsFromSection.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     MiGetWsleContents @ 0x140256CF0 (MiGetWsleContents.c)
 *     MiUnlockWsle @ 0x14025DF90 (MiUnlockWsle.c)
 *     MiLockWorkingSetOptimal @ 0x1402633AC (MiLockWorkingSetOptimal.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x1402AAA70 (MiGetPfnPriority.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     MiManageSubsectionView @ 0x1402BD190 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x1402BE040 (MiGetSystemCacheReverseMap.c)
 *     MiReleaseSystemCacheView @ 0x1402C220C (MiReleaseSystemCacheView.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiRebuildPageTableLeafAges @ 0x140301790 (MiRebuildPageTableLeafAges.c)
 *     MiLockSetPfnPriority @ 0x140314EA0 (MiLockSetPfnPriority.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiRemoveWsleList @ 0x1403234F0 (MiRemoveWsleList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140330A4C (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiCompressTbFlushList @ 0x140333580 (MiCompressTbFlushList.c)
 *     qsort @ 0x1403CF4C0 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14054FC4C (MiReturnCrossPartitionSectionCharges.c)
 */

struct _KTHREAD *__fastcall MmUnmapViewInSystemCache(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        char a3)
{
  ULONG_PTR v4; // r15
  ULONG_PTR v5; // r14
  __int64 v6; // rbp
  int v7; // r13d
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  ULONG_PTR SystemCacheReverseMap; // rcx
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
  ULONG_PTR v22; // rsi
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
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rax
  char v38; // bp
  __int64 v39; // rdx
  __int64 v40; // rsi
  int v41; // r14d
  __int64 v42; // r13
  unsigned int v43; // r12d
  __int64 v44; // rdi
  _QWORD *v45; // r9
  int v46; // ecx
  unsigned __int8 v47; // bl
  ULONG_PTR v48; // rsi
  __int64 v49; // rbx
  unsigned __int8 v50; // bl
  __int64 v51; // r12
  __int64 v52; // rbp
  unsigned __int64 v53; // rdi
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  _QWORD *v60; // rbp
  unsigned __int64 v61; // rsi
  __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // rbx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  int v72; // ecx
  __int64 v73; // rcx
  unsigned __int64 v74; // rsi
  __int64 v75; // rbx
  struct _KTHREAD *result; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  unsigned __int64 v81; // r14
  unsigned __int64 v82; // r15
  __int64 v83; // rbx
  __int64 v84; // r14
  __int64 v85; // rbp
  signed __int8 v86; // al
  __int64 v87; // rax
  __int64 v88; // r9
  __int64 v89; // rbp
  unsigned __int64 v90; // rcx
  unsigned __int64 v91; // r8
  __int64 v92; // rcx
  unsigned __int64 v93; // r8
  unsigned __int64 v94; // rcx
  char WsleContents; // si
  unsigned __int64 v96; // rbx
  unsigned __int64 v97; // rdx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  bool v102; // zf
  _BYTE *v103; // rax
  char v104; // al
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int64 v107; // rax
  __int64 v108; // r11
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // r10
  __int64 v111; // r8
  __int64 v112; // rax
  unsigned __int64 v113; // rcx
  __int64 v114; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v116; // rax
  __int64 v117; // rdx
  struct _LIST_ENTRY *v118; // rdx
  __int64 v119; // rax
  __int64 v120; // rdx
  struct _LIST_ENTRY *v121; // rax
  __int64 v122; // rax
  char v123; // r8^7
  struct _LIST_ENTRY *v124; // rax
  __int64 v125; // rax
  __int64 v126; // rcx
  unsigned __int64 v128; // rbx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // r8
  __int64 v132; // r9
  struct _LIST_ENTRY *v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v139; // eax
  _DWORD *v140; // r9
  unsigned __int64 v141; // rdx
  unsigned __int64 v142; // rdx
  signed __int32 v143[8]; // [rsp+0h] [rbp-118h] BYREF
  char v144; // [rsp+30h] [rbp-E8h]
  int v145; // [rsp+34h] [rbp-E4h]
  int v146; // [rsp+38h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-D8h]
  __int64 v148; // [rsp+48h] [rbp-D0h] BYREF
  int v149; // [rsp+50h] [rbp-C8h]
  unsigned int v150; // [rsp+54h] [rbp-C4h]
  int v151; // [rsp+58h] [rbp-C0h]
  __int64 v152; // [rsp+60h] [rbp-B8h]
  int v153; // [rsp+68h] [rbp-B0h] BYREF
  ULONG_PTR v154; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v155; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v156; // [rsp+80h] [rbp-98h]
  _BYTE *v157; // [rsp+88h] [rbp-90h]
  ULONG_PTR v158; // [rsp+90h] [rbp-88h]
  __int64 v159; // [rsp+98h] [rbp-80h]
  ULONG_PTR v160; // [rsp+A0h] [rbp-78h]
  __int64 v161; // [rsp+A8h] [rbp-70h]
  __int64 v162; // [rsp+B0h] [rbp-68h]
  __int64 v163; // [rsp+B8h] [rbp-60h]
  _QWORD *v164; // [rsp+C0h] [rbp-58h]
  ULONG_PTR v165; // [rsp+120h] [rbp+8h]
  unsigned __int8 v168; // [rsp+138h] [rbp+20h] BYREF

  v165 = BugCheckParameter3;
  v168 = 0;
  v4 = BugCheckParameter3;
  v5 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v164 = (_QWORD *)v5;
  v160 = v5 + 512;
  v162 = 48 * MiGetContainingPageTable(v5) - 0x58000000000LL;
  v6 = MiSectionControlArea(BugCheckParameter4);
  v163 = v6;
  v7 = 0;
  v149 = 0;
  v8 = *(_QWORD *)(v6 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v145 = 0;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v155 = v8;
  v146 = 0;
  v151 = 0;
  v156 = 0LL;
  v159 = *(_QWORD *)(qword_140C4E448 + 8 * v9);
  v150 = 2;
  v10 = v159 + 7232;
  v152 = v159 + 7232;
  SystemCacheReverseMap = MiGetSystemCacheReverseMap(v4);
  v158 = SystemCacheReverseMap;
  v12 = *(_QWORD *)(SystemCacheReverseMap + 24);
  v154 = v12;
  if ( v12 )
  {
    if ( (v12 & 1) != 0 )
    {
      v12 &= ~1uLL;
      v150 = 4;
      v154 = v12;
      *(_QWORD *)(SystemCacheReverseMap + 24) = v12;
    }
    if ( *(_QWORD *)v12 != v6 )
      KeBugCheckEx(0x1Au, 0x782uLL, SystemCacheReverseMap, v4, BugCheckParameter4);
  }
  v161 = MiLockWorkingSetOptimal(v10, v5, &v168);
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
  v157 = v17;
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
      v108 = v19 + 8LL * (v24 - 1);
      v109 = *(_QWORD *)(v108 + 24);
      if ( (v109 & 0xC00) == 0 )
      {
        v110 = *(_QWORD *)(v108 + 24) & 0x3FFLL;
        if ( (v109 & 0xFFFFFFFFFFFFF000uLL) + ((v110 + 1) << 12) == v4 && v110 + 1 >= v110 && v110 + 1 <= 0x3FF )
        {
          ++*(_QWORD *)(v19 + 16);
          *(_QWORD *)(v108 + 24) = ((unsigned __int16)v109 ^ (unsigned __int16)(v109 + 1)) & 0x3FF ^ v109;
          goto LABEL_17;
        }
      }
    }
    if ( v25
      || (v111 = v19 + 8LL * (v24 - 1), v112 = *(_QWORD *)(v111 + 24), (v112 & 0xC00) != 0)
      || (v112 & 0xFFFFFFFFFFFFF000uLL) != v4 + 4096
      || (v113 = *(_QWORD *)(v111 + 24) & 0x3FFLL, v113 + 1 < v113)
      || v113 + 1 > 0x3FF )
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
            v114 = *(unsigned int *)(v19 + 12);
            if ( (_DWORD)v114 == *(_DWORD *)(v19 + 8) )
              break;
          }
          if ( !v21 )
            goto LABEL_17;
        }
        if ( v21 )
        {
          *(_BYTE *)(v19 + 5) = 1;
          *(_QWORD *)(v19 + 16) = v114;
        }
      }
    }
    else
    {
      ++*(_QWORD *)(v19 + 16);
      *(_QWORD *)(v111 + 24) = ((unsigned __int16)(v112 - 4096) ^ (unsigned __int16)(v112 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v112 - 4096);
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
        v116 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v117 = v29 | 0x20;
        if ( (v116 & 0x20) == 0 )
          v117 = *(_QWORD *)v5;
        v29 = v117;
        if ( (v116 & 0x42) != 0 )
          v29 = v117 | 0x42;
      }
    }
    v148 = v29;
    *(_QWORD *)(v16 + 8 * v20) = v29;
    if ( (v29 & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v148)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v118 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v118 )
        {
          v119 = *((_QWORD *)&v118->Flink + (((unsigned __int64)&v148 >> 3) & 0x1FF));
          v120 = v29 | 0x20;
          if ( (v119 & 0x20) == 0 )
            v120 = v29;
          v29 = v120;
          if ( (v119 & 0x42) != 0 )
            v29 = v120 | 0x42;
        }
      }
      v89 = 48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( dword_140C4E628 )
      {
        v90 = (__int64)(v5 << 25) >> 16;
        if ( v90 >= 0xFFFFF68000000000uLL && v90 <= 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_113;
        v91 = ((v90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v92 = *(_QWORD *)v91;
        if ( v91 >= 0xFFFFF6FB7DBED000uLL
          && v91 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v92 & 1) != 0
          && ((v92 & 0x20) == 0 || (v92 & 0x42) == 0) )
        {
          v121 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v121 )
          {
            v122 = *((_QWORD *)&v121->Flink + ((v91 >> 3) & 0x1FF));
            v123 = HIBYTE(*(_QWORD *)v91);
            if ( (v122 & 0x20) == 0 )
              v123 = HIBYTE(v92);
            HIBYTE(v92) = v123;
            if ( (v122 & 0x42) != 0 )
              HIBYTE(v92) = v123;
          }
        }
        if ( (HIBYTE(v92) & 0xF) != 7 )
        {
LABEL_113:
          if ( (*(_BYTE *)v5 & 0x20) != 0 )
            MiLogPageAccess(v152, v5);
        }
      }
      if ( (a3 & 1) != 0 && (*(_QWORD *)(v89 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v104 = *(_BYTE *)(v89 + 35);
        if ( ((v104 & 8) != 0 || (v104 & 7u) > 2) && (unsigned int)MiGetPfnPriority(v89) <= 5 )
          MiLockSetPfnPriority(v105, 2LL);
      }
      v93 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v94 = *(_QWORD *)v93;
      if ( v93 >= 0xFFFFF6FB7DBED000uLL
        && v93 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v94 & 1) != 0
        && ((v94 & 0x20) == 0 || (v94 & 0x42) == 0) )
      {
        v124 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v124 )
        {
          v125 = *((_QWORD *)&v124->Flink + ((v93 >> 3) & 0x1FF));
          v93 = v94 | 0x20;
          if ( (v125 & 0x20) == 0 )
            v93 = v94;
          v94 = v93;
          if ( (v125 & 0x42) != 0 )
            v94 = v93 | 0x42;
        }
      }
      WsleContents = HIBYTE(v94) & 0xF | (16 * ((v94 >> 60) & 7));
      if ( (HIBYTE(v94) & 0xF) == 8 )
      {
        MiUnlockWsle(v152, v4, v89);
        WsleContents = MiGetWsleContents(v126, v4);
      }
      v96 = ZeroPte;
      v97 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v97, v93, v88) )
          LOBYTE(v97) = v97 | 0x20;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        LOBYTE(v97) = 32;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v97 & 0x20) != 0 )
      {
        if ( !MiPteInShadowRange(v5) )
          goto LABEL_99;
        if ( (unsigned int)MiPteHasShadow(v99, v98, v100, v101) )
        {
          if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
            v96 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)v5 = v96;
          MiWritePteShadow(v5, v96);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v96 = ZeroPte | 0x8000000000000000uLL;
          }
LABEL_99:
          *(_QWORD *)v5 = v96;
        }
LABEL_100:
        v151 = 1;
      }
      else if ( (MI_INTERLOCKED_EXCHANGE_PTE(v5, ZeroPte) & 0x20) != 0 )
      {
        goto LABEL_100;
      }
      v102 = v155 == 0;
      v103 = v157;
      v157[8 * v20] = WsleContents;
      v103[8 * v20 + 1] = 1;
      if ( !v102 )
        v156 = *(_QWORD *)(v89 + 8) | 0x8000000000000000uLL;
      v16 = BugCheckParameter2;
      v146 = v7 + 1;
      goto LABEL_27;
    }
    if ( (v29 & 0x400) == 0 )
      break;
    if ( v155 )
    {
      v30 = v29;
      if ( qword_140C4DD40 && (v29 & 0x10) == 0 )
        v30 = v29 & ~qword_140C4DD40;
      v156 = v30 >> 16;
    }
    v31 = ZeroPte;
    if ( MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow(v33, v32, v34, v35) )
      {
        if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
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
    v149 = v7;
    ++v20;
    v165 = v4;
    v5 += 8LL;
    if ( v5 >= v160 )
      goto LABEL_28;
  }
  v128 = ZeroPte;
  if ( !MiPteInShadowRange(v5) )
  {
LABEL_224:
    *(_QWORD *)v5 = v128;
    goto LABEL_28;
  }
  if ( !(unsigned int)MiPteHasShadow(v130, v129, v131, v132) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v128 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_224;
  }
  if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
    v128 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)v5 = v128;
  MiWritePteShadow(v5, v128);
LABEL_28:
  v36 = v152;
  if ( v146 )
  {
    v37 = MiRemoveWsleList(v152, v19, v157, v146);
    if ( v37 )
      MiRebuildPageTableLeafAges(0LL, v37 << 25 >> 16 << 25 >> 16);
  }
  if ( *(_QWORD *)(v158 + 16) )
  {
    v38 = 1;
    *(_QWORD *)(v158 + 16) = 0LL;
  }
  else
  {
    v38 = 0;
  }
  v144 = v38;
  MiUnlockPageTableInternal(v36, v161);
  LOBYTE(v39) = 2;
  MiUnlockWorkingSetShared(v36, v39);
  _InterlockedOr(v143, 0);
  v40 = v149;
  v41 = KiTbFlushTimeStamp;
  v42 = 0LL;
  v146 = KiTbFlushTimeStamp;
  v43 = 0;
  v44 = 0LL;
  if ( v149 > 0 )
  {
    v45 = (_QWORD *)BugCheckParameter2;
    v46 = 0;
    while ( 1 )
    {
      if ( (v45[v44] & 1) != 0 )
      {
        ++v42;
        v81 = v45[v145];
        v82 = (unsigned __int64)&v45[v145];
        v83 = 0LL;
        if ( MiPteInShadowRange(v82)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v81 & 1) != 0
          && ((v81 & 0x20) == 0 || (v81 & 0x42) == 0) )
        {
          v133 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v133 )
          {
            v134 = v81 | 0x20;
            v135 = *((_QWORD *)&v133->Flink + ((v82 >> 3) & 0x1FF));
            if ( (v135 & 0x20) == 0 )
              v134 = v81;
            v81 = v134;
            if ( (v135 & 0x42) != 0 )
              v81 = v134 | 0x42;
          }
        }
        v84 = (v81 >> 12) & 0xFFFFFFFFFLL;
        v85 = 48 * v84 - 0x58000000000LL;
        v86 = _interlockedbittestandset64((volatile signed __int32 *)(v85 + 24), 0x3FuLL);
        if ( v43 )
        {
          if ( v86 )
          {
            MiDecrementAndInsertStandbyPages((_QWORD *)BugCheckParameter2, v43, 2u);
            v45 = (_QWORD *)BugCheckParameter2;
            v46 = v145 - 1;
            --v44;
            v43 = 0;
            --v42;
            goto LABEL_36;
          }
        }
        else
        {
          v106 = 0LL;
          v153 = 0;
          if ( v86 )
          {
            do
            {
              do
                KeYieldProcessorEx(&v153, v106);
              while ( *(__int64 *)(v85 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v85 + 24), 0x3FuLL) );
          }
        }
        v45 = (_QWORD *)BugCheckParameter2;
        if ( (*(_BYTE *)(BugCheckParameter2 + 8 * v44) & 0x42) != 0 )
        {
          v107 = MiCaptureDirtyBitToPfn(48 * v84 - 0x58000000000LL);
          v45 = (_QWORD *)BugCheckParameter2;
          v83 = v107;
LABEL_120:
          if ( v43 )
          {
            MiDecrementAndInsertStandbyPages(v45, v43, 0x11u);
            v43 = 0;
          }
          MiDecrementShareCount(48 * v84 - 0x58000000000LL);
          _InterlockedAnd64((volatile signed __int64 *)(v85 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v83 )
            MiReleasePageFileInfo(v159, v83, 0LL);
          v46 = v145;
          v45 = (_QWORD *)BugCheckParameter2;
          goto LABEL_36;
        }
        if ( (*(_QWORD *)(v85 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
          || *(_WORD *)(v85 + 32) != 1
          || (*(_QWORD *)(v85 + 24) & 0x4000000000000000LL) != 0
          || (*(_BYTE *)(v85 + 35) & 0x40) != 0
          || (*(_BYTE *)(v85 + 34) & 0x10) != 0 )
        {
          goto LABEL_120;
        }
        v46 = v145;
        v87 = v43++;
        *(_QWORD *)(BugCheckParameter2 + 8 * v87) = v85;
      }
LABEL_36:
      ++v46;
      ++v44;
      v145 = v46;
      if ( v44 >= v40 )
      {
        if ( v43 )
          MiDecrementAndInsertStandbyPages(v45, v43, 2u);
        v4 = v165;
        v41 = v146;
        v38 = v144;
        break;
      }
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v47 = v168;
    if ( v168 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v47 = v168;
      v139 = ~(unsigned __int16)(-1LL << (v168 + 1));
      v102 = (v139 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v139;
      if ( v102 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v47 = v168;
  }
  __writecr8(v47);
  v48 = v154;
  if ( v38 == 1 )
    MiManageSubsectionView(v154, v158, v150);
  if ( v42 )
  {
    v49 = v162;
    MiLockPageInline(v162);
    *(_QWORD *)(v49 + 24) ^= (*(_QWORD *)(v49 + 24) ^ (*(_QWORD *)(v49 + 24) - v42)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v50 = v168;
  }
  else
  {
    v50 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v50 <= 0xFu )
    {
      v140 = KeGetCurrentPrcb()->SchedulerAssist;
      v140[5] |= ~((unsigned __int8)(1LL << (v50 + 1)) - 1) & 4;
    }
    v168 = v50;
  }
  v51 = 0LL;
  if ( !v155 )
    v48 = 0LL;
  v52 = v163;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v163 + 72));
  if ( v48 )
  {
    v53 = v156;
    while ( 1 )
    {
      v54 = MiRemoveViewsFromSection(v48);
      v55 = *(_QWORD *)(v48 + 8);
      v51 += v54;
      if ( v53 >= v55 && v53 < v55 + 8LL * *(unsigned int *)(v48 + 44) )
        break;
      v48 = *(_QWORD *)(v48 + 16);
      if ( !v48 )
        KeBugCheckEx(0x1Au, 0x783uLL, BugCheckParameter2, v4, BugCheckParameter4);
    }
  }
  --*(_QWORD *)(v52 + 40);
  --*(_DWORD *)(v52 + 88);
  MiCheckControlArea(v52, v50);
  if ( v51 )
    MiReturnCrossPartitionSectionCharges(v159, 1LL, v51);
  v59 = MiSwizzleInvalidPte((unsigned __int64)(v41 & 0xFFFFF) << 28, v56, v57, v58);
  v60 = v164;
  v61 = v59;
  v148 = v59;
  v62 = v59;
  if ( MiPteInShadowRange((unsigned __int64)(v164 + 2)) )
  {
    if ( !(unsigned int)MiPteHasShadow(v64, v63, v65, v66) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v61 & 1) != 0 )
      {
        v62 |= 0x8000000000000000uLL;
      }
      goto LABEL_55;
    }
    v141 = v61;
    if ( !HIBYTE(word_140C4DE08) && (v61 & 1) != 0 )
      v141 = v61 | 0x8000000000000000uLL;
    v60[2] = v141;
    MiWritePteShadow(v60 + 2, v141);
  }
  else
  {
LABEL_55:
    v60[2] = v62;
  }
  v67 = ZeroPte;
  if ( MiPteInShadowRange((unsigned __int64)(v60 + 1)) )
  {
    if ( !(unsigned int)MiPteHasShadow(v69, v68, v70, v71) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v67 = ZeroPte | 0x8000000000000000uLL;
      }
      goto LABEL_57;
    }
    if ( !HIBYTE(word_140C4DE08) && (ZeroPte & 1) != 0 )
      v67 = ZeroPte | 0x8000000000000000uLL;
    v60[1] = v67;
    MiWritePteShadow(v60 + 1, v67);
  }
  else
  {
LABEL_57:
    v60[1] = v67;
  }
  v72 = v148;
  if ( v151 == 1 )
  {
    if ( qword_140C4DD40 )
    {
      if ( (v148 & 0x10) != 0 )
        v72 = v148 & 0xFFFFFFEF;
      else
        v72 = v148 & ~(_DWORD)qword_140C4DD40;
    }
    v73 = v72 & 0xFFFFFFF | 0x20000000LL;
  }
  else
  {
    if ( qword_140C4DD40 )
    {
      if ( (v148 & 0x10) != 0 )
        v72 = v148 & 0xFFFFFFEF;
      else
        v72 = v148 & ~(_DWORD)qword_140C4DD40;
    }
    v73 = v72 & 0xFFFFFFF;
  }
  v148 = MiSwizzleInvalidPte(v73, qword_140C4DD40, v70, v71);
  v74 = v148;
  v75 = v148;
  result = (struct _KTHREAD *)MiPteInShadowRange((unsigned __int64)(v60 + 3));
  if ( (_DWORD)result )
  {
    if ( !(unsigned int)MiPteHasShadow(v78, v77, v79, v80) )
    {
      result = KeGetCurrentThread();
      if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v74 & 1) != 0 )
        v75 |= 0x8000000000000000uLL;
      goto LABEL_64;
    }
    v142 = v74;
    if ( !HIBYTE(word_140C4DE08) && (v74 & 1) != 0 )
      v142 = v74 | 0x8000000000000000uLL;
    v60[3] = v142;
    result = (struct _KTHREAD *)MiWritePteShadow(v60 + 3, v142);
  }
  else
  {
LABEL_64:
    v60[3] = v75;
  }
  if ( (a3 & 2) == 0 )
    return (struct _KTHREAD *)MiReleaseSystemCacheView(v60);
  return result;
}
