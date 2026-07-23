/*
 * XREFs of MmUnmapViewInSystemCache @ 0x14031E830
 * Callers:
 *     CcUnmapVacb @ 0x140701758 (CcUnmapVacb.c)
 * Callees:
 *     MiRebuildPageTableLeafAges @ 0x140202200 (MiRebuildPageTableLeafAges.c)
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiLockSetPfnPriority @ 0x14020900C (MiLockSetPfnPriority.c)
 *     MiRemoveWsleList @ 0x14020BD70 (MiRemoveWsleList.c)
 *     MiCompressTbFlushList @ 0x140220720 (MiCompressTbFlushList.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140239628 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiUnlockWsle @ 0x14025DBBC (MiUnlockWsle.c)
 *     MiGetWsleContents @ 0x14025ECE0 (MiGetWsleContents.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiGetContainingPageTable @ 0x1402E2CA0 (MiGetContainingPageTable.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiLockWorkingSetOptimal @ 0x14031A9E4 (MiLockWorkingSetOptimal.c)
 *     MiReleaseSystemCacheView @ 0x14031AA4C (MiReleaseSystemCacheView.c)
 *     MiManageSubsectionView @ 0x14031BE50 (MiManageSubsectionView.c)
 *     MiGetSystemCacheReverseMap @ 0x14031CD00 (MiGetSystemCacheReverseMap.c)
 *     MiCheckControlArea @ 0x14031F800 (MiCheckControlArea.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveViewsFromSection @ 0x14031FCC8 (MiRemoveViewsFromSection.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiDecrementAndInsertStandbyPages @ 0x140337130 (MiDecrementAndInsertStandbyPages.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     qsort @ 0x1403D2C30 (qsort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x14055532C (MiReturnCrossPartitionSectionCharges.c)
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
  __int64 v22; // rbx
  unsigned __int64 v23; // rsi
  char v24; // cl
  unsigned int v25; // r9d
  char v26; // r8
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  size_t v29; // rcx
  unsigned __int64 v30; // rbx
  __int64 v31; // rcx
  unsigned __int64 v32; // rbx
  __int64 v33; // rbx
  __int64 v34; // rax
  char v35; // bp
  __int64 v36; // r8
  _DWORD *SchedulerAssist; // r9
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // r14d
  __int64 v41; // r13
  unsigned int v42; // r12d
  __int64 v43; // rdi
  int v44; // ecx
  unsigned __int8 v45; // bl
  ULONG_PTR v46; // rsi
  __int64 v47; // rbx
  unsigned __int8 v48; // bl
  __int64 v49; // r12
  __int64 v50; // rbp
  unsigned __int64 v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // rcx
  __int64 v54; // rax
  _QWORD *v55; // rbp
  unsigned __int64 v56; // rsi
  __int64 v57; // rbx
  unsigned __int64 v58; // rbx
  int v59; // ecx
  __int64 v60; // rcx
  unsigned __int64 v61; // rsi
  __int64 v62; // rbx
  unsigned __int64 v63; // r14
  unsigned __int64 v64; // r15
  unsigned __int64 v65; // rbx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r14
  __int64 v69; // rbp
  signed __int8 v70; // al
  __int64 v71; // rax
  __int64 v72; // rbp
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // r8
  __int64 v75; // rcx
  unsigned __int64 v76; // r8
  unsigned __int64 v77; // rcx
  char WsleContents; // si
  unsigned __int64 v79; // rbx
  unsigned __int64 v80; // rdx
  bool v81; // zf
  char *v82; // rax
  char v83; // al
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // r11
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // r10
  __int64 v89; // r8
  __int64 v90; // rax
  unsigned __int64 v91; // rcx
  __int64 v92; // rax
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v94; // rax
  __int64 v95; // rdx
  struct _LIST_ENTRY *v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rdx
  struct _LIST_ENTRY *v99; // rax
  __int64 v100; // rax
  char v101; // r8^7
  struct _LIST_ENTRY *v102; // rax
  __int64 v103; // rax
  __int64 v104; // r8
  __int64 v105; // rcx
  unsigned __int64 v107; // rbx
  struct _LIST_ENTRY *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v113; // eax
  _DWORD *v114; // r9
  unsigned __int64 v115; // rdx
  unsigned __int64 v116; // rdx
  signed __int32 v117[8]; // [rsp+0h] [rbp-118h] BYREF
  char v118; // [rsp+30h] [rbp-E8h]
  int v119; // [rsp+34h] [rbp-E4h]
  int v120; // [rsp+38h] [rbp-E0h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-D8h]
  __int64 v122; // [rsp+48h] [rbp-D0h] BYREF
  int v123; // [rsp+50h] [rbp-C8h]
  int v124; // [rsp+54h] [rbp-C4h]
  int v125; // [rsp+58h] [rbp-C0h]
  __int64 v126; // [rsp+60h] [rbp-B8h]
  int v127; // [rsp+68h] [rbp-B0h] BYREF
  ULONG_PTR v128; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v129; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v130; // [rsp+80h] [rbp-98h]
  char *v131; // [rsp+88h] [rbp-90h]
  _QWORD *v132; // [rsp+90h] [rbp-88h]
  __int64 v133; // [rsp+98h] [rbp-80h]
  ULONG_PTR v134; // [rsp+A0h] [rbp-78h]
  unsigned __int64 v135; // [rsp+A8h] [rbp-70h]
  __int64 v136; // [rsp+B0h] [rbp-68h]
  __int64 v137; // [rsp+B8h] [rbp-60h]
  _QWORD *v138; // [rsp+C0h] [rbp-58h]
  ULONG_PTR v139; // [rsp+120h] [rbp+8h]
  unsigned __int8 v142; // [rsp+138h] [rbp+20h] BYREF

  v139 = BugCheckParameter3;
  v142 = 0;
  v4 = BugCheckParameter3;
  v5 = ((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v138 = (_QWORD *)v5;
  v134 = v5 + 512;
  v136 = 48 * MiGetContainingPageTable(v5) - 0x58000000000LL;
  v6 = MiSectionControlArea(BugCheckParameter4);
  v137 = v6;
  v7 = 0;
  v123 = 0;
  v8 = *(_QWORD *)(v6 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  v119 = 0;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v129 = v8;
  v120 = 0;
  v125 = 0;
  v130 = 0LL;
  v133 = *(_QWORD *)(qword_140C4E688 + 8 * v9);
  v124 = 2;
  v10 = v133 + 7232;
  v126 = v133 + 7232;
  SystemCacheReverseMap = (_QWORD *)MiGetSystemCacheReverseMap(v4);
  v132 = SystemCacheReverseMap;
  v13 = SystemCacheReverseMap[3];
  v128 = v13;
  if ( v13 )
  {
    if ( (v13 & 1) != 0 )
    {
      v13 &= ~1uLL;
      v124 = 4;
      v128 = v13;
      SystemCacheReverseMap[3] = v13;
    }
    if ( *(_QWORD *)v13 != v6 )
      KeBugCheckEx(0x1Au, 0x782uLL, (ULONG_PTR)SystemCacheReverseMap, v4, BugCheckParameter4);
  }
  v135 = MiLockWorkingSetOptimal(v10, v5, &v142, v12);
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
  v131 = v18;
  memset(v18, 0, v19);
  v20 = *(_QWORD *)MmInternal;
  v21 = 0LL;
  *(_BYTE *)(*(_QWORD *)MmInternal + 4LL) |= 4u;
  while ( 1 )
  {
    v22 = 1LL;
    v23 = v4;
    if ( *(_DWORD *)v20 != 1 )
    {
      v24 = *(_BYTE *)(v20 + 4);
      if ( (v24 & 8) == 0 && v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL )
        *(_BYTE *)(v20 + 4) = v24 | 8;
    }
    v25 = *(_DWORD *)(v20 + 12);
    if ( !v25 )
      goto LABEL_12;
    v26 = *(_BYTE *)(v20 + 4) & 4;
    if ( !v26 )
    {
      v86 = v20 + 8LL * (v25 - 1);
      v87 = *(_QWORD *)(v86 + 24);
      if ( (v87 & 0xC00) == 0 )
      {
        v88 = *(_QWORD *)(v86 + 24) & 0x3FFLL;
        if ( (v87 & 0xFFFFFFFFFFFFF000uLL) + ((v88 + 1) << 12) == v4 && v88 + 1 >= v88 && v88 + 1 <= 0x3FF )
        {
          ++*(_QWORD *)(v20 + 16);
          *(_QWORD *)(v86 + 24) = ((unsigned __int16)v87 ^ (unsigned __int16)(v87 + 1)) & 0x3FF ^ v87;
          goto LABEL_17;
        }
      }
    }
    if ( v26
      || (v89 = v20 + 8LL * (v25 - 1), v90 = *(_QWORD *)(v89 + 24), (v90 & 0xC00) != 0)
      || (v90 & 0xFFFFFFFFFFFFF000uLL) != v4 + 4096
      || (v91 = *(_QWORD *)(v89 + 24) & 0x3FFLL, v91 + 1 < v91)
      || v91 + 1 > 0x3FF )
    {
LABEL_12:
      if ( v25 >= *(_DWORD *)(v20 + 8) )
      {
        *(_BYTE *)(v20 + 5) = 1;
      }
      else
      {
        while ( 1 )
        {
          v27 = (unsigned __int64)(v22 - 1) > 0x3FF ? 1024LL : v22;
          v28 = v23 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v27 - 1) & 0x3FF;
          v22 -= v27;
          v23 += v27 << 12;
          *(_QWORD *)(v20 + 8LL * (unsigned int)(*(_DWORD *)(v20 + 12))++ + 24) = v28;
          v29 = *(unsigned int *)(v20 + 12);
          *(_QWORD *)(v20 + 16) += v27;
          if ( (_DWORD)v29 == *(_DWORD *)(v20 + 8) && (*(_BYTE *)(v20 + 4) & 4) == 0 )
          {
            qsort((void *)(v20 + 24), v29, 8uLL, (int (__cdecl *)(const void *, const void *))MiTbFlushSort);
            MiCompressTbFlushList(v20);
            v92 = *(unsigned int *)(v20 + 12);
            if ( (_DWORD)v92 == *(_DWORD *)(v20 + 8) )
              break;
          }
          if ( !v22 )
            goto LABEL_17;
        }
        if ( v22 )
        {
          *(_BYTE *)(v20 + 5) = 1;
          *(_QWORD *)(v20 + 16) = v92;
        }
      }
    }
    else
    {
      ++*(_QWORD *)(v20 + 16);
      *(_QWORD *)(v89 + 24) = ((unsigned __int16)(v90 - 4096) ^ (unsigned __int16)(v90 - 4096 + 1)) & 0x3FF ^ (unsigned __int64)(v90 - 4096);
    }
LABEL_17:
    v30 = *(_QWORD *)v5;
    if ( v5 >= 0xFFFFF6FB7DBED000uLL
      && v5 <= 0xFFFFF6FB7DBED7F8uLL
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v30 & 1) != 0
      && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v94 = *((_QWORD *)&Flink->Flink + ((v5 >> 3) & 0x1FF));
        v95 = v30 | 0x20;
        if ( (v94 & 0x20) == 0 )
          v95 = *(_QWORD *)v5;
        v30 = v95;
        if ( (v94 & 0x42) != 0 )
          v30 = v95 | 0x42;
      }
    }
    v122 = v30;
    *(_QWORD *)(v17 + 8 * v21) = v30;
    if ( (v30 & 1) != 0 )
    {
      if ( (unsigned int)MiPteInShadowRange(&v122)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
      {
        v96 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v96 )
        {
          v97 = *((_QWORD *)&v96->Flink + (((unsigned __int64)&v122 >> 3) & 0x1FF));
          v98 = v30 | 0x20;
          if ( (v97 & 0x20) == 0 )
            v98 = v30;
          v30 = v98;
          if ( (v97 & 0x42) != 0 )
            v30 = v98 | 0x42;
        }
      }
      v72 = 48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( dword_140C4E868 )
      {
        v73 = (__int64)(v5 << 25) >> 16;
        if ( v73 >= 0xFFFFF68000000000uLL && v73 <= 0xFFFFF6FFFFFFFFFFuLL )
          goto LABEL_114;
        v74 = ((v73 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v75 = *(_QWORD *)v74;
        if ( v74 >= 0xFFFFF6FB7DBED000uLL
          && v74 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v75 & 1) != 0
          && ((v75 & 0x20) == 0 || (v75 & 0x42) == 0) )
        {
          v99 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v99 )
          {
            v100 = *((_QWORD *)&v99->Flink + ((v74 >> 3) & 0x1FF));
            v101 = HIBYTE(*(_QWORD *)v74);
            if ( (v100 & 0x20) == 0 )
              v101 = HIBYTE(v75);
            HIBYTE(v75) = v101;
            if ( (v100 & 0x42) != 0 )
              HIBYTE(v75) = v101;
          }
        }
        if ( (HIBYTE(v75) & 0xF) != 7 )
        {
LABEL_114:
          if ( (*(_BYTE *)v5 & 0x20) != 0 )
            MiLogPageAccess(v126, v5);
        }
      }
      if ( (a3 & 1) != 0 && (*(_QWORD *)(v72 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v83 = *(_BYTE *)(v72 + 35);
        if ( ((v83 & 8) != 0 || (v83 & 7u) > 2) && (unsigned int)MiGetPfnPriority(v72) <= 5 )
          MiLockSetPfnPriority(v84, 2);
      }
      v76 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v77 = *(_QWORD *)v76;
      if ( v76 >= 0xFFFFF6FB7DBED000uLL
        && v76 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v77 & 1) != 0
        && ((v77 & 0x20) == 0 || (v77 & 0x42) == 0) )
      {
        v102 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v102 )
        {
          v103 = *((_QWORD *)&v102->Flink + ((v76 >> 3) & 0x1FF));
          v104 = v77 | 0x20;
          if ( (v103 & 0x20) == 0 )
            v104 = v77;
          v77 = v104;
          if ( (v103 & 0x42) != 0 )
            v77 = v104 | 0x42;
        }
      }
      WsleContents = HIBYTE(v77) & 0xF | (16 * ((v77 >> 60) & 7));
      if ( (HIBYTE(v77) & 0xF) == 8 )
      {
        MiUnlockWsle(v126, v4, v72);
        WsleContents = MiGetWsleContents(v105, v4);
      }
      v79 = ZeroPte;
      v80 = *(_QWORD *)v5;
      if ( v5 >= 0xFFFFF6FB7DBED000uLL && v5 <= 0xFFFFF6FB7DBED7F8uLL )
      {
        if ( (unsigned int)MiPteHasShadow() )
          LOBYTE(v80) = v80 | 0x20;
      }
      if ( (MiFlags & 0x800) != 0 )
      {
        LOBYTE(v80) = 32;
      }
      else if ( (MiFlags & 0x4000000) != 0 )
      {
        _mm_lfence();
      }
      if ( (v80 & 0x20) != 0 )
      {
        if ( !(unsigned int)MiPteInShadowRange(v5) )
          goto LABEL_100;
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
            v79 = ZeroPte | 0x8000000000000000uLL;
          *(_QWORD *)v5 = v79;
          MiWritePteShadow(v5, v79);
        }
        else
        {
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (ZeroPte & 1) != 0 )
          {
            v79 = ZeroPte | 0x8000000000000000uLL;
          }
LABEL_100:
          *(_QWORD *)v5 = v79;
        }
LABEL_101:
        v125 = 1;
      }
      else if ( (MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v5, ZeroPte) & 0x20) != 0 )
      {
        goto LABEL_101;
      }
      v81 = v129 == 0;
      v82 = v131;
      v131[8 * v21] = WsleContents;
      v82[8 * v21 + 1] = 1;
      if ( !v81 )
        v130 = *(_QWORD *)(v72 + 8) | 0x8000000000000000uLL;
      v17 = BugCheckParameter2;
      v120 = v7 + 1;
      goto LABEL_27;
    }
    if ( (v30 & 0x400) == 0 )
      break;
    if ( v129 )
    {
      v31 = v30;
      if ( qword_140C4DF80 && (v30 & 0x10) == 0 )
        v31 = v30 & ~qword_140C4DF80;
      v130 = v31 >> 16;
    }
    v32 = ZeroPte;
    if ( (unsigned int)MiPteInShadowRange(v5) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
          v32 = ZeroPte | 0x8000000000000000uLL;
        *(_QWORD *)v5 = v32;
        MiWritePteShadow(v5, v32);
        goto LABEL_27;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v32 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v5 = v32;
LABEL_27:
    ++v7;
    v4 += 4096LL;
    v123 = v7;
    ++v21;
    v139 = v4;
    v5 += 8LL;
    if ( v5 >= v134 )
      goto LABEL_28;
  }
  v107 = ZeroPte;
  if ( !(unsigned int)MiPteInShadowRange(v5) )
  {
LABEL_225:
    *(_QWORD *)v5 = v107;
    goto LABEL_28;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
      && (ZeroPte & 1) != 0 )
    {
      v107 = ZeroPte | 0x8000000000000000uLL;
    }
    goto LABEL_225;
  }
  if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
    v107 = ZeroPte | 0x8000000000000000uLL;
  *(_QWORD *)v5 = v107;
  MiWritePteShadow(v5, v107);
LABEL_28:
  v33 = v126;
  if ( v120 )
  {
    v34 = MiRemoveWsleList(v126, v20, v131, v120);
    if ( v34 )
      MiRebuildPageTableLeafAges(0LL, v34 << 25 >> 16 << 25 >> 16);
  }
  if ( v132[2] )
  {
    v35 = 1;
    v132[2] = 0LL;
  }
  else
  {
    v35 = 0;
  }
  v118 = v35;
  MiUnlockPageTableInternal(v33, v135);
  MiUnlockWorkingSetShared(v33, 2u);
  _InterlockedOr(v117, 0);
  v38 = v123;
  v39 = 0LL;
  v40 = KiTbFlushTimeStamp;
  v41 = 0LL;
  v120 = KiTbFlushTimeStamp;
  v42 = 0;
  v43 = 0LL;
  if ( v123 > 0 )
  {
    SchedulerAssist = (_DWORD *)BugCheckParameter2;
    v44 = 0;
    while ( 2 )
    {
      if ( (SchedulerAssist[2 * v43] & 1) == 0 )
        goto LABEL_36;
      ++v41;
      v63 = *(_QWORD *)&SchedulerAssist[2 * v119];
      v64 = (unsigned __int64)&SchedulerAssist[2 * v119];
      v65 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v64)
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v63 & 1) != 0
        && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
      {
        v108 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v108 )
        {
          v109 = v63 | 0x20;
          v110 = *((_QWORD *)&v108->Flink + ((v64 >> 3) & 0x1FF));
          if ( (v110 & 0x20) == 0 )
            v109 = v63;
          v63 = v109;
          if ( (v110 & 0x42) != 0 )
            v63 = v109 | 0x42;
        }
      }
      v68 = (v63 >> 12) & 0xFFFFFFFFFLL;
      v69 = 48 * v68 - 0x58000000000LL;
      v70 = _interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL);
      if ( v42 )
      {
        if ( v70 )
        {
          LOBYTE(v66) = 2;
          MiDecrementAndInsertStandbyPages(BugCheckParameter2, v42, v66);
          v39 = 0LL;
          SchedulerAssist = (_DWORD *)BugCheckParameter2;
          v44 = v119 - 1;
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
        v127 = 0;
        if ( v70 )
        {
          do
          {
            do
              KeYieldProcessorEx(&v127, v39, v66, v67);
            while ( *(__int64 *)(v69 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v69 + 24), 0x3FuLL) );
          goto LABEL_75;
        }
      }
      SchedulerAssist = (_DWORD *)BugCheckParameter2;
      if ( (*(_BYTE *)(BugCheckParameter2 + 8 * v43) & 0x42) != 0 )
      {
        v85 = MiCaptureDirtyBitToPfn(48 * v68 - 0x58000000000LL);
        SchedulerAssist = (_DWORD *)BugCheckParameter2;
        v65 = v85;
LABEL_121:
        if ( v42 )
        {
          LOBYTE(v36) = 17;
          MiDecrementAndInsertStandbyPages(SchedulerAssist, v42, v36);
          v42 = 0;
        }
        MiDecrementShareCount(48 * v68 - 0x58000000000LL);
        _InterlockedAnd64((volatile signed __int64 *)(v69 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v65 )
          MiReleasePageFileInfo(v133, v65, 0);
        v44 = v119;
        v39 = 0LL;
        SchedulerAssist = (_DWORD *)BugCheckParameter2;
        goto LABEL_36;
      }
      v36 = 0x3FFFFFFFFFFFFFFFLL;
      if ( (*(_QWORD *)(v69 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1
        || *(_WORD *)(v69 + 32) != 1
        || (*(_QWORD *)(v69 + 24) & 0x4000000000000000LL) != 0
        || (*(_BYTE *)(v69 + 35) & 0x40) != 0
        || (*(_BYTE *)(v69 + 34) & 0x10) != 0 )
      {
        goto LABEL_121;
      }
      v44 = v119;
      v71 = v42++;
      *(_QWORD *)(BugCheckParameter2 + 8 * v71) = v69;
LABEL_36:
      ++v44;
      ++v43;
      v119 = v44;
      if ( v43 >= v38 )
      {
        if ( v42 )
        {
          LOBYTE(v36) = 2;
          MiDecrementAndInsertStandbyPages(SchedulerAssist, v42, v36);
        }
        v4 = v139;
        v40 = v120;
        v35 = v118;
        break;
      }
      continue;
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v45 = v142;
    if ( v142 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v45 = v142;
      v39 = -1LL << (v142 + 1);
      v113 = ~(unsigned __int16)v39;
      v81 = (v113 & SchedulerAssist[5]) == 0;
      v36 = (unsigned int)v113 & SchedulerAssist[5];
      SchedulerAssist[5] = v36;
      if ( v81 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  else
  {
    v45 = v142;
  }
  __writecr8(v45);
  v46 = v128;
  if ( v35 == 1 )
    MiManageSubsectionView((__int64 *)v128, v132, v124);
  if ( v41 )
  {
    v47 = v136;
    MiLockPageInline(v136, v39, v36, SchedulerAssist);
    *(_QWORD *)(v47 + 24) ^= (*(_QWORD *)(v47 + 24) ^ (*(_QWORD *)(v47 + 24) - v41)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v48 = v142;
  }
  else
  {
    v48 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v48 <= 0xFu )
    {
      v114 = KeGetCurrentPrcb()->SchedulerAssist;
      v114[5] |= ~((unsigned __int8)(1LL << (v48 + 1)) - 1) & 4;
    }
    v142 = v48;
  }
  v49 = 0LL;
  if ( !v129 )
    v46 = 0LL;
  v50 = v137;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v137 + 72));
  if ( v46 )
  {
    v51 = v130;
    while ( 1 )
    {
      v52 = MiRemoveViewsFromSection(v46);
      v53 = *(_QWORD *)(v46 + 8);
      v49 += v52;
      if ( v51 >= v53 && v51 < v53 + 8LL * *(unsigned int *)(v46 + 44) )
        break;
      v46 = *(_QWORD *)(v46 + 16);
      if ( !v46 )
        KeBugCheckEx(0x1Au, 0x783uLL, BugCheckParameter2, v4, BugCheckParameter4);
    }
  }
  --*(_QWORD *)(v50 + 40);
  --*(_DWORD *)(v50 + 88);
  MiCheckControlArea(v50, v48);
  if ( v49 )
    MiReturnCrossPartitionSectionCharges(v133, 1LL, v49);
  v54 = MiSwizzleInvalidPte((unsigned __int64)(v40 & 0xFFFFF) << 28);
  v55 = v138;
  v56 = v54;
  v122 = v54;
  v57 = v54;
  if ( (unsigned int)MiPteInShadowRange(v138 + 2) )
  {
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v56 & 1) != 0 )
      {
        v57 |= 0x8000000000000000uLL;
      }
      goto LABEL_55;
    }
    v115 = v56;
    if ( !HIBYTE(word_140C4E048) && (v56 & 1) != 0 )
      v115 = v56 | 0x8000000000000000uLL;
    v55[2] = v115;
    MiWritePteShadow((__int64)(v55 + 2), v115);
  }
  else
  {
LABEL_55:
    v55[2] = v57;
  }
  v58 = ZeroPte;
  if ( (unsigned int)MiPteInShadowRange(v55 + 1) )
  {
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (ZeroPte & 1) != 0 )
      {
        v58 = ZeroPte | 0x8000000000000000uLL;
      }
      goto LABEL_57;
    }
    if ( !HIBYTE(word_140C4E048) && (ZeroPte & 1) != 0 )
      v58 = ZeroPte | 0x8000000000000000uLL;
    v55[1] = v58;
    MiWritePteShadow((__int64)(v55 + 1), v58);
  }
  else
  {
LABEL_57:
    v55[1] = v58;
  }
  v59 = v122;
  if ( v125 == 1 )
  {
    if ( qword_140C4DF80 )
    {
      if ( (v122 & 0x10) != 0 )
        v59 = v122 & 0xFFFFFFEF;
      else
        v59 = v122 & ~(_DWORD)qword_140C4DF80;
    }
    v60 = v59 & 0xFFFFFFF | 0x20000000LL;
  }
  else
  {
    if ( qword_140C4DF80 )
    {
      if ( (v122 & 0x10) != 0 )
        v59 = v122 & 0xFFFFFFEF;
      else
        v59 = v122 & ~(_DWORD)qword_140C4DF80;
    }
    v60 = v59 & 0xFFFFFFF;
  }
  v122 = MiSwizzleInvalidPte(v60);
  v61 = v122;
  v62 = v122;
  if ( (unsigned int)MiPteInShadowRange(v55 + 3) )
  {
    if ( !(unsigned int)MiPteHasShadow() )
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v61 & 1) != 0 )
      {
        v62 |= 0x8000000000000000uLL;
      }
      goto LABEL_64;
    }
    v116 = v61;
    if ( !HIBYTE(word_140C4E048) && (v61 & 1) != 0 )
      v116 = v61 | 0x8000000000000000uLL;
    v55[3] = v116;
    MiWritePteShadow((__int64)(v55 + 3), v116);
  }
  else
  {
LABEL_64:
    v55[3] = v62;
  }
  if ( (a3 & 2) == 0 )
    MiReleaseSystemCacheView((unsigned __int64)v55);
}
