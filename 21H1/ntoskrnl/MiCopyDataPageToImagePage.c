/*
 * XREFs of MiCopyDataPageToImagePage @ 0x1402B988C
 * Callers:
 *     MiResolveMappedFileFault @ 0x1402B7380 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     PsGetIoPriorityThread @ 0x140226200 (PsGetIoPriorityThread.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140247F40 (MiReleasePtes.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14026B750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     MiEndingOffset @ 0x14027D6D0 (MiEndingOffset.c)
 *     MiObtainProtoReference @ 0x140282684 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140282754 (MiRelockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140285070 (MiRemoveLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14028D680 (MiInsertAndUnlockStandbyPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiStartingOffset @ 0x14029EDC0 (MiStartingOffset.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402A37D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSessionIdForVa @ 0x1402B6250 (MiGetSessionIdForVa.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402D80A0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F1320 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiDecayPfnFullyInitialized @ 0x1402FCDFC (MiDecayPfnFullyInitialized.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x1402FD72C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x1402FD8C4 (MiTryLockLeafPage.c)
 *     MiCreateDecayPfn @ 0x1402FF368 (MiCreateDecayPfn.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140318B64 (MiUnlockNestedProtoPoolPage.c)
 *     MiAdvanceFaultList @ 0x140340BDC (MiAdvanceFaultList.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiInitializeTransitionPfn @ 0x14034BD4C (MiInitializeTransitionPfn.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPage @ 0x1403F9E10 (KeCopyPage.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rdi
  unsigned int SessionIdForVa; // eax
  unsigned __int64 v13; // rax
  volatile LONG *v14; // r15
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  ULONG_PTR v24; // rdi
  unsigned __int64 v26; // rsi
  __int64 v27; // rdi
  unsigned int v28; // ecx
  ULONG_PTR *v29; // r15
  __int64 v30; // rcx
  unsigned __int64 v31; // r12
  __int64 v32; // rcx
  __int64 v33; // rax
  ULONG_PTR v34; // rcx
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *v36; // rsi
  ULONG_PTR v37; // rdi
  char v38; // r15
  int locked; // eax
  ULONG_PTR v40; // rcx
  ULONG_PTR *v41; // r13
  __int64 v42; // rdi
  __int64 v43; // rbx
  unsigned __int64 v44; // rsi
  char v45; // al
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  ULONG_PTR v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 SchedulerAssist; // r9
  _QWORD *v56; // rsi
  __int64 v57; // r12
  unsigned __int64 ValidPte; // rax
  int v59; // r15d
  int v60; // edi
  unsigned __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // r9
  unsigned __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r9
  unsigned __int64 v68; // rbx
  int v69; // r15d
  __int64 v70; // rdx
  __int64 v71; // rcx
  int v72; // eax
  __int64 DecayPfn; // rdi
  __int64 v74; // rbx
  unsigned __int8 v75; // si
  unsigned __int8 v76; // bl
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // r9
  unsigned int v80; // edi
  __int64 v81; // rdx
  bool v82; // zf
  char v83; // r11
  char v84; // r11
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v87; // eax
  volatile LONG *SpinLock; // [rsp+28h] [rbp-99h]
  unsigned int v89; // [rsp+30h] [rbp-91h]
  _QWORD *Src; // [rsp+38h] [rbp-89h]
  void *Srca; // [rsp+38h] [rbp-89h]
  struct _KTHREAD *v92; // [rsp+40h] [rbp-81h]
  unsigned __int64 v93; // [rsp+48h] [rbp-79h]
  ULONG_PTR v94; // [rsp+50h] [rbp-71h] BYREF
  int v95; // [rsp+58h] [rbp-69h] BYREF
  ULONG_PTR v96; // [rsp+60h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter2[10]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v98; // [rsp+B8h] [rbp-9h]
  unsigned __int8 v100; // [rsp+120h] [rbp+5Fh] BYREF
  unsigned __int64 v101; // [rsp+128h] [rbp+67h]
  __int64 v102; // [rsp+130h] [rbp+6Fh]

  v102 = a4;
  v101 = a3;
  v100 = 0;
  v8 = a1;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v9 = *(_QWORD *)(v8 + 224);
  LOBYTE(v10) = 0;
  v96 = 0LL;
  v11 = *a2;
  Src = (_QWORD *)*a2;
  SessionIdForVa = MiGetSessionIdForVa(v9);
  v13 = MiStartingOffset(a2, a3, SessionIdForVa);
  v14 = (volatile LONG *)(v11 + 72);
  v93 = v13;
  SpinLock = (volatile LONG *)(v11 + 72);
  v15 = v13;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
  v16 = *(_QWORD *)(v11 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4C8C0);
  v19 = *(__int64 **)(v16 + 40);
  v20 = *v19;
  if ( !*v19 || !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v20 + 72, v19, v17, v18) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
LABEL_3:
    if ( (v10 & 1) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v20 + 72));
    if ( (v10 & 2) == 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
    if ( BugCheckParameter2[5] )
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[6] )
      MiUnlockNestedProtoPoolPage(BugCheckParameter2[6], v21, v22);
    v24 = BugCheckParameter2[0];
    if ( BYTE1(BugCheckParameter2[4]) == 1 )
      MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2[0]);
    if ( v24 )
      _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[1] )
    {
      LOBYTE(v21) = 2;
      MiUnlockProtoPoolPage(BugCheckParameter2[1], v21, v22, v23);
    }
    if ( (v10 & 4) != 0 )
      MiDereferenceControlAreaPfnList(Src, 0LL, v22, 3LL);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C8C0);
  v22 = 0LL;
  v23 = 1LL;
  LOBYTE(v10) = 1;
  if ( !*(_QWORD *)(v20 + 32) || (*(_DWORD *)(v20 + 56) & 3) != 0 )
    goto LABEL_3;
  v98 = MiEndingOffset((__int64)a2);
  v26 = v15 >> 12;
  v10 = v23 + 8;
  v27 = v20 + 128;
  if ( (unsigned int)(v15 >> 12) != (unsigned int)((v98 - 1) >> 12) )
    v10 = v23;
  while ( 1 )
  {
    v28 = *(_DWORD *)(v27 + 44);
    if ( (unsigned int)v26 < v28 )
      break;
    v27 = *(_QWORD *)(v27 + 16);
    LODWORD(v26) = v26 - v28;
    if ( !v27 )
      goto LABEL_3;
  }
  v29 = BugCheckParameter2;
  v89 = 2;
  while ( 1 )
  {
    if ( *(_DWORD *)(v27 + 104) == (_DWORD)v22 )
      goto LABEL_96;
    v30 = *(_QWORD *)(v27 + 8);
    v21 = 0x7FFFFFFFF8LL;
    if ( !v30 )
      goto LABEL_96;
    v31 = v30 + 8LL * (unsigned int)v26;
    if ( !v31 )
      goto LABEL_96;
    v32 = (v31 >> 9) & 0x7FFFFFFFF8LL;
    v33 = (v101 >> 9) & 0x7FFFFFFFF8LL;
    v29[2] = v31;
    if ( v32 == v33 || v29 != BugCheckParameter2 && v32 == ((*(v29 - 3) >> 9) & 0x7FFFFFFFF8LL) )
    {
      MiTryLockLeafPage(v31, 0x7FFFFFFFF8LL, v29);
    }
    else
    {
      if ( (int)MiTryLockProtoPoolPageAtDpc(v31, 0x7FFFFFFFF8LL, &v96, v29) < 0 )
        goto LABEL_96;
      v29[1] = v96;
    }
    v34 = *v29;
    if ( !*v29
      || (*(_BYTE *)(v34 + 34) & 0x20) != 0
      || (*(_BYTE *)(v34 + 35) & 0x40) != 0
      || *(_WORD *)(v34 + 32) >= 0x7FFFu )
    {
LABEL_96:
      v14 = SpinLock;
      goto LABEL_3;
    }
    v29[3] = MI_READ_PTE_LOCK_FREE(v31);
    if ( v29 != BugCheckParameter2 || (v93 & 0xFFF) == 0 || v10 >= 8 )
      break;
    v23 = 1LL;
    v29 += 5;
    ++v89;
    LODWORD(v26) = v26 + 1;
    v22 = 0LL;
    if ( (unsigned int)v26 >= *(_DWORD *)(v27 + 44) )
    {
      v27 = *(_QWORD *)(v27 + 16);
      LODWORD(v26) = 0;
      if ( !v27 )
        goto LABEL_96;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v20 + 72));
  ++Src[4];
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  CurrentThread = KeGetCurrentThread();
  v36 = BugCheckParameter2;
  v37 = BugCheckParameter2[0];
  LOBYTE(v10) = v10 & 0xF8 | 6;
  v92 = CurrentThread;
  v22 = 0LL;
  v94 = BugCheckParameter2[0];
  if ( !BugCheckParameter2[0] )
    goto LABEL_55;
  while ( 1 )
  {
    v38 = 0;
    if ( (v36[3] & 1) == 0 && !*(_WORD *)(v37 + 32) )
    {
      *((_BYTE *)v36 + 32) = (*(_BYTE *)(v37 + 35) & 8) != 0;
      if ( !(unsigned int)MiUnlinkPageFromList(v37, 0) )
      {
        MiDiscardTransitionPteEx(v37, 0LL);
        goto LABEL_96;
      }
      v38 = 1;
      *(_QWORD *)(v37 + 24) &= 0xC000000000000000uLL;
    }
    locked = MiAddLockedPageCharge(v37, 0);
    v22 = 0LL;
    if ( !locked )
    {
      if ( v38 )
        MiPfnReferenceCountIsZero(v37, (__int64)(v37 + 0x58000000000LL) / 48);
      goto LABEL_96;
    }
    *((_BYTE *)v36 + 33) = 1;
    if ( v36 != BugCheckParameter2 )
      break;
    v36 += 5;
    v37 = *v36;
    v94 = v37;
    if ( !v37 )
      goto LABEL_54;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v40 = v36[1];
  if ( v40 )
  {
    MiUnlockNestedProtoPoolPage(v40, v21, 0LL);
    v22 = 0LL;
    v36[1] = 0LL;
  }
LABEL_54:
  CurrentThread = v92;
LABEL_55:
  *(_DWORD *)(v8 + 192) |= 0x20u;
  v41 = BugCheckParameter2;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[0] + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BugCheckParameter2[1] )
  {
    LOBYTE(v21) = 2;
    MiUnlockProtoPoolPage(BugCheckParameter2[1], v21, 0LL, v23);
    v22 = 0LL;
  }
  v42 = a5;
  v43 = 48 * a5 - 0x58000000000LL;
  v95 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v95, v21, v22, v23);
      while ( *(__int64 *)(v43 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) );
    CurrentThread = v92;
  }
  v44 = v101;
  MiInitializeTransitionPfn(v42, v101, -1LL);
  v45 = *(_BYTE *)(v43 + 34) & 0xF8 | 2;
  *(_BYTE *)(v43 + 34) = v45;
  *(_WORD *)(v43 + 32) = 1;
  *(_BYTE *)(v43 + 34) = v45 | 0x20;
  *(_QWORD *)v43 = v8 + 32;
  if ( (v102 & 1) != 0 && *(_BYTE *)(v102 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList(v102 & 0xFFFFFFFFFFFFFFFEuLL);
    *(_DWORD *)(v8 + 192) |= 8u;
  }
  *(_BYTE *)(v43 + 35) ^= (*(_BYTE *)(v43 + 35) ^ (*(_DWORD *)(v8 + 192) >> 9)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v8 + 168) = MI_READ_PTE_LOCK_FREE(v44);
  *(_QWORD *)(v8 + 232) = v44;
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v8 + 192) |= 0x80u;
  v48 = a6;
  *(_QWORD *)(v8 + 272) = 0LL;
  *(_QWORD *)(v8 + 304) = 0LL;
  *(_DWORD *)(v8 + 280) = 56;
  *(_QWORD *)(v8 + 312) = 4096LL;
  *(_QWORD *)(v8 + 320) = v42;
  MiObtainProtoReference(v48, 0LL, v46, v47);
  LOBYTE(v49) = 2;
  MiUnlockProtoPoolPage(v48, v49, v50, v51);
  *(_WORD *)(v8 + 282) |= 0x42u;
  *(_QWORD *)(v8 + 248) = v43;
  *(_QWORD *)(v8 + 208) = Src;
  *(_QWORD *)(v8 + 96) = v93;
  *(_QWORD *)(v8 + 240) = v44;
  *(_QWORD *)(v8 + 200) = 0LL;
  *(_QWORD *)(v8 + 160) = v48;
  v52 = MiReservePtes((__int64)&qword_140C4EE80, v89);
  v56 = (_QWORD *)v52;
  if ( v52 )
  {
    v57 = (__int64)(v52 << 25) >> 16;
    Srca = (void *)(v57 + (v93 & 0xFFF) + 4096);
    ValidPte = MiMakeValidPte(v52, v42, 2684354564LL, SchedulerAssist);
    v59 = 0;
    v60 = 0;
    v61 = ValidPte;
    if ( !MiPteInShadowRange((unsigned __int64)v56) )
      goto LABEL_63;
    if ( (unsigned int)MiPteHasShadow(v62, 0x8000000000000000uLL) )
    {
      v60 = 1;
      if ( !HIBYTE(word_140C4DF48) )
      {
        v82 = (v61 & 1) == 0;
LABEL_116:
        if ( !v82 )
          v61 |= v81;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v82 = (v61 & 1) == 0;
      goto LABEL_116;
    }
LABEL_63:
    *v56 = v61;
    if ( v60 )
      MiWritePteShadow(v56, v61);
    v64 = MiMakeValidPte(
            (unsigned __int64)(v56 + 1),
            (signed __int64)(BugCheckParameter2[0] + 0x58000000000LL) / 48,
            536870913LL,
            v63);
    if ( MiPteInShadowRange((unsigned __int64)(v56 + 1)) )
    {
      if ( (unsigned int)MiPteHasShadow(v66, v65) )
      {
        v59 = 1;
        if ( HIBYTE(word_140C4DF48) != v83 )
          goto LABEL_66;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_66;
      }
      if ( (v64 & 1) != 0 )
        v64 |= 0x8000000000000000uLL;
    }
LABEL_66:
    v56[1] = v64;
    if ( v59 )
      MiWritePteShadow(v56 + 1, v64);
    if ( BugCheckParameter2[5] )
    {
      v68 = MiMakeValidPte(
              (unsigned __int64)(v56 + 2),
              (signed __int64)(BugCheckParameter2[5] + 0x58000000000LL) / 48,
              536870913LL,
              v67);
      v69 = 0;
      if ( MiPteInShadowRange((unsigned __int64)(v56 + 2)) )
      {
        if ( (unsigned int)MiPteHasShadow(v71, v70) )
        {
          v69 = 1;
          if ( HIBYTE(word_140C4DF48) != v84 )
            goto LABEL_70;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_70;
        }
        if ( (v68 & 1) != 0 )
          v68 |= 0x8000000000000000uLL;
      }
LABEL_70:
      v56[2] = v68;
      if ( v69 )
        MiWritePteShadow(v56 + 2, v68);
    }
    if ( v93 + 4096 > v98 )
    {
      v80 = ((_WORD)v98 - (_WORD)v93) & 0xFFF;
      memmove((void *)v57, Srca, ((_WORD)v98 - (_WORD)v93) & 0xFFF);
      memset((void *)(v80 + v57), 0, 4096 - v80);
    }
    else
    {
      KeCopyPage(v57, Srca);
    }
    MiReleasePtes((__int64)&qword_140C4EE80, v56, v89);
    __incgsdword(0x2E98u);
    v48 = a6;
    v72 = 0;
  }
  else
  {
    v72 = -1073741670;
  }
  *(_DWORD *)(v8 + 80) = v72;
  DecayPfn = 0LL;
  if ( LOBYTE(BugCheckParameter2[4]) || LOBYTE(BugCheckParameter2[9]) )
    DecayPfn = MiCreateDecayPfn();
  v74 = BugCheckParameter2[0];
  v94 = BugCheckParameter2[0];
  if ( BugCheckParameter2[0] )
  {
    while ( 2 )
    {
      v100 = MiLockPageInline(v74, v53, v54);
      v75 = v100;
      if ( (unsigned int)MiRemoveLockedPageCharge(v74) )
      {
        if ( DecayPfn && *((_BYTE *)v41 + 32) && (*(_QWORD *)(v74 + 24) & 0x4000000000000000LL) == 0 )
        {
          MiInsertAndUnlockStandbyPages(DecayPfn, &v94, 1u, v75);
          v100 = 17;
          goto LABEL_85;
        }
        MiPfnReferenceCountIsZero(v74, (v74 + 0x58000000000LL) / 48);
      }
      if ( v75 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v74 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v76 = v100;
          if ( v100 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = (__int64)CurrentPrcb->SchedulerAssist;
            v76 = v100;
            v53 = -1LL << (v100 + 1);
            v87 = ~(unsigned __int16)v53;
            v82 = (v87 & *(_DWORD *)(SchedulerAssist + 20)) == 0;
            v54 = (unsigned int)v87 & *(_DWORD *)(SchedulerAssist + 20);
            *(_DWORD *)(SchedulerAssist + 20) = v54;
            if ( v82 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        else
        {
          v76 = v100;
        }
        __writecr8(v76);
      }
LABEL_85:
      if ( v41 != BugCheckParameter2 || (v41 += 5, v74 = *v41, (v94 = v74) == 0) )
      {
        v8 = a1;
        v48 = a6;
        break;
      }
      continue;
    }
  }
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  MiRelockProtoPoolPage(v48, (char *)&v100, v54, SchedulerAssist);
  LOBYTE(v77) = v100;
  *(_DWORD *)(v8 + 192) &= ~0x20u;
  MiUnlockProtoPoolPage(v48, v77, v78, v79);
  *(_QWORD *)(v8 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(v8 + 32), 0, 0);
  return 1LL;
}
