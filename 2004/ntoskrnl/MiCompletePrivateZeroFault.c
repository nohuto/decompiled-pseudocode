/*
 * XREFs of MiCompletePrivateZeroFault @ 0x1402A2830
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402A2100 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402385A0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14025D264 (MiEmptyDeferredWorkingSetEntries.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiAllocateWsle @ 0x1402A3CA0 (MiAllocateWsle.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiLockAndDecrementShareCount @ 0x1402F5064 (MiLockAndDecrementShareCount.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402F7480 (MiMapPageInHyperSpaceWorker.c)
 *     MiAdvanceFaultList @ 0x140312138 (MiAdvanceFaultList.c)
 *     MiFreePageChain @ 0x140312420 (MiFreePageChain.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiCapturePageFileInfoInline @ 0x1403334B0 (MiCapturePageFileInfoInline.c)
 *     MiUserPdeOrAbove @ 0x14033A900 (MiUserPdeOrAbove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r9
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
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  unsigned __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  volatile signed __int64 *v38; // r14
  __int64 v39; // rax
  __int64 v40; // r10
  volatile signed __int64 v41; // rdx
  signed __int64 v42; // rdi
  signed __int64 v43; // rcx
  __int64 v44; // rdx
  bool v45; // zf
  __int64 v46; // rax
  void *v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // rdx
  int v54; // edi
  unsigned int v55; // r11d
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v60; // r13d
  __int64 v61; // r8
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rdi
  struct _LIST_ENTRY *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdi
  __int64 v68; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int Queue; // ebp
  unsigned int v71; // ebp
  char v72; // al
  unsigned __int8 v73; // r12
  int v74; // r15d
  unsigned __int8 v75; // cl
  __int64 v76; // rdx
  __int64 v77; // r13
  char v78; // al
  unsigned __int64 v79; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v83; // eax
  __int64 TransitionPte; // rdi
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // r9
  __int64 v89; // r9
  __int64 v90; // rdx
  unsigned __int64 v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  __int64 v95; // r9
  _KPROCESS *v96; // rbx
  __int64 **Address; // rax
  __int64 v98; // rdi
  char v99; // dl
  int v100; // eax
  __int16 v101; // r8
  char v102; // dl
  __int16 v103; // ax
  char v104; // dl
  __int64 v105; // rcx
  unsigned int v106; // r14d
  __int64 v107; // rax
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  unsigned int v111; // ebx
  unsigned int v112; // edi
  unsigned __int64 v113; // rdx
  __int64 v114; // rbx
  __int64 v115; // r8
  unsigned __int64 v116; // rdx
  unsigned __int64 v117; // rdi
  struct _LIST_ENTRY *v118; // rax
  __int64 v119; // rax
  __int64 v120; // rdi
  struct _LIST_ENTRY *v121; // rcx
  __int64 v122; // rdi
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rdi
  __int64 v126; // r8
  unsigned __int64 v127; // rdi
  __int64 v128; // rcx
  struct _LIST_ENTRY *v129; // rax
  __int64 v130; // rax
  char v131; // di
  int v133; // [rsp+40h] [rbp-F8h]
  int v134; // [rsp+44h] [rbp-F4h]
  _KPROCESS *Process; // [rsp+48h] [rbp-F0h]
  unsigned int v136; // [rsp+50h] [rbp-E8h]
  int v137; // [rsp+54h] [rbp-E4h]
  __int64 v138; // [rsp+58h] [rbp-E0h]
  int v139; // [rsp+60h] [rbp-D8h] BYREF
  int v140; // [rsp+64h] [rbp-D4h] BYREF
  int v141; // [rsp+68h] [rbp-D0h] BYREF
  int v142; // [rsp+6Ch] [rbp-CCh] BYREF
  int v143; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int64 v144; // [rsp+78h] [rbp-C0h] BYREF
  unsigned __int64 v145; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v146; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v147; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v148; // [rsp+98h] [rbp-A0h]
  __int64 v149; // [rsp+A0h] [rbp-98h]
  __int64 v150; // [rsp+A8h] [rbp-90h]
  __int64 **v151; // [rsp+B0h] [rbp-88h]
  __int64 v152; // [rsp+B8h] [rbp-80h]
  __int64 v153; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v154; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v155; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v156; // [rsp+D8h] [rbp-60h]
  __int64 v157; // [rsp+E0h] [rbp-58h]
  __int64 v159; // [rsp+148h] [rbp+10h]
  unsigned int v161; // [rsp+158h] [rbp+20h]

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 16) >> 9;
  v6 = a1;
  v149 = v4;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = (v5 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0;
  v148 = v9;
  v133 = 0;
  v153 = v8[7];
  v11 = v8[2];
  if ( (v11 & 1) != 0 )
    v133 = *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) == 3;
  v12 = v4;
  if ( (*(_DWORD *)v6 & 8) == 0 )
    v12 = 0LL;
  v152 = v12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = *(_QWORD *)(v6 + 64);
  v150 = ((*v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = 16;
  v151 = (__int64 **)v13;
  v134 = 0;
  if ( v13 )
  {
    v15 = *(unsigned int *)(v13 + 52);
    LODWORD(v15) = v15 & 0x7FFFFFFF;
    if ( (v15 | ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) << 31)) == 0x7FFFFFFFELL )
      v14 = 80;
  }
  v16 = *(_DWORD *)(v6 + 32);
  v137 = v16;
  if ( (v16 & 2) == 0 || v9 > 0xFFFFF6BFFFFFFF78uLL || v9 < 0xFFFFF68000000000uLL )
  {
    v16 |= 0x80000000;
    v137 = v16;
  }
  if ( !*(_DWORD *)(v6 + 36) )
    __incgsdword(0x2E9Cu);
  v161 = 0;
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
      if ( (unsigned int)MiUserPdeOrAbove(v9) )
        v19 |= 4uLL;
    }
    v21 = v19;
    v22 = v19 | 4;
    if ( v9 > 0xFFFFF6BFFFFFFF78uLL )
      v22 = v21;
    if ( (v16 & 0x4000000) != 0 )
      LeafVa = MiGetLeafVa(LeafVa);
    if ( LeafVa >= 0xFFFF800000000000uLL )
    {
      if ( (unsigned int)MiGetSystemRegionType(LeafVa) == 1
        || LeafVa >= 0xFFFFF68000000000uLL && LeafVa <= 0xFFFFF6FFFFFFFFFFuLL )
      {
LABEL_38:
        v3 = a3;
        v10 = 0;
        v18 = 0LL;
        goto LABEL_39;
      }
      if ( LeafVa < qword_140C4F938 || (v23 = HIBYTE(word_140C4DE08), LeafVa > qword_140C4E168) )
        v23 = (unsigned __int8)word_140C4DE08;
    }
    else
    {
      v23 = HIBYTE(word_140C4DE08);
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
    v24 ^= ((unsigned __int16)v24 ^ (unsigned __int16)((unsigned __int8)word_140C4DE08 << 8)) & 0x100;
  v25 = 0xFFFFF6FB7DBED7F8uLL;
  v26 = v24 & 0xFFFFFFFFFFFFFEFFuLL;
  v27 = 0LL;
  if ( (v16 & 0x8000000) == 0 )
    v26 = v24;
  v145 = 0LL;
  v28 = v26 | 0x80;
  if ( (v16 & 0x4000000) == 0 )
    v28 = v26;
  v29 = v28 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( !v3 )
  {
LABEL_265:
    v111 = 273;
    goto LABEL_266;
  }
  v3 = 0xFFFFFFF000000000uLL;
  while ( 1 )
  {
    v30 = *(_QWORD *)v9;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL && v9 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      if ( (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v30 & 1) != 0
        && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
      {
        Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( Flink )
        {
          v32 = *((_QWORD *)&Flink->Flink + ((v9 >> 3) & 0x1FF));
          v33 = v30 | 0x20;
          if ( (v32 & 0x20) == 0 )
            v33 = *(_QWORD *)v9;
          v30 = v33;
          if ( (v32 & 0x42) != 0 )
            v30 = v33 | 0x42;
        }
      }
      v27 = v145;
    }
    if ( !*(_DWORD *)(v6 + 36) )
    {
      if ( v30 )
        goto LABEL_87;
      v30 = 32LL * (*(_DWORD *)(v6 + 32) & 0x1F);
      v161 = v18 + 1;
      if ( qword_140C4DD40 )
      {
        if ( (v30 & qword_140C4DD40) != 0 )
          v30 |= 0x10uLL;
        else
          v30 |= qword_140C4DD40;
      }
      v34 = v30;
      if ( MiPteInShadowRange(v9) )
      {
        if ( (unsigned int)MiPteHasShadow(v36, v35, v18, v37) )
        {
          if ( !HIBYTE(word_140C4DE08) && (v30 & 1) != 0 )
            v34 = v30 | 0x8000000000000000uLL;
          *(_QWORD *)v9 = v34;
          MiWritePteShadow(v9, v34);
          goto LABEL_78;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v30 & 1) != 0 )
        {
          v34 = v30 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v9 = v34;
LABEL_78:
      v3 = 0xFFFFFFF000000000uLL;
      goto LABEL_87;
    }
    if ( (v30 & 0x400) == 0 && (v30 & 0x4000000) != 0 && !v27 )
      v29 |= 0x40uLL;
LABEL_87:
    v38 = (volatile signed __int64 *)(a2 + 24);
    v138 = a2;
    v39 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFLL;
    v40 = a2;
    if ( v39 == 0xFFFFFFFFFLL )
    {
      v159 = 0LL;
    }
    else
    {
      v18 = 48 * v39 - 0x58000000000LL;
      v159 = v18;
    }
    v41 = *v38;
    v42 = _InterlockedCompareExchange64(v38, *v38 & 0xFFFFFFF000000000uLL, *v38);
    if ( v41 != v42 )
    {
      do
      {
        v43 = v42;
        v42 = _InterlockedCompareExchange64(v38, v42 & 0xFFFFFFF000000000uLL, v42);
      }
      while ( v43 != v42 );
    }
    v44 = (unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v45 = *(_DWORD *)(v6 + 36) == 0;
    v147 = (a2 + 0x58000000000LL) / 48;
    if ( !v45 && !*(_QWORD *)(v6 + 72) && (v30 & 0x400) != 0 )
    {
      v46 = v30;
      if ( qword_140C4DD40 && (v30 & 0x10) == 0 )
        v46 = v30 & ~qword_140C4DD40;
      if ( v46 >> 16 )
      {
        v139 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v139, v44, v18, v3);
            while ( *(__int64 *)v38 < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0x3FuLL) );
          v40 = a2;
        }
        *(_QWORD *)(v40 + 40) = *(_QWORD *)(v40 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x4000000000000000LL;
        _InterlockedAnd64(v38, 0x7FFFFFFFFFFFFFFFuLL);
      }
      else if ( (v30 & 0x3E0) != 0 )
      {
        v30 &= ~0x400uLL;
      }
      else
      {
        v30 = 0LL;
      }
      v47 = (void *)MiMapPageInHyperSpaceWorker((a2 + 0x58000000000LL) / 48, 0LL, 0x80000000LL);
      memset64(v47, v30 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
      MiUnmapPageInHyperSpaceWorker((unsigned __int64)v47, 0x11u, 0x80000000);
      v30 = MiSwizzleInvalidPte(128LL, v48, v49, v50);
      v14 |= 8u;
      v40 = a2;
    }
    v51 = *(unsigned int *)(v6 + 32);
    v52 = v14 | 0x20;
    v53 = *(_QWORD *)v9;
    v54 = *(_DWORD *)(v6 + 32);
    if ( (*(_DWORD *)v6 & 4) == 0 )
      v52 = v14;
    v55 = v52 | 0x20;
    if ( (*(_DWORD *)(v6 + 32) & 2) == 0 )
      v55 = v52;
    v136 = v55;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v52, v53, v18, v51)
      && (v53 & 1) != 0
      && ((v53 & 0x20) == 0 || (v53 & 0x42) == 0) )
    {
      v18 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v18 )
      {
        v56 = *(_QWORD *)(v18 + 8 * ((v9 >> 3) & 0x1FF));
        v18 = v53 | 0x20;
        if ( (v56 & 0x20) == 0 )
          v18 = v53;
        v53 = v18;
        if ( (v56 & 0x42) != 0 )
          v53 = v18 | 0x42;
      }
    }
    if ( (v55 & 4) != 0 )
    {
      v57 = 32LL * (v54 & 0x1F);
      if ( v53 )
        v53 = v57 | v53 & 0xFFFFFFFFFFFFFC1FuLL;
      else
        v53 = MiSwizzleInvalidPte(v57, 0LL, v18, v51);
    }
    v58 = -9LL;
    if ( (v53 & 0x400) != 0 )
      v58 = -2049LL;
    v59 = v53 & v58;
    *(_QWORD *)(v40 + 16) = v59;
    if ( (v55 & 2) != 0 )
    {
      *(_QWORD *)(v40 + 40) |= 0x8000000000000000uLL;
    }
    else if ( (v55 & 8) == 0 )
    {
      *(_QWORD *)v40 &= 0xFFFFFFFFFFFFC00FuLL;
      *(_QWORD *)(v40 + 16) = v59 & 0xFFFFFFFFFC00FFFFuLL;
    }
    if ( (_DWORD)v51 )
    {
      if ( (_DWORD)v51 == 31 )
      {
        v60 = 1;
        v61 = 0LL;
      }
      else if ( (unsigned int)v51 >> 3 == 3 && (v51 & 7) != 0 )
      {
        v60 = 2;
        v61 = 0LL;
      }
      else
      {
        v61 = 0LL;
        v60 = (unsigned int)v51 >> 3 != 1;
      }
    }
    else
    {
      v60 = 3;
      v61 = 0LL;
    }
    *(_WORD *)(v40 + 32) = 1;
    v62 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v63 = *(_QWORD *)v62;
    if ( v62 >= 0xFFFFF6FB7DBED000uLL
      && v62 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(-2049LL, v62, 0LL, v51)
      && (v63 & 1) != 0
      && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
    {
      v64 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v64 )
      {
        v65 = *((_QWORD *)&v64->Flink + ((v62 >> 3) & 0x1FF));
        v62 = v63 | 0x20;
        if ( (v65 & 0x20) == 0 )
          v62 = v63;
        v63 = v62;
        if ( (v65 & 0x42) != 0 )
          v63 = v62 | 0x42;
      }
    }
    v144 = v63;
    if ( (unsigned __int64)&v144 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v144 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(&v144, v62, v61, v51)
      && (v63 & 1) != 0
      && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
    {
      v62 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v62 )
      {
        v66 = *(_QWORD *)(v62 + 8 * (((unsigned __int64)&v144 >> 3) & 0x1FF));
        v62 = v63 | 0x20;
        if ( (v66 & 0x20) == 0 )
          v62 = v63;
        v63 = v62;
        if ( (v66 & 0x42) != 0 )
          v63 = v62 | 0x42;
      }
    }
    v67 = (v63 >> 12) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v40 + 40) = v67 | *(_QWORD *)(v40 + 40) & 0xFFFFFFF000000000uLL;
    v68 = 48 * v67 - 0x58000000000LL;
    CurrentThread = KeGetCurrentThread();
    Queue = (unsigned int)CurrentThread[1].Queue;
    if ( (Queue & 0x100) != 0 )
    {
      v71 = Queue >> 9;
    }
    else
    {
      v71 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 12) & 7;
      if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
      {
        v72 = 2;
        if ( v71 < 2 )
          v72 = v71;
        LOBYTE(v71) = v72;
      }
    }
    v73 = 17;
    v74 = v55 & 1;
    if ( (v55 & 1) == 0 )
    {
      if ( (v55 & 0x10) != 0 )
      {
        v140 = v61;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v38, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v140, v62, v61, v51);
          while ( *(__int64 *)v38 < 0 );
        }
      }
      else
      {
        v73 = MiLockPageInline(v40);
      }
    }
    v141 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v68 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v141, v62, v61, v51);
      while ( *(__int64 *)(v68 + 24) < 0 );
    }
    *(_QWORD *)(v68 + 24) ^= ((*(_QWORD *)(v68 + 24) + 1LL) ^ *(_QWORD *)(v68 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v75 = *(_BYTE *)(v138 + 34);
    if ( v75 >> 6 == v60 )
    {
      v77 = v138;
    }
    else
    {
      v76 = v60;
      v77 = v138;
      MiChangePageAttribute(v138, v76, 1LL);
      v75 = *(_BYTE *)(v138 + 34);
    }
    *v38 = *v38 & 0xC000000000000000uLL | 1;
    v78 = v71 ^ *(_BYTE *)(v77 + 35);
    v79 = v148;
    *(_QWORD *)(v77 + 8) = v148;
    *(_BYTE *)(v77 + 35) ^= v78 & 7;
    *(_BYTE *)(v77 + 34) = v75 & 0xF8 | 6;
    if ( (v136 & 0x20) == 0 )
      *(_BYTE *)(v77 + 34) |= 0x10u;
    if ( (v136 & 0x40) != 0 )
      *(_BYTE *)(v77 + 35) |= 0x20u;
    if ( !v74 )
    {
      _InterlockedAnd64(v38, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v136 & 0x10) == 0 )
      {
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && v73 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v83 = ~(unsigned __int16)(-1LL << (v73 + 1));
              v45 = (v83 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v83;
              if ( v45 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v73);
      }
    }
    v14 = v136;
    if ( (v136 & 8) != 0 )
      *(_QWORD *)(v77 + 16) = v30;
    v6 = a1;
    if ( (*(_DWORD *)a1 & 4) != 0 )
    {
      TransitionPte = MiMakeTransitionPte(v147, *(_DWORD *)(a1 + 32));
      if ( MiPteInShadowRange(v79) )
      {
        if ( (unsigned int)MiPteHasShadow(v86, v85, v87, v88) )
        {
          if ( !HIBYTE(word_140C4DE08) && (TransitionPte & 1) != 0 )
            TransitionPte |= 0x8000000000000000uLL;
          *(_QWORD *)v79 = TransitionPte;
          MiWritePteShadow(v79, TransitionPte);
          goto LABEL_209;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (TransitionPte & 1) != 0 )
        {
          TransitionPte |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v79 = TransitionPte;
LABEL_209:
      if ( (*(_DWORD *)a1 & 0x40) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
      MiLockAndDecrementShareCount(v77, 0LL);
      if ( v149 )
      {
        v90 = *(_QWORD *)(*(_QWORD *)(v149 + 8) + 16LL * *(_QWORD *)(v149 + 24)) + (*(_QWORD *)(v149 + 32) << 12);
        if ( (__int64)(v79 << 25) >> 16 == v90 && *(_BYTE *)v149 != 5 )
          MiAdvanceFaultList(v149, v90, v149, v89);
      }
      goto LABEL_264;
    }
    v29 = (v29 ^ (v147 << 12)) & 0xFFFFFFFFF000LL ^ v29 | 0x20;
    if ( !*(_QWORD *)(a1 + 72) )
      break;
    v91 = v29;
    if ( MiPteInShadowRange(v79) )
    {
      if ( (unsigned int)MiPteHasShadow(v93, v92, v94, v95) )
      {
        if ( !HIBYTE(word_140C4DE08) && (v29 & 1) != 0 )
          v91 = v29 | 0x8000000000000000uLL;
        *(_QWORD *)v79 = v91;
        MiWritePteShadow(v79, v91);
        goto LABEL_264;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v29 & 1) != 0 )
      {
        v91 = v29 | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v79 = v91;
LABEL_264:
    v9 = v79 + 8;
    a2 = v159;
    v27 = v145 + 1;
    v10 = 0;
    v18 = v161;
    v145 = v27;
    v3 = 0xFFFFFFF000000000uLL;
    v148 = v9;
    v25 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v27 >= a3 )
      goto LABEL_265;
  }
  if ( v79 == v150 || (*(_DWORD *)a1 & 0x80u) == 0 || (v29 &= ~0x20uLL, v137 >= 0) || v79 > 0xFFFFF6BFFFFFFF78uLL )
  {
    v96 = Process;
  }
  else
  {
    v96 = Process;
    if ( v79 >= 0xFFFFF68000000000uLL && (Process[1].DirectoryTableBase & 0x800000000000LL) != 0 )
    {
      if ( v134 )
      {
        if ( v134 == 2 )
          v29 &= 0xFFFFFFFFFFFFFFBDuLL;
      }
      else
      {
        Address = v151;
        if ( !v151 )
          Address = MiLocateAddress(*(_QWORD *)(a1 + 16));
        if ( ((_DWORD)Address[6] & 0x300000) == 0x300000 )
        {
          v134 = 2;
          v29 &= 0xFFFFFFFFFFFFFFBDuLL;
        }
        else
        {
          v134 = 1;
        }
      }
    }
  }
  v98 = *(_QWORD *)(a1 + 8);
  v99 = *(_BYTE *)(v98 + 69);
  if ( (v99 & 5) != 4 || (v99 & 2) != 0 )
  {
    v106 = v133 & 0xFFFFFFFB;
    v133 &= ~4u;
  }
  else
  {
    v100 = *(unsigned __int16 *)(v98 + 66);
    v101 = 511;
    if ( (_WORD)v100 )
    {
      if ( v100 + *(unsigned __int16 *)(v98 + 64) != (((unsigned int)v79 >> 3) & 0x1FF) )
        goto LABEL_249;
      if ( (unsigned int)MI_PFN_IS_PROTO(v77) )
      {
        if ( v102 )
        {
LABEL_249:
          MiEmptyDeferredWorkingSetEntries((__int64 *)(v98 + 56));
          v101 = 511;
        }
      }
      else if ( !v102 )
      {
        goto LABEL_249;
      }
    }
    v103 = *(_WORD *)(v98 + 66);
    if ( v103 )
    {
      *(_WORD *)(v98 + 66) = v103 + 1;
    }
    else
    {
      *(_WORD *)(v98 + 66) = 1;
      *(_WORD *)(v98 + 64) = v101 & ((unsigned int)v79 >> 3);
      if ( (unsigned int)MI_PFN_IS_PROTO(v77) )
        *(_BYTE *)(v98 + 69) = v104 & 0xEF;
      else
        *(_BYTE *)(v98 + 69) = v104 | 0x10;
    }
    v105 = *(_QWORD *)(a1 + 8);
    v106 = v133 | 4;
    v133 |= 4u;
    if ( (*(_BYTE *)(v105 + 69) & 8) != 0 )
    {
      v107 = *(_QWORD *)(v105 + 16);
      if ( (v107 & 1) == 0 || *(_BYTE *)(v107 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
        v29 &= ~0x20uLL;
    }
  }
  if ( (unsigned int)MiAllocateWsle(v153, v79, v77, 0, v29, v106, v152) )
  {
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v96[1].Affinity.Bitmap[13], 1uLL);
    __incgsdword(0x2E9Cu);
    goto LABEL_264;
  }
  v114 = 48 * (*(_QWORD *)(v77 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v142 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v142, v108, v109, v110);
    while ( *(__int64 *)(v77 + 24) < 0 );
  }
  MiCapturePageFileInfoInline(v77 + 16, 1LL);
  *(_QWORD *)(v77 + 16) &= ~2uLL;
  *(_QWORD *)(v77 + 24) |= 0x4000000000000000uLL;
  MiDecrementShareCount(v77);
  _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockAndDecrementShareCount(v114, 0LL);
  v111 = -1073741801;
  MiFreePageChain(v159);
  v10 = 0;
  v25 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_266:
  if ( !*(_DWORD *)(v6 + 36) && v161 )
  {
    v112 = 0;
    v113 = *(_QWORD *)(v6 + 16);
    while ( v113 > 0x7FFFFFFEFFFFLL )
    {
      v27 = 0LL;
      ++v112;
      v113 = (__int64)(v113 << 25) >> 16;
      if ( v112 >= 3 )
        return v111;
    }
    v115 = (*(_QWORD *)(v6 + 16) >> 18) & 0x3FFFFFF8LL;
    v116 = *(_QWORD *)(v115 - 0x904C0000000LL);
    v117 = v115 - 0x904C0000000LL;
    if ( (unsigned __int64)(v115 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
      && v117 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(v27, v116, v115, v3)
      && (v116 & 1) != 0
      && ((v116 & 0x20) == 0 || (v116 & 0x42) == 0) )
    {
      v118 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v118 )
      {
        v119 = *((_QWORD *)&v118->Flink + ((v117 >> 3) & 0x1FF));
        v120 = v116 | 0x20;
        if ( (v119 & 0x20) == 0 )
          v120 = v116;
        v116 = v120;
        if ( (v119 & 0x42) != 0 )
          v116 = v120 | 0x42;
      }
    }
    v146 = v116;
    if ( (unsigned __int64)&v146 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v146 <= v25
      && (unsigned int)MiPteHasShadow(&v146, v116, v115, v3)
      && (v116 & 1) != 0
      && ((v116 & 0x20) == 0 || (v116 & 0x42) == 0) )
    {
      v121 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v121 )
      {
        v122 = v116 | 0x20;
        v123 = *((_QWORD *)&v121->Flink + (((unsigned __int64)&v146 >> 3) & 0x1FF));
        if ( (v123 & 0x20) == 0 )
          v122 = v116;
        v116 = v122;
        if ( (v123 & 0x42) != 0 )
          v116 = v122 | 0x42;
      }
    }
    v124 = (v116 >> 12) & 0xFFFFFFFFFLL;
    v125 = 48 * v124 - 0x58000000000LL;
    v143 = v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v125 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v143, v124, v115, v3);
      while ( *(__int64 *)(v125 + 24) < 0 );
    }
    *(_QWORD *)(v125 + 16) ^= ((unsigned int)*(_QWORD *)(v125 + 16) ^ ((unsigned int)*(_QWORD *)(v125 + 16)
                                                                     + ((unsigned __int16)v161 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v125 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v161 <= 1
      && ((__int64)(*(_QWORD *)(v125 + 8) | 0x8000000000000000uLL) >> 47 == -1
       || (__int64)(*(_QWORD *)(v125 + 8) | 0x8000000000000000uLL) >> 47 == 0) )
    {
      v154 = (((*(_QWORD *)(v125 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v155 = ((v154 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v156 = ((v155 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v157 = ((v156 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v126 = 4LL;
      do
      {
        v127 = *(&v153 + v126--);
        v128 = *(_QWORD *)v127;
        if ( v127 >= 0xFFFFF6FB7DBED000uLL
          && v127 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v128 & 1) == 0 )
            return v111;
          if ( (v128 & 0x20) == 0 || (v128 & 0x42) == 0 )
          {
            v129 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v129 )
            {
              v130 = *((_QWORD *)&v129->Flink + ((v127 >> 3) & 0x1FF));
              v131 = v128 | 0x20;
              if ( (v130 & 0x20) == 0 )
                v131 = v128;
              LOBYTE(v128) = v131;
              if ( (v130 & 0x42) != 0 )
                LOBYTE(v128) = v131 | 0x42;
            }
          }
        }
      }
      while ( (v128 & 1) != 0 && (v128 & 0x80u) == 0LL && v126 );
    }
  }
  return v111;
}
