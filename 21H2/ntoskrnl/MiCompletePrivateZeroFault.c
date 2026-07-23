/*
 * XREFs of MiCompletePrivateZeroFault @ 0x1402B5150
 * Callers:
 *     MiResolvePrivateZeroFault @ 0x1402B4A20 (MiResolvePrivateZeroFault.c)
 * Callees:
 *     MiFreePageChain @ 0x140209074 (MiFreePageChain.c)
 *     MiAdvanceFaultList @ 0x14020B2E8 (MiAdvanceFaultList.c)
 *     MiCapturePageFileInfoInline @ 0x140220130 (MiCapturePageFileInfoInline.c)
 *     MiUserPdeOrAbove @ 0x14022A014 (MiUserPdeOrAbove.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiLockAndDecrementShareCount @ 0x140287230 (MiLockAndDecrementShareCount.c)
 *     MiAllocateWsle @ 0x1402B65C0 (MiAllocateWsle.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x140326744 (MiEmptyDeferredWorkingSetEntries.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MiMakeTransitionPte @ 0x140339700 (MiMakeTransitionPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14033C800 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140353660 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiCompletePrivateZeroFault(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  _QWORD *v4; // r8
  __int64 v5; // rbp
  __int64 v6; // r15
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rbp
  int v10; // r11d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // r12d
  __int64 v15; // rax
  int v16; // r14d
  __int64 v17; // rsi
  unsigned int v18; // r8d
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
  volatile signed __int64 *v35; // r14
  __int64 v36; // rax
  __int64 v37; // r10
  volatile signed __int64 v38; // rdx
  signed __int64 v39; // rdi
  signed __int64 v40; // rcx
  bool v41; // zf
  __int64 v42; // rax
  void *v43; // rdi
  __int64 v44; // rdx
  unsigned int v45; // r9d
  int v46; // ecx
  __int64 v47; // rdx
  char v48; // di
  int v49; // r11d
  struct _LIST_ENTRY *v50; // r8
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rax
  unsigned int v56; // r13d
  int v57; // r8d
  unsigned __int64 *v58; // rdx
  unsigned __int64 v59; // rdi
  unsigned __int64 v60; // rdx
  struct _LIST_ENTRY *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  struct _LIST_ENTRY *v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
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
  unsigned __int64 v85; // rdi
  _KPROCESS *v86; // rbx
  __int64 **Address; // rax
  __int64 v88; // rdi
  char v89; // dl
  int v90; // eax
  __int16 v91; // r8
  char v92; // dl
  __int16 v93; // ax
  char v94; // dl
  __int64 v95; // rcx
  unsigned int v96; // r14d
  __int64 v97; // rax
  unsigned int v98; // ebx
  unsigned int v99; // edi
  unsigned __int64 v100; // rdx
  __int64 v101; // rbx
  __int64 v102; // r8
  unsigned __int64 v103; // rdx
  unsigned __int64 v104; // rdi
  struct _LIST_ENTRY *v105; // rax
  __int64 v106; // rax
  __int64 v107; // rdi
  struct _LIST_ENTRY *v108; // rcx
  __int64 v109; // rdi
  __int64 v110; // rax
  __int64 v111; // rdi
  __int64 v112; // r8
  unsigned __int64 v113; // rdi
  __int64 v114; // rcx
  struct _LIST_ENTRY *v115; // rax
  __int64 v116; // rax
  char v117; // di
  int v119; // [rsp+40h] [rbp-F8h]
  int v120; // [rsp+44h] [rbp-F4h]
  _KPROCESS *Process; // [rsp+48h] [rbp-F0h]
  int v122; // [rsp+50h] [rbp-E8h]
  int v123; // [rsp+54h] [rbp-E4h]
  __int64 v124; // [rsp+58h] [rbp-E0h]
  int v125; // [rsp+60h] [rbp-D8h] BYREF
  int v126; // [rsp+64h] [rbp-D4h] BYREF
  int v127; // [rsp+68h] [rbp-D0h] BYREF
  int v128; // [rsp+6Ch] [rbp-CCh] BYREF
  int v129; // [rsp+70h] [rbp-C8h] BYREF
  unsigned __int64 v130; // [rsp+78h] [rbp-C0h] BYREF
  unsigned __int64 v131; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v132; // [rsp+88h] [rbp-B0h] BYREF
  __int64 v133; // [rsp+90h] [rbp-A8h]
  unsigned __int64 v134; // [rsp+98h] [rbp-A0h]
  _QWORD *v135; // [rsp+A0h] [rbp-98h]
  __int64 v136; // [rsp+A8h] [rbp-90h]
  __int64 **v137; // [rsp+B0h] [rbp-88h]
  __int64 v138; // [rsp+B8h] [rbp-80h]
  __int64 v139; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v140; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v141; // [rsp+D0h] [rbp-68h]
  unsigned __int64 v142; // [rsp+D8h] [rbp-60h]
  __int64 v143; // [rsp+E0h] [rbp-58h]
  __int64 v145; // [rsp+148h] [rbp+10h]
  unsigned int v147; // [rsp+158h] [rbp+20h]

  v3 = a3;
  v4 = *(_QWORD **)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 16) >> 9;
  v6 = a1;
  v135 = v4;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = (v5 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = 0;
  v134 = v9;
  v119 = 0;
  v139 = v8[7];
  v11 = v8[2];
  if ( (v11 & 1) != 0 )
    v119 = *(_BYTE *)(v11 & 0xFFFFFFFFFFFFFFFEuLL) == 3;
  v12 = (__int64)v4;
  if ( (*(_DWORD *)v6 & 8) == 0 )
    v12 = 0LL;
  v138 = v12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = *(_QWORD *)(v6 + 64);
  v136 = ((*v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = 16;
  v137 = (__int64 **)v13;
  v120 = 0;
  if ( v13 )
  {
    v15 = *(unsigned int *)(v13 + 52);
    LODWORD(v15) = v15 & 0x7FFFFFFF;
    if ( (v15 | ((unsigned __int64)*(unsigned __int8 *)(v13 + 34) << 31)) == 0x7FFFFFFFELL )
      v14 = 80;
  }
  v16 = *(_DWORD *)(v6 + 32);
  v123 = v16;
  if ( (v16 & 2) == 0 || v9 > 0xFFFFF6BFFFFFFF78uLL || v9 < 0xFFFFF68000000000uLL )
  {
    v16 |= 0x80000000;
    v123 = v16;
  }
  if ( !*(_DWORD *)(v6 + 36) )
    __incgsdword(0x2E9Cu);
  v147 = 0;
  v17 = v16 & 0x1F;
  v18 = 0;
  v19 = MmProtectToPteMask[v17] & 0xFFFF000000000E5EuLL | 0x21;
  if ( v9 < 0xFFFFF68000000000uLL || v9 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v22 = MmProtectToPteMask[v17] & 0xFFFF000000000E5EuLL | 0x121;
    goto LABEL_39;
  }
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
  if ( LeafVa < 0xFFFF800000000000uLL )
  {
    v23 = HIBYTE(word_140C4E048);
LABEL_36:
    if ( v23 )
      v22 |= 0x100uLL;
    goto LABEL_38;
  }
  if ( (unsigned int)MiGetSystemRegionType(LeafVa) != 1
    && (LeafVa < 0xFFFFF68000000000uLL || LeafVa > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    if ( LeafVa < qword_140C4FB78 || (v23 = HIBYTE(word_140C4E048), LeafVa > qword_140C4E3A8) )
      v23 = (unsigned __int8)word_140C4E048;
    goto LABEL_36;
  }
LABEL_38:
  v3 = a3;
  v10 = 0;
  v18 = 0;
LABEL_39:
  if ( v16 < 0 && (v16 & 5) == 4 )
    v22 |= 0x42uLL;
  v24 = v22 & 0xFFFFFFFFFFFFFFFBuLL;
  if ( (v16 & 0x40000000) == 0 )
    v24 = v22;
  if ( (v16 & 0x20000000) != 0 )
    v24 ^= ((unsigned __int16)v24 ^ (unsigned __int16)((unsigned __int8)word_140C4E048 << 8)) & 0x100;
  v25 = 0xFFFFF6FB7DBED7F8uLL;
  v26 = v24 & 0xFFFFFFFFFFFFFEFFuLL;
  v27 = 0LL;
  if ( (v16 & 0x8000000) == 0 )
    v26 = v24;
  v131 = 0LL;
  v28 = v26 | 0x80;
  if ( (v16 & 0x4000000) == 0 )
    v28 = v26;
  v29 = v28 & 0xF0FFFFFFFFFFFFFFuLL | 0xA00000000000000LL;
  if ( !v3 )
  {
LABEL_264:
    v98 = 273;
    goto LABEL_265;
  }
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
      v27 = v131;
    }
    if ( *(_DWORD *)(v6 + 36) )
    {
      if ( (v30 & 0x400) == 0 && (v30 & 0x4000000) != 0 && !v27 )
        v29 |= 0x40uLL;
    }
    else
    {
      if ( v30 )
        goto LABEL_86;
      v30 = 32LL * (*(_DWORD *)(v6 + 32) & 0x1F);
      v147 = v18 + 1;
      if ( qword_140C4DF80 )
      {
        if ( (v30 & qword_140C4DF80) != 0 )
          v30 |= 0x10uLL;
        else
          v30 |= qword_140C4DF80;
      }
      v34 = v30;
      if ( !(unsigned int)MiPteInShadowRange(v9) )
        goto LABEL_81;
      if ( !(unsigned int)MiPteHasShadow() )
      {
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (v30 & 1) != 0 )
        {
          v34 = v30 | 0x8000000000000000uLL;
        }
LABEL_81:
        *(_QWORD *)v9 = v34;
        goto LABEL_86;
      }
      if ( !HIBYTE(word_140C4E048) && (v30 & 1) != 0 )
        v34 = v30 | 0x8000000000000000uLL;
      *(_QWORD *)v9 = v34;
      MiWritePteShadow(v9, v34);
    }
LABEL_86:
    v35 = (volatile signed __int64 *)(a2 + 24);
    v124 = a2;
    v36 = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFLL;
    v37 = a2;
    if ( v36 == 0xFFFFFFFFFLL )
      v145 = 0LL;
    else
      v145 = 48 * v36 - 0x58000000000LL;
    v38 = *v35;
    v39 = _InterlockedCompareExchange64(v35, *v35 & 0xFFFFFFF000000000uLL, *v35);
    if ( v38 != v39 )
    {
      do
      {
        v40 = v39;
        v39 = _InterlockedCompareExchange64(v35, v39 & 0xFFFFFFF000000000uLL, v39);
      }
      while ( v40 != v39 );
    }
    v41 = *(_DWORD *)(v6 + 36) == 0;
    v133 = (a2 + 0x58000000000LL) / 48;
    if ( !v41 && !*(_QWORD *)(v6 + 72) && (v30 & 0x400) != 0 )
    {
      v42 = v30;
      if ( qword_140C4DF80 && (v30 & 0x10) == 0 )
        v42 = v30 & ~qword_140C4DF80;
      if ( v42 >> 16 )
      {
        v125 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v35, 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v125);
            while ( *(__int64 *)v35 < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)v35, 0x3FuLL) );
          v37 = a2;
        }
        *(_QWORD *)(v37 + 40) = *(_QWORD *)(v37 + 40) & 0x8FFFFFFFFFFFFFFFuLL | 0x4000000000000000LL;
        _InterlockedAnd64(v35, 0x7FFFFFFFFFFFFFFFuLL);
      }
      else if ( (v30 & 0x3E0) != 0 )
      {
        v30 &= ~0x400uLL;
      }
      else
      {
        v30 = 0LL;
      }
      v43 = (void *)MiMapPageInHyperSpaceWorker((a2 + 0x58000000000LL) / 48, 0LL, 0x80000000LL);
      memset64(v43, v30 & 0xFFFFFFFFFFFFFFFDuLL, 0x200uLL);
      LOBYTE(v44) = 17;
      MiUnmapPageInHyperSpaceWorker(v43, v44, 0x80000000LL);
      v30 = MiSwizzleInvalidPte(128LL);
      v14 |= 8u;
      v37 = a2;
    }
    v45 = *(_DWORD *)(v6 + 32);
    v46 = v14 | 0x20;
    v47 = *(_QWORD *)v9;
    v48 = v45;
    if ( (*(_DWORD *)v6 & 4) == 0 )
      v46 = v14;
    v49 = v46 | 0x20;
    if ( (*(_DWORD *)(v6 + 32) & 2) == 0 )
      v49 = v46;
    v122 = v49;
    if ( v9 >= 0xFFFFF6FB7DBED000uLL
      && v9 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v47 & 1) != 0
      && ((v47 & 0x20) == 0 || (v47 & 0x42) == 0) )
    {
      v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v50 )
      {
        v51 = *((_QWORD *)&v50->Flink + ((v9 >> 3) & 0x1FF));
        v52 = v47 | 0x20;
        if ( (v51 & 0x20) == 0 )
          v52 = v47;
        v47 = v52;
        if ( (v51 & 0x42) != 0 )
          v47 = v52 | 0x42;
      }
    }
    if ( (v49 & 4) != 0 )
    {
      v53 = 32LL * (v48 & 0x1F);
      if ( v47 )
        v47 = v53 | v47 & 0xFFFFFFFFFFFFFC1FuLL;
      else
        v47 = MiSwizzleInvalidPte(v53);
    }
    v54 = -9LL;
    if ( (v47 & 0x400) != 0 )
      v54 = -2049LL;
    v55 = v47 & v54;
    *(_QWORD *)(v37 + 16) = v55;
    if ( (v49 & 2) != 0 )
    {
      *(_QWORD *)(v37 + 40) |= 0x8000000000000000uLL;
    }
    else if ( (v49 & 8) == 0 )
    {
      *(_QWORD *)v37 &= 0xFFFFFFFFFFFFC00FuLL;
      *(_QWORD *)(v37 + 16) = v55 & 0xFFFFFFFFFC00FFFFuLL;
    }
    if ( v45 )
    {
      if ( v45 == 31 )
      {
        v56 = 1;
        v57 = 0;
      }
      else if ( v45 >> 3 == 3 && (v45 & 7) != 0 )
      {
        v56 = 2;
        v57 = 0;
      }
      else
      {
        v57 = 0;
        v56 = v45 >> 3 != 1;
      }
    }
    else
    {
      v56 = 3;
      v57 = 0;
    }
    *(_WORD *)(v37 + 32) = 1;
    v58 = (unsigned __int64 *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v59 = *v58;
    if ( (unsigned __int64)v58 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v58 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v59 & 1) != 0
      && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
    {
      v61 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v61 )
      {
        v62 = *((_QWORD *)&v61->Flink + ((v60 >> 3) & 0x1FF));
        v63 = v59 | 0x20;
        if ( (v62 & 0x20) == 0 )
          v63 = v59;
        v59 = v63;
        if ( (v62 & 0x42) != 0 )
          v59 = v63 | 0x42;
      }
    }
    v130 = v59;
    if ( (unsigned __int64)&v130 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v130 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v59 & 1) != 0
      && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
    {
      v64 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v64 )
      {
        v65 = *((_QWORD *)&v64->Flink + (((unsigned __int64)&v130 >> 3) & 0x1FF));
        v66 = v59 | 0x20;
        if ( (v65 & 0x20) == 0 )
          v66 = v59;
        v59 = v66;
        if ( (v65 & 0x42) != 0 )
          v59 = v66 | 0x42;
      }
    }
    v67 = (v59 >> 12) & 0xFFFFFFFFFLL;
    *(_QWORD *)(v37 + 40) = v67 | *(_QWORD *)(v37 + 40) & 0xFFFFFFF000000000uLL;
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
    v74 = v49 & 1;
    if ( (v49 & 1) == 0 )
    {
      if ( (v49 & 0x10) != 0 )
      {
        v126 = v57;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v35, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v126);
          while ( *(__int64 *)v35 < 0 );
        }
      }
      else
      {
        v73 = MiLockPageInline(v37);
      }
    }
    v127 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v68 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v127);
      while ( *(__int64 *)(v68 + 24) < 0 );
    }
    *(_QWORD *)(v68 + 24) ^= ((*(_QWORD *)(v68 + 24) + 1LL) ^ *(_QWORD *)(v68 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v75 = *(_BYTE *)(v124 + 34);
    if ( v75 >> 6 == v56 )
    {
      v77 = v124;
    }
    else
    {
      v76 = v56;
      v77 = v124;
      MiChangePageAttribute(v124, v76, 1LL);
      v75 = *(_BYTE *)(v124 + 34);
    }
    *v35 = *v35 & 0xC000000000000000uLL | 1;
    v78 = v71 ^ *(_BYTE *)(v77 + 35);
    v79 = v134;
    *(_QWORD *)(v77 + 8) = v134;
    *(_BYTE *)(v77 + 35) ^= v78 & 7;
    *(_BYTE *)(v77 + 34) = v75 & 0xF8 | 6;
    if ( (v122 & 0x20) == 0 )
      *(_BYTE *)(v77 + 34) |= 0x10u;
    if ( (v122 & 0x40) != 0 )
      *(_BYTE *)(v77 + 35) |= 0x20u;
    if ( !v74 )
    {
      _InterlockedAnd64(v35, 0x7FFFFFFFFFFFFFFFuLL);
      if ( (v122 & 0x10) == 0 )
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
              v41 = (v83 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v83;
              if ( v41 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v73);
      }
    }
    v14 = v122;
    if ( (v122 & 8) != 0 )
      *(_QWORD *)(v77 + 16) = v30;
    v6 = a1;
    if ( (*(_DWORD *)a1 & 4) != 0 )
    {
      TransitionPte = MiMakeTransitionPte(v133, *(unsigned int *)(a1 + 32));
      if ( (unsigned int)MiPteInShadowRange(v79) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          if ( !HIBYTE(word_140C4E048) && (TransitionPte & 1) != 0 )
            TransitionPte |= 0x8000000000000000uLL;
          *(_QWORD *)v79 = TransitionPte;
          MiWritePteShadow(v79, TransitionPte);
          goto LABEL_208;
        }
        if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
          && (TransitionPte & 1) != 0 )
        {
          TransitionPte |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v79 = TransitionPte;
LABEL_208:
      if ( (*(_DWORD *)a1 & 0x40) != 0 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
      MiLockAndDecrementShareCount(v77, 0);
      if ( v135
        && (__int64)(v79 << 25) >> 16 == *(_QWORD *)(v135[1] + 16LL * v135[3]) + (v135[4] << 12)
        && *(_BYTE *)v135 != 5 )
      {
        MiAdvanceFaultList(v135);
      }
      goto LABEL_263;
    }
    v29 = (v29 ^ (v133 << 12)) & 0xFFFFFFFFF000LL ^ v29 | 0x20;
    if ( !*(_QWORD *)(a1 + 72) )
      break;
    v85 = v29;
    if ( (unsigned int)MiPteInShadowRange(v79) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (v29 & 1) != 0 )
          v85 = v29 | 0x8000000000000000uLL;
        *(_QWORD *)v79 = v85;
        MiWritePteShadow(v79, v85);
        goto LABEL_263;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v29 & 1) != 0 )
      {
        v85 = v29 | 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v79 = v85;
LABEL_263:
    v9 = v79 + 8;
    a2 = v145;
    v27 = v131 + 1;
    v10 = 0;
    v18 = v147;
    v131 = v27;
    v134 = v9;
    v25 = 0xFFFFF6FB7DBED7F8uLL;
    if ( v27 >= a3 )
      goto LABEL_264;
  }
  if ( v79 == v136 || (*(_DWORD *)a1 & 0x80u) == 0 || (v29 &= ~0x20uLL, v123 >= 0) || v79 > 0xFFFFF6BFFFFFFF78uLL )
  {
    v86 = Process;
  }
  else
  {
    v86 = Process;
    if ( v79 >= 0xFFFFF68000000000uLL && (Process[1].DirectoryTableBase & 0x800000000000LL) != 0 )
    {
      if ( v120 )
      {
        if ( v120 == 2 )
          v29 &= 0xFFFFFFFFFFFFFFBDuLL;
      }
      else
      {
        Address = v137;
        if ( !v137 )
          Address = MiLocateAddress(*(_QWORD *)(a1 + 16));
        if ( ((_DWORD)Address[6] & 0x300000) == 0x300000 )
        {
          v120 = 2;
          v29 &= 0xFFFFFFFFFFFFFFBDuLL;
        }
        else
        {
          v120 = 1;
        }
      }
    }
  }
  v88 = *(_QWORD *)(a1 + 8);
  v89 = *(_BYTE *)(v88 + 69);
  if ( (v89 & 5) != 4 || (v89 & 2) != 0 )
  {
    v96 = v119 & 0xFFFFFFFB;
    v119 &= ~4u;
  }
  else
  {
    v90 = *(unsigned __int16 *)(v88 + 66);
    v91 = 511;
    if ( (_WORD)v90 )
    {
      if ( v90 + *(unsigned __int16 *)(v88 + 64) != (((unsigned int)v79 >> 3) & 0x1FF) )
        goto LABEL_248;
      if ( (unsigned int)MI_PFN_IS_PROTO(v77) )
      {
        if ( v92 )
        {
LABEL_248:
          MiEmptyDeferredWorkingSetEntries(v88 + 56);
          v91 = 511;
        }
      }
      else if ( !v92 )
      {
        goto LABEL_248;
      }
    }
    v93 = *(_WORD *)(v88 + 66);
    if ( v93 )
    {
      *(_WORD *)(v88 + 66) = v93 + 1;
    }
    else
    {
      *(_WORD *)(v88 + 66) = 1;
      *(_WORD *)(v88 + 64) = v91 & ((unsigned int)v79 >> 3);
      if ( (unsigned int)MI_PFN_IS_PROTO(v77) )
        *(_BYTE *)(v88 + 69) = v94 & 0xEF;
      else
        *(_BYTE *)(v88 + 69) = v94 | 0x10;
    }
    v95 = *(_QWORD *)(a1 + 8);
    v96 = v119 | 4;
    v119 |= 4u;
    if ( (*(_BYTE *)(v95 + 69) & 8) != 0 )
    {
      v97 = *(_QWORD *)(v95 + 16);
      if ( (v97 & 1) == 0 || *(_BYTE *)(v97 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
        v29 &= ~0x20uLL;
    }
  }
  if ( (unsigned int)MiAllocateWsle(v139, v79, v77, 0, v29, v96, v138) )
  {
    if ( (*(_DWORD *)a1 & 0x40) != 0 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)&v86[1].Affinity.Bitmap[13], 1uLL);
    __incgsdword(0x2E9Cu);
    goto LABEL_263;
  }
  v101 = 48 * (*(_QWORD *)(v77 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v128 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v77 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v128);
    while ( *(__int64 *)(v77 + 24) < 0 );
  }
  MiCapturePageFileInfoInline((unsigned __int64 *)(v77 + 16), 1, 0);
  *(_QWORD *)(v77 + 16) &= ~2uLL;
  *(_QWORD *)(v77 + 24) |= 0x4000000000000000uLL;
  MiDecrementShareCount(v77);
  _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiLockAndDecrementShareCount(v101, 0);
  v98 = -1073741801;
  MiFreePageChain(v145);
  v10 = 0;
  v25 = 0xFFFFF6FB7DBED7F8uLL;
LABEL_265:
  if ( !*(_DWORD *)(v6 + 36) && v147 )
  {
    v99 = 0;
    v100 = *(_QWORD *)(v6 + 16);
    while ( v100 > 0x7FFFFFFEFFFFLL )
    {
      ++v99;
      v100 = (__int64)(v100 << 25) >> 16;
      if ( v99 >= 3 )
        return v98;
    }
    v102 = (*(_QWORD *)(v6 + 16) >> 18) & 0x3FFFFFF8LL;
    v103 = *(_QWORD *)(v102 - 0x904C0000000LL);
    v104 = v102 - 0x904C0000000LL;
    if ( (unsigned __int64)(v102 - 0x904C0000000LL) >= 0xFFFFF6FB7DBED000uLL
      && v104 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v103 & 1) != 0
      && ((v103 & 0x20) == 0 || (v103 & 0x42) == 0) )
    {
      v105 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v105 )
      {
        v106 = *((_QWORD *)&v105->Flink + ((v104 >> 3) & 0x1FF));
        v107 = v103 | 0x20;
        if ( (v106 & 0x20) == 0 )
          v107 = v103;
        v103 = v107;
        if ( (v106 & 0x42) != 0 )
          v103 = v107 | 0x42;
      }
    }
    v132 = v103;
    if ( (unsigned __int64)&v132 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v132 <= v25
      && (unsigned int)MiPteHasShadow()
      && (v103 & 1) != 0
      && ((v103 & 0x20) == 0 || (v103 & 0x42) == 0) )
    {
      v108 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v108 )
      {
        v109 = v103 | 0x20;
        v110 = *((_QWORD *)&v108->Flink + (((unsigned __int64)&v132 >> 3) & 0x1FF));
        if ( (v110 & 0x20) == 0 )
          v109 = v103;
        v103 = v109;
        if ( (v110 & 0x42) != 0 )
          v103 = v109 | 0x42;
      }
    }
    v111 = 48 * ((v103 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    v129 = v10;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v111 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v129);
      while ( *(__int64 *)(v111 + 24) < 0 );
    }
    *(_QWORD *)(v111 + 16) ^= ((unsigned int)*(_QWORD *)(v111 + 16) ^ ((unsigned int)*(_QWORD *)(v111 + 16)
                                                                     + ((unsigned __int16)v147 << 16))) & 0x3FF0000;
    _InterlockedAnd64((volatile signed __int64 *)(v111 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v147 <= 1
      && ((__int64)(*(_QWORD *)(v111 + 8) | 0x8000000000000000uLL) >> 47 == -1
       || (__int64)(*(_QWORD *)(v111 + 8) | 0x8000000000000000uLL) >> 47 == 0) )
    {
      v140 = (((*(_QWORD *)(v111 + 8) | 0x8000000000000000uLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v141 = ((v140 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v142 = ((v141 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v143 = ((v142 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v112 = 4LL;
      do
      {
        v113 = *(&v139 + v112--);
        v114 = *(_QWORD *)v113;
        if ( v113 >= 0xFFFFF6FB7DBED000uLL
          && v113 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
        {
          if ( (v114 & 1) == 0 )
            return v98;
          if ( (v114 & 0x20) == 0 || (v114 & 0x42) == 0 )
          {
            v115 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( v115 )
            {
              v116 = *((_QWORD *)&v115->Flink + ((v113 >> 3) & 0x1FF));
              v117 = v114 | 0x20;
              if ( (v116 & 0x20) == 0 )
                v117 = v114;
              LOBYTE(v114) = v117;
              if ( (v116 & 0x42) != 0 )
                LOBYTE(v114) = v117 | 0x42;
            }
          }
        }
      }
      while ( (v114 & 1) != 0 && (v114 & 0x80u) == 0LL && v112 );
    }
  }
  return v98;
}
