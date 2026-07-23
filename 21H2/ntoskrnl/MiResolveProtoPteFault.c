/*
 * XREFs of MiResolveProtoPteFault @ 0x1402B9CD0
 * Callers:
 *     MiDispatchFault @ 0x1402B3800 (MiDispatchFault.c)
 * Callees:
 *     MiResolvePageFileFault @ 0x140208108 (MiResolvePageFileFault.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiAllowGuardFault @ 0x140220004 (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x140220080 (KeInvalidAccessAllowed.c)
 *     MiChargePartitionResidentAvailable @ 0x14022F028 (MiChargePartitionResidentAvailable.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     MiResolveDemandZeroFault @ 0x1402B4450 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiResolveTransitionFault @ 0x1402BB090 (MiResolveTransitionFault.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiWriteValidPteVolatile @ 0x1402E5BC0 (MiWriteValidPteVolatile.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiReadPteShadow @ 0x140310780 (MiReadPteShadow.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     HvlNotifyLongSpinWait @ 0x140390290 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140391070 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiBadRefCount @ 0x1403F48DC (MiBadRefCount.c)
 */

__int64 __fastcall MiResolveProtoPteFault(__int64 a1, struct _LIST_ENTRY *a2, _QWORD *a3)
{
  __int64 v5; // rcx
  unsigned __int64 *v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // rbx
  int v9; // r14d
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r12
  unsigned __int64 v14; // rax
  struct _LIST_ENTRY *v15; // r8
  __int64 v16; // rcx
  __int64 v17; // r14
  __int64 v18; // rcx
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
  unsigned __int64 *v36; // rdi
  unsigned __int64 v37; // rbx
  unsigned __int64 v38; // rax
  __int64 v39; // r14
  unsigned __int64 v40; // rbx
  unsigned __int64 v41; // rdx
  __int64 v42; // rdi
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // r9
  struct _LIST_ENTRY *v45; // rdx
  __int64 v46; // rax
  unsigned int PfnPriority; // eax
  __int64 v48; // rdx
  unsigned __int64 v49; // r8
  __int64 result; // rax
  __int64 **v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rcx
  __int64 v54; // r11
  __int64 v55; // r11
  __int64 v56; // r10
  __int64 v57; // r10
  int v58; // r14d
  __int64 v59; // rdx
  __int64 **Address; // rax
  char v61; // r10
  __int64 v62; // r11
  int v63; // ecx
  __int64 v64; // r11
  bool v65; // zf
  __int64 v66; // r8
  __int64 v67; // rax
  int v68; // edi
  unsigned __int64 v69; // rdx
  char v70; // al
  unsigned __int64 v71; // rdx
  unsigned __int64 v72; // r8
  unsigned __int64 v73; // r9
  unsigned __int64 v74; // r10
  __int64 v75; // r8
  __int64 v76; // rbx
  struct _KPRCB *v77; // r8
  __int64 v78; // rdx
  signed __int32 v79; // eax
  __int64 v80; // r12
  unsigned __int64 v81; // r15
  unsigned __int64 v82; // r8
  struct _LIST_ENTRY *v83; // rdx
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
  __int16 v96; // ax
  __int64 v97; // rbx
  unsigned __int64 v98; // rbx
  __int64 v99; // rax
  unsigned __int64 v100; // rax
  char v101; // al
  int v102; // r15d
  unsigned int v103; // eax
  __int64 v104; // rdx
  _QWORD *v105; // r11
  unsigned __int64 v106; // rbx
  __int64 v107; // rax
  __int64 v108; // [rsp+20h] [rbp-D8h]
  __int64 v109; // [rsp+30h] [rbp-C8h]
  __int64 v110; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v111; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v112; // [rsp+48h] [rbp-B0h]
  unsigned __int64 v113; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v114; // [rsp+58h] [rbp-A0h]
  _WORD *v115; // [rsp+60h] [rbp-98h]
  unsigned __int64 v116; // [rsp+68h] [rbp-90h]
  unsigned __int64 v117; // [rsp+70h] [rbp-88h]
  int v118; // [rsp+78h] [rbp-80h] BYREF
  int v119; // [rsp+7Ch] [rbp-7Ch] BYREF
  int v120; // [rsp+80h] [rbp-78h] BYREF
  int v121; // [rsp+84h] [rbp-74h] BYREF
  unsigned __int64 *v122; // [rsp+88h] [rbp-70h]
  _BYTE *v123; // [rsp+90h] [rbp-68h]
  _QWORD *v124; // [rsp+98h] [rbp-60h]
  __int64 v125; // [rsp+A0h] [rbp-58h]
  __int64 v126; // [rsp+A8h] [rbp-50h]
  _BYTE *v127; // [rsp+B0h] [rbp-48h]

  v113 = 0LL;
  *a3 = 0LL;
  v125 = *(_QWORD *)(a1 + 56);
  v117 = *(_QWORD *)a1;
  v122 = (unsigned __int64 *)(((v117 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v5 = *(_QWORD *)(a1 + 16);
  v110 = v5;
  v112 = v5 & 1;
  if ( (v5 & 1) == 0 || (v116 = v5 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v5 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    v116 = 0LL;
  v114 = *(_QWORD *)(a1 + 96);
  v6 = (unsigned __int64 *)(((v114 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v111 = *v6;
  v7 = v111 & 1;
  do
  {
    if ( !v7 )
      return 3221225494LL;
    v8 = v111;
    if ( (v111 & 0x200) != 0 )
      return 3221225494LL;
    v9 = MiPteInShadowRange(&v111);
    if ( v9
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v11 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&v111 >> 3) & 0x1FF));
        if ( (v11 & 0x20) != 0 )
          v8 |= 0x20uLL;
        if ( (v11 & 0x42) != 0 )
          v8 |= 0x42uLL;
      }
      else
      {
        v8 = v111;
      }
    }
    v12 = (v8 >> 12) & 0xFFFFFFFFFLL;
    v13 = 48 * v12;
    v126 = 48 * v12;
  }
  while ( (*(_QWORD *)(48 * v12 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 );
  v118 = 0;
  v109 = v13 - 0x58000000000LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v118);
    while ( *(__int64 *)(v13 - 0x57FFFFFFFE8LL) < 0 );
  }
  v14 = *v6;
  v111 = v14;
  if ( (v14 & 1) == 0 || (v14 & 0x200) != 0 )
    goto LABEL_338;
  if ( v9
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
  {
    v15 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v15 )
    {
      v16 = *((_QWORD *)&v15->Flink + (((unsigned __int64)&v111 >> 3) & 0x1FF));
      if ( (v16 & 0x20) != 0 )
        v14 |= 0x20uLL;
      if ( (v16 & 0x42) != 0 )
        v14 |= 0x42uLL;
    }
    else
    {
      v14 = v111;
    }
  }
  if ( v12 != ((v14 >> 12) & 0xFFFFFFFFFLL) )
  {
LABEL_338:
    _InterlockedAnd64((volatile signed __int64 *)(v13 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
    return 3221225494LL;
  }
  v17 = v13 - 0x58000000000LL;
  v18 = 0x1000000000LL;
  CurrentPrcb = (struct _KPRCB *)0xFFFFFA8000000008LL;
  v20 = 1LL;
  v21 = *(_QWORD *)(v109 + 40);
  v22 = 0xFFFFFA8000000020uLL;
  if ( (v21 & 0x1000000000LL) != 0 || (v21 & 0x2000000000000LL) != 0 )
    goto LABEL_62;
  v18 = *(unsigned __int16 *)(v13 - 0x57FFFFFFFE0LL);
  v23 = *(_QWORD *)(v13 - 0x57FFFFFFFE8LL) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (_WORD)v18 )
  {
    if ( (_WORD)v18 != 1 )
    {
      if ( (_WORD)v18 != 2 || !v23 )
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
  if ( (unsigned int)MI_PFN_IS_PROTO(v109) && (*(_DWORD *)(v13 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
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
  v29 = *(ULONG_PTR **)(qword_140C4E688 + 8 * ((v26 >> 39) & 0x3FF));
  if ( v24 )
  {
    v115 = (_WORD *)(v13 - 0x57FFFFFFFE0LL);
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
        v18 = (unsigned int)(CachedResidentAvailable - 1);
        v31 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    v18,
                                    CachedResidentAvailable);
        if ( v31 == CachedResidentAvailable )
          goto LABEL_62;
      }
      while ( CachedResidentAvailable );
    }
  }
  if ( !(unsigned int)MiChargePartitionResidentAvailable((__int64)v29, 1uLL, 0xFFFFFFFFLL) )
  {
    v115 = (_WORD *)(v13 - 0x57FFFFFFFE0LL);
    if ( v24 )
    {
      MiReturnCommit(v29, 1LL, v21, v22);
      v115 = (_WORD *)(v13 - 0x57FFFFFFFE0LL);
    }
    goto LABEL_63;
  }
LABEL_62:
  ++*(_WORD *)(v13 - 0x57FFFFFFFE0LL);
  v115 = (_WORD *)(v13 - 0x57FFFFFFFE0LL);
  v17 = v13 - 0x58000000000LL;
LABEL_63:
  v124 = (_QWORD *)(v13 - 0x57FFFFFFFF8LL);
  v32 = (_BYTE *)(*(_QWORD *)(v13 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
  v123 = v32;
  v33 = (char *)(v13 - 0x57FFFFFFFDELL);
  v34 = *(_BYTE *)(v13 - 0x57FFFFFFFDELL);
  v127 = (_BYTE *)(v13 - 0x57FFFFFFFDELL);
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
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18, CurrentPrcb, v21, v22, v108) )
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
    v32 = v123;
    v20 = 1LL;
  }
  *v33 = v34 | 0x20;
  if ( (*(_QWORD *)(v13 - 0x57FFFFFFFE8LL) & 0x4000000000000000LL) == 0 && (*v32 & 0x20) == 0 )
    MiWriteValidPteVolatile(v32, 1LL);
  _InterlockedAnd64((volatile signed __int64 *)(v13 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  v36 = (unsigned __int64 *)v114;
  while ( 1 )
  {
    while ( 1 )
    {
      v37 = *v36;
      if ( (*v36 & 1) == 0 )
        break;
      v38 = *v36;
LABEL_87:
      if ( (*(_QWORD *)(48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
      {
        v39 = 48 * ((v38 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
        v119 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v119);
          while ( *(__int64 *)(v39 + 24) < 0 );
        }
        if ( *v36 == v37 )
          goto LABEL_94;
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v37 & 0x400) != 0 || (v37 & 0x800) == 0 )
      break;
    if ( !v37 || !qword_140C4DF80 || (v37 & qword_140C4DF80) != 0 )
    {
      v38 = *v36;
      if ( qword_140C4DF80 && (v37 & 0x10) == 0 )
        v38 = v37 & ~qword_140C4DF80;
      goto LABEL_87;
    }
  }
  v39 = 0LL;
LABEL_94:
  v40 = (unsigned __int64)v36;
  v41 = 0xFFFFF6FB7DBED000uLL;
  v42 = *v36;
  v43 = v42;
  v44 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v40 >= 0xFFFFF6FB7DBED000uLL && v40 <= 0xFFFFF6FB7DBED7F8uLL )
  {
    if ( (unsigned int)MiPteHasShadow() && (v42 & 1) != 0 && ((v42 & 0x20) == 0 || (v42 & 0x42) == 0) )
    {
      v45 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v45 )
      {
        v43 = v42 | 0x20;
        v46 = *((_QWORD *)&v45->Flink + ((v40 >> 3) & 0x1FF));
        if ( (v46 & 0x20) == 0 )
          v43 = v42;
        if ( (v46 & 0x42) != 0 )
          v43 |= 0x42uLL;
      }
    }
    v41 = 0xFFFFF6FB7DBED000uLL;
  }
  v113 = v43;
  if ( (v43 & 1) == 0 )
  {
    if ( !v43 )
    {
LABEL_184:
      LOBYTE(v41) = 17;
      MiUnlockProtoPoolPage(v109, v41);
      return 3221225477LL;
    }
    LOBYTE(v80) = 0;
    v81 = *v122;
    if ( (unsigned __int64)v122 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v122 <= v44 )
    {
      if ( (unsigned int)MiPteHasShadow() && (v81 & 1) != 0 && ((v81 & 0x20) == 0 || (v81 & 0x42) == 0) )
      {
        v83 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v83 )
        {
          v84 = *((_QWORD *)&v83->Flink + ((v82 >> 3) & 0x1FF));
          v85 = v81 | 0x20;
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
      if ( qword_140C4DF80 && (v81 & 0x10) == 0 )
        v86 = v81 & ~qword_140C4DF80;
      if ( HIDWORD(v86) == 0xFFFFFFFF )
      {
        v87 = a1;
        v80 = (v81 >> 5) & 0x1F;
        if ( ((v81 >> 5) & 0x18) == 0x10 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
          goto LABEL_336;
        v88 = v112;
        v41 = (unsigned __int64)a2;
LABEL_251:
        v96 = v43;
        if ( qword_140C4DF80 && (v43 & 0x10) == 0 )
          v96 = v43 & ~(_WORD)qword_140C4DF80;
        if ( (v96 & 0x400) == 0
          && (v96 & 0x800) == 0
          && (v96 & 4) == 0
          && (v80 & 5) == 5
          && (v41 || (((unsigned __int8)MI_READ_PTE_LOCK_FREE(&v113) >> 5) & 5) != 4)
          && ((*(_BYTE *)(v125 + 184) & 7) != 0 || !KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[12])
          && ((MiFlags & 0x10000) == 0 || v117 < 0xFFFF800000000000uLL || (v80 & 2) == 0) )
        {
          v97 = v126;
          v121 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v97 - 0x57FFFFFFFE8LL), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v121);
            while ( *(__int64 *)(v97 - 0x57FFFFFFFE8LL) < 0 );
          }
          *v127 &= ~0x20u;
          MiRemoveLockedPageChargeAndDecRef(v109);
          _InterlockedAnd64((volatile signed __int64 *)(v97 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
          if ( v116 )
          {
            if ( !v88 )
              return 0LL;
            v98 = v110 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( *(_BYTE *)(v110 & 0xFFFFFFFFFFFFFFFEuLL) != 1 || (*(_DWORD *)(v98 + 80) & 0x4000) == 0 )
              return 0LL;
            v99 = v110;
          }
          else
          {
            v99 = v110;
            v98 = v110 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v88 )
          {
            if ( *(_BYTE *)v98 != 1 && *(_BYTE *)v98 != 3 && *(_BYTE *)v98 != 6 )
              goto LABEL_284;
          }
          else if ( KeInvalidAccessAllowed(v99, 0) != 1 )
          {
            goto LABEL_284;
          }
          if ( (!v88 || *(_BYTE *)v98 != 6) && v117 >= 0xFFFF800000000000uLL )
            return 3221225477LL;
LABEL_284:
          if ( (v81 & 0x400) == 0 )
            goto LABEL_289;
          v100 = v81;
          if ( qword_140C4DF80 && (v81 & 0x10) == 0 )
            v100 = v81 & ~qword_140C4DF80;
          if ( HIDWORD(v100) != 0xFFFFFFFF )
          {
LABEL_289:
            v81 = v43;
            if ( (unsigned int)MiPteInShadowRange(&v113) )
              v81 = MiReadPteShadow(&v113, v43);
          }
          v101 = v81 >> 5;
          v102 = v101 & 0x18;
          v103 = v101 & 2 | 4;
          if ( v102 == 8 )
          {
            v103 |= 8u;
          }
          else if ( v102 == 24 )
          {
            v103 |= 0x18u;
          }
          v104 = MiSwizzleInvalidPte(32LL * v103);
          v105 = v122;
          if ( (unsigned __int64)v122 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v122 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            if ( (unsigned int)MiPteHasShadow() )
            {
              if ( !HIBYTE(word_140C4E048) && (v104 & 1) != 0 )
                v104 |= 0x8000000000000000uLL;
              *v105 = v104;
              MiWritePteShadow((__int64)v105, v104);
              return MiResolveDemandZeroFault((unsigned __int64 *)v87, (unsigned __int64)v105, 0LL, (__int64)a2);
            }
            if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
              && (v104 & 1) != 0 )
            {
              v104 |= 0x8000000000000000uLL;
            }
          }
          *v105 = v104;
          return MiResolveDemandZeroFault((unsigned __int64 *)v87, (unsigned __int64)v105, 0LL, (__int64)a2);
        }
        if ( (v43 & 0x400) != 0 )
        {
          if ( (*(_BYTE *)(v87 + 69) & 8) == 0 )
            return MiResolveMappedFileFault(v87, v40, v109, a3);
          goto LABEL_336;
        }
        if ( (v43 & 0x800) != 0 )
          return MiResolveTransitionFault(v87, v40, v109, a2, a3);
        if ( (unsigned int)MiPteInShadowRange(&v113) )
          LOBYTE(v43) = MiReadPteShadow(&v113, v43);
        if ( (v43 & 4) == 0 )
        {
          if ( v116 )
          {
            if ( !v88
              || (v106 = v110 & 0xFFFFFFFFFFFFFFFEuLL, *(_BYTE *)(v110 & 0xFFFFFFFFFFFFFFFEuLL) != 1)
              || (*(_DWORD *)(v106 + 80) & 0x4000) == 0 )
            {
              LOBYTE(v41) = 17;
              MiUnlockProtoPoolPage(v109, v41);
              return 0LL;
            }
            v107 = v110;
          }
          else
          {
            v107 = v110;
            v106 = v110 & 0xFFFFFFFFFFFFFFFEuLL;
          }
          if ( v88 )
          {
            if ( *(_BYTE *)v106 != 1 && *(_BYTE *)v106 != 3 && *(_BYTE *)v106 != 6 )
              return MiResolveDemandZeroFault((unsigned __int64 *)v87, v114, v109, (__int64)a2);
          }
          else if ( KeInvalidAccessAllowed(v107, 0) != 1 )
          {
            return MiResolveDemandZeroFault((unsigned __int64 *)v87, v114, v109, (__int64)a2);
          }
          if ( (!v88 || *(_BYTE *)v106 != 6) && v117 >= 0xFFFF800000000000uLL )
          {
            if ( !MiIsPrototypePteVadLookup(v81) )
              v81 = MI_READ_PTE_LOCK_FREE(&v113);
            if ( ((v81 >> 5) & 0x18) == 0x10 )
              goto LABEL_184;
          }
          return MiResolveDemandZeroFault((unsigned __int64 *)v87, v114, v109, (__int64)a2);
        }
        if ( (*(_BYTE *)(v87 + 69) & 8) == 0 )
          return MiResolvePageFileFault((unsigned __int64 *)v87, v40, v109, a3);
LABEL_336:
        LOBYTE(v41) = 17;
        MiUnlockProtoPoolPage(v109, v41);
        return 3221226548LL;
      }
    }
    if ( (v81 & 8) != 0 )
    {
      v41 = (unsigned __int64)a2;
LABEL_249:
      v88 = v112;
      goto LABEL_250;
    }
    v80 = (v43 >> 5) & 0x1F;
    v89 = ((v43 >> 5) & 0x1F) >> 3;
    if ( v89 == 2 && (*(_BYTE *)(a1 + 69) & 8) != 0 )
      goto LABEL_336;
    if ( v40 >= 0xFFFFF6FB7DBED000uLL && v40 <= v44 && (unsigned int)MiPteHasShadow() )
    {
      if ( (v42 & 1) == 0 )
        goto LABEL_224;
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
      v41 = (unsigned __int64)a2;
      if ( a2 && (v42 & 0xA00) == 0 )
      {
        v93 = -1073741819;
LABEL_244:
        if ( v39 )
          _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        LOBYTE(v41) = 17;
        MiUnlockProtoPoolPage(v109, v41);
        return v93;
      }
      goto LABEL_249;
    }
LABEL_224:
    v41 = (unsigned __int64)a2;
    if ( !a2 )
      LOBYTE(v20) = 0;
    if ( *((char *)&MiReadWrite + ((unsigned __int8)v43 >> 5)) - (char)v20 < 10 )
    {
      v93 = -1073741819;
      goto LABEL_244;
    }
    v88 = v112;
    if ( v89 != 2 || v112 && *(_BYTE *)(v110 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      v40 = v114;
LABEL_250:
      v87 = a1;
      goto LABEL_251;
    }
    if ( !MiAllowGuardFault(v110) )
    {
      v93 = -1073741819;
      goto LABEL_244;
    }
    v94 = v42 & 0xFFFFFFFFFFFFFC1FuLL | (32 * ((v43 >> 5) & 0xF));
    v95 = (unsigned __int64 *)v114;
    if ( (unsigned int)MiPteInShadowRange(v114) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        if ( !HIBYTE(word_140C4E048) && (v94 & 1) != 0 )
          v94 |= 0x8000000000000000uLL;
        *v95 = v94;
        MiWritePteShadow((__int64)v95, v94);
        goto LABEL_243;
      }
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
        && (v94 & 1) != 0 )
      {
        v94 |= 0x8000000000000000uLL;
      }
    }
    *v95 = v94;
LABEL_243:
    v93 = -2147483647;
    goto LABEL_244;
  }
  if ( v116 )
  {
    PfnPriority = MiGetPfnPriority(v39);
    if ( (unsigned int)v48 > PfnPriority )
      *(_BYTE *)(v39 + 35) = v48 | *(_BYTE *)(v39 + 35) & 0xF8;
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), v49);
    LOBYTE(v48) = 17;
    MiUnlockProtoPoolPage(v109, v48);
    return 0LL;
  }
  if ( (unsigned int)MI_PFN_IS_PROTO(v39) )
  {
    v53 = *(_QWORD *)(v39 + 16);
    if ( (v53 & 0x400) != 0 && ((*(_QWORD *)(v39 + 40) >> 60) & 7) != 3 )
    {
      v54 = *(_QWORD *)(v39 + 16);
      if ( qword_140C4DF80 && (v53 & 0x10) == 0 )
        v54 = ~qword_140C4DF80 & v53;
      v55 = v54 >> 16;
      if ( (*(_DWORD *)(*(_QWORD *)v55 + 56LL) & 0x20) != 0 )
      {
        v56 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v55 + 96LL) + 40LL);
        if ( v56 )
        {
          if ( (v56 & 0xFFFFFFFFFFFFFFF8uLL) != 8 && (v56 & 3) != 2 )
          {
            if ( v117 >= 0xFFFF800000000000uLL )
            {
              if ( (MiFlags & 0x10000) == 0 || (v53 & 0x40) == 0 )
                goto LABEL_124;
LABEL_137:
              _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              LOBYTE(v51) = 17;
              MiUnlockProtoPoolPage(v109, v51);
              return 3221226536LL;
            }
            Address = MiLocateAddress(v117);
            v51 = Address;
            if ( !Address )
              goto LABEL_137;
            v63 = *((_DWORD *)Address + 12);
            if ( (v63 & 0x70) != 0x20 )
              goto LABEL_137;
            if ( (v63 & 0xF80) != 0x80
              && (((_DWORD)Address[8] & 0x8000000) == 0 || (v61 & 4) != 0)
              && ((MiFlags & 0x400) == 0 || (*(_BYTE *)(v62 + 34) & 2) == 0) )
            {
              goto LABEL_137;
            }
          }
        }
      }
    }
  }
LABEL_124:
  v57 = 0x3FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v39 + 24) ^= (*(_QWORD *)(v39 + 24) ^ (*(_QWORD *)(v39 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v58 = 0;
  v120 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 0x57FFFFFFFE8LL), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v120);
      while ( *(__int64 *)(v13 - 0x57FFFFFFFE8LL) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 0x57FFFFFFFE8LL), 0x3FuLL) );
    v57 = 0x3FFFFFFFFFFFFFFFLL;
  }
  *v33 &= ~0x20u;
  v59 = (unsigned __int16)*v115;
  if ( !(_WORD)v59 )
    MiBadRefCount(v109);
  v64 = v13 - 0x58000000000LL;
  v65 = (_WORD)v59 == 1;
  LOWORD(v59) = v59 - 1;
  *v115 = v59;
  if ( v65 && (unsigned int)MiIsPfnFileOnly(v109, v59, v52) )
    goto LABEL_179;
  v66 = *(_QWORD *)(v64 + 40);
  if ( (v66 & 0x1000000000LL) == 0 && (v66 & 0x2000000000000LL) == 0 )
  {
    v67 = v57 & *(_QWORD *)(v13 - 0x57FFFFFFFE8LL);
    if ( !(_WORD)v59 )
    {
      v68 = 1;
      goto LABEL_151;
    }
    if ( (_WORD)v59 != 1 )
    {
      if ( (_WORD)v59 == 2 && v67 )
      {
LABEL_148:
        if ( (*v33 & 8) != 0 )
          goto LABEL_149;
      }
      goto LABEL_180;
    }
    if ( !v67 )
      goto LABEL_148;
LABEL_149:
    v68 = 0;
LABEL_151:
    v69 = *v124 | 0x8000000000000000uLL;
    if ( v69 > 0xFFFFF6BFFFFFFF78uLL || v69 < 0xFFFFF68000000000uLL )
    {
      v70 = *(_BYTE *)(v13 - 0x57FFFFFFFDDLL);
      if ( (v70 & 0x20) != 0 )
      {
        *(_BYTE *)(v13 - 0x57FFFFFFFDDLL) = v70 & 0xDF;
        goto LABEL_178;
      }
    }
    if ( (unsigned int)MI_PFN_IS_PROTO(v64) && (*(_DWORD *)(v13 - 0x57FFFFFFFF0LL) & 0x400LL) != 0 )
    {
      v58 = 1;
    }
    else if ( v71 <= v74 && v71 >= 0xFFFFF68000000000uLL && (*(_BYTE *)(v13 - 0x57FFFFFFFDDLL) & 0x20) != 0 )
    {
      v58 = 1;
    }
    else if ( v68 == 1 )
    {
      v73 >>= 62;
      if ( (v73 & 1) != 0 )
        v58 = 1;
    }
    v75 = (v72 >> 39) & 0x3FF;
    v76 = *(_QWORD *)(qword_140C4E688 + 8 * v75);
    if ( v58 == 1 )
    {
      MiReturnCommit(*(_QWORD *)(qword_140C4E688 + 8 * v75), 1LL, v75, v73);
      v64 = v13 - 0x58000000000LL;
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
            v65 = (_DWORD)v78 == v79;
            LODWORD(v78) = v79;
            if ( v65 )
              break;
            if ( v79 == -1 || (unsigned __int64)(v79 + 1LL) > 0x100 )
              goto LABEL_173;
          }
LABEL_178:
          if ( v68 )
LABEL_179:
            MiPfnReferenceCountIsZero(v64, v13 / 48);
          goto LABEL_180;
        }
LABEL_173:
        if ( (int)v78 > 192
          && (_DWORD)v78 == _InterlockedCompareExchange(
                              (volatile signed __int32 *)&v77->CachedResidentAvailable,
                              192,
                              v78) )
        {
          v20 = (int)v78 - 192 + 1LL;
        }
        if ( !v20 )
          goto LABEL_178;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v76 + 7168), v20);
    goto LABEL_178;
  }
LABEL_180:
  _InterlockedAnd64((volatile signed __int64 *)(v13 - 0x57FFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
  __incgsdword(0x2E98u);
  result = MiCompleteProtoPteFault(a1, v43, a2, 0, v110);
  if ( (int)result >= 0 )
    return 272LL;
  return result;
}
