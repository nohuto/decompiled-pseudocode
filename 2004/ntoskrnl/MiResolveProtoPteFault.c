/*
 * XREFs of MiResolveProtoPteFault @ 0x1402A7870
 * Callers:
 *     MiDispatchFault @ 0x1402A0EE0 (MiDispatchFault.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWriteValidPteVolatile @ 0x140245E30 (MiWriteValidPteVolatile.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiChargePartitionResidentAvailable @ 0x140250790 (MiChargePartitionResidentAvailable.c)
 *     MiReadPteShadow @ 0x140254430 (MiReadPteShadow.c)
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiResolveDemandZeroFault @ 0x1402A1B30 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402A8C30 (MiResolveTransitionFault.c)
 *     MiGetPfnPriority @ 0x1402AAA70 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1402AB200 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiResolvePageFileFault @ 0x140313F9C (MiResolvePageFileFault.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiAllowGuardFault @ 0x140333384 (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x140333400 (KeInvalidAccessAllowed.c)
 *     HvlNotifyLongSpinWait @ 0x14038D780 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038E560 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403EEC2C (MiBadRefCount.c)
 */

__int64 __fastcall MiResolveProtoPteFault(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned __int64 *v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v10; // r9
  BOOL v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // r12
  __int64 v15; // r8
  unsigned __int64 v16; // rax
  struct _LIST_ENTRY *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // r14
  __int64 Process; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v22; // r13
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  bool v26; // bl
  __int64 v27; // rdx
  unsigned __int64 v28; // r8
  __int64 v29; // r11
  unsigned __int64 v30; // rdx
  ULONG_PTR *v31; // rdi
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v33; // ett
  volatile signed __int64 *v34; // rdi
  char *v35; // r15
  char v36; // al
  unsigned int v37; // ebx
  __int64 v38; // r8
  unsigned __int64 *v39; // rdi
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r14
  unsigned __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rdi
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int PfnPriority; // eax
  __int64 v52; // rdx
  unsigned __int64 v53; // r8
  __int64 result; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rcx
  __int64 v59; // r11
  __int64 v60; // r11
  __int64 v61; // r10
  __int64 v62; // r10
  int v63; // r14d
  __int64 v64; // rdx
  __int64 **Address; // rax
  char v66; // r10
  __int64 v67; // r11
  int v68; // ecx
  __int64 v69; // r11
  bool v70; // zf
  __int64 v71; // r8
  __int64 v72; // rax
  int v73; // edi
  unsigned __int64 v74; // rdx
  char v75; // al
  unsigned __int64 v76; // rdx
  unsigned __int64 v77; // r8
  __int64 v78; // r9
  unsigned __int64 v79; // r10
  __int64 v80; // r8
  __int64 v81; // rbx
  struct _KPRCB *v82; // r8
  __int64 v83; // rdx
  signed __int32 v84; // eax
  unsigned __int64 v85; // r8
  __int64 v86; // r12
  unsigned __int64 PteShadow; // r15
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rdx
  unsigned __int64 v91; // rax
  __int64 v92; // r14
  __int64 v93; // r13
  struct _LIST_ENTRY *v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rdx
  unsigned int v97; // ebx
  unsigned __int64 v98; // rbx
  _QWORD *v99; // rdi
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int16 v103; // ax
  __int64 v104; // rbx
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  unsigned __int64 v108; // rbx
  __int64 v109; // rax
  unsigned __int64 v110; // rax
  char v111; // al
  int v112; // r15d
  unsigned int v113; // eax
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  __int64 *v118; // r11
  __int64 v119; // r8
  __int64 v120; // r9
  unsigned __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // [rsp+30h] [rbp-C8h]
  __int64 v124; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v125; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v126; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v127; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v128; // [rsp+58h] [rbp-A0h]
  _WORD *v129; // [rsp+60h] [rbp-98h]
  unsigned __int64 v130; // [rsp+68h] [rbp-90h]
  unsigned __int64 v131; // [rsp+70h] [rbp-88h]
  int v132; // [rsp+78h] [rbp-80h] BYREF
  int v133; // [rsp+7Ch] [rbp-7Ch] BYREF
  int v134; // [rsp+80h] [rbp-78h] BYREF
  int v135; // [rsp+84h] [rbp-74h] BYREF
  unsigned __int64 *v136; // [rsp+88h] [rbp-70h]
  volatile signed __int64 *v137; // [rsp+90h] [rbp-68h]
  _QWORD *v138; // [rsp+98h] [rbp-60h]
  __int64 v139; // [rsp+A0h] [rbp-58h]
  __int64 v140; // [rsp+A8h] [rbp-50h]
  _BYTE *v141; // [rsp+B0h] [rbp-48h]

  v127 = 0LL;
  *a3 = 0LL;
  v139 = *(_QWORD *)(a1 + 56);
  v131 = *(_QWORD *)a1;
  v136 = (unsigned __int64 *)(((v131 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = *(_QWORD *)(a1 + 16);
  v124 = v5;
  v126 = v5 & 1;
  if ( (v5 & 1) == 0 || (v130 = v5 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v130 = 0LL;
  v128 = *(_QWORD *)(a1 + 96);
  v6 = (unsigned __int64 *)(((v128 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v125 = *v6;
  v7 = v125 & 1;
  do
  {
    if ( !v7 )
      return 3221225494LL;
    v8 = v125;
    if ( (v125 & 0x200) != 0 )
      return 3221225494LL;
    v11 = MiPteInShadowRange((unsigned __int64)&v125);
    if ( v11
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v12 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v125 >> 3) & 0x1FF));
        if ( (v12 & 0x20) != 0 )
          v8 |= 0x20uLL;
        if ( (v12 & 0x42) != 0 )
          v8 |= 0x42uLL;
      }
      else
      {
        v8 = v125;
      }
    }
    v13 = (v8 >> 12) & 0xFFFFFFFFFLL;
    v14 = 48 * v13;
    v140 = 48 * v13;
  }
  while ( (*(_QWORD *)(48 * v13 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v15 = v14 - 0x58000000000LL;
  v132 = 0;
  v123 = v14 - 0x58000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v132, (__int64)Flink, v15, v10);
    while ( *(__int64 *)(v14 - 0x57FFFFFFFE8LL) < 0 );
  }
  v16 = *v6;
  v125 = v16;
  if ( (v16 & 1) == 0 || (v16 & 0x200) != 0 )
    goto LABEL_339;
  if ( v11
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v16 & 0x20) == 0 || (v16 & 0x42) == 0) )
  {
    v17 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v17 )
    {
      v18 = *((_QWORD *)&v17->Flink + (((unsigned __int64)&v125 >> 3) & 0x1FF));
      if ( (v18 & 0x20) != 0 )
        v16 |= 0x20uLL;
      if ( (v18 & 0x42) != 0 )
        v16 |= 0x42uLL;
    }
    else
    {
      v16 = v125;
    }
  }
  if ( v13 != ((v16 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_339:
    _InterlockedAnd64((volatile signed __int64 *)(v14 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  v19 = v14 - 0x58000000000LL;
  Process = 0x1000000000LL;
  CurrentPrcb = (struct _KPRCB *)0xFFFFFA8000000008LL;
  v22 = 1LL;
  v23 = *(_QWORD *)(v123 + 40);
  v24 = 0xFFFFFA8000000020uLL;
  if ( (v23 & 0x1000000000LL) != 0 || (v23 & 0x2000000000000LL) != 0 )
    goto LABEL_62;
  Process = *(unsigned __int16 *)(v14 - 0x57FFFFFFFE0LL);
  v25 = *(_QWORD *)(v14 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)Process )
  {
    if ( (_WORD)Process != 1 )
    {
      if ( (_WORD)Process != 2 || !v25 )
        goto LABEL_62;
LABEL_44:
      if ( (*(_BYTE *)(v14 - 0x57FFFFFFFDELL) & 8) == 0 )
        goto LABEL_62;
      goto LABEL_45;
    }
    if ( !v25 )
      goto LABEL_44;
  }
LABEL_45:
  v26 = 0;
  if ( (unsigned int)MI_PFN_IS_PROTO(v123) && (*(_DWORD *)(v14 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
  {
    v26 = 1;
  }
  else
  {
    v24 = 0xFFFFF68000000000uLL;
    v30 = *(_QWORD *)(v14 + v27) | 0x8000000000000000uLL;
    if ( v30 <= 0xFFFFF6BFFFFFFF78uLL && v30 >= 0xFFFFF68000000000uLL )
      v26 = (*(_BYTE *)(v14 + v29) & 0x20) != 0;
  }
  v31 = *(ULONG_PTR **)(qword_140C4E448 + 8 * ((v28 >> 39) & 0x3FF));
  if ( v26 )
  {
    v129 = (_WORD *)(v14 - 0x57FFFFFFFE0LL);
    if ( !(unsigned int)MiChargeCommit(v31, 1LL, 4LL) )
      goto LABEL_63;
  }
  if ( v31 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable )
    {
      v23 = 0xFFFFFFFFLL;
      do
      {
        if ( CachedResidentAvailable == -1 )
          break;
        Process = (unsigned int)(CachedResidentAvailable - 1);
        v33 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    Process,
                                    CachedResidentAvailable);
        if ( v33 == CachedResidentAvailable )
          goto LABEL_62;
      }
      while ( CachedResidentAvailable );
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v31, 1uLL, 0xFFFFFFFFLL) )
  {
    v129 = (_WORD *)(v14 - 0x57FFFFFFFE0LL);
    if ( v26 )
    {
      MiReturnCommit((__int64)v31, 1LL);
      v129 = (_WORD *)(v14 - 0x57FFFFFFFE0LL);
    }
    goto LABEL_63;
  }
LABEL_62:
  ++*(_WORD *)(v14 - 0x57FFFFFFFE0LL);
  v129 = (_WORD *)(v14 - 0x57FFFFFFFE0LL);
  v19 = v14 - 0x58000000000LL;
LABEL_63:
  v138 = (_QWORD *)(v14 - 0x57FFFFFFFF8LL);
  v34 = (volatile signed __int64 *)(*(_QWORD *)(v14 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
  v137 = v34;
  v35 = (char *)(v14 - 0x57FFFFFFFDELL);
  v36 = *(_BYTE *)(v14 - 0x57FFFFFFFDELL);
  v141 = (_BYTE *)(v14 - 0x57FFFFFFFDELL);
  if ( (v36 & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v14 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
      v37 = 0;
      while ( (*v35 & 0x20) != 0 )
      {
        if ( (++v37 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, CurrentPrcb, v23, v24) )
        {
          HvlNotifyLongSpinWait(v37);
        }
        else
        {
          _mm_pause();
        }
      }
      MiLockPageInline(v19);
      v36 = *v35;
    }
    while ( (*v35 & 0x20) != 0 );
    v34 = v137;
    v22 = 1LL;
  }
  *v35 = v36 | 0x20;
  if ( (*(_QWORD *)(v14 - 0x57FFFFFFFE8LL) & 0x4000000000000000LL) == 0 && (*(_BYTE *)v34 & 0x20) == 0 )
    MiWriteValidPteVolatile(v34, 1, 0);
  v38 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v14 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  v39 = (unsigned __int64 *)v128;
  while ( 1 )
  {
    while ( 1 )
    {
      v40 = *v39;
      if ( (*v39 & 1) == 0 )
        break;
      v41 = *v39;
LABEL_87:
      v42 = 6 * ((v41 >> 12) & 0xFFFFFFFFFLL);
      Process = *(_QWORD *)(48 * ((v41 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL);
      if ( (Process & 0x4000000000000LL) != 0 )
      {
        v43 = 48 * ((v41 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v133 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v133, v42, v38, v24);
            while ( *(__int64 *)(v43 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) );
          v38 = 0x7FFFFFFFFFFFFFFFLL;
        }
        if ( *v39 == v40 )
          goto LABEL_95;
        _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v40 & 0x400) != 0 || (v40 & 0x800) == 0 )
      break;
    if ( !v40 || !qword_140C4DD40 || (v40 & qword_140C4DD40) != 0 )
    {
      v41 = *v39;
      if ( qword_140C4DD40 && (v40 & 0x10) == 0 )
        v41 = v40 & ~qword_140C4DD40;
      goto LABEL_87;
    }
  }
  v43 = 0LL;
LABEL_95:
  v44 = (unsigned __int64)v39;
  v45 = 0xFFFFF6FB7DBED000uLL;
  v46 = *v39;
  v47 = v46;
  v48 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v44 >= 0xFFFFF6FB7DBED000uLL && v44 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL, 0x7FFFFFFFFFFFFFFFLL, 0xFFFFF6FB7DBED7F8uLL)
      && (v46 & 1) != 0
      && ((v46 & 0x20) == 0 || (v46 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      v49 = *(_QWORD *)(Process + 1928);
      if ( v49 )
      {
        v47 = v46 | 0x20;
        v50 = *(_QWORD *)(v49 + 8 * ((v44 >> 3) & 0x1FF));
        Process = (unsigned __int8)v50;
        LOBYTE(Process) = v50 & 0x20;
        if ( (v50 & 0x20) == 0 )
          v47 = v46;
        if ( (v50 & 0x42) != 0 )
          v47 |= 0x42uLL;
      }
    }
    v45 = 0xFFFFF6FB7DBED000uLL;
  }
  v127 = v47;
  if ( (v47 & 1) == 0 )
  {
    if ( !v47 )
    {
LABEL_185:
      LOBYTE(v45) = 17;
      MiUnlockProtoPoolPage(v123, v45);
      return 3221225477LL;
    }
    v85 = (unsigned __int64)v136;
    LOBYTE(v86) = 0;
    PteShadow = *v136;
    if ( (unsigned __int64)v136 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v136 <= v48 )
    {
      if ( (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL, v136, v48)
        && (PteShadow & 1) != 0
        && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v88 = *(_QWORD *)(Process + 1928);
        if ( v88 )
        {
          v89 = *(_QWORD *)(v88 + 8 * ((v85 >> 3) & 0x1FF));
          v90 = PteShadow | 0x20;
          Process = (unsigned __int8)v89;
          LOBYTE(Process) = v89 & 0x20;
          if ( (v89 & 0x20) == 0 )
            v90 = PteShadow;
          PteShadow = v90;
          if ( (v89 & 0x42) != 0 )
            PteShadow = v90 | 0x42;
        }
      }
      v45 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (PteShadow & 0x400) != 0 )
    {
      v91 = PteShadow;
      if ( qword_140C4DD40 && (PteShadow & 0x10) == 0 )
        v91 = PteShadow & ~qword_140C4DD40;
      Process = 0xFFFFFFFFLL;
      if ( HIDWORD(v91) == 0xFFFFFFFF )
      {
        v92 = a1;
        v86 = (PteShadow >> 5) & 0x1F;
        if ( ((PteShadow >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
          goto LABEL_337;
        v93 = v126;
        v45 = a2;
LABEL_252:
        v103 = v47;
        if ( qword_140C4DD40 && (v47 & 0x10) == 0 )
          v103 = v47 & ~(_WORD)qword_140C4DD40;
        if ( (v103 & 0x400) == 0
          && (v103 & 0x800) == 0
          && (v103 & 4) == 0
          && (v86 & 5) == 5
          && (v45 || (((unsigned __int8)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v127) >> 5) & 5) != 4)
          && ((*(_BYTE *)(v139 + 184) & 7) != 0 || !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12])
          && ((MiFlags & 0x10000) == 0 || v131 < 0xFFFF800000000000uLL || (v86 & 2) == 0) )
        {
          v104 = v140;
          v135 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v104 - 0x57FFFFFFFE8LL), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v135, v45, v85, v48);
            while ( *(__int64 *)(v104 - 0x57FFFFFFFE8LL) < 0 );
          }
          *v141 &= ~0x20u;
          MiRemoveLockedPageChargeAndDecRef(v123, v45, v85, v48);
          _InterlockedAnd64((volatile signed __int64 *)(v104 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v130 )
          {
            if ( !v93 )
              return 0LL;
            v108 = v124 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( *(_BYTE *)(v124 & 0xFFFFFFFFFFFFFFFEuLL) != 1 || (*(_DWORD *)(v108 + 80) & 0x4000) == 0 )
              return 0LL;
            v109 = v124;
          }
          else
          {
            v109 = v124;
            v108 = v124 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v93 )
          {
            if ( *(_BYTE *)v108 != 1 && *(_BYTE *)v108 != 3 && *(_BYTE *)v108 != 6 )
              goto LABEL_285;
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(v109, 0LL) != 1 )
          {
            goto LABEL_285;
          }
          if ( (!v93 || *(_BYTE *)v108 != 6) && v131 >= 0xFFFF800000000000uLL )
            return 3221225477LL;
LABEL_285:
          if ( (PteShadow & 0x400) == 0 )
            goto LABEL_290;
          v110 = PteShadow;
          if ( qword_140C4DD40 && (PteShadow & 0x10) == 0 )
            v110 = PteShadow & ~qword_140C4DD40;
          if ( HIDWORD(v110) != 0xFFFFFFFF )
          {
LABEL_290:
            PteShadow = v47;
            if ( MiPteInShadowRange((unsigned __int64)&v127) )
              PteShadow = MiReadPteShadow((unsigned __int64)&v127, v47);
          }
          v111 = PteShadow >> 5;
          v112 = v111 & 0x18;
          v113 = v111 & 2 | 4;
          if ( v112 == 8 )
          {
            v113 |= 8u;
          }
          else if ( v112 == 24 )
          {
            v113 |= 0x18u;
          }
          v114 = MiSwizzleInvalidPte(32LL * v113, v105, v106, v107);
          v118 = (__int64 *)v136;
          if ( (unsigned __int64)v136 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v136 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)MiPteHasShadow(v115, v114, v116, v117) )
            {
              if ( !HIBYTE(word_140C4DE08) && (v114 & 1) != 0 )
                v114 |= 0x8000000000000000uLL;
              *v118 = v114;
              MiWritePteShadow(v118, v114);
              return MiResolveDemandZeroFault((unsigned __int64 *)v92, (__int64)v118, 0LL, a2);
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v114 & 1) != 0 )
            {
              v114 |= 0x8000000000000000uLL;
            }
          }
          *v118 = v114;
          return MiResolveDemandZeroFault((unsigned __int64 *)v92, (__int64)v118, 0LL, a2);
        }
        if ( (v47 & 0x400) != 0 )
        {
          if ( (*(_BYTE *)(v92 + 69) & 8) == 0 )
            return MiResolveMappedFileFault(v92, v44, v123, a3);
          goto LABEL_337;
        }
        if ( (v47 & 0x800) != 0 )
          return MiResolveTransitionFault(v92, v44, v123, a2, a3);
        if ( MiPteInShadowRange((unsigned __int64)&v127) )
          LOBYTE(v47) = MiReadPteShadow((unsigned __int64)&v127, v47);
        if ( (v47 & 4) == 0 )
        {
          if ( v130 )
          {
            if ( !v93
              || (v121 = v124 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v124 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
              || (*(_DWORD *)(v121 + 80) & 0x4000) == 0 )
            {
              LOBYTE(v45) = 17;
              MiUnlockProtoPoolPage(v123, v45);
              return 0LL;
            }
            v122 = v124;
          }
          else
          {
            v122 = v124;
            v121 = v124 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v93 )
          {
            if ( *(_BYTE *)v121 != 1 && *(_BYTE *)v121 != 3 && *(_BYTE *)v121 != 6 )
              return MiResolveDemandZeroFault((unsigned __int64 *)v92, v128, v123, a2);
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(v122, 0LL) != 1 )
          {
            return MiResolveDemandZeroFault((unsigned __int64 *)v92, v128, v123, a2);
          }
          if ( (!v93 || *(_BYTE *)v121 != 6) && v131 >= 0xFFFF800000000000uLL )
          {
            if ( !(unsigned int)MiIsPrototypePteVadLookup(PteShadow, v45, v119, v120) )
              PteShadow = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v127);
            if ( ((PteShadow >> 5) & 0x18) == 0x10 )
              goto LABEL_185;
          }
          return MiResolveDemandZeroFault((unsigned __int64 *)v92, v128, v123, a2);
        }
        if ( (*(_BYTE *)(v92 + 69) & 8) == 0 )
          return MiResolvePageFileFault(v92, v44, v123, a3);
LABEL_337:
        LOBYTE(v45) = 17;
        MiUnlockProtoPoolPage(v123, v45);
        return 3221226548LL;
      }
    }
    if ( (PteShadow & 8) != 0 )
    {
      v45 = a2;
LABEL_250:
      v93 = v126;
      goto LABEL_251;
    }
    v86 = (v47 >> 5) & 0x1F;
    v85 = ((v47 >> 5) & 0x1F) >> 3;
    if ( (_DWORD)v85 == 2 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
      goto LABEL_337;
    if ( v44 >= 0xFFFFF6FB7DBED000uLL
      && v44 <= v48
      && (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL, v85, v48) )
    {
      if ( (v46 & 1) == 0 )
        goto LABEL_225;
      if ( (v46 & 0x20) == 0 || (v46 & 0x42) == 0 )
      {
        v94 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v94 )
        {
          v95 = *((_QWORD *)&v94->Flink + ((v44 >> 3) & 0x1FF));
          v96 = v46 | 0x20;
          if ( (v95 & 0x20) == 0 )
            v96 = v46;
          v46 = v96;
          if ( (v95 & 0x42) != 0 )
            v46 = v96 | 0x42;
        }
      }
    }
    if ( (v46 & 1) != 0 )
    {
      v45 = a2;
      if ( a2 && (v46 & 0xA00) == 0 )
      {
        v97 = -1073741819;
LABEL_245:
        if ( v43 )
          _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v45) = 17;
        MiUnlockProtoPoolPage(v123, v45);
        return v97;
      }
      goto LABEL_250;
    }
LABEL_225:
    v45 = a2;
    if ( !a2 )
      LOBYTE(v22) = 0;
    if ( *((char *)&MiReadWrite + ((unsigned __int8)v47 >> 5)) - (char)v22 < 10 )
    {
      v97 = -1073741819;
      goto LABEL_245;
    }
    v93 = v126;
    if ( (_DWORD)v85 != 2 || v126 && *(_BYTE *)(v124 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v44 = v128;
LABEL_251:
      v92 = a1;
      goto LABEL_252;
    }
    if ( !(unsigned int)MiAllowGuardFault(v124) )
    {
      v97 = -1073741819;
      goto LABEL_245;
    }
    v98 = v46 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v47 >> 5) & 0xF));
    v99 = (_QWORD *)v128;
    if ( MiPteInShadowRange(v128) )
    {
      if ( (unsigned int)MiPteHasShadow(v100, v45, v101, v102) )
      {
        if ( !HIBYTE(word_140C4DE08) && (v98 & 1) != 0 )
          v98 |= 0x8000000000000000uLL;
        *v99 = v98;
        MiWritePteShadow(v99, v98);
        goto LABEL_244;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v98 & 1) != 0 )
      {
        v98 |= 0x8000000000000000uLL;
      }
    }
    *v99 = v98;
LABEL_244:
    v97 = -2147483647;
    goto LABEL_245;
  }
  if ( v130 )
  {
    PfnPriority = MiGetPfnPriority(v43);
    if ( (unsigned int)v52 > PfnPriority )
      *(_BYTE *)(v43 + 35) = v52 | *(_BYTE *)(v43 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), v53);
    LOBYTE(v52) = 17;
    MiUnlockProtoPoolPage(v123, v52);
    return 0LL;
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(v43) )
  {
    v58 = *(_QWORD *)(v43 + 16);
    if ( (v58 & 0x400) != 0 && ((*(_QWORD *)(v43 + 40) >> 60) & 7) != 3 )
    {
      v59 = *(_QWORD *)(v43 + 16);
      if ( qword_140C4DD40 && (v58 & 0x10) == 0 )
        v59 = ~qword_140C4DD40 & v58;
      v60 = v59 >> 16;
      if ( (*(_DWORD *)(*(_QWORD *)v60 + 56LL) & 0x20) != 0 )
      {
        v61 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v60 + 96LL) + 40LL);
        if ( v61 )
        {
          if ( (v61 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v61 & 3) != 2 )
          {
            if ( v131 >= 0xFFFF800000000000uLL )
            {
              if ( (MiFlags & 0x10000) == 0 || (v58 & 0x40) == 0 )
                goto LABEL_125;
LABEL_138:
              _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              LOBYTE(v55) = 17;
              MiUnlockProtoPoolPage(v123, v55);
              return 3221226536LL;
            }
            Address = MiLocateAddress(v131);
            v55 = (__int64)Address;
            if ( !Address )
              goto LABEL_138;
            v68 = *((_DWORD *)Address + 12);
            if ( (v68 & 0x70) != 0x20 )
              goto LABEL_138;
            if ( (v68 & 0xF80) != 0x80
              && (((_DWORD)Address[8] & 0x8000000) == 0 || (v66 & 4) != 0)
              && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v67 + 34) & 2) == 0) )
            {
              goto LABEL_138;
            }
          }
        }
      }
    }
  }
LABEL_125:
  v62 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v43 + 24) ^= (*(_QWORD *)(v43 + 24) ^ (*(_QWORD *)(v43 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v63 = 0;
  v134 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v134, v55, v56, v57);
      while ( *(__int64 *)(v14 - 0x57FFFFFFFE8LL) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 - 0x57FFFFFFFE8LL), 0x3FuLL) );
    v62 = 0x3FFFFFFFFFFFFFFFLL;
  }
  *v35 &= ~0x20u;
  v64 = (unsigned __int16)*v129;
  if ( !(_WORD)v64 )
    MiBadRefCount(v123);
  v69 = v14 - 0x58000000000LL;
  v70 = (_WORD)v64 == 1;
  LOWORD(v64) = v64 - 1;
  *v129 = v64;
  if ( v70 && (unsigned int)MiIsPfnFileOnly(v123, v64, v56, v57) )
    goto LABEL_180;
  v71 = *(_QWORD *)(v69 + 40);
  if ( (v71 & 0x1000000000LL) == 0 && (v71 & 0x2000000000000LL) == 0 )
  {
    v72 = v62 & *(_QWORD *)(v14 - 0x57FFFFFFFE8LL);
    if ( !(_WORD)v64 )
    {
      v73 = 1;
      goto LABEL_152;
    }
    if ( (_WORD)v64 != 1 )
    {
      if ( (_WORD)v64 == 2 && v72 )
      {
LABEL_149:
        if ( (*v35 & 8) != 0 )
          goto LABEL_150;
      }
      goto LABEL_181;
    }
    if ( !v72 )
      goto LABEL_149;
LABEL_150:
    v73 = 0;
LABEL_152:
    v74 = *v138 | 0x8000000000000000uLL;
    if ( v74 > 0xFFFFF6BFFFFFFF78uLL || v74 < 0xFFFFF68000000000uLL )
    {
      v75 = *(_BYTE *)(v14 - 0x57FFFFFFFDDLL);
      if ( (v75 & 0x20) != 0 )
      {
        *(_BYTE *)(v14 - 0x57FFFFFFFDDLL) = v75 & 0xDF;
        goto LABEL_179;
      }
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v69) && (*(_DWORD *)(v14 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
    {
      v63 = 1;
    }
    else if ( v76 <= v79 && v76 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v14 - 0x57FFFFFFFDDLL) & 0x20) != 0 )
    {
      v63 = 1;
    }
    else if ( v73 == 1 && (v78 & 0x4000000000000000LL) != 0 )
    {
      v63 = 1;
    }
    v80 = (v77 >> 39) & 0x3FF;
    v81 = *(_QWORD *)(qword_140C4E448 + 8 * v80);
    if ( v63 == 1 )
    {
      MiReturnCommit(*(_QWORD *)(qword_140C4E448 + 8 * v80), 1LL);
      v69 = v14 - 0x58000000000LL;
    }
    if ( (ULONG_PTR *)v81 == &MiSystemPartition )
    {
      v82 = KeGetCurrentPrcb();
      v83 = (int)v82->CachedResidentAvailable;
      if ( (_DWORD)v83 != -1 )
      {
        if ( (unsigned __int64)(v83 + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v84 = _InterlockedCompareExchange((volatile signed __int32 *)&v82->CachedResidentAvailable, v83 + 1, v83);
            v70 = (_DWORD)v83 == v84;
            LODWORD(v83) = v84;
            if ( v70 )
              break;
            if ( v84 == -1 || (unsigned __int64)(v84 + 1LL) > 0x100 )
              goto LABEL_174;
          }
LABEL_179:
          if ( v73 )
LABEL_180:
            MiPfnReferenceCountIsZero(v69, v14 / 48);
          goto LABEL_181;
        }
LABEL_174:
        if ( (int)v83 > 192
          && (_DWORD)v83 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v82->CachedResidentAvailable,
                              192,
                              v83) )
        {
          v22 = (int)v83 - 192 + 1LL;
        }
        if ( !v22 )
          goto LABEL_179;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v81 + 7168), v22);
    goto LABEL_179;
  }
LABEL_181:
  _InterlockedAnd64((volatile signed __int64 *)(v14 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E98u);
  result = MiCompleteProtoPteFault(a1, v47, a2, 0, v124);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
