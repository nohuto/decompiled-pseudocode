/*
 * XREFs of MiCompletePrivateZeroFault @ 0x14020FD20
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x14020F5F0 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiAllocateWsle @ 0x140211190 (MiAllocateWsle.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     MiMakeTransitionPte @ 0x14028D2E0 (MiMakeTransitionPte.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x1402B6294 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1402F6610 (MiCapturePageFileInfoInline.c)
 *     MiUserPdeOrAbove @ 0x1402FD5C0 (MiUserPdeOrAbove.c)
 *     MiAdvanceFaultList @ 0x140340BDC (MiAdvanceFaultList.c)
 *     MiFreePageChain @ 0x140341758 (MiFreePageChain.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rbp
  __int64 v6; // r15
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rbp
  int v10; // r11d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned int v14; // r12d
  __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // rsi
  __int64 v18; // r8
  unsigned __int64 v19; // rdi
  unsigned __int64 LeafVa; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r10
  unsigned __int64 Flink; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rsi
  unsigned __int64 v30; // r9
  __int64 v31; // rbx
  __int64 v32; // rax
  unsigned __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rcx
  volatile signed __int64 *v36; // r14
  __int64 v37; // rax
  __int64 v38; // r10
  volatile signed __int64 v39; // rdx
  signed __int64 v40; // rdi
  signed __int64 v41; // rcx
  bool v42; // zf
  __int64 v43; // rax
  void *v44; // r9
  __int64 v45; // rdx
  unsigned int v46; // r9d
  __int64 v47; // rcx
  __int64 v48; // rdx
  char v49; // di
  unsigned int v50; // r11d
  struct _LIST_ENTRY *v51; // r8
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rax
  unsigned int v57; // r13d
  __int64 v58; // r8
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rdi
  struct _LIST_ENTRY *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // ebp
  unsigned int v68; // ebp
  char v69; // al
  unsigned __int8 v70; // r12
  int v71; // r15d
  unsigned __int8 v72; // cl
  __int64 v73; // rdx
  __int64 v74; // r13
  char v75; // al
  unsigned __int64 v76; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v80; // eax
  __int64 TransitionPte; // rdi
  __int64 v82; // rdx
  __int64 v83; // rdx
  __int64 v84; // rcx
  unsigned __int64 v85; // rdi
  __int64 v86; // rcx
  _KPROCESS *v87; // rbx
  __int64 Address; // rax
  __int64 v89; // rdi
  __int64 v90; // rdx
  int v91; // eax
  __int64 v92; // r8
  char v93; // dl
  __int16 v94; // ax
  __int64 v95; // rdx
  char v96; // dl
  __int64 v97; // rcx
  unsigned int v98; // r14d
  __int64 v99; // rax
  unsigned int v100; // ebx
  unsigned int v101; // edi
  unsigned __int64 v102; // rdx
  __int64 v103; // rbx
  __int64 v104; // r8
  unsigned __int64 v105; // rdx
  unsigned __int64 v106; // rdi
  struct _LIST_ENTRY *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rdi
  struct _LIST_ENTRY *v110; // rcx
  __int64 v111; // rdi
  __int64 v112; // rax
  __int64 v113; // rdi
  __int64 v114; // r8
  unsigned __int64 v115; // rdi
  __int64 v116; // rcx
  struct _LIST_ENTRY *v117; // rax
  __int64 v118; // rax
  char v119; // di
  int v121; // [rsp+40h] [rbp-F8h]
  int v122; // [rsp+44h] [rbp-F4h]
  _KPROCESS *Process; // [rsp+48h] [rbp-F0h]
  unsigned int v124; // [rsp+50h] [rbp-E8h]
  int v125; // [rsp+54h] [rbp-E4h]
  __int64 v126; // [rsp+58h] [rbp-E0h]
  int v127; // [rsp+60h] [rbp-D8h] BYREF
  int v128; // [rsp+64h] [rbp-D4h] BYREF
  int v129; // [rsp+68h] [rbp-D0h] BYREF
  int v130; // [rsp+6Ch] [rbp-CCh] BYREF
  int v131; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int64 v132; // [rsp+78h] [rbp-C0h] BYREF
  unsigned __int64 v133; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v134; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v135; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v136; // [rsp+98h] [rbp-A0h]
  __int64 v137; // [rsp+A0h] [rbp-98h]
  __int64 v138; // [rsp+A8h] [rbp-90h]
  __int64 v139; // [rsp+B0h] [rbp-88h]
  __int64 v140; // [rsp+B8h] [rbp-80h]
  __int64 v141; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v142; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v143; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v144; // [rsp+D8h] [rbp-60h]
  __int64 v145; // [rsp+E0h] [rbp-58h]
  __int64 v147; // [rsp+148h] [rbp+10h]
  unsigned int v149; // [rsp+158h] [rbp+20h]

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 16) >> 9;
  v6 = a1;
  v137 = v4;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = (v5 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0;
  v136 = v9;
  v121 = 0;
  v141 = v8[7];
  v11 = v8[2];
  if ( (v11 & 1) != 0 )
    v121 = *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) == 3;
  v12 = v4;
  if ( (*(_DWORD *)v6 & 8) == 0 )
    v12 = 0LL;
  v140 = v12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = *(_QWORD *)(v6 + 64);
  v138 = ((*v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = 16;
  v139 = v13;
  v122 = 0;
  if ( v13 )
  {
    v15 = *(unsigned int *)(v13 + 52);
    LODWORD(v15) = v15 & 0x7FFFFFFF;
    if ( (v15 | ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) << 31)) == 0x7FFFFFFFELL )
      v14 = 80;
  }
  v16 = *(_DWORD *)(v6 + 32);
  v125 = v16;
  if ( (v16 & 2) == 0 || v9 > 0xFFFFF6BFFFFFFF78uLL || v9 < 0xFFFFF68000000000uLL )
  {
    v16 |= 0x80000000;
    v125 = v16;
  }
  if ( !*(_DWORD *)(v6 + 36) )
    __incgsdword(0x2E9Cu);
  v149 = 0;
  v17 = v16 & 0x1F;
  v18 = 0LL;
  v19 = MmProtectToPteMask[v17] & 0xFFFF000000000E5EuLL | 0x21;
  if ( v9 >= 0xFFFFF68000000000uLL && v9 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    LeafVa = (__int64)(v9 << 25) >> 16;
    if ( v9 >= 0xFFFFF6FB40000000uLL && v9 <= 0xFFFFF6FB7FFFFFFFuLL )
    {
      if ( v9 == 0xFFFFF6FB7DBEDF68uLL )
      {
        v19 = MmProtectToPteMask[v17] & 0x7FFF000000000E5ELL | 0x8000000000000021uLL;
      }
      else if ( (v16 & 0x4000000) == 0 )
      {
        v19 = MmProtectToPteMask[v17] & 0x7FFF000000000E5ELL | 0x21;
      }
      if ( (unsigned int)MiUserPdeOrAbove(v9, 0x7FFFFFFFFFFFFFFFLL, 0LL, v3) )
        v19 |= 4uLL;
    }
    v21 = v19;
    v22 = v19 | 4;
    if ( v9 > 0xFFFFF6BFFFFFFF78uLL )
      v22 = v21;
    if ( (v16 & 0x4000000) != 0 )
      LeafVa = MiGetLeafVa(LeafVa, 0x3FFFFFFF78LL, v18, v3);
    if ( LeafVa >= 0xFFFF800000000000uLL )
    {
      if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1
        || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
      {
LABEL_38:
        v3 = a3;
        v10 = 0;
        LODWORD(v18) = 0;
        goto LABEL_39;
      }
      if ( LeafVa < qword_140C4FA78 || (v23 = HIBYTE(word_140C4DF48), LeafVa > qword_140C4E2A8) )
        v23 = (unsigned __int8)word_140C4DF48;
    }
    else
    {
      v23 = HIBYTE(word_140C4DF48);
    }
    if ( v23 )
      v22 |= 0x100uLL;
    goto LABEL_38;
  }
  v22 = MmProtectToPteMask[v17] & 0xFFFF000000000E5EuLL | 0x121;
LABEL_39:
  if ( v16 < 0 && (v16 & 5) == 4 )
    v22 |= 0x42uLL;
  v24 = v22 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (v16 & 0x40000000) == 0 )
    v24 = v22;
  if ( (v16 & 0x20000000) != 0 )
    v24 ^= ((unsigned __int16)v24 ^ (unsigned __int16)((unsigned __int8)word_140C4DF48 << 8)) & 0x100;
  v25 = 0xFFFFF6FB7DBED7F8uLL;
  Flink = v24 & 0xFFFFFFFFFFFFFEFFuLL;
  v27 = 0LL;
  if ( (v16 & 0x8000000) == 0 )
    Flink = v24;
  v133 = 0LL;
  v28 = Flink | 0x80;
  if ( (v16 & 0x4000000) == 0 )
    v28 = Flink;
  v29 = v28 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( !v3 )
  {
LABEL_265:
    v100 = 273;
    goto LABEL_266;
  }
  v30 = 0xFFFFFFF000000000uLL;
  while ( 1 )
  {
    v31 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v31 & 1) != 0
        && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
      {
        Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v32 = *(_QWORD *)(Flink + 8 * ((v9 >> 3) & 0x1FF));
          Flink = v31 | 0x20;
          if ( (v32 & 0x20) == 0 )
            Flink = *(_QWORD *)v9;
          v31 = Flink;
          if ( (v32 & 0x42) != 0 )
            v31 = Flink | 0x42;
        }
      }
      v27 = v133;
    }
    if ( !*(_DWORD *)(v6 + 36) )
    {
      if ( v31 )
        goto LABEL_87;
      v31 = 32LL * (*(_DWORD *)(v6 + 32) & 0x1F);
      v149 = v18 + 1;
      if ( qword_140C4DE80 )
      {
        if ( (v31 & qword_140C4DE80) != 0 )
          v31 |= 0x10uLL;
        else
          v31 |= qword_140C4DE80;
      }
      v33 = v31;
      if ( (unsigned int)MiPteInShadowRange(v9, Flink) )
      {
        if ( (unsigned int)MiPteHasShadow(v35, v34) )
        {
          if ( !HIBYTE(word_140C4DF48) && (v31 & 1) != 0 )
            v33 = v31 | 0x8000000000000000uLL;
          *(_QWORD *)v9 = v33;
          MiWritePteShadow(v9, v33);
          goto LABEL_78;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v31 & 1) != 0 )
        {
          v33 = v31 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v9 = v33;
LABEL_78:
      v30 = 0xFFFFFFF000000000uLL;
      goto LABEL_87;
    }
    if ( (v31 & 0x400) == 0 && (v31 & 0x4000000) != 0 && !v27 )
      v29 |= 0x40uLL;
LABEL_87:
    v36 = (volatile signed __int64 *)(a2 + 24);
    v126 = a2;
    v37 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFLL;
    v38 = a2;
    if ( v37 == 0xFFFFFFFFFLL )
      v147 = 0LL;
    else
      v147 = 48 * v37 - 0x58000000000LL;
    v39 = *v36;
    v40 = _InterlockedCompareExchange64(v36, *v36 & 0xFFFFFFF000000000uLL, *v36);
    if ( v39 != v40 )
    {
      do
      {
        v41 = v40;
        v40 = _InterlockedCompareExchange64(v36, v40 & 0xFFFFFFF000000000uLL, v40);
      }
      while ( v41 != v40 );
    }
    v42 = *(_DWORD *)(v6 + 36) == 0;
    v135 = (a2 + 0x58000000000LL) / 48;
    if ( !v42 && !*(_QWORD *)(v6 + 72) && (v31 & 0x400) != 0 )
    {
      v43 = v31;
      if ( qword_140C4DE80 && (v31 & 0x10) == 0 )
        v43 = v31 & ~qword_140C4DE80;
      if ( v43 >> 16 )
      {
        v127 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v127);
            while ( *(__int64 *)v36 < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0x3FuLL) );
          v38 = a2;
        }
        *(_QWORD *)(v38 + 40) = *(_QWORD *)(v38 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x4000000000000000LL;
        _InterlockedAnd64(v36, 0x7FFFFFFFFFFFFFFFuLL);
      }
      else if ( (v31 & 0x3E0) != 0 )
      {
        v31 &= ~0x400uLL;
      }
      else
      {
        v31 = 0LL;
      }
      v44 = (void *)MiMapPageInHyperSpaceWorker((a2 + 0x58000000000LL) / 48, 0LL, 0x80000000LL, v30);
      memset64(v44, v31 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
      LOBYTE(v45) = 17;
      MiUnmapPageInHyperSpaceWorker(v44, v45, 0x80000000LL);
      v31 = MiSwizzleInvalidPte(128LL);
      v14 |= 8u;
      v38 = a2;
    }
    v46 = *(_DWORD *)(v6 + 32);
    v47 = v14 | 0x20;
    v48 = *(_QWORD *)v9;
    v49 = v46;
    if ( (*(_DWORD *)v6 & 4) == 0 )
      v47 = v14;
    v50 = v47 | 0x20;
    if ( (*(_DWORD *)(v6 + 32) & 2) == 0 )
      v50 = v47;
    v124 = v50;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v47, v48)
      && (v48 & 1) != 0
      && ((v48 & 0x20) == 0 || (v48 & 0x42) == 0) )
    {
      v51 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v51 )
      {
        v52 = *((_QWORD *)&v51->Flink + ((v9 >> 3) & 0x1FF));
        v53 = v48 | 0x20;
        if ( (v52 & 0x20) == 0 )
          v53 = v48;
        v48 = v53;
        if ( (v52 & 0x42) != 0 )
          v48 = v53 | 0x42;
      }
    }
    if ( (v50 & 4) != 0 )
    {
      v54 = 32LL * (v49 & 0x1F);
      if ( v48 )
        v48 = v54 | v48 & 0xFFFFFFFFFFFFFC1FuLL;
      else
        v48 = MiSwizzleInvalidPte(v54);
    }
    v55 = -9LL;
    if ( (v48 & 0x400) != 0 )
      v55 = -2049LL;
    v56 = v48 & v55;
    *(_QWORD *)(v38 + 16) = v56;
    if ( (v50 & 2) != 0 )
    {
      *(_QWORD *)(v38 + 40) |= 0x8000000000000000uLL;
    }
    else if ( (v50 & 8) == 0 )
    {
      *(_QWORD *)v38 &= 0xFFFFFFFFFFFFC00FuLL;
      *(_QWORD *)(v38 + 16) = v56 & 0xFFFFFFFFFC00FFFFuLL;
    }
    if ( v46 )
    {
      if ( v46 == 31 )
      {
        v57 = 1;
        v58 = 0LL;
      }
      else if ( v46 >> 3 == 3 && (v46 & 7) != 0 )
      {
        v57 = 2;
        v58 = 0LL;
      }
      else
      {
        v58 = 0LL;
        v57 = v46 >> 3 != 1;
      }
    }
    else
    {
      v57 = 3;
      v58 = 0LL;
    }
    *(_WORD *)(v38 + 32) = 1;
    v59 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v60 = *(_QWORD *)v59;
    if ( v59 >= 0xFFFFF6FB7DBED000uLL
      && v59 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(-2049LL, v59)
      && (v60 & 1) != 0
      && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
    {
      v61 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v61 )
      {
        v62 = *((_QWORD *)&v61->Flink + ((v59 >> 3) & 0x1FF));
        v59 = v60 | 0x20;
        if ( (v62 & 0x20) == 0 )
          v59 = v60;
        v60 = v59;
        if ( (v62 & 0x42) != 0 )
          v60 = v59 | 0x42;
      }
    }
    v132 = v60;
    if ( (unsigned __int64)&v132 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v132 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(&v132, v59)
      && (v60 & 1) != 0
      && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
    {
      v59 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v59 )
      {
        v63 = *(_QWORD *)(v59 + 8 * (((unsigned __int64)&v132 >> 3) & 0x1FF));
        v59 = v60 | 0x20;
        if ( (v63 & 0x20) == 0 )
          v59 = v60;
        v60 = v59;
        if ( (v63 & 0x42) != 0 )
          v60 = v59 | 0x42;
      }
    }
    v64 = (v60 >> 12) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v38 + 40) = v64 | *(_QWORD *)(v38 + 40) & 0xFFFFFFF000000000uLL;
    v65 = 48 * v64 - 0x58000000000LL;
    CurrentThread = KeGetCurrentThread();
    Queue = (unsigned int)CurrentThread[1].Queue;
    if ( (Queue & 0x100) != 0 )
    {
      v68 = Queue >> 9;
    }
    else
    {
      v68 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      {
        v69 = 2;
        if ( v68 < 2 )
          v69 = v68;
        LOBYTE(v68) = v69;
      }
    }
    v70 = 17;
    v71 = v50 & 1;
    if ( (v50 & 1) == 0 )
    {
      if ( (v50 & 0x10) != 0 )
      {
        v128 = v58;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v36, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v128);
          while ( *(__int64 *)v36 < 0 );
        }
      }
      else
      {
        v70 = MiLockPageInline(v38, v59, v58);
      }
    }
    v129 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v65 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v129);
      while ( *(__int64 *)(v65 + 24) < 0 );
    }
    *(_QWORD *)(v65 + 24) ^= ((*(_QWORD *)(v65 + 24) + 1LL) ^ *(_QWORD *)(v65 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v65 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v72 = *(_BYTE *)(v126 + 34);
    if ( v72 >> 6 == v57 )
    {
      v74 = v126;
    }
    else
    {
      v73 = v57;
      v74 = v126;
      MiChangePageAttribute(v126, v73, 1LL);
      v72 = *(_BYTE *)(v126 + 34);
    }
    *v36 = *v36 & 0xC000000000000000uLL | 1;
    v75 = v68 ^ *(_BYTE *)(v74 + 35);
    v76 = v136;
    *(_QWORD *)(v74 + 8) = v136;
    *(_BYTE *)(v74 + 35) ^= v75 & 7;
    *(_BYTE *)(v74 + 34) = v72 & 0xF8 | 6;
    if ( (v124 & 0x20) == 0 )
      *(_BYTE *)(v74 + 34) |= 0x10u;
    if ( (v124 & 0x40) != 0 )
      *(_BYTE *)(v74 + 35) |= 0x20u;
    if ( !v71 )
    {
      _InterlockedAnd64(v36, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v124 & 0x10) == 0 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v70 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v80 = ~(unsigned __int16)(-1LL << (v70 + 1));
              v42 = (v80 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v80;
              if ( v42 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v70);
      }
    }
    v14 = v124;
    if ( (v124 & 8) != 0 )
      *(_QWORD *)(v74 + 16) = v31;
    v6 = a1;
    if ( (*(_DWORD *)a1 & 4) != 0 )
    {
      TransitionPte = MiMakeTransitionPte(v135, *(unsigned int *)(a1 + 32));
      if ( (unsigned int)MiPteInShadowRange(v76, v82) )
      {
        if ( (unsigned int)MiPteHasShadow(v84, v83) )
        {
          if ( !HIBYTE(word_140C4DF48) && (TransitionPte & 1) != 0 )
            TransitionPte |= 0x8000000000000000uLL;
          *(_QWORD *)v76 = TransitionPte;
          MiWritePteShadow(v76, TransitionPte);
          goto LABEL_209;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (TransitionPte & 1) != 0 )
        {
          TransitionPte |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v76 = TransitionPte;
LABEL_209:
      if ( (*(_DWORD *)a1 & 0x40) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
      MiLockAndDecrementShareCount(v74, 0LL);
      if ( v137 )
      {
        Flink = *(_QWORD *)(*(_QWORD *)(v137 + 8) + 16LL * *(_QWORD *)(v137 + 24)) + (*(_QWORD *)(v137 + 32) << 12);
        if ( (__int64)(v76 << 25) >> 16 == Flink && *(_BYTE *)v137 != 5 )
          MiAdvanceFaultList(v137);
      }
      goto LABEL_264;
    }
    v29 = (v29 ^ (v135 << 12)) & 0xFFFFFFFFF000LL ^ v29 | 0x20;
    if ( !*(_QWORD *)(a1 + 72) )
      break;
    v85 = v29;
    if ( (unsigned int)MiPteInShadowRange(v76, 0xFFFFFFFFF000LL) )
    {
      if ( (unsigned int)MiPteHasShadow(v86, Flink) )
      {
        if ( !HIBYTE(word_140C4DF48) && (v29 & 1) != 0 )
          v85 = v29 | 0x8000000000000000uLL;
        *(_QWORD *)v76 = v85;
        MiWritePteShadow(v76, v85);
        goto LABEL_264;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v29 & 1) != 0 )
      {
        v85 = v29 | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v76 = v85;
LABEL_264:
    v9 = v76 + 8;
    a2 = v147;
    v27 = v133 + 1;
    v10 = 0;
    LODWORD(v18) = v149;
    v133 = v27;
    v30 = 0xFFFFFFF000000000uLL;
    v136 = v9;
    v25 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v27 >= a3 )
      goto LABEL_265;
  }
  if ( v76 == v138 || (*(_DWORD *)a1 & 0x80u) == 0 || (v29 &= ~0x20uLL, v125 >= 0) || v76 > 0xFFFFF6BFFFFFFF78uLL )
  {
    v87 = Process;
  }
  else
  {
    v87 = Process;
    if ( v76 >= 0xFFFFF68000000000uLL && (Process[1].DirectoryTableBase & 0x800000000000LL) != 0 )
    {
      if ( v122 )
      {
        if ( v122 == 2 )
          v29 &= 0xFFFFFFFFFFFFFFBDuLL;
      }
      else
      {
        Address = v139;
        if ( !v139 )
          Address = MiLocateAddress(*(_QWORD *)(a1 + 16));
        if ( (*(_DWORD *)(Address + 48) & 0x300000) == 0x300000 )
        {
          v122 = 2;
          v29 &= 0xFFFFFFFFFFFFFFBDuLL;
        }
        else
        {
          v122 = 1;
        }
      }
    }
  }
  v89 = *(_QWORD *)(a1 + 8);
  v90 = *(unsigned __int8 *)(v89 + 69);
  if ( (v90 & 5) != 4 || (v90 & 2) != 0 )
  {
    v98 = v121 & 0xFFFFFFFB;
    v121 &= ~4u;
  }
  else
  {
    v91 = *(unsigned __int16 *)(v89 + 66);
    v92 = 511LL;
    if ( (_WORD)v91 )
    {
      if ( v91 + *(unsigned __int16 *)(v89 + 64) != (((unsigned int)v76 >> 3) & 0x1FF) )
        goto LABEL_249;
      LOBYTE(v90) = v90 & 0x10;
      if ( (unsigned int)MI_PFN_IS_PROTO(v74, v90, 511LL) )
      {
        if ( v93 )
        {
LABEL_249:
          MiEmptyDeferredWorkingSetEntries(v89 + 56);
          v92 = 511LL;
        }
      }
      else if ( !v93 )
      {
        goto LABEL_249;
      }
    }
    v94 = *(_WORD *)(v89 + 66);
    if ( v94 )
    {
      *(_WORD *)(v89 + 66) = v94 + 1;
    }
    else
    {
      v95 = *(unsigned __int8 *)(v89 + 69);
      *(_WORD *)(v89 + 66) = 1;
      *(_WORD *)(v89 + 64) = v92 & ((unsigned int)v76 >> 3);
      if ( (unsigned int)MI_PFN_IS_PROTO(v74, v95, v92) )
        *(_BYTE *)(v89 + 69) = v96 & 0xEF;
      else
        *(_BYTE *)(v89 + 69) = v96 | 0x10;
    }
    v97 = *(_QWORD *)(a1 + 8);
    v98 = v121 | 4;
    v121 |= 4u;
    if ( (*(_BYTE *)(v97 + 69) & 8) != 0 )
    {
      v99 = *(_QWORD *)(v97 + 16);
      if ( (v99 & 1) == 0 || *(_BYTE *)(v99 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
        v29 &= ~0x20uLL;
    }
  }
  if ( (unsigned int)MiAllocateWsle(v141, v76, v74, 0, v29, v98, v140) )
  {
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v87[1].Affinity.Bitmap[13], 1uLL);
    __incgsdword(0x2E9Cu);
    goto LABEL_264;
  }
  v103 = 48 * (*(_QWORD *)(v74 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v130 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v74 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v130);
    while ( *(__int64 *)(v74 + 24) < 0 );
  }
  MiCapturePageFileInfoInline(v74 + 16, 1LL);
  *(_QWORD *)(v74 + 16) &= ~2uLL;
  *(_QWORD *)(v74 + 24) |= 0x4000000000000000uLL;
  MiDecrementShareCount(v74);
  _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockAndDecrementShareCount(v103, 0LL);
  v100 = -1073741801;
  MiFreePageChain(v147);
  v10 = 0;
  v25 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_266:
  if ( !*(_DWORD *)(v6 + 36) && v149 )
  {
    v101 = 0;
    v102 = *(_QWORD *)(v6 + 16);
    while ( v102 > 0x7FFFFFFEFFFFLL )
    {
      v27 = 0LL;
      ++v101;
      v102 = (__int64)(v102 << 25) >> 16;
      if ( v101 >= 3 )
        return v100;
    }
    v104 = (*(_QWORD *)(v6 + 16) >> 18) & 0x3FFFFFF8LL;
    v105 = *(_QWORD *)(v104 - 0x904C0000000LL);
    v106 = v104 - 0x904C0000000LL;
    if ( (unsigned __int64)(v104 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
      && v106 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v27, v105)
      && (v105 & 1) != 0
      && ((v105 & 0x20) == 0 || (v105 & 0x42) == 0) )
    {
      v107 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v107 )
      {
        v108 = *((_QWORD *)&v107->Flink + ((v106 >> 3) & 0x1FF));
        v109 = v105 | 0x20;
        if ( (v108 & 0x20) == 0 )
          v109 = v105;
        v105 = v109;
        if ( (v108 & 0x42) != 0 )
          v105 = v109 | 0x42;
      }
    }
    v134 = v105;
    if ( (unsigned __int64)&v134 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v134 <= v25
      && (unsigned int)MiPteHasShadow(&v134, v105)
      && (v105 & 1) != 0
      && ((v105 & 0x20) == 0 || (v105 & 0x42) == 0) )
    {
      v110 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v110 )
      {
        v111 = v105 | 0x20;
        v112 = *((_QWORD *)&v110->Flink + (((unsigned __int64)&v134 >> 3) & 0x1FF));
        if ( (v112 & 0x20) == 0 )
          v111 = v105;
        v105 = v111;
        if ( (v112 & 0x42) != 0 )
          v105 = v111 | 0x42;
      }
    }
    v113 = 48 * ((v105 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v131 = v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v113 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v131);
      while ( *(__int64 *)(v113 + 24) < 0 );
    }
    *(_QWORD *)(v113 + 16) ^= ((unsigned int)*(_QWORD *)(v113 + 16) ^ ((unsigned int)*(_QWORD *)(v113 + 16)
                                                                     + ((unsigned __int16)v149 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v113 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v149 <= 1
      && ((__int64)(*(_QWORD *)(v113 + 8) | 0x8000000000000000uLL) >> 47 == -1
       || (__int64)(*(_QWORD *)(v113 + 8) | 0x8000000000000000uLL) >> 47 == 0) )
    {
      v142 = (((*(_QWORD *)(v113 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v143 = ((v142 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v144 = ((v143 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v145 = ((v144 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v114 = 4LL;
      do
      {
        v115 = *(&v141 + v114--);
        v116 = *(_QWORD *)v115;
        if ( v115 >= 0xFFFFF6FB7DBED000uLL
          && v115 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v116 & 1) == 0 )
            return v100;
          if ( (v116 & 0x20) == 0 || (v116 & 0x42) == 0 )
          {
            v117 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v117 )
            {
              v118 = *((_QWORD *)&v117->Flink + ((v115 >> 3) & 0x1FF));
              v119 = v116 | 0x20;
              if ( (v118 & 0x20) == 0 )
                v119 = v116;
              LOBYTE(v116) = v119;
              if ( (v118 & 0x42) != 0 )
                LOBYTE(v116) = v119 | 0x42;
            }
          }
        }
      }
      while ( (v116 & 1) != 0 && (v116 & 0x80u) == 0LL && v114 );
    }
  }
  return v100;
}
