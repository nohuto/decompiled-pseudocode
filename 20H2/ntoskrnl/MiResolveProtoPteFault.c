/*
 * XREFs of MiResolveProtoPteFault @ 0x140276BB0
 * Callers:
 *     MiDispatchFault @ 0x140270220 (MiDispatchFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 *     MiReadPteShadow @ 0x1402366E0 (MiReadPteShadow.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     MiResolvePageFileFault @ 0x140239F98 (MiResolvePageFileFault.c)
 *     MiResolveDemandZeroFault @ 0x140270E70 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x140277F70 (MiResolveTransitionFault.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x14027A540 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiWriteValidPteVolatile @ 0x14028F7D0 (MiWriteValidPteVolatile.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiAllowGuardFault @ 0x140306340 (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x1403063B0 (KeInvalidAccessAllowed.c)
 *     MiChargePartitionResidentAvailable @ 0x14031056C (MiChargePartitionResidentAvailable.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     HvlNotifyLongSpinWait @ 0x14038FC70 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140390A50 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F3094 (MiBadRefCount.c)
 */

__int64 __fastcall MiResolveProtoPteFault(__int64 a1, struct _LIST_ENTRY *a2, _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned __int64 *v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  BOOL v9; // r14d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  struct _LIST_ENTRY *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 Process; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int64 v20; // r13
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  __int64 v23; // rax
  bool v24; // bl
  __int64 v25; // rdx
  unsigned __int64 v26; // r8
  __int64 v27; // r11
  unsigned __int64 v28; // rdx
  ULONG_PTR *v29; // rdi
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v31; // ett
  _BYTE *v32; // rdi
  char *v33; // r15
  char v34; // al
  unsigned int v35; // ebx
  __int64 v36; // r8
  unsigned __int64 *v37; // rdi
  unsigned __int64 v38; // rbx
  unsigned __int64 v39; // rax
  __int64 v40; // r14
  unsigned __int64 v41; // rbx
  unsigned __int64 v42; // rdx
  __int64 v43; // rdi
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rax
  unsigned int PfnPriority; // eax
  __int64 v49; // rdx
  unsigned __int64 v50; // r8
  __int64 result; // rax
  __int64 **v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r11
  __int64 v55; // r11
  __int64 v56; // r10
  __int64 v57; // r10
  int v58; // r14d
  __int16 v59; // dx
  __int64 **Address; // rax
  char v61; // r10
  __int64 v62; // r11
  int v63; // ecx
  __int64 v64; // r11
  bool v65; // zf
  __int16 v66; // dx
  __int64 v67; // r8
  __int64 v68; // rax
  int v69; // edi
  unsigned __int64 v70; // rdx
  char v71; // al
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // r8
  __int64 v74; // r9
  unsigned __int64 v75; // r10
  __int64 v76; // r8
  __int64 v77; // rbx
  struct _KPRCB *v78; // r8
  __int64 v79; // rdx
  signed __int32 v80; // eax
  __int64 v81; // r12
  unsigned __int64 PteShadow; // r15
  unsigned __int64 v83; // r8
  __int64 v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdx
  unsigned __int64 v87; // rax
  __int64 v88; // r14
  __int64 v89; // r13
  unsigned __int64 v90; // r8
  struct _LIST_ENTRY *v91; // rdx
  __int64 v92; // rax
  __int64 v93; // rdx
  unsigned int v94; // ebx
  unsigned __int64 v95; // rbx
  unsigned __int64 *v96; // rdi
  __int64 v97; // rcx
  __int64 v98; // r8
  __int64 v99; // r9
  __int16 v100; // ax
  __int64 v101; // rbx
  unsigned __int64 v102; // rbx
  __int64 v103; // rax
  unsigned __int64 v104; // rax
  char v105; // al
  int v106; // r15d
  unsigned int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rcx
  __int64 v110; // r8
  __int64 v111; // r9
  _QWORD *v112; // r11
  unsigned __int64 v113; // rbx
  __int64 v114; // rax
  __int64 v115; // [rsp+30h] [rbp-C8h]
  __int64 v116; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v117; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v118; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v119; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v120; // [rsp+58h] [rbp-A0h]
  __int16 *v121; // [rsp+60h] [rbp-98h]
  unsigned __int64 v122; // [rsp+68h] [rbp-90h]
  unsigned __int64 v123; // [rsp+70h] [rbp-88h]
  int v124; // [rsp+78h] [rbp-80h] BYREF
  int v125; // [rsp+7Ch] [rbp-7Ch] BYREF
  int v126; // [rsp+80h] [rbp-78h] BYREF
  int v127; // [rsp+84h] [rbp-74h] BYREF
  unsigned __int64 *v128; // [rsp+88h] [rbp-70h]
  _BYTE *v129; // [rsp+90h] [rbp-68h]
  _QWORD *v130; // [rsp+98h] [rbp-60h]
  __int64 v131; // [rsp+A0h] [rbp-58h]
  __int64 v132; // [rsp+A8h] [rbp-50h]
  _BYTE *v133; // [rsp+B0h] [rbp-48h]

  v119 = 0LL;
  *a3 = 0LL;
  v131 = *(_QWORD *)(a1 + 56);
  v123 = *(_QWORD *)a1;
  v128 = (unsigned __int64 *)(((v123 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = *(_QWORD *)(a1 + 16);
  v116 = v5;
  v118 = v5 & 1;
  if ( (v5 & 1) == 0 || (v122 = v5 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v122 = 0LL;
  v120 = *(_QWORD *)(a1 + 96);
  v6 = (unsigned __int64 *)(((v120 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v117 = *v6;
  v7 = v117 & 1;
  do
  {
    if ( !v7 )
      return 3221225494LL;
    v8 = v117;
    if ( (v117 & 0x200) != 0 )
      return 3221225494LL;
    v9 = MiPteInShadowRange((unsigned __int64)&v117);
    if ( v9
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v117 >> 3) & 0x1FF));
        if ( (v11 & 0x20) != 0 )
          v8 |= 0x20uLL;
        if ( (v11 & 0x42) != 0 )
          v8 |= 0x42uLL;
      }
      else
      {
        v8 = v117;
      }
    }
    v12 = (v8 >> 12) & 0xFFFFFFFFFLL;
    v13 = 48 * v12;
    v132 = 48 * v12;
  }
  while ( (*(_QWORD *)(48 * v12 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v124 = 0;
  v115 = v13 - 0x58000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v124);
    while ( *(__int64 *)(v13 - 0x57FFFFFFFE8LL) < 0 );
  }
  v14 = *v6;
  v117 = v14;
  if ( (v14 & 1) == 0 || (v14 & 0x200) != 0 )
    goto LABEL_339;
  if ( v9
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
  {
    v15 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v15 )
    {
      v16 = *((_QWORD *)&v15->Flink + (((unsigned __int64)&v117 >> 3) & 0x1FF));
      if ( (v16 & 0x20) != 0 )
        v14 |= 0x20uLL;
      if ( (v16 & 0x42) != 0 )
        v14 |= 0x42uLL;
    }
    else
    {
      v14 = v117;
    }
  }
  if ( v12 != ((v14 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_339:
    _InterlockedAnd64((volatile signed __int64 *)(v13 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  v17 = v13 - 0x58000000000LL;
  Process = 0x1000000000LL;
  CurrentPrcb = (struct _KPRCB *)0xFFFFFA8000000008LL;
  v20 = 1LL;
  v21 = *(_QWORD *)(v115 + 40);
  v22 = 0xFFFFFA8000000020uLL;
  if ( (v21 & 0x1000000000LL) != 0 || (v21 & 0x2000000000000LL) != 0 )
    goto LABEL_62;
  Process = *(unsigned __int16 *)(v13 - 0x57FFFFFFFE0LL);
  v23 = *(_QWORD *)(v13 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)Process )
  {
    if ( (_WORD)Process != 1 )
    {
      if ( (_WORD)Process != 2 || !v23 )
        goto LABEL_62;
LABEL_44:
      if ( (*(_BYTE *)(v13 - 0x57FFFFFFFDELL) & 8) == 0 )
        goto LABEL_62;
      goto LABEL_45;
    }
    if ( !v23 )
      goto LABEL_44;
  }
LABEL_45:
  v24 = 0;
  if ( (unsigned int)MI_PFN_IS_PROTO(v115) && (*(_DWORD *)(v13 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
  {
    v24 = 1;
  }
  else
  {
    v22 = 0xFFFFF68000000000uLL;
    v28 = *(_QWORD *)(v13 + v25) | 0x8000000000000000uLL;
    if ( v28 <= 0xFFFFF6BFFFFFFF78uLL && v28 >= 0xFFFFF68000000000uLL )
      v24 = (*(_BYTE *)(v13 + v27) & 0x20) != 0;
  }
  v29 = *(ULONG_PTR **)(qword_140C4E4C8 + 8 * ((v26 >> 39) & 0x3FF));
  if ( v24 )
  {
    v121 = (__int16 *)(v13 - 0x57FFFFFFFE0LL);
    if ( !(unsigned int)MiChargeCommit(v29, 1LL, 4LL) )
      goto LABEL_63;
  }
  if ( v29 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable )
    {
      v21 = 0xFFFFFFFFLL;
      do
      {
        if ( CachedResidentAvailable == -1 )
          break;
        Process = (unsigned int)(CachedResidentAvailable - 1);
        v31 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    Process,
                                    CachedResidentAvailable);
        if ( v31 == CachedResidentAvailable )
          goto LABEL_62;
      }
      while ( CachedResidentAvailable );
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable(v29, 1LL, 0xFFFFFFFFLL, v22) )
  {
    v121 = (__int16 *)(v13 - 0x57FFFFFFFE0LL);
    if ( v24 )
    {
      MiReturnCommit((__int64)v29, 1LL);
      v121 = (__int16 *)(v13 - 0x57FFFFFFFE0LL);
    }
    goto LABEL_63;
  }
LABEL_62:
  ++*(_WORD *)(v13 - 0x57FFFFFFFE0LL);
  v121 = (__int16 *)(v13 - 0x57FFFFFFFE0LL);
  v17 = v13 - 0x58000000000LL;
LABEL_63:
  v130 = (_QWORD *)(v13 - 0x57FFFFFFFF8LL);
  v32 = (_BYTE *)(*(_QWORD *)(v13 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
  v129 = v32;
  v33 = (char *)(v13 - 0x57FFFFFFFDELL);
  v34 = *(_BYTE *)(v13 - 0x57FFFFFFFDELL);
  v133 = (_BYTE *)(v13 - 0x57FFFFFFFDELL);
  if ( (v34 & 0x20) != 0 )
  {
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(v13 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
      v35 = 0;
      while ( (*v33 & 0x20) != 0 )
      {
        if ( (++v35 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Process, CurrentPrcb, v21, v22) )
        {
          HvlNotifyLongSpinWait(v35);
        }
        else
        {
          _mm_pause();
        }
      }
      MiLockPageInline(v17);
      v34 = *v33;
    }
    while ( (*v33 & 0x20) != 0 );
    v32 = v129;
    v20 = 1LL;
  }
  *v33 = v34 | 0x20;
  if ( (*(_QWORD *)(v13 - 0x57FFFFFFFE8LL) & 0x4000000000000000LL) == 0 && (*v32 & 0x20) == 0 )
    MiWriteValidPteVolatile(v32, 1LL, 0LL);
  v36 = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v13 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  v37 = (unsigned __int64 *)v120;
  while ( 1 )
  {
    while ( 1 )
    {
      v38 = *v37;
      if ( (*v37 & 1) == 0 )
        break;
      v39 = *v37;
LABEL_87:
      Process = *(_QWORD *)(48 * ((v39 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL);
      if ( (Process & 0x4000000000000LL) != 0 )
      {
        v40 = 48 * ((v39 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v125 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v125);
            while ( *(__int64 *)(v40 + 24) < 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) );
          v36 = 0x7FFFFFFFFFFFFFFFLL;
        }
        if ( *v37 == v38 )
          goto LABEL_95;
        _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v38 & 0x400) != 0 || (v38 & 0x800) == 0 )
      break;
    if ( !v38 || !qword_140C4DDC0 || (v38 & qword_140C4DDC0) != 0 )
    {
      v39 = *v37;
      if ( qword_140C4DDC0 && (v38 & 0x10) == 0 )
        v39 = v38 & ~qword_140C4DDC0;
      goto LABEL_87;
    }
  }
  v40 = 0LL;
LABEL_95:
  v41 = (unsigned __int64)v37;
  v42 = 0xFFFFF6FB7DBED000uLL;
  v43 = *v37;
  v44 = v43;
  v45 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v41 >= 0xFFFFF6FB7DBED000uLL && v41 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL, 0x7FFFFFFFFFFFFFFFLL, 0xFFFFF6FB7DBED7F8uLL)
      && (v43 & 1) != 0
      && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) )
    {
      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
      v46 = *(_QWORD *)(Process + 1928);
      if ( v46 )
      {
        v44 = v43 | 0x20;
        v47 = *(_QWORD *)(v46 + 8 * ((v41 >> 3) & 0x1FF));
        Process = (unsigned __int8)v47;
        LOBYTE(Process) = v47 & 0x20;
        if ( (v47 & 0x20) == 0 )
          v44 = v43;
        if ( (v47 & 0x42) != 0 )
          v44 |= 0x42uLL;
      }
    }
    v42 = 0xFFFFF6FB7DBED000uLL;
  }
  v119 = v44;
  if ( (v44 & 1) == 0 )
  {
    if ( !v44 )
    {
LABEL_185:
      LOBYTE(v42) = 17;
      MiUnlockProtoPoolPage(v115, v42);
      return 3221225477LL;
    }
    LOBYTE(v81) = 0;
    PteShadow = *v128;
    if ( (unsigned __int64)v128 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v128 <= v45 )
    {
      if ( (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL, v128, v45)
        && (PteShadow & 1) != 0
        && ((PteShadow & 0x20) == 0 || (PteShadow & 0x42) == 0) )
      {
        Process = (__int64)KeGetCurrentThread()->ApcState.Process;
        v84 = *(_QWORD *)(Process + 1928);
        if ( v84 )
        {
          v85 = *(_QWORD *)(v84 + 8 * ((v83 >> 3) & 0x1FF));
          v86 = PteShadow | 0x20;
          Process = (unsigned __int8)v85;
          LOBYTE(Process) = v85 & 0x20;
          if ( (v85 & 0x20) == 0 )
            v86 = PteShadow;
          PteShadow = v86;
          if ( (v85 & 0x42) != 0 )
            PteShadow = v86 | 0x42;
        }
      }
      v42 = 0xFFFFF6FB7DBED000uLL;
    }
    if ( (PteShadow & 0x400) != 0 )
    {
      v87 = PteShadow;
      if ( qword_140C4DDC0 && (PteShadow & 0x10) == 0 )
        v87 = PteShadow & ~qword_140C4DDC0;
      Process = 0xFFFFFFFFLL;
      if ( HIDWORD(v87) == 0xFFFFFFFF )
      {
        v88 = a1;
        v81 = (PteShadow >> 5) & 0x1F;
        if ( ((PteShadow >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
          goto LABEL_337;
        v89 = v118;
        v42 = (unsigned __int64)a2;
LABEL_252:
        v100 = v44;
        if ( qword_140C4DDC0 && (v44 & 0x10) == 0 )
          v100 = v44 & ~(_WORD)qword_140C4DDC0;
        if ( (v100 & 0x400) == 0
          && (v100 & 0x800) == 0
          && (v100 & 4) == 0
          && (v81 & 5) == 5
          && (v42 || (((unsigned __int8)MI_READ_PTE_LOCK_FREE(&v119) >> 5) & 5) != 4)
          && ((*(_BYTE *)(v131 + 184) & 7) != 0 || !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12])
          && ((MiFlags & 0x10000) == 0 || v123 < 0xFFFF800000000000uLL || (v81 & 2) == 0) )
        {
          v101 = v132;
          v127 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v101 - 0x57FFFFFFFE8LL), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v127);
            while ( *(__int64 *)(v101 - 0x57FFFFFFFE8LL) < 0 );
          }
          *v133 &= ~0x20u;
          MiRemoveLockedPageChargeAndDecRef(v115);
          _InterlockedAnd64((volatile signed __int64 *)(v101 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v122 )
          {
            if ( !v89 )
              return 0LL;
            v102 = v116 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( *(_BYTE *)(v116 & 0xFFFFFFFFFFFFFFFEuLL) != 1 || (*(_DWORD *)(v102 + 80) & 0x4000) == 0 )
              return 0LL;
            v103 = v116;
          }
          else
          {
            v103 = v116;
            v102 = v116 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v89 )
          {
            if ( *(_BYTE *)v102 != 1 && *(_BYTE *)v102 != 3 && *(_BYTE *)v102 != 6 )
              goto LABEL_285;
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(v103, 0LL) != 1 )
          {
            goto LABEL_285;
          }
          if ( (!v89 || *(_BYTE *)v102 != 6) && v123 >= 0xFFFF800000000000uLL )
            return 3221225477LL;
LABEL_285:
          if ( (PteShadow & 0x400) == 0 )
            goto LABEL_290;
          v104 = PteShadow;
          if ( qword_140C4DDC0 && (PteShadow & 0x10) == 0 )
            v104 = PteShadow & ~qword_140C4DDC0;
          if ( HIDWORD(v104) != 0xFFFFFFFF )
          {
LABEL_290:
            PteShadow = v44;
            if ( MiPteInShadowRange((unsigned __int64)&v119) )
              PteShadow = MiReadPteShadow((unsigned __int64)&v119, v44);
          }
          v105 = PteShadow >> 5;
          v106 = v105 & 0x18;
          v107 = v105 & 2 | 4;
          if ( v106 == 8 )
          {
            v107 |= 8u;
          }
          else if ( v106 == 24 )
          {
            v107 |= 0x18u;
          }
          v108 = MiSwizzleInvalidPte(32LL * v107);
          v112 = v128;
          if ( (unsigned __int64)v128 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v128 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)MiPteHasShadow(v109, v108, v110, v111) )
            {
              if ( !HIBYTE(word_140C4DE88) && (v108 & 1) != 0 )
                v108 |= 0x8000000000000000uLL;
              *v112 = v108;
              MiWritePteShadow(v112, v108);
              return MiResolveDemandZeroFault((unsigned __int64 *)v88, (unsigned __int64)v112, 0LL, (__int64)a2);
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v108 & 1) != 0 )
            {
              v108 |= 0x8000000000000000uLL;
            }
          }
          *v112 = v108;
          return MiResolveDemandZeroFault((unsigned __int64 *)v88, (unsigned __int64)v112, 0LL, (__int64)a2);
        }
        if ( (v44 & 0x400) != 0 )
        {
          if ( (*(_BYTE *)(v88 + 69) & 8) == 0 )
            return MiResolveMappedFileFault(v88, v41, v115, a3);
          goto LABEL_337;
        }
        if ( (v44 & 0x800) != 0 )
          return MiResolveTransitionFault(v88, v41, v115, a2, a3);
        if ( MiPteInShadowRange((unsigned __int64)&v119) )
          LOBYTE(v44) = MiReadPteShadow((unsigned __int64)&v119, v44);
        if ( (v44 & 4) == 0 )
        {
          if ( v122 )
          {
            if ( !v89
              || (v113 = v116 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v116 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
              || (*(_DWORD *)(v113 + 80) & 0x4000) == 0 )
            {
              LOBYTE(v42) = 17;
              MiUnlockProtoPoolPage(v115, v42);
              return 0LL;
            }
            v114 = v116;
          }
          else
          {
            v114 = v116;
            v113 = v116 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v89 )
          {
            if ( *(_BYTE *)v113 != 1 && *(_BYTE *)v113 != 3 && *(_BYTE *)v113 != 6 )
              return MiResolveDemandZeroFault((unsigned __int64 *)v88, v120, v115, (__int64)a2);
          }
          else if ( (unsigned __int8)KeInvalidAccessAllowed(v114, 0LL) != 1 )
          {
            return MiResolveDemandZeroFault((unsigned __int64 *)v88, v120, v115, (__int64)a2);
          }
          if ( (!v89 || *(_BYTE *)v113 != 6) && v123 >= 0xFFFF800000000000uLL )
          {
            if ( !MiIsPrototypePteVadLookup(PteShadow) )
              PteShadow = MI_READ_PTE_LOCK_FREE(&v119);
            if ( ((PteShadow >> 5) & 0x18) == 0x10 )
              goto LABEL_185;
          }
          return MiResolveDemandZeroFault((unsigned __int64 *)v88, v120, v115, (__int64)a2);
        }
        if ( (*(_BYTE *)(v88 + 69) & 8) == 0 )
          return MiResolvePageFileFault((unsigned __int64 *)v88, v41, v115, a3);
LABEL_337:
        LOBYTE(v42) = 17;
        MiUnlockProtoPoolPage(v115, v42);
        return 3221226548LL;
      }
    }
    if ( (PteShadow & 8) != 0 )
    {
      v42 = (unsigned __int64)a2;
LABEL_250:
      v89 = v118;
      goto LABEL_251;
    }
    v81 = (v44 >> 5) & 0x1F;
    v90 = ((v44 >> 5) & 0x1F) >> 3;
    if ( (_DWORD)v90 == 2 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
      goto LABEL_337;
    if ( v41 >= 0xFFFFF6FB7DBED000uLL
      && v41 <= v45
      && (unsigned int)MiPteHasShadow(Process, 0xFFFFF6FB7DBED000uLL, v90, v45) )
    {
      if ( (v43 & 1) == 0 )
        goto LABEL_225;
      if ( (v43 & 0x20) == 0 || (v43 & 0x42) == 0 )
      {
        v91 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v91 )
        {
          v92 = *((_QWORD *)&v91->Flink + ((v41 >> 3) & 0x1FF));
          v93 = v43 | 0x20;
          if ( (v92 & 0x20) == 0 )
            v93 = v43;
          v43 = v93;
          if ( (v92 & 0x42) != 0 )
            v43 = v93 | 0x42;
        }
      }
    }
    if ( (v43 & 1) != 0 )
    {
      v42 = (unsigned __int64)a2;
      if ( a2 && (v43 & 0xA00) == 0 )
      {
        v94 = -1073741819;
LABEL_245:
        if ( v40 )
          _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v42) = 17;
        MiUnlockProtoPoolPage(v115, v42);
        return v94;
      }
      goto LABEL_250;
    }
LABEL_225:
    v42 = (unsigned __int64)a2;
    if ( !a2 )
      LOBYTE(v20) = 0;
    if ( *((char *)&MiReadWrite + ((unsigned __int8)v44 >> 5)) - (char)v20 < 10 )
    {
      v94 = -1073741819;
      goto LABEL_245;
    }
    v89 = v118;
    if ( (_DWORD)v90 != 2 || v118 && *(_BYTE *)(v116 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v41 = v120;
LABEL_251:
      v88 = a1;
      goto LABEL_252;
    }
    if ( !(unsigned int)MiAllowGuardFault(v116) )
    {
      v94 = -1073741819;
      goto LABEL_245;
    }
    v95 = v43 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v44 >> 5) & 0xF));
    v96 = (unsigned __int64 *)v120;
    if ( MiPteInShadowRange(v120) )
    {
      if ( (unsigned int)MiPteHasShadow(v97, v42, v98, v99) )
      {
        if ( !HIBYTE(word_140C4DE88) && (v95 & 1) != 0 )
          v95 |= 0x8000000000000000uLL;
        *v96 = v95;
        MiWritePteShadow(v96, v95);
        goto LABEL_244;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v95 & 1) != 0 )
      {
        v95 |= 0x8000000000000000uLL;
      }
    }
    *v96 = v95;
LABEL_244:
    v94 = -2147483647;
    goto LABEL_245;
  }
  if ( v122 )
  {
    PfnPriority = MiGetPfnPriority(v40, *(_DWORD *)(v122 + 80) & 7, v36, v45);
    if ( (unsigned int)v49 > PfnPriority )
      *(_BYTE *)(v40 + 35) = v49 | *(_BYTE *)(v40 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), v50);
    LOBYTE(v49) = 17;
    MiUnlockProtoPoolPage(v115, v49);
    return 0LL;
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(v40) )
  {
    v53 = *(_QWORD *)(v40 + 16);
    if ( (v53 & 0x400) != 0 && ((*(_QWORD *)(v40 + 40) >> 60) & 7) != 3 )
    {
      v54 = *(_QWORD *)(v40 + 16);
      if ( qword_140C4DDC0 && (v53 & 0x10) == 0 )
        v54 = ~qword_140C4DDC0 & v53;
      v55 = v54 >> 16;
      if ( (*(_DWORD *)(*(_QWORD *)v55 + 56LL) & 0x20) != 0 )
      {
        v56 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v55 + 96LL) + 40LL);
        if ( v56 )
        {
          if ( (v56 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v56 & 3) != 2 )
          {
            if ( v123 >= 0xFFFF800000000000uLL )
            {
              if ( (MiFlags & 0x10000) == 0 || (v53 & 0x40) == 0 )
                goto LABEL_125;
LABEL_138:
              _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              LOBYTE(v52) = 17;
              MiUnlockProtoPoolPage(v115, v52);
              return 3221226536LL;
            }
            Address = MiLocateAddress(v123);
            v52 = Address;
            if ( !Address )
              goto LABEL_138;
            v63 = *((_DWORD *)Address + 12);
            if ( (v63 & 0x70) != 0x20 )
              goto LABEL_138;
            if ( (v63 & 0xF80) != 0x80
              && (((_DWORD)Address[8] & 0x8000000) == 0 || (v61 & 4) != 0)
              && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v62 + 34) & 2) == 0) )
            {
              goto LABEL_138;
            }
          }
        }
      }
    }
  }
LABEL_125:
  v57 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v40 + 24) ^= (*(_QWORD *)(v40 + 24) ^ (*(_QWORD *)(v40 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v58 = 0;
  v126 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v126);
      while ( *(__int64 *)(v13 - 0x57FFFFFFFE8LL) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 0x57FFFFFFFE8LL), 0x3FuLL) );
    v57 = 0x3FFFFFFFFFFFFFFFLL;
  }
  *v33 &= ~0x20u;
  v59 = *v121;
  if ( !*v121 )
    MiBadRefCount(v115);
  v64 = v13 - 0x58000000000LL;
  v65 = v59 == 1;
  v66 = v59 - 1;
  *v121 = v66;
  if ( v65 && (unsigned int)MiIsPfnFileOnly(v115) )
    goto LABEL_180;
  v67 = *(_QWORD *)(v64 + 40);
  if ( (v67 & 0x1000000000LL) == 0 && (v67 & 0x2000000000000LL) == 0 )
  {
    v68 = v57 & *(_QWORD *)(v13 - 0x57FFFFFFFE8LL);
    if ( !v66 )
    {
      v69 = 1;
      goto LABEL_152;
    }
    if ( v66 != 1 )
    {
      if ( v66 == 2 && v68 )
      {
LABEL_149:
        if ( (*v33 & 8) != 0 )
          goto LABEL_150;
      }
      goto LABEL_181;
    }
    if ( !v68 )
      goto LABEL_149;
LABEL_150:
    v69 = 0;
LABEL_152:
    v70 = *v130 | 0x8000000000000000uLL;
    if ( v70 > 0xFFFFF6BFFFFFFF78uLL || v70 < 0xFFFFF68000000000uLL )
    {
      v71 = *(_BYTE *)(v13 - 0x57FFFFFFFDDLL);
      if ( (v71 & 0x20) != 0 )
      {
        *(_BYTE *)(v13 - 0x57FFFFFFFDDLL) = v71 & 0xDF;
        goto LABEL_179;
      }
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v64) && (*(_DWORD *)(v13 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
    {
      v58 = 1;
    }
    else if ( v72 <= v75 && v72 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v13 - 0x57FFFFFFFDDLL) & 0x20) != 0 )
    {
      v58 = 1;
    }
    else if ( v69 == 1 && (v74 & 0x4000000000000000LL) != 0 )
    {
      v58 = 1;
    }
    v76 = (v73 >> 39) & 0x3FF;
    v77 = *(_QWORD *)(qword_140C4E4C8 + 8 * v76);
    if ( v58 == 1 )
    {
      MiReturnCommit(*(_QWORD *)(qword_140C4E4C8 + 8 * v76), 1LL);
      v64 = v13 - 0x58000000000LL;
    }
    if ( (ULONG_PTR *)v77 == &MiSystemPartition )
    {
      v78 = KeGetCurrentPrcb();
      v79 = (int)v78->CachedResidentAvailable;
      if ( (_DWORD)v79 != -1 )
      {
        if ( (unsigned __int64)(v79 + 1) <= 0x100 )
        {
          while ( 1 )
          {
            v80 = _InterlockedCompareExchange((volatile signed __int32 *)&v78->CachedResidentAvailable, v79 + 1, v79);
            v65 = (_DWORD)v79 == v80;
            LODWORD(v79) = v80;
            if ( v65 )
              break;
            if ( v80 == -1 || (unsigned __int64)(v80 + 1LL) > 0x100 )
              goto LABEL_174;
          }
LABEL_179:
          if ( v69 )
LABEL_180:
            MiPfnReferenceCountIsZero(v64, v13 / 48);
          goto LABEL_181;
        }
LABEL_174:
        if ( (int)v79 > 192
          && (_DWORD)v79 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v78->CachedResidentAvailable,
                              192,
                              v79) )
        {
          v20 = (int)v79 - 192 + 1LL;
        }
        if ( !v20 )
          goto LABEL_179;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v77 + 7168), v20);
    goto LABEL_179;
  }
LABEL_181:
  _InterlockedAnd64((volatile signed __int64 *)(v13 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E98u);
  result = MiCompleteProtoPteFault(a1, v44, a2, 0, v116);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
