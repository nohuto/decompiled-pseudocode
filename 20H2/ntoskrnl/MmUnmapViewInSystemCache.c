/*
 * XREFs of MmUnmapViewInSystemCache @ 0x14029B2F0
 * Callers:
 *     CcUnmapVacb @ 0x14067DAE8 (CcUnmapVacb.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiRemoveViewsFromSection @ 0x14022BD2C (MiRemoveViewsFromSection.c)
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockSetPfnPriority @ 0x14023AE9C (MiLockSetPfnPriority.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiManageSubsectionView @ 0x1402986E0 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x140299590 (MiGetSystemCacheReverseMap.c)
 *     MiReleaseSystemCacheView @ 0x14029AFD0 (MiReleaseSystemCacheView.c)
 *     MiCheckControlArea @ 0x14029BE20 (MiCheckControlArea.c)
 *     MiLockWorkingSetOptimal @ 0x14029C0FC (MiLockWorkingSetOptimal.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MiRebuildPageTableLeafAges @ 0x14029DDE0 (MiRebuildPageTableLeafAges.c)
 *     MiRemoveWsleList @ 0x14029DF00 (MiRemoveWsleList.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MiDecrementAndInsertStandbyPages @ 0x1402AF7F0 (MiDecrementAndInsertStandbyPages.c)
 *     MiLogPageAccess @ 0x1402BDB30 (MiLogPageAccess.c)
 *     MiGetWsleContents @ 0x1402D3CE0 (MiGetWsleContents.c)
 *     MiUnlockWsle @ 0x1402D3E4C (MiUnlockWsle.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiCompressTbFlushList @ 0x140306530 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140318E28 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     qsort @ 0x1403D2150 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055361C (MiReturnCrossPartitionSectionCharges.c)
 */

void __fastcall MmUnmapViewInSystemCache(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v5; // r14
  unsigned __int64 v6; // rbp
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
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rbx
  __int64 v37; // rax
  char v38; // bp
  __int64 v39; // r8
  __int64 v40; // rsi
  int v41; // r14d
  __int64 v42; // r13
  unsigned int v43; // r12d
  __int64 v44; // rdi
  ULONG_PTR v45; // r9
  int v46; // ecx
  unsigned __int8 v47; // bl
  ULONG_PTR v48; // rsi
  __int64 v49; // rbx
  unsigned __int8 v50; // bl
  __int64 v51; // r12
  unsigned __int64 v52; // rbp
  unsigned __int64 v53; // rdi
  __int64 v54; // rax
  unsigned __int64 v55; // rcx
  __int64 v56; // rax
  unsigned __int64 *v57; // rbp
  unsigned __int64 v58; // rsi
  __int64 v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  int v69; // ecx
  __int64 v70; // rcx
  unsigned __int64 v71; // rsi
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  unsigned __int64 v77; // r14
  unsigned __int64 v78; // r15
  __int64 v79; // rbx
  __int64 v80; // r8
  __int64 v81; // r14
  __int64 v82; // rbp
  signed __int8 v83; // al
  __int64 v84; // rax
  __int64 v85; // r9
  __int64 v86; // rbp
  unsigned __int64 v87; // rcx
  unsigned __int64 v88; // r8
  __int64 v89; // rcx
  unsigned __int64 v90; // r8
  unsigned __int64 v91; // rcx
  char WsleContents; // si
  unsigned __int64 v93; // rbx
  unsigned __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  bool v99; // zf
  _BYTE *v100; // rax
  char v101; // al
  __int64 v102; // rcx
  __int64 v103; // rax
  __int64 v104; // r11
  unsigned __int64 v105; // rax
  unsigned __int64 v106; // r10
  __int64 v107; // r8
  __int64 v108; // rax
  unsigned __int64 v109; // rcx
  __int64 v110; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v112; // rax
  __int64 v113; // rdx
  struct _LIST_ENTRY *v114; // rdx
  __int64 v115; // rax
  __int64 v116; // rdx
  struct _LIST_ENTRY *v117; // rax
  __int64 v118; // rax
  char v119; // r8^7
  struct _LIST_ENTRY *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int64 v124; // rbx
  __int64 v125; // rdx
  __int64 v126; // rcx
  __int64 v127; // r8
  __int64 v128; // r9
  struct _LIST_ENTRY *v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v135; // eax
  _DWORD *v136; // r9
  unsigned __int64 v137; // rdx
  unsigned __int64 v138; // rdx
  signed __int32 v139[8]; // [rsp+0h] [rbp-118h] BYREF
  char v140; // [rsp+30h] [rbp-E8h]
  int v141; // [rsp+34h] [rbp-E4h]
  int v142; // [rsp+38h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-D8h]
  __int64 v144; // [rsp+48h] [rbp-D0h] BYREF
  int v145; // [rsp+50h] [rbp-C8h]
  int v146; // [rsp+54h] [rbp-C4h]
  int v147; // [rsp+58h] [rbp-C0h]
  __int64 v148; // [rsp+60h] [rbp-B8h]
  int v149; // [rsp+68h] [rbp-B0h] BYREF
  ULONG_PTR v150; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v151; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v152; // [rsp+80h] [rbp-98h]
  _BYTE *v153; // [rsp+88h] [rbp-90h]
  _QWORD *v154; // [rsp+90h] [rbp-88h]
  __int64 v155; // [rsp+98h] [rbp-80h]
  unsigned __int64 v156; // [rsp+A0h] [rbp-78h]
  __int64 v157; // [rsp+A8h] [rbp-70h]
  __int64 v158; // [rsp+B0h] [rbp-68h]
  unsigned __int64 v159; // [rsp+B8h] [rbp-60h]
  unsigned __int64 *v160; // [rsp+C0h] [rbp-58h]
  ULONG_PTR v161; // [rsp+120h] [rbp+8h]
  unsigned __int8 v164; // [rsp+138h] [rbp+20h] BYREF

  v161 = BugCheckParameter3;
  v164 = 0;
  v4 = BugCheckParameter3;
  v5 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v160 = (unsigned __int64 *)v5;
  v156 = v5 + 512;
  v158 = 48 * MiGetContainingPageTable(v5) - 0x58000000000LL;
  v6 = MiSectionControlArea(BugCheckParameter4);
  v159 = v6;
  v7 = 0;
  v145 = 0;
  v8 = *(_QWORD *)(v6 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v141 = 0;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v151 = v8;
  v142 = 0;
  v147 = 0;
  v152 = 0LL;
  v155 = *(_QWORD *)(qword_140C4E4C8 + 8 * v9);
  v146 = 2;
  v10 = v155 + 7232;
  v148 = v155 + 7232;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v4);
  v154 = SystemCacheReverseMap;
  v12 = SystemCacheReverseMap[3];
  v150 = v12;
  if ( v12 )
  {
    if ( (v12 & 1) != 0 )
    {
      v12 &= ~1uLL;
      v146 = 4;
      v150 = v12;
      SystemCacheReverseMap[3] = v12;
    }
    if ( *(_QWORD *)v12 != v6 )
      KeBugCheckEx(0x1Au, 0x782uLL, (ULONG_PTR)SystemCacheReverseMap, v4, BugCheckParameter4);
  }
  v157 = MiLockWorkingSetOptimal(v10, v5, &v164);
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
  v153 = v17;
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
      v104 = v19 + 8LL * (v24 - 1);
      v105 = *(_QWORD *)(v104 + 24);
      if ( (v105 & 0xC00) == 0 )
      {
        v106 = *(_QWORD *)(v104 + 24) & 0x3FFLL;
        if ( (v105 & 0xFFFFFFFFFFFFF000uLL) + ((v106 + 1) << 12) == v4 && v106 + 1 >= v106 && v106 + 1 <= 0x3FF )
        {
          ++*(_QWORD *)(v19 + 16);
          *(_QWORD *)(v104 + 24) = ((unsigned __int16)v105 ^ (unsigned __int16)(v105 + 1)) & 0x3FF ^ v105;
          goto LABEL_17;
        }
      }
    }
    if ( v25
      || (v107 = v19 + 8LL * (v24 - 1), v108 = *(_QWORD *)(v107 + 24), (v108 & 0xC00) != 0)
      || (v108 & 0xFFFFFFFFFFFFF000uLL) != v4 + 4096
      || (v109 = *(_QWORD *)(v107 + 24) & 0x3FFLL, v109 + 1 < v109)
      || v109 + 1 > 0x3FF )
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
            v110 = *(unsigned int *)(v19 + 12);
            if ( (_DWORD)v110 == *(_DWORD *)(v19 + 8) )
              break;
          }
          if ( !v21 )
            goto LABEL_17;
        }
        if ( v21 )
        {
          *(_BYTE *)(v19 + 5) = 1;
          *(_QWORD *)(v19 + 16) = v110;
        }
      }
    }
    else
    {
      ++*(_QWORD *)(v19 + 16);
      *(_QWORD *)(v107 + 24) = ((unsigned __int16)(v108 - 4096) ^ (unsigned __int16)(v108 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v108 - 4096);
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
        v112 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v113 = v29 | 0x20;
        if ( (v112 & 0x20) == 0 )
          v113 = *(_QWORD *)v5;
        v29 = v113;
        if ( (v112 & 0x42) != 0 )
          v29 = v113 | 0x42;
      }
    }
    v144 = v29;
    *(_QWORD *)(v16 + 8 * v20) = v29;
    if ( (v29 & 1) != 0 )
    {
      if ( MiPteInShadowRange((unsigned __int64)&v144)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
      {
        v114 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v114 )
        {
          v115 = *((_QWORD *)&v114->Flink + (((unsigned __int64)&v144 >> 3) & 0x1FF));
          v116 = v29 | 0x20;
          if ( (v115 & 0x20) == 0 )
            v116 = v29;
          v29 = v116;
          if ( (v115 & 0x42) != 0 )
            v29 = v116 | 0x42;
        }
      }
      v86 = 48 * ((v29 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( dword_140C4E6A8 )
      {
        v87 = (__int64)(v5 << 25) >> 16;
        if ( v87 >= 0xFFFFF68000000000uLL && v87 <= 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_113;
        v88 = ((v87 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v89 = *(_QWORD *)v88;
        if ( v88 >= 0xFFFFF6FB7DBED000uLL
          && v88 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v89 & 1) != 0
          && ((v89 & 0x20) == 0 || (v89 & 0x42) == 0) )
        {
          v117 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v117 )
          {
            v118 = *((_QWORD *)&v117->Flink + ((v88 >> 3) & 0x1FF));
            v119 = HIBYTE(*(_QWORD *)v88);
            if ( (v118 & 0x20) == 0 )
              v119 = HIBYTE(v89);
            HIBYTE(v89) = v119;
            if ( (v118 & 0x42) != 0 )
              HIBYTE(v89) = v119;
          }
        }
        if ( (HIBYTE(v89) & 0xF) != 7 )
        {
LABEL_113:
          if ( (*(_BYTE *)v5 & 0x20) != 0 )
            MiLogPageAccess(v148, v5);
        }
      }
      if ( (a3 & 1) != 0 && (*(_QWORD *)(v86 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v101 = *(_BYTE *)(v86 + 35);
        if ( ((v101 & 8) != 0 || (v101 & 7u) > 2) && (unsigned int)MiGetPfnPriority(v86) <= 5 )
          MiLockSetPfnPriority(v102, 2);
      }
      v90 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v91 = *(_QWORD *)v90;
      if ( v90 >= 0xFFFFF6FB7DBED000uLL
        && v90 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v91 & 1) != 0
        && ((v91 & 0x20) == 0 || (v91 & 0x42) == 0) )
      {
        v120 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v120 )
        {
          v121 = *((_QWORD *)&v120->Flink + ((v90 >> 3) & 0x1FF));
          v90 = v91 | 0x20;
          if ( (v121 & 0x20) == 0 )
            v90 = v91;
          v91 = v90;
          if ( (v121 & 0x42) != 0 )
            v91 = v90 | 0x42;
        }
      }
      WsleContents = HIBYTE(v91) & 0xF | (16 * ((v91 >> 60) & 7));
      if ( (HIBYTE(v91) & 0xF) == 8 )
      {
        MiUnlockWsle(v148, v4, v86);
        WsleContents = MiGetWsleContents(v122, v4);
      }
      v93 = ZeroPte;
      v94 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBED7F8uLL, v94, v90, v85) )
          LOBYTE(v94) = v94 | 0x20;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        LOBYTE(v94) = 32;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v94 & 0x20) != 0 )
      {
        if ( !MiPteInShadowRange(v5) )
          goto LABEL_99;
        if ( (unsigned int)MiPteHasShadow(v96, v95, v97, v98) )
        {
          if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
            v93 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)v5 = v93;
          MiWritePteShadow(v5, v93);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v93 = ZeroPte | 0x8000000000000000uLL;
          }
LABEL_99:
          *(_QWORD *)v5 = v93;
        }
LABEL_100:
        v147 = 1;
      }
      else if ( (MI_INTERLOCKED_EXCHANGE_PTE(v5, ZeroPte) & 0x20) != 0 )
      {
        goto LABEL_100;
      }
      v99 = v151 == 0;
      v100 = v153;
      v153[8 * v20] = WsleContents;
      v100[8 * v20 + 1] = 1;
      if ( !v99 )
        v152 = *(_QWORD *)(v86 + 8) | 0x8000000000000000uLL;
      v16 = BugCheckParameter2;
      v142 = v7 + 1;
      goto LABEL_27;
    }
    if ( (v29 & 0x400) == 0 )
      break;
    if ( v151 )
    {
      v30 = v29;
      if ( qword_140C4DDC0 && (v29 & 0x10) == 0 )
        v30 = v29 & ~qword_140C4DDC0;
      v152 = v30 >> 16;
    }
    v31 = ZeroPte;
    if ( MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow(v33, v32, v34, v35) )
      {
        if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
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
    v145 = v7;
    ++v20;
    v161 = v4;
    v5 += 8LL;
    if ( v5 >= v156 )
      goto LABEL_28;
  }
  v124 = ZeroPte;
  if ( !MiPteInShadowRange(v5) )
  {
LABEL_224:
    *(_QWORD *)v5 = v124;
    goto LABEL_28;
  }
  if ( !(unsigned int)MiPteHasShadow(v126, v125, v127, v128) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v124 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_224;
  }
  if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
    v124 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)v5 = v124;
  MiWritePteShadow(v5, v124);
LABEL_28:
  v36 = v148;
  if ( v142 )
  {
    v37 = MiRemoveWsleList(v148, v19, v153, v142);
    if ( v37 )
      MiRebuildPageTableLeafAges(0LL, v37 << 25 >> 16 << 25 >> 16);
  }
  if ( v154[2] )
  {
    v38 = 1;
    v154[2] = 0LL;
  }
  else
  {
    v38 = 0;
  }
  v140 = v38;
  MiUnlockPageTableInternal(v36);
  MiUnlockWorkingSetShared(v36, 2u);
  _InterlockedOr(v139, 0);
  v40 = v145;
  v41 = KiTbFlushTimeStamp;
  v42 = 0LL;
  v142 = KiTbFlushTimeStamp;
  v43 = 0;
  v44 = 0LL;
  if ( v145 > 0 )
  {
    v45 = BugCheckParameter2;
    v46 = 0;
    while ( 1 )
    {
      if ( (*(_BYTE *)(v45 + 8 * v44) & 1) != 0 )
      {
        ++v42;
        v77 = *(_QWORD *)(v45 + 8LL * v141);
        v78 = v45 + 8LL * v141;
        v79 = 0LL;
        if ( MiPteInShadowRange(v78)
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v77 & 1) != 0
          && ((v77 & 0x20) == 0 || (v77 & 0x42) == 0) )
        {
          v129 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v129 )
          {
            v130 = v77 | 0x20;
            v131 = *((_QWORD *)&v129->Flink + ((v78 >> 3) & 0x1FF));
            if ( (v131 & 0x20) == 0 )
              v130 = v77;
            v77 = v130;
            if ( (v131 & 0x42) != 0 )
              v77 = v130 | 0x42;
          }
        }
        v81 = (v77 >> 12) & 0xFFFFFFFFFLL;
        v82 = 48 * v81 - 0x58000000000LL;
        v83 = _interlockedbittestandset64((volatile signed __int32 *)(v82 + 24), 0x3FuLL);
        if ( v43 )
        {
          if ( v83 )
          {
            LOBYTE(v80) = 2;
            MiDecrementAndInsertStandbyPages(BugCheckParameter2, v43, v80);
            v45 = BugCheckParameter2;
            v46 = v141 - 1;
            --v44;
            v43 = 0;
            --v42;
            goto LABEL_36;
          }
        }
        else
        {
          v149 = 0;
          if ( v83 )
          {
            do
            {
              do
                KeYieldProcessorEx(&v149);
              while ( *(__int64 *)(v82 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v82 + 24), 0x3FuLL) );
          }
        }
        v45 = BugCheckParameter2;
        if ( (*(_BYTE *)(BugCheckParameter2 + 8 * v44) & 0x42) != 0 )
        {
          v103 = MiCaptureDirtyBitToPfn(48 * v81 - 0x58000000000LL);
          v45 = BugCheckParameter2;
          v79 = v103;
LABEL_120:
          if ( v43 )
          {
            LOBYTE(v39) = 17;
            MiDecrementAndInsertStandbyPages(v45, v43, v39);
            v43 = 0;
          }
          MiDecrementShareCount(48 * v81 - 0x58000000000LL);
          _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v79 )
            MiReleasePageFileInfo(v155, v79, 0LL);
          v46 = v141;
          v45 = BugCheckParameter2;
          goto LABEL_36;
        }
        v39 = 0x3FFFFFFFFFFFFFFFLL;
        if ( (*(_QWORD *)(v82 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
          || *(_WORD *)(v82 + 32) != 1
          || (*(_QWORD *)(v82 + 24) & 0x4000000000000000LL) != 0
          || (*(_BYTE *)(v82 + 35) & 0x40) != 0
          || (*(_BYTE *)(v82 + 34) & 0x10) != 0 )
        {
          goto LABEL_120;
        }
        v46 = v141;
        v84 = v43++;
        *(_QWORD *)(BugCheckParameter2 + 8 * v84) = v82;
      }
LABEL_36:
      ++v46;
      ++v44;
      v141 = v46;
      if ( v44 >= v40 )
      {
        if ( v43 )
        {
          LOBYTE(v39) = 2;
          MiDecrementAndInsertStandbyPages(v45, v43, v39);
        }
        v4 = v161;
        v41 = v142;
        v38 = v140;
        break;
      }
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v47 = v164;
    if ( v164 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v47 = v164;
      v135 = ~(unsigned __int16)(-1LL << (v164 + 1));
      v99 = (v135 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v135;
      if ( v99 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v47 = v164;
  }
  __writecr8(v47);
  v48 = v150;
  if ( v38 == 1 )
    MiManageSubsectionView((__int64 *)v150, v154, v146);
  if ( v42 )
  {
    v49 = v158;
    MiLockPageInline(v158);
    *(_QWORD *)(v49 + 24) ^= (*(_QWORD *)(v49 + 24) ^ (*(_QWORD *)(v49 + 24) - v42)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v50 = v164;
  }
  else
  {
    v50 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v50 <= 0xFu )
    {
      v136 = KeGetCurrentPrcb()->SchedulerAssist;
      v136[5] |= ~((unsigned __int8)(1LL << (v50 + 1)) - 1) & 4;
    }
    v164 = v50;
  }
  v51 = 0LL;
  if ( !v151 )
    v48 = 0LL;
  v52 = v159;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v159 + 72));
  if ( v48 )
  {
    v53 = v152;
    while ( 1 )
    {
      v54 = MiRemoveViewsFromSection(v48, *(unsigned int *)(v48 + 44), 4u);
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
    MiReturnCrossPartitionSectionCharges(v155, 1LL, v51);
  v56 = MiSwizzleInvalidPte((unsigned __int64)(v41 & 0xFFFFF) << 28);
  v57 = v160;
  v58 = v56;
  v144 = v56;
  v59 = v56;
  if ( MiPteInShadowRange((unsigned __int64)(v160 + 2)) )
  {
    if ( !(unsigned int)MiPteHasShadow(v61, v60, v62, v63) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v58 & 1) != 0 )
      {
        v59 |= 0x8000000000000000uLL;
      }
      goto LABEL_55;
    }
    v137 = v58;
    if ( !HIBYTE(word_140C4DE88) && (v58 & 1) != 0 )
      v137 = v58 | 0x8000000000000000uLL;
    v57[2] = v137;
    MiWritePteShadow(v57 + 2, v137);
  }
  else
  {
LABEL_55:
    v57[2] = v59;
  }
  v64 = ZeroPte;
  if ( MiPteInShadowRange((unsigned __int64)(v57 + 1)) )
  {
    if ( !(unsigned int)MiPteHasShadow(v66, v65, v67, v68) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v64 = ZeroPte | 0x8000000000000000uLL;
      }
      goto LABEL_57;
    }
    if ( !HIBYTE(word_140C4DE88) && (ZeroPte & 1) != 0 )
      v64 = ZeroPte | 0x8000000000000000uLL;
    v57[1] = v64;
    MiWritePteShadow(v57 + 1, v64);
  }
  else
  {
LABEL_57:
    v57[1] = v64;
  }
  v69 = v144;
  if ( v147 == 1 )
  {
    if ( qword_140C4DDC0 )
    {
      if ( (v144 & 0x10) != 0 )
        v69 = v144 & 0xFFFFFFEF;
      else
        v69 = v144 & ~(_DWORD)qword_140C4DDC0;
    }
    v70 = v69 & 0xFFFFFFF | 0x20000000LL;
  }
  else
  {
    if ( qword_140C4DDC0 )
    {
      if ( (v144 & 0x10) != 0 )
        v69 = v144 & 0xFFFFFFEF;
      else
        v69 = v144 & ~(_DWORD)qword_140C4DDC0;
    }
    v70 = v69 & 0xFFFFFFF;
  }
  v144 = MiSwizzleInvalidPte(v70);
  v71 = v144;
  v72 = v144;
  if ( MiPteInShadowRange((unsigned __int64)(v57 + 3)) )
  {
    if ( !(unsigned int)MiPteHasShadow(v74, v73, v75, v76) )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v71 & 1) != 0 )
      {
        v72 |= 0x8000000000000000uLL;
      }
      goto LABEL_64;
    }
    v138 = v71;
    if ( !HIBYTE(word_140C4DE88) && (v71 & 1) != 0 )
      v138 = v71 | 0x8000000000000000uLL;
    v57[3] = v138;
    MiWritePteShadow(v57 + 3, v138);
  }
  else
  {
LABEL_64:
    v57[3] = v72;
  }
  if ( (a3 & 2) == 0 )
    MiReleaseSystemCacheView(v57);
}
