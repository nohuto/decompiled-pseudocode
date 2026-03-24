/*
 * XREFs of MiCopyDataPageToImagePage @ 0x1403043E8
 * Callers:
 *     MiResolveMappedFileFault @ 0x140319480 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiReservePtes @ 0x1402265B0 (MiReservePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14023AEB0 (MiRemoveLockedPageCharge.c)
 *     PsGetIoPriorityThread @ 0x140242810 (PsGetIoPriorityThread.c)
 *     MiReleasePtes @ 0x140245800 (MiReleasePtes.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140261880 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDereferenceControlAreaPfnList @ 0x140263AA0 (MiDereferenceControlAreaPfnList.c)
 *     MiInitializeTransitionPfn @ 0x14026E22C (MiInitializeTransitionPfn.c)
 *     MiAdvanceFaultList @ 0x14028E148 (MiAdvanceFaultList.c)
 *     MiDecayPfnFullyInitialized @ 0x1402AB654 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x1402AECD8 (MiCreateDecayPfn.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1402C817C (MiUnlockNestedProtoPoolPage.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiTryLockLeafPage @ 0x140303978 (MiTryLockLeafPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x140304CB4 (MiTryLockProtoPoolPageAtDpc.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140314D90 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x14031A00C (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x14031A078 (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x14031A408 (MiAddLockedPageCharge.c)
 *     MiEndingOffset @ 0x14031C840 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x14031E410 (MiStartingOffset.c)
 *     MiGetSessionIdForVa @ 0x14031E4B0 (MiGetSessionIdForVa.c)
 *     MiPfnReferenceCountIsZero @ 0x140325DF0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140325EC0 (MiInsertAndUnlockStandbyPages.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14033BD80 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiDiscardTransitionPteEx @ 0x140388E94 (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPage @ 0x140402E50 (KeCopyPage.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     memset @ 0x140414200 (memset.c)
 */

__int64 __fastcall MiCopyDataPageToImagePage(
        __int64 a1,
        volatile LONG **a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned int v10; // ebx
  volatile LONG *v11; // rdi
  unsigned int SessionIdForVa; // eax
  __int64 v13; // rax
  volatile LONG *v14; // r15
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rdi
  __int64 v17; // r13
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  ULONG_PTR v21; // rdi
  unsigned __int64 v23; // rsi
  __int64 v24; // rdi
  unsigned int v25; // ecx
  __int64 *v26; // r15
  __int64 v27; // rcx
  unsigned __int64 v28; // r12
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *v33; // rsi
  ULONG_PTR v34; // rdi
  char v35; // r15
  int locked; // eax
  __int64 v37; // rcx
  ULONG_PTR *v38; // r13
  __int64 v39; // rdi
  __int64 v40; // rbx
  __int64 *v41; // rsi
  char v42; // al
  __int64 v43; // r15
  __int64 v44; // r8
  unsigned __int64 v45; // r9
  ULONG_PTR v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  _DWORD *SchedulerAssist; // r9
  _QWORD *v50; // rsi
  __int64 v51; // r12
  __int64 ValidPte; // rax
  int v53; // r15d
  int v54; // edi
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // rbx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // rbx
  int v62; // r15d
  __int64 v63; // rdx
  __int64 v64; // r8
  int v65; // eax
  PSLIST_ENTRY DecayPfn; // rdi
  __int64 v67; // rbx
  char v68; // si
  unsigned __int8 v69; // bl
  unsigned __int8 v70; // dl
  unsigned int v71; // edi
  __int64 v72; // rdx
  bool v73; // zf
  char v74; // r11
  char v75; // r11
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v78; // eax
  volatile LONG *SpinLock; // [rsp+28h] [rbp-99h]
  unsigned int v80; // [rsp+30h] [rbp-91h]
  volatile LONG *Src; // [rsp+38h] [rbp-89h]
  void *Srca; // [rsp+38h] [rbp-89h]
  struct _KTHREAD *v83; // [rsp+40h] [rbp-81h]
  __int64 v84; // [rsp+48h] [rbp-79h]
  ULONG_PTR v85; // [rsp+50h] [rbp-71h] BYREF
  int v86; // [rsp+58h] [rbp-69h] BYREF
  __int64 v87; // [rsp+60h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter2[10]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v89; // [rsp+B8h] [rbp-9h]
  char v91; // [rsp+120h] [rbp+5Fh] BYREF
  __int64 *v92; // [rsp+128h] [rbp+67h]
  __int64 v93; // [rsp+130h] [rbp+6Fh]

  v93 = a4;
  v92 = a3;
  v91 = 0;
  v8 = a1;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v9 = *(_QWORD *)(v8 + 224);
  LOBYTE(v10) = 0;
  v87 = 0LL;
  v11 = *a2;
  Src = *a2;
  SessionIdForVa = MiGetSessionIdForVa(v9);
  v13 = MiStartingOffset(a2, a3, SessionIdForVa);
  v14 = v11 + 18;
  v84 = v13;
  SpinLock = v11 + 18;
  v15 = v13;
  ExAcquireSpinLockExclusiveAtDpcLevel(v11 + 18);
  v16 = *((_QWORD *)v11 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4C980);
  v17 = **(_QWORD **)(v16 + 40);
  if ( !v17 || !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v17 + 72)) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C980);
LABEL_3:
    if ( (v10 & 1) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
    if ( (v10 & 2) == 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
    if ( BugCheckParameter2[5] )
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[6] )
      MiUnlockNestedProtoPoolPage(BugCheckParameter2[6], v18, v19, v20);
    v21 = BugCheckParameter2[0];
    if ( BYTE1(BugCheckParameter2[4]) == 1 )
      MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2[0]);
    if ( v21 )
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[1] )
      MiUnlockProtoPoolPage(BugCheckParameter2[1], 2u);
    if ( (v10 & 4) != 0 )
      MiDereferenceControlAreaPfnList((__int64)Src, 0LL, v19, 3LL);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C980);
  v19 = 0LL;
  v20 = 1LL;
  LOBYTE(v10) = 1;
  if ( !*(_QWORD *)(v17 + 32) || (*(_DWORD *)(v17 + 56) & 3) != 0 )
    goto LABEL_3;
  v89 = MiEndingOffset(a2);
  v23 = v15 >> 12;
  v10 = v20 + 8;
  v24 = v17 + 128;
  if ( (unsigned int)(v15 >> 12) != (unsigned int)((v89 - 1) >> 12) )
    v10 = v20;
  while ( 1 )
  {
    v25 = *(_DWORD *)(v24 + 44);
    if ( (unsigned int)v23 < v25 )
      break;
    v24 = *(_QWORD *)(v24 + 16);
    LODWORD(v23) = v23 - v25;
    if ( !v24 )
      goto LABEL_3;
  }
  v26 = (__int64 *)BugCheckParameter2;
  v80 = 2;
  while ( 1 )
  {
    if ( *(_DWORD *)(v24 + 104) == (_DWORD)v19 )
      goto LABEL_96;
    v27 = *(_QWORD *)(v24 + 8);
    v18 = 0x7FFFFFFFF8LL;
    if ( !v27 )
      goto LABEL_96;
    v28 = v27 + 8LL * (unsigned int)v23;
    if ( !v28 )
      goto LABEL_96;
    v29 = (v28 >> 9) & 0x7FFFFFFFF8LL;
    v30 = ((unsigned __int64)v92 >> 9) & 0x7FFFFFFFF8LL;
    v26[2] = v28;
    if ( v29 == v30
      || v26 != (__int64 *)BugCheckParameter2 && v29 == (((unsigned __int64)*(v26 - 3) >> 9) & 0x7FFFFFFFF8LL) )
    {
      MiTryLockLeafPage((__int64 *)v28, 0x7FFFFFFFF8LL, v26);
    }
    else
    {
      if ( (int)MiTryLockProtoPoolPageAtDpc(v28, 0x7FFFFFFFF8LL, &v87, v26) < 0 )
        goto LABEL_96;
      v26[1] = v87;
    }
    v31 = *v26;
    if ( !*v26
      || (*(_BYTE *)(v31 + 34) & 0x20) != 0
      || (*(_BYTE *)(v31 + 35) & 0x40) != 0
      || *(_WORD *)(v31 + 32) >= 0x7FFFu )
    {
LABEL_96:
      v14 = SpinLock;
      goto LABEL_3;
    }
    v26[3] = MI_READ_PTE_LOCK_FREE(v28);
    if ( v26 != (__int64 *)BugCheckParameter2 || (v84 & 0xFFF) == 0 || v10 >= 8 )
      break;
    v20 = 1LL;
    v26 += 5;
    ++v80;
    LODWORD(v23) = v23 + 1;
    v19 = 0LL;
    if ( (unsigned int)v23 >= *(_DWORD *)(v24 + 44) )
    {
      v24 = *(_QWORD *)(v24 + 16);
      LODWORD(v23) = 0;
      if ( !v24 )
        goto LABEL_96;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
  ++*((_QWORD *)Src + 4);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  CurrentThread = KeGetCurrentThread();
  v33 = BugCheckParameter2;
  v34 = BugCheckParameter2[0];
  LOBYTE(v10) = v10 & 0xF8 | 6;
  v83 = CurrentThread;
  v19 = 0LL;
  v85 = BugCheckParameter2[0];
  if ( !BugCheckParameter2[0] )
    goto LABEL_55;
  while ( 1 )
  {
    v35 = 0;
    if ( (v33[3] & 1) == 0 && !*(_WORD *)(v34 + 32) )
    {
      *((_BYTE *)v33 + 32) = (*(_BYTE *)(v34 + 35) & 8) != 0;
      if ( !(unsigned int)MiUnlinkPageFromList(v34, 0) )
      {
        MiDiscardTransitionPteEx(v34, 0LL);
        goto LABEL_96;
      }
      v35 = 1;
      *(_QWORD *)(v34 + 24) &= 0xC000000000000000uLL;
    }
    locked = MiAddLockedPageCharge(v34, 0LL);
    v19 = 0LL;
    if ( !locked )
    {
      if ( v35 )
        MiPfnReferenceCountIsZero(v34, (__int64)(v34 + 0x58000000000LL) / 48);
      goto LABEL_96;
    }
    *((_BYTE *)v33 + 33) = 1;
    if ( v33 != BugCheckParameter2 )
      break;
    v33 += 5;
    v34 = *v33;
    v85 = v34;
    if ( !v34 )
      goto LABEL_54;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v37 = v33[1];
  if ( v37 )
  {
    MiUnlockNestedProtoPoolPage(v37, v18, 0LL, v20);
    v19 = 0LL;
    v33[1] = 0LL;
  }
LABEL_54:
  CurrentThread = v83;
LABEL_55:
  *(_DWORD *)(v8 + 192) |= 0x20u;
  v38 = BugCheckParameter2;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[0] + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BugCheckParameter2[1] )
  {
    MiUnlockProtoPoolPage(BugCheckParameter2[1], 2u);
    v19 = 0LL;
  }
  v39 = a5;
  v40 = 48 * a5 - 0x58000000000LL;
  v86 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v86, v18, v19, v20);
      while ( *(__int64 *)(v40 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) );
    CurrentThread = v83;
  }
  v41 = v92;
  MiInitializeTransitionPfn(v39, v92, -1LL);
  v42 = *(_BYTE *)(v40 + 34) & 0xF8 | 2;
  *(_BYTE *)(v40 + 34) = v42;
  *(_WORD *)(v40 + 32) = 1;
  *(_BYTE *)(v40 + 34) = v42 | 0x20;
  *(_QWORD *)v40 = v8 + 32;
  if ( (v93 & 1) != 0 && *(_BYTE *)(v93 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList((_QWORD *)(v93 & 0xFFFFFFFFFFFFFFFEuLL));
    *(_DWORD *)(v8 + 192) |= 8u;
  }
  *(_BYTE *)(v40 + 35) ^= (*(_BYTE *)(v40 + 35) ^ (*(_DWORD *)(v8 + 192) >> 9)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v8 + 168) = MI_READ_PTE_LOCK_FREE(v41);
  *(_QWORD *)(v8 + 232) = v41;
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v8 + 192) |= 0x80u;
  v43 = a6;
  *(_QWORD *)(v8 + 272) = 0LL;
  *(_QWORD *)(v8 + 304) = 0LL;
  *(_DWORD *)(v8 + 280) = 56;
  *(_QWORD *)(v8 + 312) = 4096LL;
  *(_QWORD *)(v8 + 320) = v39;
  MiObtainProtoReference(v43, 0LL);
  MiUnlockProtoPoolPage(v43, 2u);
  *(_WORD *)(v8 + 282) |= 0x42u;
  *(_QWORD *)(v8 + 248) = v40;
  *(_QWORD *)(v8 + 208) = Src;
  *(_QWORD *)(v8 + 96) = v84;
  *(_QWORD *)(v8 + 240) = v41;
  *(_QWORD *)(v8 + 200) = 0LL;
  *(_QWORD *)(v8 + 160) = v43;
  v46 = MiReservePtes((__int64)&qword_140C4EF40, v80, v44, v45);
  v50 = (_QWORD *)v46;
  if ( v46 )
  {
    v51 = (__int64)(v46 << 25) >> 16;
    Srca = (void *)(v51 + (v84 & 0xFFF) + 4096);
    ValidPte = MiMakeValidPte(v46, v39, 2684354564LL);
    v53 = 0;
    v54 = 0;
    v55 = ValidPte;
    if ( !(unsigned int)MiPteInShadowRange(v50, v56) )
      goto LABEL_63;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v54 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
        v73 = (v55 & 1) == 0;
LABEL_116:
        if ( !v73 )
          v55 |= v72;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v73 = (v55 & 1) == 0;
      goto LABEL_116;
    }
LABEL_63:
    *v50 = v55;
    if ( v54 )
      MiWritePteShadow((__int64)v50, v55, v57);
    v58 = MiMakeValidPte(v50 + 1, (signed __int64)(BugCheckParameter2[0] + 0x58000000000LL) / 48, 536870913LL);
    if ( (unsigned int)MiPteInShadowRange(v50 + 1, v59) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v53 = 1;
        if ( HIBYTE(word_140C4E008) != v74 )
          goto LABEL_66;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_66;
      }
      if ( (v58 & 1) != 0 )
        v58 |= 0x8000000000000000uLL;
    }
LABEL_66:
    v50[1] = v58;
    if ( v53 )
      MiWritePteShadow((__int64)(v50 + 1), v58, v60);
    if ( BugCheckParameter2[5] )
    {
      v61 = MiMakeValidPte(v50 + 2, (signed __int64)(BugCheckParameter2[5] + 0x58000000000LL) / 48, 536870913LL);
      v62 = 0;
      if ( (unsigned int)MiPteInShadowRange(v50 + 2, v63) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v62 = 1;
          if ( HIBYTE(word_140C4E008) != v75 )
            goto LABEL_70;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_70;
        }
        if ( (v61 & 1) != 0 )
          v61 |= 0x8000000000000000uLL;
      }
LABEL_70:
      v50[2] = v61;
      if ( v62 )
        MiWritePteShadow((__int64)(v50 + 2), v61, v64);
    }
    if ( v84 + 4096 > v89 )
    {
      v71 = ((_WORD)v89 - (_WORD)v84) & 0xFFF;
      memmove((void *)v51, Srca, ((_WORD)v89 - (_WORD)v84) & 0xFFF);
      memset((void *)(v71 + v51), 0, 4096 - v71);
    }
    else
    {
      KeCopyPage(v51, Srca);
    }
    MiReleasePtes((__int64)&qword_140C4EF40, v50, v80);
    __incgsdword(0x2E98u);
    v43 = a6;
    v65 = 0;
  }
  else
  {
    v65 = -1073741670;
  }
  *(_DWORD *)(v8 + 80) = v65;
  DecayPfn = 0LL;
  if ( LOBYTE(BugCheckParameter2[4]) || LOBYTE(BugCheckParameter2[9]) )
    DecayPfn = MiCreateDecayPfn();
  v67 = BugCheckParameter2[0];
  v85 = BugCheckParameter2[0];
  if ( BugCheckParameter2[0] )
  {
    while ( 2 )
    {
      v91 = MiLockPageInline(v67, v47, v48, SchedulerAssist);
      v68 = v91;
      if ( (unsigned int)MiRemoveLockedPageCharge(v67) )
      {
        if ( DecayPfn && *((_BYTE *)v38 + 32) && (*(_QWORD *)(v67 + 24) & 0x4000000000000000LL) == 0 )
        {
          LOBYTE(SchedulerAssist) = v68;
          MiInsertAndUnlockStandbyPages(DecayPfn, &v85, 1LL, SchedulerAssist);
          v91 = 17;
          goto LABEL_85;
        }
        MiPfnReferenceCountIsZero(v67, (v67 + 0x58000000000LL) / 48);
      }
      if ( v68 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v67 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v69 = v91;
          if ( (unsigned __int8)v91 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v69 = v91;
            v47 = -1LL << (v91 + 1);
            v78 = ~(unsigned __int16)v47;
            v73 = (v78 & SchedulerAssist[5]) == 0;
            v48 = (unsigned int)v78 & SchedulerAssist[5];
            SchedulerAssist[5] = v48;
            if ( v73 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        else
        {
          v69 = v91;
        }
        __writecr8(v69);
      }
LABEL_85:
      if ( v38 != BugCheckParameter2 || (v38 += 5, v67 = *v38, (v85 = v67) == 0) )
      {
        v8 = a1;
        v43 = a6;
        break;
      }
      continue;
    }
  }
  if ( DecayPfn )
    MiDecayPfnFullyInitialized((ULONG_PTR)DecayPfn);
  MiRelockProtoPoolPage(v43, &v91);
  v70 = v91;
  *(_DWORD *)(v8 + 192) &= ~0x20u;
  MiUnlockProtoPoolPage(v43, v70);
  *(_QWORD *)(v8 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(v8 + 32), 0, 0);
  return 1LL;
}
