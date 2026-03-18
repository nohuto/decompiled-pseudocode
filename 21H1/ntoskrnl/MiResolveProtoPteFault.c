/*
 * XREFs of MiResolveProtoPteFault @ 0x140214D60
 * Callers:
 *     MiDispatchFault @ 0x14020E3D0 (MiDispatchFault.c)
 * Callees:
 *     MiResolveDemandZeroFault @ 0x14020F020 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140216120 (MiResolveTransitionFault.c)
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1402186F0 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWriteValidPteVolatile @ 0x14029EE60 (MiWriteValidPteVolatile.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiChargePartitionResidentAvailable @ 0x1402A97C0 (MiChargePartitionResidentAvailable.c)
 *     MiReadPteShadow @ 0x1402AD460 (MiReadPteShadow.c)
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiAllowGuardFault @ 0x1402F64E4 (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x1402F6560 (KeInvalidAccessAllowed.c)
 *     MiResolvePageFileFault @ 0x1403432DC (MiResolvePageFileFault.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14038CC10 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14038D9F0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403ED8CC (MiBadRefCount.c)
 */

__int64 __fastcall MiResolveProtoPteFault(__int64 a1, unsigned __int64 Flink, _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned __int64 *v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  struct _LIST_ENTRY *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 Process; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v19; // r13
  __int64 v20; // r8
  unsigned __int64 v21; // r9
  __int64 v22; // rax
  bool v23; // bl
  __int64 v24; // rdx
  unsigned __int64 v25; // r8
  __int64 v26; // r11
  unsigned __int64 v27; // rdx
  ULONG_PTR *v28; // rdi
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v30; // ett
  _BYTE *v31; // rdi
  char *v32; // r15
  char v33; // al
  unsigned int v34; // ebx
  __int64 v35; // r8
  unsigned __int64 *v36; // rdi
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rax
  __int64 v39; // r14
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rdx
  __int64 v42; // rdi
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned int PfnPriority; // eax
  __int64 v48; // rdx
  unsigned __int64 v49; // r8
  __int64 result; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r11
  __int64 v54; // r11
  __int64 v55; // r10
  __int64 v56; // r10
  int v57; // r14d
  __int16 v58; // dx
  __int64 Address; // rax
  char v60; // r10
  __int64 v61; // r11
  int v62; // ecx
  __int64 v63; // r11
  bool v64; // zf
  __int16 v65; // dx
  __int64 v66; // r8
  __int64 v67; // rax
  int v68; // edi
  unsigned __int64 v69; // rdx
  char v70; // al
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int64 v74; // r10
  __int64 v75; // r8
  __int64 v76; // rbx
  struct _KPRCB *v77; // r8
  __int64 v78; // rdx
  signed __int32 v79; // eax
  __int64 v80; // r12
  unsigned __int64 v81; // r15
  unsigned __int64 v82; // r8
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  unsigned __int64 v86; // rax
  __int64 v87; // r14
  __int64 v88; // r13
  unsigned int v89; // r8d
  struct _LIST_ENTRY *v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rdx
  unsigned int v93; // ebx
  unsigned __int64 v94; // rbx
  unsigned __int64 *v95; // rdi
  __int64 v96; // rcx
  __int16 v97; // ax
  __int64 v98; // rbx
  __int64 v99; // rdx
  unsigned __int64 v100; // rbx
  __int64 v101; // rax
  unsigned __int64 v102; // rax
  char v103; // al
  int v104; // r15d
  unsigned int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 *v108; // r11
  unsigned __int64 v109; // rbx
  __int64 v110; // rax
  __int64 v111; // [rsp+20h] [rbp-D8h]
  __int64 v112; // [rsp+30h] [rbp-C8h]
  __int64 v113; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v114; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v115; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v116; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v117; // [rsp+58h] [rbp-A0h]
  __int16 *v118; // [rsp+60h] [rbp-98h]
  unsigned __int64 v119; // [rsp+68h] [rbp-90h]
  unsigned __int64 v120; // [rsp+70h] [rbp-88h]
  int v121; // [rsp+78h] [rbp-80h] BYREF
  int v122; // [rsp+7Ch] [rbp-7Ch] BYREF
  int v123; // [rsp+80h] [rbp-78h] BYREF
  int v124; // [rsp+84h] [rbp-74h] BYREF
  unsigned __int64 *v125; // [rsp+88h] [rbp-70h]
  _BYTE *v126; // [rsp+90h] [rbp-68h]
  _QWORD *v127; // [rsp+98h] [rbp-60h]
  __int64 v128; // [rsp+A0h] [rbp-58h]
  __int64 v129; // [rsp+A8h] [rbp-50h]
  _BYTE *v130; // [rsp+B0h] [rbp-48h]
  struct _LIST_ENTRY *v132; // [rsp+108h] [rbp+10h]

  v132 = (struct _LIST_ENTRY *)Flink;
  v116 = 0LL;
  *a3 = 0LL;
  v128 = *(_QWORD *)(a1 + 56);
  v120 = *(_QWORD *)a1;
  v125 = (unsigned __int64 *)(((v120 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = *(_QWORD *)(a1 + 16);
  v113 = v5;
  v115 = v5 & 1;
  if ( (v5 & 1) == 0
    || (Flink = v5 & 0xFFFFFFFFFFFFFFFEuLL,
        v119 = v5 & 0xFFFFFFFFFFFFFFFEuLL,
        *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
  {
    v119 = 0LL;
  }
  v117 = *(_QWORD *)(a1 + 96);
  v6 = (unsigned __int64 *)(((v117 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v114 = *v6;
  v7 = v114 & 1;
  do
  {
    if ( !v7 )
      return 3221225494LL;
    v8 = v114;
    if ( (v114 & 0x200) != 0 )
      return 3221225494LL;
    v9 = MiPteInShadowRange(&v114, Flink);
    if ( v9
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Flink = (unsigned __int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v10 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v114 >> 3) & 0x1FF));
        if ( (v10 & 0x20) != 0 )
          v8 |= 0x20uLL;
        if ( (v10 & 0x42) != 0 )
          v8 |= 0x42uLL;
      }
      else
      {
        v8 = v114;
      }
    }
    v11 = (v8 >> 12) & 0xFFFFFFFFFLL;
    v12 = 48 * v11;
    v129 = 48 * v11;
  }
  while ( (*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v121 = 0;
  v112 = v12 - 0x58000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v121);
    while ( *(__int64 *)(v12 - 0x57FFFFFFFE8LL) < 0 );
  }
  v13 = *v6;
  v114 = v13;
  if ( (v13 & 1) == 0 || (v13 & 0x200) != 0 )
    goto LABEL_339;
  if ( v9
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v13 & 0x20) == 0 || (v13 & 0x42) == 0) )
  {
    v14 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v14 )
    {
      v15 = *((_QWORD *)&v14->Flink + (((unsigned __int64)&v114 >> 3) & 0x1FF));
      if ( (v15 & 0x20) != 0 )
        v13 |= 0x20uLL;
      if ( (v15 & 0x42) != 0 )
        v13 |= 0x42uLL;
    }
    else
    {
      v13 = v114;
    }
  }
  if ( v11 != ((v13 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_339:
    _InterlockedAnd64((volatile signed __int64 *)(v12 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  v16 = v12 - 0x58000000000LL;
  Process = 0x1000000000LL;
  CurrentPrcb = (struct _KPRCB *)0xFFFFFA8000000008LL;
  v19 = 1LL;
  v20 = *(_QWORD *)(v112 + 40);
  v21 = 0xFFFFFA8000000020uLL;
  if ( (v20 & 0x1000000000LL) != 0 || (v20 & 0x2000000000000LL) != 0 )
    goto LABEL_62;
  Process = *(unsigned __int16 *)(v12 - 0x57FFFFFFFE0LL);
  v22 = *(_QWORD *)(v12 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)Process )
  {
    if ( (_WORD)Process != 1 )
    {
      if ( (_WORD)Process != 2 || !v22 )
        goto LABEL_62;
LABEL_44:
      if ( (*(_BYTE *)(v12 - 0x57FFFFFFFDELL) & 8) == 0 )
        goto LABEL_62;
      goto LABEL_45;
    }
    if ( !v22 )
      goto LABEL_44;
  }
LABEL_45:
  v23 = 0;
  if ( (unsigned int)MI_PFN_IS_PROTO(v112, 0xFFFFFA8000000008uLL, v20)
    && (*(_DWORD *)(v12 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
  {
    v23 = 1;
  }
  else
  {
    v21 = 0xFFFFF68000000000uLL;
    v27 = *(_QWORD *)(v12 + v24) | 0x8000000000000000uLL;
    if ( v27 <= 0xFFFFF6BFFFFFFF78uLL && v27 >= 0xFFFFF68000000000uLL )
      v23 = (*(_BYTE *)(v12 + v26) & 0x20) != 0;
  }
  v28 = *(ULONG_PTR **)(qword_140C4E588 + 8 * ((v25 >> 39) & 0x3FF));
  if ( v23 )
  {
    v118 = (__int16 *)(v12 - 0x57FFFFFFFE0LL);
    if ( !(unsigned int)MiChargeCommit(v28, 1LL, 4LL) )
      goto LABEL_63;
  }
  if ( v28 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable )
    {
      v20 = 0xFFFFFFFFLL;
      do
      {
        if ( CachedResidentAvailable == -1 )
          break;
        Process = (unsigned int)(CachedResidentAvailable - 1);
        v30 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    Process,
                                    CachedResidentAvailable);
        if ( v30 == CachedResidentAvailable )
          goto LABEL_62;
      }
      while ( CachedResidentAvailable );
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable(v28, 1LL, 0xFFFFFFFFLL) )
  {
    v118 = (__int16 *)(v12 - 0x57FFFFFFFE0LL);
    if ( v23 )
    {
      MiReturnCommit(v28, 1LL);
      v118 = (__int16 *)(v12 - 0x57FFFFFFFE0LL);
    }
    goto LABEL_63;
  }
LABEL_62:
  ++*(_WORD *)(v12 - 0x57FFFFFFFE0LL);
  v118 = (__int16 *)(v12 - 0x57FFFFFFFE0LL);
  v16 = v12 - 0x58000000000LL;
LABEL_63:
  v127 = (_QWORD *)(v12 - 0x57FFFFFFFF8LL);
  v31 = (_BYTE *)(*(_QWORD *)(v12 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
  v126 = v31;
  v32 = (char *)(v12 - 0x57FFFFFFFDELL);
  v33 = *(_BYTE *)(v12 - 0x57FFFFFFFDELL);
  v130 = (_BYTE *)(v12 - 0x57FFFFFFFDELL);
  if ( (v33 & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v12 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
      v34 = 0;
      while ( (*v32 & 0x20) != 0 )
      {
        if ( (++v34 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, CurrentPrcb, v20, v21, v111) )
        {
          HvlNotifyLongSpinWait(v34);
        }
        else
        {
          _mm_pause();
        }
      }
      MiLockPageInline(v16, CurrentPrcb, v20);
      v33 = *v32;
    }
    while ( (*v32 & 0x20) != 0 );
    v31 = v126;
    v19 = 1LL;
  }
  *v32 = v33 | 0x20;
  if ( (*(_QWORD *)(v12 - 0x57FFFFFFFE8LL) & 0x4000000000000000LL) == 0 && (*v31 & 0x20) == 0 )
    MiWriteValidPteVolatile(v31, 1LL, 0LL);
  v35 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v12 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  v36 = (unsigned __int64 *)v117;
  while ( 1 )
  {
    while ( 1 )
    {
      v37 = *v36;
      if ( (*v36 & 1) == 0 )
        break;
      v38 = *v36;
LABEL_87:
      Process = *(_QWORD *)(48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL);
      if ( (Process & 0x4000000000000LL) != 0 )
      {
        v39 = 48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v122 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v122);
            while ( *(__int64 *)(v39 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
          v35 = 0x7FFFFFFFFFFFFFFFLL;
        }
        if ( *v36 == v37 )
          goto LABEL_95;
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v37 & 0x400) != 0 || (v37 & 0x800) == 0 )
      break;
    if ( !v37 || !qword_140C4DE80 || (v37 & qword_140C4DE80) != 0 )
    {
      v38 = *v36;
      if ( qword_140C4DE80 && (v37 & 0x10) == 0 )
        v38 = v37 & ~qword_140C4DE80;
      goto LABEL_87;
    }
  }
  v39 = 0LL;
LABEL_95:
  v40 = (unsigned __int64)v36;
  v41 = 0xFFFFF6FB7DBED000uLL;
  v42 = *v36;
  v43 = v42;
  v44 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v40 >= 0xFFFFF6FB7DBED000uLL && v40 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL)
      && (v42 & 1) != 0
      && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      v45 = *(_QWORD *)(Process + 1928);
      if ( v45 )
      {
        v43 = v42 | 0x20;
        v46 = *(_QWORD *)(v45 + 8 * ((v40 >> 3) & 0x1FF));
        Process = (unsigned __int8)v46;
        LOBYTE(Process) = v46 & 0x20;
        if ( (v46 & 0x20) == 0 )
          v43 = v42;
        if ( (v46 & 0x42) != 0 )
          v43 |= 0x42uLL;
      }
    }
    v41 = 0xFFFFF6FB7DBED000uLL;
  }
  v116 = v43;
  if ( (v43 & 1) == 0 )
  {
    if ( !v43 )
    {
LABEL_185:
      LOBYTE(v41) = 17;
      MiUnlockProtoPoolPage(v112, v41);
      return 3221225477LL;
    }
    LOBYTE(v80) = 0;
    v81 = *v125;
    if ( (unsigned __int64)v125 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v125 <= v44 )
    {
      if ( (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL)
        && (v81 & 1) != 0
        && ((v81 & 0x20) == 0 || (v81 & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v83 = *(_QWORD *)(Process + 1928);
        if ( v83 )
        {
          v84 = *(_QWORD *)(v83 + 8 * ((v82 >> 3) & 0x1FF));
          v85 = v81 | 0x20;
          Process = (unsigned __int8)v84;
          LOBYTE(Process) = v84 & 0x20;
          if ( (v84 & 0x20) == 0 )
            v85 = v81;
          v81 = v85;
          if ( (v84 & 0x42) != 0 )
            v81 = v85 | 0x42;
        }
      }
      v41 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (v81 & 0x400) != 0 )
    {
      v86 = v81;
      if ( qword_140C4DE80 && (v81 & 0x10) == 0 )
        v86 = v81 & ~qword_140C4DE80;
      Process = 0xFFFFFFFFLL;
      if ( HIDWORD(v86) == 0xFFFFFFFF )
      {
        v87 = a1;
        v80 = (v81 >> 5) & 0x1F;
        if ( ((v81 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
          goto LABEL_337;
        v88 = v115;
        v41 = (unsigned __int64)v132;
LABEL_252:
        v97 = v43;
        if ( qword_140C4DE80 && (v43 & 0x10) == 0 )
          v97 = v43 & ~(_WORD)qword_140C4DE80;
        if ( (v97 & 0x400) == 0
          && (v97 & 0x800) == 0
          && (v97 & 4) == 0
          && (v80 & 5) == 5
          && (v41 || (((unsigned __int8)MI_READ_PTE_LOCK_FREE(&v116) >> 5) & 5) != 4)
          && ((*(_BYTE *)(v128 + 184) & 7) != 0 || !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12])
          && ((MiFlags & 0x10000) == 0 || v120 < 0xFFFF800000000000uLL || (v80 & 2) == 0) )
        {
          v98 = v129;
          v124 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v98 - 0x57FFFFFFFE8LL), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v124);
            while ( *(__int64 *)(v98 - 0x57FFFFFFFE8LL) < 0 );
          }
          *v130 &= ~0x20u;
          MiRemoveLockedPageChargeAndDecRef(v112);
          _InterlockedAnd64((volatile signed __int64 *)(v98 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v119 )
          {
            if ( !v88 )
              return 0LL;
            v100 = v113 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( *(_BYTE *)(v113 & 0xFFFFFFFFFFFFFFFEuLL) != 1 || (*(_DWORD *)(v100 + 80) & 0x4000) == 0 )
              return 0LL;
            v101 = v113;
          }
          else
          {
            v101 = v113;
            v100 = v113 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v88 )
          {
            if ( *(_BYTE *)v100 != 1 && *(_BYTE *)v100 != 3 && *(_BYTE *)v100 != 6 )
              goto LABEL_285;
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(v101, 0LL) != 1 )
          {
            goto LABEL_285;
          }
          if ( (!v88 || *(_BYTE *)v100 != 6) && v120 >= 0xFFFF800000000000uLL )
            return 3221225477LL;
LABEL_285:
          if ( (v81 & 0x400) == 0 )
            goto LABEL_290;
          v102 = v81;
          if ( qword_140C4DE80 && (v81 & 0x10) == 0 )
            v102 = v81 & ~qword_140C4DE80;
          if ( HIDWORD(v102) != 0xFFFFFFFF )
          {
LABEL_290:
            v81 = v43;
            if ( (unsigned int)MiPteInShadowRange(&v116, v99) )
              v81 = MiReadPteShadow(&v116, v43);
          }
          v103 = v81 >> 5;
          v104 = v103 & 0x18;
          v105 = v103 & 2 | 4;
          if ( v104 == 8 )
          {
            v105 |= 8u;
          }
          else if ( v104 == 24 )
          {
            v105 |= 0x18u;
          }
          v106 = MiSwizzleInvalidPte(32LL * v105);
          v108 = (__int64 *)v125;
          if ( (unsigned __int64)v125 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v125 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)MiPteHasShadow(v107, v106) )
            {
              if ( !HIBYTE(word_140C4DF48) && (v106 & 1) != 0 )
                v106 |= 0x8000000000000000uLL;
              *v108 = v106;
              MiWritePteShadow(v108, v106);
              return MiResolveDemandZeroFault((unsigned __int64 *)v87, (unsigned __int64)v108, 0LL, (__int64)v132);
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v106 & 1) != 0 )
            {
              v106 |= 0x8000000000000000uLL;
            }
          }
          *v108 = v106;
          return MiResolveDemandZeroFault((unsigned __int64 *)v87, (unsigned __int64)v108, 0LL, (__int64)v132);
        }
        if ( (v43 & 0x400) != 0 )
        {
          if ( (*(_BYTE *)(v87 + 69) & 8) == 0 )
            return MiResolveMappedFileFault(v87, v40, v112, a3);
          goto LABEL_337;
        }
        if ( (v43 & 0x800) != 0 )
          return MiResolveTransitionFault(v87, v40, v112, v132, a3);
        if ( (unsigned int)MiPteInShadowRange(&v116, v41) )
          LOBYTE(v43) = MiReadPteShadow(&v116, v43);
        if ( (v43 & 4) == 0 )
        {
          if ( v119 )
          {
            if ( !v88
              || (v109 = v113 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v113 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
              || (*(_DWORD *)(v109 + 80) & 0x4000) == 0 )
            {
              LOBYTE(v41) = 17;
              MiUnlockProtoPoolPage(v112, v41);
              return 0LL;
            }
            v110 = v113;
          }
          else
          {
            v110 = v113;
            v109 = v113 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v88 )
          {
            if ( *(_BYTE *)v109 != 1 && *(_BYTE *)v109 != 3 && *(_BYTE *)v109 != 6 )
              return MiResolveDemandZeroFault((unsigned __int64 *)v87, v117, v112, (__int64)v132);
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(v110, 0LL) != 1 )
          {
            return MiResolveDemandZeroFault((unsigned __int64 *)v87, v117, v112, (__int64)v132);
          }
          if ( (!v88 || *(_BYTE *)v109 != 6) && v120 >= 0xFFFF800000000000uLL )
          {
            if ( !(unsigned int)MiIsPrototypePteVadLookup(v81) )
              v81 = MI_READ_PTE_LOCK_FREE(&v116);
            if ( ((v81 >> 5) & 0x18) == 0x10 )
              goto LABEL_185;
          }
          return MiResolveDemandZeroFault((unsigned __int64 *)v87, v117, v112, (__int64)v132);
        }
        if ( (*(_BYTE *)(v87 + 69) & 8) == 0 )
          return MiResolvePageFileFault(v87, v40, v112, a3);
LABEL_337:
        LOBYTE(v41) = 17;
        MiUnlockProtoPoolPage(v112, v41);
        return 3221226548LL;
      }
    }
    if ( (v81 & 8) != 0 )
    {
      v41 = (unsigned __int64)v132;
LABEL_250:
      v88 = v115;
      goto LABEL_251;
    }
    v80 = (v43 >> 5) & 0x1F;
    v89 = ((v43 >> 5) & 0x1F) >> 3;
    if ( v89 == 2 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
      goto LABEL_337;
    if ( v40 >= 0xFFFFF6FB7DBED000uLL && v40 <= v44 && (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL) )
    {
      if ( (v42 & 1) == 0 )
        goto LABEL_225;
      if ( (v42 & 0x20) == 0 || (v42 & 0x42) == 0 )
      {
        v90 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v90 )
        {
          v91 = *((_QWORD *)&v90->Flink + ((v40 >> 3) & 0x1FF));
          v92 = v42 | 0x20;
          if ( (v91 & 0x20) == 0 )
            v92 = v42;
          v42 = v92;
          if ( (v91 & 0x42) != 0 )
            v42 = v92 | 0x42;
        }
      }
    }
    if ( (v42 & 1) != 0 )
    {
      v41 = (unsigned __int64)v132;
      if ( v132 && (v42 & 0xA00) == 0 )
      {
        v93 = -1073741819;
LABEL_245:
        if ( v39 )
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v41) = 17;
        MiUnlockProtoPoolPage(v112, v41);
        return v93;
      }
      goto LABEL_250;
    }
LABEL_225:
    v41 = (unsigned __int64)v132;
    if ( !v132 )
      LOBYTE(v19) = 0;
    if ( *((char *)&MiReadWrite + ((unsigned __int8)v43 >> 5)) - (char)v19 < 10 )
    {
      v93 = -1073741819;
      goto LABEL_245;
    }
    v88 = v115;
    if ( v89 != 2 || v115 && *(_BYTE *)(v113 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v40 = v117;
LABEL_251:
      v87 = a1;
      goto LABEL_252;
    }
    if ( !(unsigned int)MiAllowGuardFault(v113) )
    {
      v93 = -1073741819;
      goto LABEL_245;
    }
    v94 = v42 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v43 >> 5) & 0xF));
    v95 = (unsigned __int64 *)v117;
    if ( (unsigned int)MiPteInShadowRange(v117, v41) )
    {
      if ( (unsigned int)MiPteHasShadow(v96, v41) )
      {
        if ( !HIBYTE(word_140C4DF48) && (v94 & 1) != 0 )
          v94 |= 0x8000000000000000uLL;
        *v95 = v94;
        MiWritePteShadow(v95, v94);
        goto LABEL_244;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v94 & 1) != 0 )
      {
        v94 |= 0x8000000000000000uLL;
      }
    }
    *v95 = v94;
LABEL_244:
    v93 = -2147483647;
    goto LABEL_245;
  }
  if ( v119 )
  {
    PfnPriority = MiGetPfnPriority(v39, *(_DWORD *)(v119 + 80) & 7, v35, v44);
    if ( (unsigned int)v48 > PfnPriority )
      *(_BYTE *)(v39 + 35) = v48 | *(_BYTE *)(v39 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), v49);
    LOBYTE(v48) = 17;
    MiUnlockProtoPoolPage(v112, v48);
    return 0LL;
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(v39, 0xFFFFF6FB7DBED000uLL, v35) )
  {
    v52 = *(_QWORD *)(v39 + 16);
    if ( (v52 & 0x400) != 0 && ((*(_QWORD *)(v39 + 40) >> 60) & 7) != 3 )
    {
      v53 = *(_QWORD *)(v39 + 16);
      if ( qword_140C4DE80 && (v52 & 0x10) == 0 )
        v53 = ~qword_140C4DE80 & v52;
      v54 = v53 >> 16;
      if ( (*(_DWORD *)(*(_QWORD *)v54 + 56LL) & 0x20) != 0 )
      {
        v55 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v54 + 96LL) + 40LL);
        if ( v55 )
        {
          if ( (v55 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v55 & 3) != 2 )
          {
            if ( v120 >= 0xFFFF800000000000uLL )
            {
              if ( (MiFlags & 0x10000) == 0 || (v52 & 0x40) == 0 )
                goto LABEL_125;
LABEL_138:
              _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              LOBYTE(v51) = 17;
              MiUnlockProtoPoolPage(v112, v51);
              return 3221226536LL;
            }
            Address = MiLocateAddress(v120);
            v51 = Address;
            if ( !Address )
              goto LABEL_138;
            v62 = *(_DWORD *)(Address + 48);
            if ( (v62 & 0x70) != 0x20 )
              goto LABEL_138;
            if ( (v62 & 0xF80) != 0x80
              && ((*(_DWORD *)(Address + 64) & 0x8000000) == 0 || (v60 & 4) != 0)
              && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v61 + 34) & 2) == 0) )
            {
              goto LABEL_138;
            }
          }
        }
      }
    }
  }
LABEL_125:
  v56 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v39 + 24) ^= (*(_QWORD *)(v39 + 24) ^ (*(_QWORD *)(v39 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v57 = 0;
  v123 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v12 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v123);
      while ( *(__int64 *)(v12 - 0x57FFFFFFFE8LL) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 - 0x57FFFFFFFE8LL), 0x3FuLL) );
    v56 = 0x3FFFFFFFFFFFFFFFLL;
  }
  *v32 &= ~0x20u;
  v58 = *v118;
  if ( !*v118 )
    MiBadRefCount(v112);
  v63 = v12 - 0x58000000000LL;
  v64 = v58 == 1;
  v65 = v58 - 1;
  *v118 = v65;
  if ( v64 && (unsigned int)MiIsPfnFileOnly(v112) )
    goto LABEL_180;
  v66 = *(_QWORD *)(v63 + 40);
  if ( (v66 & 0x1000000000LL) == 0 && (v66 & 0x2000000000000LL) == 0 )
  {
    v67 = v56 & *(_QWORD *)(v12 - 0x57FFFFFFFE8LL);
    if ( !v65 )
    {
      v68 = 1;
      goto LABEL_152;
    }
    if ( v65 != 1 )
    {
      if ( v65 == 2 && v67 )
      {
LABEL_149:
        if ( (*v32 & 8) != 0 )
          goto LABEL_150;
      }
      goto LABEL_181;
    }
    if ( !v67 )
      goto LABEL_149;
LABEL_150:
    v68 = 0;
LABEL_152:
    v69 = *v127 | 0x8000000000000000uLL;
    if ( v69 > 0xFFFFF6BFFFFFFF78uLL || v69 < 0xFFFFF68000000000uLL )
    {
      v70 = *(_BYTE *)(v12 - 0x57FFFFFFFDDLL);
      if ( (v70 & 0x20) != 0 )
      {
        *(_BYTE *)(v12 - 0x57FFFFFFFDDLL) = v70 & 0xDF;
        goto LABEL_179;
      }
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v63, v69, v66) && (*(_DWORD *)(v12 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
    {
      v57 = 1;
    }
    else if ( v71 <= v74 && v71 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v12 - 0x57FFFFFFFDDLL) & 0x20) != 0 )
    {
      v57 = 1;
    }
    else if ( v68 == 1 && (v73 & 0x4000000000000000LL) != 0 )
    {
      v57 = 1;
    }
    v75 = (v72 >> 39) & 0x3FF;
    v76 = *(_QWORD *)(qword_140C4E588 + 8 * v75);
    if ( v57 == 1 )
    {
      MiReturnCommit(*(_QWORD *)(qword_140C4E588 + 8 * v75), 1LL);
      v63 = v12 - 0x58000000000LL;
    }
    if ( (ULONG_PTR *)v76 == &MiSystemPartition )
    {
      v77 = KeGetCurrentPrcb();
      v78 = (int)v77->CachedResidentAvailable;
      if ( (_DWORD)v78 != -1 )
      {
        if ( (unsigned __int64)(v78 + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v79 = _InterlockedCompareExchange((volatile signed __int32 *)&v77->CachedResidentAvailable, v78 + 1, v78);
            v64 = (_DWORD)v78 == v79;
            LODWORD(v78) = v79;
            if ( v64 )
              break;
            if ( v79 == -1 || (unsigned __int64)(v79 + 1LL) > 0x100 )
              goto LABEL_174;
          }
LABEL_179:
          if ( v68 )
LABEL_180:
            MiPfnReferenceCountIsZero(v63, v12 / 48);
          goto LABEL_181;
        }
LABEL_174:
        if ( (int)v78 > 192
          && (_DWORD)v78 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v77->CachedResidentAvailable,
                              192,
                              v78) )
        {
          v19 = (int)v78 - 192 + 1LL;
        }
        if ( !v19 )
          goto LABEL_179;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v76 + 7168), v19);
    goto LABEL_179;
  }
LABEL_181:
  _InterlockedAnd64((volatile signed __int64 *)(v12 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E98u);
  result = MiCompleteProtoPteFault(a1, v43, v132, 0, v113);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
