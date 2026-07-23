/*
 * XREFs of MiCopyDataPageToImagePage @ 0x14030F138
 * Callers:
 *     MiResolveMappedFileFault @ 0x1403241D0 (MiResolveMappedFileFault.c)
 * Callees:
 *     MiAdvanceFaultList @ 0x14020B2E8 (MiAdvanceFaultList.c)
 *     MiDecayPfnFullyInitialized @ 0x140229794 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14022D038 (MiCreateDecayPfn.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUnlockNestedProtoPoolPage @ 0x1402469DC (MiUnlockNestedProtoPoolPage.c)
 *     MiInitializeTransitionPfn @ 0x14025C1CC (MiInitializeTransitionPfn.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140282D50 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDereferenceControlAreaPfnList @ 0x140284F70 (MiDereferenceControlAreaPfnList.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1402DF700 (MiRemoveLockedPageCharge.c)
 *     PsGetIoPriorityThread @ 0x1402E7060 (PsGetIoPriorityThread.c)
 *     MiReleasePtes @ 0x1402EA050 (MiReleasePtes.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiTryLockLeafPage @ 0x14030E6C8 (MiTryLockLeafPage.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14030FA04 (MiTryLockProtoPoolPageAtDpc.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiObtainProtoReference @ 0x140324D5C (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x140324DC8 (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MiEndingOffset @ 0x140327590 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MiGetSessionIdForVa @ 0x140329200 (MiGetSessionIdForVa.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140330C10 (MiInsertAndUnlockStandbyPages.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPage @ 0x140403030 (KeCopyPage.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
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
  __int64 v18; // r8
  ULONG_PTR v19; // rdi
  unsigned int v21; // r9d
  unsigned __int64 v22; // rsi
  __int64 v23; // rdi
  unsigned int v24; // ecx
  __int64 *v25; // r15
  __int64 v26; // rcx
  unsigned __int64 v27; // r12
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r9
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *v34; // rsi
  ULONG_PTR v35; // rdi
  char v36; // r15
  int locked; // eax
  __int64 v38; // rcx
  ULONG_PTR *v39; // r13
  __int64 v40; // rdi
  __int64 v41; // rbx
  __int64 *v42; // rsi
  char v43; // al
  __int64 v44; // r15
  __int64 v45; // r8
  unsigned __int64 v46; // r9
  ULONG_PTR v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r8
  _DWORD *SchedulerAssist; // r9
  _QWORD *v51; // rsi
  __int64 v52; // r12
  __int64 ValidPte; // rax
  int v54; // r15d
  int v55; // edi
  __int64 v56; // rbx
  __int64 v57; // rbx
  __int64 v58; // rbx
  int v59; // r15d
  int v60; // eax
  _SLIST_ENTRY *DecayPfn; // rdi
  __int64 v62; // rbx
  char v63; // si
  unsigned __int8 v64; // bl
  unsigned __int8 v65; // dl
  unsigned int v66; // edi
  __int64 v67; // rdx
  bool v68; // zf
  char v69; // r11
  char v70; // r11
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v73; // eax
  volatile LONG *SpinLock; // [rsp+28h] [rbp-99h]
  unsigned int v75; // [rsp+30h] [rbp-91h]
  volatile LONG *Src; // [rsp+38h] [rbp-89h]
  void *Srca; // [rsp+38h] [rbp-89h]
  struct _KTHREAD *v78; // [rsp+40h] [rbp-81h]
  __int64 v79; // [rsp+48h] [rbp-79h]
  ULONG_PTR v80; // [rsp+50h] [rbp-71h] BYREF
  int v81; // [rsp+58h] [rbp-69h] BYREF
  __int64 v82; // [rsp+60h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter2[10]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v84; // [rsp+B8h] [rbp-9h]
  char v86; // [rsp+120h] [rbp+5Fh] BYREF
  __int64 *v87; // [rsp+128h] [rbp+67h]
  __int64 v88; // [rsp+130h] [rbp+6Fh]

  v88 = a4;
  v87 = a3;
  v86 = 0;
  v8 = a1;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v9 = *(_QWORD *)(v8 + 224);
  LOBYTE(v10) = 0;
  v82 = 0LL;
  v11 = *a2;
  Src = *a2;
  SessionIdForVa = MiGetSessionIdForVa(v9);
  v13 = MiStartingOffset(a2, a3, SessionIdForVa);
  v14 = v11 + 18;
  v79 = v13;
  SpinLock = v11 + 18;
  v15 = v13;
  ExAcquireSpinLockExclusiveAtDpcLevel(v11 + 18);
  v16 = *((_QWORD *)v11 + 8) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4C9C0);
  v17 = **(_QWORD **)(v16 + 40);
  if ( !v17 || !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v17 + 72)) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
LABEL_3:
    if ( (v10 & 1) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
    if ( (v10 & 2) == 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
    if ( BugCheckParameter2[5] )
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[6] )
      MiUnlockNestedProtoPoolPage(BugCheckParameter2[6]);
    v19 = BugCheckParameter2[0];
    if ( BYTE1(BugCheckParameter2[4]) == 1 )
      MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2[0]);
    if ( v19 )
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[1] )
      MiUnlockProtoPoolPage(BugCheckParameter2[1], 2u);
    if ( (v10 & 4) != 0 )
      MiDereferenceControlAreaPfnList((__int64)Src, 0LL, v18, 3);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C9C0);
  v18 = 0LL;
  LOBYTE(v10) = 1;
  if ( !*(_QWORD *)(v17 + 32) || (*(_DWORD *)(v17 + 56) & 3) != 0 )
    goto LABEL_3;
  v84 = MiEndingOffset(a2);
  v22 = v15 >> 12;
  v10 = v21 + 8;
  v23 = v17 + 128;
  if ( (unsigned int)(v15 >> 12) != (unsigned int)((v84 - 1) >> 12) )
    v10 = v21;
  while ( 1 )
  {
    v24 = *(_DWORD *)(v23 + 44);
    if ( (unsigned int)v22 < v24 )
      break;
    v23 = *(_QWORD *)(v23 + 16);
    LODWORD(v22) = v22 - v24;
    if ( !v23 )
      goto LABEL_3;
  }
  v25 = (__int64 *)BugCheckParameter2;
  v75 = 2;
  while ( 1 )
  {
    if ( *(_DWORD *)(v23 + 104) == (_DWORD)v18 )
      goto LABEL_96;
    v26 = *(_QWORD *)(v23 + 8);
    if ( !v26 )
      goto LABEL_96;
    v27 = v26 + 8LL * (unsigned int)v22;
    if ( !v27 )
      goto LABEL_96;
    v28 = (v27 >> 9) & 0x7FFFFFFFF8LL;
    v29 = ((unsigned __int64)v87 >> 9) & 0x7FFFFFFFF8LL;
    v25[2] = v27;
    if ( v28 == v29
      || v25 != (__int64 *)BugCheckParameter2 && v28 == (((unsigned __int64)*(v25 - 3) >> 9) & 0x7FFFFFFFF8LL) )
    {
      MiTryLockLeafPage((__int64 *)v27, 0x7FFFFFFFF8LL, v25);
    }
    else
    {
      if ( (int)MiTryLockProtoPoolPageAtDpc(v27, 0x7FFFFFFFF8LL, &v82, v25) < 0 )
        goto LABEL_96;
      v25[1] = v82;
    }
    v30 = *v25;
    if ( !*v25
      || (*(_BYTE *)(v30 + 34) & 0x20) != 0
      || (*(_BYTE *)(v30 + 35) & 0x40) != 0
      || *(_WORD *)(v30 + 32) >= 0x7FFFu )
    {
LABEL_96:
      v14 = SpinLock;
      goto LABEL_3;
    }
    v25[3] = MI_READ_PTE_LOCK_FREE(v27);
    if ( v25 != (__int64 *)BugCheckParameter2 || (v79 & 0xFFF) == 0 || v10 >= 8 )
      break;
    v25 += 5;
    ++v75;
    LODWORD(v22) = v22 + 1;
    v18 = 0LL;
    if ( (unsigned int)v22 >= *(_DWORD *)(v23 + 44) )
    {
      v23 = *(_QWORD *)(v23 + 16);
      LODWORD(v22) = 0;
      if ( !v23 )
        goto LABEL_96;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
  ++*((_QWORD *)Src + 4);
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  CurrentThread = KeGetCurrentThread();
  v34 = BugCheckParameter2;
  v35 = BugCheckParameter2[0];
  LOBYTE(v10) = v10 & 0xF8 | 6;
  v78 = CurrentThread;
  v18 = 0LL;
  v80 = BugCheckParameter2[0];
  if ( !BugCheckParameter2[0] )
    goto LABEL_55;
  while ( 1 )
  {
    v36 = 0;
    if ( (v34[3] & 1) == 0 && !*(_WORD *)(v35 + 32) )
    {
      *((_BYTE *)v34 + 32) = (*(_BYTE *)(v35 + 35) & 8) != 0;
      if ( !(unsigned int)MiUnlinkPageFromList(v35, 0) )
      {
        MiDiscardTransitionPteEx(v35, 0LL);
        goto LABEL_96;
      }
      v36 = 1;
      *(_QWORD *)(v35 + 24) &= 0xC000000000000000uLL;
    }
    locked = MiAddLockedPageCharge(v35, 0LL);
    v18 = 0LL;
    if ( !locked )
    {
      if ( v36 )
        MiPfnReferenceCountIsZero(v35, (__int64)(v35 + 0x58000000000LL) / 48);
      goto LABEL_96;
    }
    *((_BYTE *)v34 + 33) = 1;
    if ( v34 != BugCheckParameter2 )
      break;
    v34 += 5;
    v35 = *v34;
    v80 = v35;
    if ( !v35 )
      goto LABEL_54;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v38 = v34[1];
  if ( v38 )
  {
    MiUnlockNestedProtoPoolPage(v38);
    v18 = 0LL;
    v34[1] = 0LL;
  }
LABEL_54:
  CurrentThread = v78;
LABEL_55:
  *(_DWORD *)(v8 + 192) |= 0x20u;
  v39 = BugCheckParameter2;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[0] + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BugCheckParameter2[1] )
  {
    MiUnlockProtoPoolPage(BugCheckParameter2[1], 2u);
    v18 = 0LL;
  }
  v40 = a5;
  v41 = 48 * a5 - 0x58000000000LL;
  v81 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v81, v31, v18, v32);
      while ( *(__int64 *)(v41 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) );
    CurrentThread = v78;
  }
  v42 = v87;
  MiInitializeTransitionPfn(v40, v87, -1LL);
  v43 = *(_BYTE *)(v41 + 34) & 0xF8 | 2;
  *(_BYTE *)(v41 + 34) = v43;
  *(_WORD *)(v41 + 32) = 1;
  *(_BYTE *)(v41 + 34) = v43 | 0x20;
  *(_QWORD *)v41 = v8 + 32;
  if ( (v88 & 1) != 0 && *(_BYTE *)(v88 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList((_QWORD *)(v88 & 0xFFFFFFFFFFFFFFFEuLL));
    *(_DWORD *)(v8 + 192) |= 8u;
  }
  *(_BYTE *)(v41 + 35) ^= (*(_BYTE *)(v41 + 35) ^ (*(_DWORD *)(v8 + 192) >> 9)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v8 + 168) = MI_READ_PTE_LOCK_FREE(v42);
  *(_QWORD *)(v8 + 232) = v42;
  if ( (int)PsGetIoPriorityThread((__int64)CurrentThread) < 2 )
    *(_DWORD *)(v8 + 192) |= 0x80u;
  v44 = a6;
  *(_QWORD *)(v8 + 272) = 0LL;
  *(_QWORD *)(v8 + 304) = 0LL;
  *(_DWORD *)(v8 + 280) = 56;
  *(_QWORD *)(v8 + 312) = 4096LL;
  *(_QWORD *)(v8 + 320) = v40;
  MiObtainProtoReference(v44, 0LL);
  MiUnlockProtoPoolPage(v44, 2u);
  *(_WORD *)(v8 + 282) |= 0x42u;
  *(_QWORD *)(v8 + 248) = v41;
  *(_QWORD *)(v8 + 208) = Src;
  *(_QWORD *)(v8 + 96) = v79;
  *(_QWORD *)(v8 + 240) = v42;
  *(_QWORD *)(v8 + 200) = 0LL;
  *(_QWORD *)(v8 + 160) = v44;
  v47 = MiReservePtes((__int64)&qword_140C4EF80, v75, v45, v46);
  v51 = (_QWORD *)v47;
  if ( v47 )
  {
    v52 = (__int64)(v47 << 25) >> 16;
    Srca = (void *)(v52 + (v79 & 0xFFF) + 4096);
    ValidPte = MiMakeValidPte(v47, v40, 2684354564LL);
    v54 = 0;
    v55 = 0;
    v56 = ValidPte;
    if ( !(unsigned int)MiPteInShadowRange(v51) )
      goto LABEL_63;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v55 = 1;
      if ( !HIBYTE(word_140C4E048) )
      {
        v68 = (v56 & 1) == 0;
LABEL_116:
        if ( !v68 )
          v56 |= v67;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v68 = (v56 & 1) == 0;
      goto LABEL_116;
    }
LABEL_63:
    *v51 = v56;
    if ( v55 )
      MiWritePteShadow((__int64)v51, v56);
    v57 = MiMakeValidPte(v51 + 1, (signed __int64)(BugCheckParameter2[0] + 0x58000000000LL) / 48, 536870913LL);
    if ( (unsigned int)MiPteInShadowRange(v51 + 1) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v54 = 1;
        if ( HIBYTE(word_140C4E048) != v69 )
          goto LABEL_66;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_66;
      }
      if ( (v57 & 1) != 0 )
        v57 |= 0x8000000000000000uLL;
    }
LABEL_66:
    v51[1] = v57;
    if ( v54 )
      MiWritePteShadow((__int64)(v51 + 1), v57);
    if ( BugCheckParameter2[5] )
    {
      v58 = MiMakeValidPte(v51 + 2, (signed __int64)(BugCheckParameter2[5] + 0x58000000000LL) / 48, 536870913LL);
      v59 = 0;
      if ( (unsigned int)MiPteInShadowRange(v51 + 2) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v59 = 1;
          if ( HIBYTE(word_140C4E048) != v70 )
            goto LABEL_70;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_70;
        }
        if ( (v58 & 1) != 0 )
          v58 |= 0x8000000000000000uLL;
      }
LABEL_70:
      v51[2] = v58;
      if ( v59 )
        MiWritePteShadow((__int64)(v51 + 2), v58);
    }
    if ( v79 + 4096 > v84 )
    {
      v66 = ((_WORD)v84 - (_WORD)v79) & 0xFFF;
      memmove((void *)v52, Srca, ((_WORD)v84 - (_WORD)v79) & 0xFFF);
      memset((void *)(v66 + v52), 0, 4096 - v66);
    }
    else
    {
      KeCopyPage(v52, Srca);
    }
    MiReleasePtes((__int64)&qword_140C4EF80, v51, v75);
    __incgsdword(0x2E98u);
    v44 = a6;
    v60 = 0;
  }
  else
  {
    v60 = -1073741670;
  }
  *(_DWORD *)(v8 + 80) = v60;
  DecayPfn = 0LL;
  if ( LOBYTE(BugCheckParameter2[4]) || LOBYTE(BugCheckParameter2[9]) )
    DecayPfn = MiCreateDecayPfn();
  v62 = BugCheckParameter2[0];
  v80 = BugCheckParameter2[0];
  if ( BugCheckParameter2[0] )
  {
    while ( 2 )
    {
      v86 = MiLockPageInline(v62, v48, v49, SchedulerAssist);
      v63 = v86;
      if ( (unsigned int)MiRemoveLockedPageCharge(v62) )
      {
        if ( DecayPfn && *((_BYTE *)v39 + 32) && (*(_QWORD *)(v62 + 24) & 0x4000000000000000LL) == 0 )
        {
          LOBYTE(SchedulerAssist) = v63;
          MiInsertAndUnlockStandbyPages(DecayPfn, &v80, 1LL, SchedulerAssist);
          v86 = 17;
          goto LABEL_85;
        }
        MiPfnReferenceCountIsZero(v62, (v62 + 0x58000000000LL) / 48);
      }
      if ( v63 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v62 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v64 = v86;
          if ( (unsigned __int8)v86 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v64 = v86;
            v48 = -1LL << (v86 + 1);
            v73 = ~(unsigned __int16)v48;
            v68 = (v73 & SchedulerAssist[5]) == 0;
            v49 = (unsigned int)v73 & SchedulerAssist[5];
            SchedulerAssist[5] = v49;
            if ( v68 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        else
        {
          v64 = v86;
        }
        __writecr8(v64);
      }
LABEL_85:
      if ( v39 != BugCheckParameter2 || (v39 += 5, v62 = *v39, (v80 = v62) == 0) )
      {
        v8 = a1;
        v44 = a6;
        break;
      }
      continue;
    }
  }
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  MiRelockProtoPoolPage(v44, &v86);
  v65 = v86;
  *(_DWORD *)(v8 + 192) &= ~0x20u;
  MiUnlockProtoPoolPage(v44, v65);
  *(_QWORD *)(v8 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(v8 + 32), 0, 0);
  return 1LL;
}
