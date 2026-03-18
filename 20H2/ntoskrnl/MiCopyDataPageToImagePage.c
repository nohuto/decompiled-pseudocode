/*
 * XREFs of MiCopyDataPageToImagePage @ 0x14034EC44
 * Callers:
 *     MiResolveMappedFileFault @ 0x140231830 (MiResolveMappedFileFault.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14022EA40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14027E490 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReservePtes @ 0x140285DC0 (MiReservePtes.c)
 *     PsGetIoPriorityThread @ 0x14028EE50 (PsGetIoPriorityThread.c)
 *     MiReleasePtes @ 0x140294430 (MiReleasePtes.c)
 *     MiEndingOffset @ 0x140297130 (MiEndingOffset.c)
 *     MiStartingOffset @ 0x1402A1B60 (MiStartingOffset.c)
 *     MiGetSessionIdForVa @ 0x1402A1C00 (MiGetSessionIdForVa.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1402A9610 (MiInsertAndUnlockStandbyPages.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1402C96D0 (MiRemoveLockedPageCharge.c)
 *     MiObtainProtoReference @ 0x1402CA8B8 (MiObtainProtoReference.c)
 *     MiRelockProtoPoolPage @ 0x1402CA924 (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiDereferenceControlAreaPfnList @ 0x140300800 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiAdvanceFaultList @ 0x1403179F8 (MiAdvanceFaultList.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140326FA4 (MiUnlockNestedProtoPoolPage.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x14033F2C0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiTryLockLeafPage @ 0x14034D840 (MiTryLockLeafPage.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14034F510 (MiTryLockProtoPoolPageAtDpc.c)
 *     MiInitializeTransitionPfn @ 0x14035090C (MiInitializeTransitionPfn.c)
 *     MiDecayPfnFullyInitialized @ 0x140351A08 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x140351B30 (MiCreateDecayPfn.c)
 *     MiDiscardTransitionPteEx @ 0x140388734 (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPage @ 0x1404009F0 (KeCopyPage.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
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
  __int64 v30; // rax
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
  unsigned __int64 v41; // rsi
  char v42; // al
  __int64 v43; // r15
  ULONG_PTR v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  _DWORD *SchedulerAssist; // r9
  _QWORD *v48; // rsi
  __int64 v49; // r12
  unsigned __int64 ValidPte; // rax
  int v51; // r15d
  int v52; // edi
  __int64 v53; // rbx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned __int64 v56; // rbx
  __int64 v57; // r8
  __int64 v58; // r9
  unsigned __int64 v59; // rbx
  int v60; // r15d
  __int64 v61; // r8
  int v62; // eax
  __int64 DecayPfn; // rdi
  __int64 v64; // rbx
  unsigned __int8 v65; // si
  unsigned __int8 v66; // bl
  unsigned __int8 v67; // dl
  unsigned int v68; // edi
  __int64 v69; // rdx
  bool v70; // zf
  char v71; // r11
  char v72; // r11
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v75; // eax
  volatile LONG *SpinLock; // [rsp+28h] [rbp-99h]
  unsigned int v77; // [rsp+30h] [rbp-91h]
  _QWORD *Src; // [rsp+38h] [rbp-89h]
  void *Srca; // [rsp+38h] [rbp-89h]
  struct _KTHREAD *v80; // [rsp+40h] [rbp-81h]
  unsigned __int64 v81; // [rsp+48h] [rbp-79h]
  ULONG_PTR v82; // [rsp+50h] [rbp-71h] BYREF
  int v83; // [rsp+58h] [rbp-69h] BYREF
  __int64 v84; // [rsp+60h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter2[10]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v86; // [rsp+B8h] [rbp-9h]
  unsigned __int8 v88; // [rsp+120h] [rbp+5Fh] BYREF
  unsigned __int64 v89; // [rsp+128h] [rbp+67h]
  __int64 v90; // [rsp+130h] [rbp+6Fh]

  v90 = a4;
  v89 = a3;
  v88 = 0;
  v8 = a1;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v9 = *(_QWORD *)(v8 + 224);
  LOBYTE(v10) = 0;
  v84 = 0LL;
  v11 = *a2;
  Src = (_QWORD *)*a2;
  SessionIdForVa = MiGetSessionIdForVa(v9);
  v13 = MiStartingOffset(a2, a3, SessionIdForVa);
  v14 = (volatile LONG *)(v11 + 72);
  v81 = v13;
  SpinLock = (volatile LONG *)(v11 + 72);
  v15 = v13;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
  v16 = *(_QWORD *)(v11 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4C800);
  v17 = **(_QWORD **)(v16 + 40);
  if ( !v17 || !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v17 + 72)) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
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
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C800);
  v19 = 0LL;
  v20 = 1LL;
  LOBYTE(v10) = 1;
  if ( !*(_QWORD *)(v17 + 32) || (*(_DWORD *)(v17 + 56) & 3) != 0 )
    goto LABEL_3;
  v86 = MiEndingOffset((__int64)a2);
  v23 = v15 >> 12;
  v10 = v20 + 8;
  v24 = v17 + 128;
  if ( (unsigned int)(v15 >> 12) != (unsigned int)((v86 - 1) >> 12) )
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
  v77 = 2;
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
    v30 = (v89 >> 9) & 0x7FFFFFFFF8LL;
    v26[2] = v28;
    if ( v29 == v30
      || v26 != (__int64 *)BugCheckParameter2 && v29 == (((unsigned __int64)*(v26 - 3) >> 9) & 0x7FFFFFFFF8LL) )
    {
      MiTryLockLeafPage((__int64 *)v28, 0x7FFFFFFFF8LL, v26);
    }
    else
    {
      if ( (int)MiTryLockProtoPoolPageAtDpc(v28, 0x7FFFFFFFF8LL, &v84, v26) < 0 )
        goto LABEL_96;
      v26[1] = v84;
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
    if ( v26 != (__int64 *)BugCheckParameter2 || (v81 & 0xFFF) == 0 || v10 >= 8 )
      break;
    v20 = 1LL;
    v26 += 5;
    ++v77;
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
  ++Src[4];
  ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
  CurrentThread = KeGetCurrentThread();
  v33 = BugCheckParameter2;
  v34 = BugCheckParameter2[0];
  LOBYTE(v10) = v10 & 0xF8 | 6;
  v80 = CurrentThread;
  v19 = 0LL;
  v82 = BugCheckParameter2[0];
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
    locked = MiAddLockedPageCharge(v34, 0);
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
    v82 = v34;
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
  CurrentThread = v80;
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
  v83 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v83, v18, v19, v20);
      while ( *(__int64 *)(v40 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) );
    CurrentThread = v80;
  }
  v41 = v89;
  MiInitializeTransitionPfn(v39, v89, -1LL);
  v42 = *(_BYTE *)(v40 + 34) & 0xF8 | 2;
  *(_BYTE *)(v40 + 34) = v42;
  *(_WORD *)(v40 + 32) = 1;
  *(_BYTE *)(v40 + 34) = v42 | 0x20;
  *(_QWORD *)v40 = v8 + 32;
  if ( (v90 & 1) != 0 && *(_BYTE *)(v90 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList((_QWORD *)(v90 & 0xFFFFFFFFFFFFFFFEuLL));
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
  MiObtainProtoReference(v43, 0);
  MiUnlockProtoPoolPage(v43, 2u);
  *(_WORD *)(v8 + 282) |= 0x42u;
  *(_QWORD *)(v8 + 248) = v40;
  *(_QWORD *)(v8 + 208) = Src;
  *(_QWORD *)(v8 + 96) = v81;
  *(_QWORD *)(v8 + 240) = v41;
  *(_QWORD *)(v8 + 200) = 0LL;
  *(_QWORD *)(v8 + 160) = v43;
  v44 = MiReservePtes((__int64)&qword_140C4EDC0, v77);
  v48 = (_QWORD *)v44;
  if ( v44 )
  {
    v49 = (__int64)(v44 << 25) >> 16;
    Srca = (void *)(v49 + (v81 & 0xFFF) + 4096);
    ValidPte = MiMakeValidPte(v44, v39, 2684354564LL, (__int64)SchedulerAssist);
    v51 = 0;
    v52 = 0;
    v53 = ValidPte;
    if ( !MiPteInShadowRange((unsigned __int64)v48) )
      goto LABEL_63;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v52 = 1;
      if ( !HIBYTE(word_140C4DE88) )
      {
        v70 = (v53 & 1) == 0;
LABEL_116:
        if ( !v70 )
          v53 |= v69;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v70 = (v53 & 1) == 0;
      goto LABEL_116;
    }
LABEL_63:
    *v48 = v53;
    if ( v52 )
      MiWritePteShadow((__int64)v48, v53, v54);
    v56 = MiMakeValidPte(
            (unsigned __int64)(v48 + 1),
            (signed __int64)(BugCheckParameter2[0] + 0x58000000000LL) / 48,
            536870913LL,
            v55);
    if ( MiPteInShadowRange((unsigned __int64)(v48 + 1)) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v51 = 1;
        if ( HIBYTE(word_140C4DE88) != v71 )
          goto LABEL_66;
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      {
        goto LABEL_66;
      }
      if ( (v56 & 1) != 0 )
        v56 |= 0x8000000000000000uLL;
    }
LABEL_66:
    v48[1] = v56;
    if ( v51 )
      MiWritePteShadow((__int64)(v48 + 1), v56, v57);
    if ( BugCheckParameter2[5] )
    {
      v59 = MiMakeValidPte(
              (unsigned __int64)(v48 + 2),
              (signed __int64)(BugCheckParameter2[5] + 0x58000000000LL) / 48,
              536870913LL,
              v58);
      v60 = 0;
      if ( MiPteInShadowRange((unsigned __int64)(v48 + 2)) )
      {
        if ( (unsigned int)MiPteHasShadow() )
        {
          v60 = 1;
          if ( HIBYTE(word_140C4DE88) != v72 )
            goto LABEL_70;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_70;
        }
        if ( (v59 & 1) != 0 )
          v59 |= 0x8000000000000000uLL;
      }
LABEL_70:
      v48[2] = v59;
      if ( v60 )
        MiWritePteShadow((__int64)(v48 + 2), v59, v61);
    }
    if ( v81 + 4096 > v86 )
    {
      v68 = ((_WORD)v86 - (_WORD)v81) & 0xFFF;
      memmove((void *)v49, Srca, ((_WORD)v86 - (_WORD)v81) & 0xFFF);
      memset((void *)(v68 + v49), 0, 4096 - v68);
    }
    else
    {
      KeCopyPage(v49, Srca);
    }
    MiReleasePtes((__int64)&qword_140C4EDC0, v48, v77);
    __incgsdword(0x2E98u);
    v43 = a6;
    v62 = 0;
  }
  else
  {
    v62 = -1073741670;
  }
  *(_DWORD *)(v8 + 80) = v62;
  DecayPfn = 0LL;
  if ( LOBYTE(BugCheckParameter2[4]) || LOBYTE(BugCheckParameter2[9]) )
    DecayPfn = MiCreateDecayPfn();
  v64 = BugCheckParameter2[0];
  v82 = BugCheckParameter2[0];
  if ( BugCheckParameter2[0] )
  {
    while ( 2 )
    {
      v88 = MiLockPageInline(v64, v45, v46, SchedulerAssist);
      v65 = v88;
      if ( (unsigned int)MiRemoveLockedPageCharge(v64) )
      {
        if ( DecayPfn && *((_BYTE *)v38 + 32) && (*(_QWORD *)(v64 + 24) & 0x4000000000000000LL) == 0 )
        {
          MiInsertAndUnlockStandbyPages(DecayPfn, &v82, 1u, v65);
          v88 = 17;
          goto LABEL_85;
        }
        MiPfnReferenceCountIsZero(v64, (v64 + 0x58000000000LL) / 48);
      }
      if ( v65 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v66 = v88;
          if ( v88 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v66 = v88;
            v45 = -1LL << (v88 + 1);
            v75 = ~(unsigned __int16)v45;
            v70 = (v75 & SchedulerAssist[5]) == 0;
            v46 = (unsigned int)v75 & SchedulerAssist[5];
            SchedulerAssist[5] = v46;
            if ( v70 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        else
        {
          v66 = v88;
        }
        __writecr8(v66);
      }
LABEL_85:
      if ( v38 != BugCheckParameter2 || (v38 += 5, v64 = *v38, (v82 = v64) == 0) )
      {
        v8 = a1;
        v43 = a6;
        break;
      }
      continue;
    }
  }
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  MiRelockProtoPoolPage(v43, (char *)&v88);
  v67 = v88;
  *(_DWORD *)(v8 + 192) &= ~0x20u;
  MiUnlockProtoPoolPage(v43, v67);
  *(_QWORD *)(v8 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(v8 + 32), 0, 0);
  return 1LL;
}
