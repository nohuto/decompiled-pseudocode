/*
 * XREFs of MiCopyDataPageToImagePage @ 0x14026085C
 * Callers:
 *     MiResolveMappedFileFault @ 0x14025E350 (MiResolveMappedFileFault.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReservePtes @ 0x14021B350 (MiReservePtes.c)
 *     MiEndingOffset @ 0x140224680 (MiEndingOffset.c)
 *     MiObtainProtoReference @ 0x140229634 (MiObtainProtoReference.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140229704 (MiRelockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14022C020 (MiRemoveLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140234630 (MiInsertAndUnlockStandbyPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiStartingOffset @ 0x140245D90 (MiStartingOffset.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14024A7A0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiGetSessionIdForVa @ 0x14025D220 (MiGetSessionIdForVa.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140284720 (MiReleasePtes.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     PsGetIoPriorityThread @ 0x1402B8E80 (PsGetIoPriorityThread.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x1402E41B0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAdvanceFaultList @ 0x140312138 (MiAdvanceFaultList.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiInitializeTransitionPfn @ 0x14031CA0C (MiInitializeTransitionPfn.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiDecayPfnFullyInitialized @ 0x14033A13C (MiDecayPfnFullyInitialized.c)
 *     MiTryLockProtoPoolPageAtDpc @ 0x14033AA6C (MiTryLockProtoPoolPageAtDpc.c)
 *     MiTryLockLeafPage @ 0x14033AC04 (MiTryLockLeafPage.c)
 *     MiCreateDecayPfn @ 0x14033BC68 (MiCreateDecayPfn.c)
 *     MiUnlockNestedProtoPoolPage @ 0x140356754 (MiUnlockNestedProtoPoolPage.c)
 *     MiDiscardTransitionPteEx @ 0x140386594 (MiDiscardTransitionPteEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCopyPage @ 0x1403FB0A0 (KeCopyPage.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
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
  ULONG_PTR *v26; // r15
  __int64 v27; // rcx
  unsigned __int64 v28; // r12
  __int64 v29; // rcx
  __int64 v30; // rax
  ULONG_PTR v31; // rcx
  struct _KTHREAD *CurrentThread; // r15
  ULONG_PTR *v33; // rsi
  ULONG_PTR v34; // rdi
  char v35; // r15
  int locked; // eax
  ULONG_PTR v37; // rcx
  ULONG_PTR *v38; // r13
  __int64 v39; // rdi
  __int64 v40; // rbx
  unsigned __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // r9
  char v45; // al
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // r8
  unsigned __int64 v51; // r9
  ULONG_PTR v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // rsi
  __int64 v56; // r12
  unsigned __int64 ValidPte; // rax
  int v58; // r15d
  int v59; // edi
  unsigned __int64 v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned __int64 v64; // rbx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // r9
  unsigned __int64 v69; // rbx
  int v70; // r15d
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  int v75; // eax
  __int64 DecayPfn; // rdi
  __int64 v77; // rbx
  unsigned __int8 v78; // si
  unsigned __int8 v79; // bl
  __int64 v80; // rdx
  unsigned int v81; // edi
  __int64 v82; // rdx
  bool v83; // zf
  char v84; // r11
  char v85; // r11
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v89; // eax
  volatile LONG *SpinLock; // [rsp+28h] [rbp-99h]
  unsigned int v91; // [rsp+30h] [rbp-91h]
  _QWORD *Src; // [rsp+38h] [rbp-89h]
  void *Srca; // [rsp+38h] [rbp-89h]
  struct _KTHREAD *v94; // [rsp+40h] [rbp-81h]
  unsigned __int64 v95; // [rsp+48h] [rbp-79h]
  ULONG_PTR v96; // [rsp+50h] [rbp-71h] BYREF
  int v97; // [rsp+58h] [rbp-69h] BYREF
  ULONG_PTR v98; // [rsp+60h] [rbp-61h] BYREF
  ULONG_PTR BugCheckParameter2[10]; // [rsp+68h] [rbp-59h] BYREF
  unsigned __int64 v100; // [rsp+B8h] [rbp-9h]
  unsigned __int8 v102; // [rsp+120h] [rbp+5Fh] BYREF
  unsigned __int64 v103; // [rsp+128h] [rbp+67h]
  __int64 v104; // [rsp+130h] [rbp+6Fh]

  v104 = a4;
  v103 = a3;
  v102 = 0;
  v8 = a1;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v9 = *(_QWORD *)(v8 + 224);
  LOBYTE(v10) = 0;
  v98 = 0LL;
  v11 = *a2;
  Src = (_QWORD *)*a2;
  SessionIdForVa = MiGetSessionIdForVa(v9);
  v13 = MiStartingOffset(a2, a3, SessionIdForVa);
  v14 = (volatile LONG *)(v11 + 72);
  v95 = v13;
  SpinLock = (volatile LONG *)(v11 + 72);
  v15 = v13;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v11 + 72));
  v16 = *(_QWORD *)(v11 + 64) & 0xFFFFFFFFFFFFFFF0uLL;
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4C780);
  v17 = **(_QWORD **)(v16 + 40);
  if ( !v17 || !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(v17 + 72) )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C780);
LABEL_3:
    if ( (v10 & 1) != 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v17 + 72));
    if ( (v10 & 2) == 0 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v14);
    if ( BugCheckParameter2[5] )
      _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[6] )
      MiUnlockNestedProtoPoolPage(BugCheckParameter2[6], v18, v19);
    v21 = BugCheckParameter2[0];
    if ( BYTE1(BugCheckParameter2[4]) == 1 )
      MiRemoveLockedPageChargeAndDecRef(BugCheckParameter2[0], v18, v19, v20);
    if ( v21 )
      _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( BugCheckParameter2[1] )
    {
      LOBYTE(v18) = 2;
      MiUnlockProtoPoolPage(BugCheckParameter2[1], v18);
    }
    if ( (v10 & 4) != 0 )
      MiDereferenceControlAreaPfnList(Src, 0LL, v19, 3LL);
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4C780);
  v19 = 0LL;
  v20 = 1LL;
  LOBYTE(v10) = 1;
  if ( !*(_QWORD *)(v17 + 32) || (*(_DWORD *)(v17 + 56) & 3) != 0 )
    goto LABEL_3;
  v100 = MiEndingOffset((__int64)a2);
  v23 = v15 >> 12;
  v10 = v20 + 8;
  v24 = v17 + 128;
  if ( (unsigned int)(v15 >> 12) != (unsigned int)((v100 - 1) >> 12) )
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
  v26 = BugCheckParameter2;
  v91 = 2;
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
    v30 = (v103 >> 9) & 0x7FFFFFFFF8LL;
    v26[2] = v28;
    if ( v29 == v30 || v26 != BugCheckParameter2 && v29 == ((*(v26 - 3) >> 9) & 0x7FFFFFFFF8LL) )
    {
      MiTryLockLeafPage(v28, 0x7FFFFFFFF8LL, v26);
    }
    else
    {
      if ( (int)MiTryLockProtoPoolPageAtDpc(v28, 0x7FFFFFFFF8LL, &v98, v26) < 0 )
        goto LABEL_96;
      v26[1] = v98;
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
    if ( v26 != BugCheckParameter2 || (v95 & 0xFFF) == 0 || v10 >= 8 )
      break;
    v20 = 1LL;
    v26 += 5;
    ++v91;
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
  v94 = CurrentThread;
  v19 = 0LL;
  v96 = BugCheckParameter2[0];
  if ( !BugCheckParameter2[0] )
    goto LABEL_55;
  while ( 1 )
  {
    v35 = 0;
    if ( (v33[3] & 1) == 0 && !*(_WORD *)(v34 + 32) )
    {
      *((_BYTE *)v33 + 32) = (*(_BYTE *)(v34 + 35) & 8) != 0;
      if ( !(unsigned int)MiUnlinkPageFromList(v34) )
      {
        MiDiscardTransitionPteEx(v34, 0LL);
        goto LABEL_96;
      }
      v35 = 1;
      *(_QWORD *)(v34 + 24) &= 0xC000000000000000uLL;
    }
    locked = MiAddLockedPageCharge(v34, 0LL, v19);
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
    v96 = v34;
    if ( !v34 )
      goto LABEL_54;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v37 = v33[1];
  if ( v37 )
  {
    MiUnlockNestedProtoPoolPage(v37, v18, 0LL);
    v33[1] = 0LL;
  }
LABEL_54:
  CurrentThread = v94;
LABEL_55:
  *(_DWORD *)(v8 + 192) |= 0x20u;
  v38 = BugCheckParameter2;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2[0] + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( BugCheckParameter2[1] )
  {
    LOBYTE(v18) = 2;
    MiUnlockProtoPoolPage(BugCheckParameter2[1], v18);
  }
  v39 = a5;
  v40 = 48 * a5 - 0x58000000000LL;
  v97 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v97, v18);
      while ( *(__int64 *)(v40 + 24) < 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v40 + 24), 0x3FuLL) );
    CurrentThread = v94;
  }
  v41 = v103;
  MiInitializeTransitionPfn(v39, v103, -1LL);
  v45 = *(_BYTE *)(v40 + 34) & 0xF8 | 2;
  *(_BYTE *)(v40 + 34) = v45;
  *(_WORD *)(v40 + 32) = 1;
  *(_BYTE *)(v40 + 34) = v45 | 0x20;
  *(_QWORD *)v40 = v8 + 32;
  if ( (v104 & 1) != 0 && *(_BYTE *)(v104 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
  {
    MiAdvanceFaultList(v104 & 0xFFFFFFFFFFFFFFFEuLL, v42, v43, v44);
    *(_DWORD *)(v8 + 192) |= 8u;
  }
  *(_BYTE *)(v40 + 35) ^= (*(_BYTE *)(v40 + 35) ^ (*(_DWORD *)(v8 + 192) >> 9)) & 7;
  _InterlockedAnd64((volatile signed __int64 *)(v40 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(v8 + 168) = MI_READ_PTE_LOCK_FREE(v41);
  *(_QWORD *)(v8 + 232) = v41;
  if ( (int)PsGetIoPriorityThread(CurrentThread, v46, v47) < 2 )
    *(_DWORD *)(v8 + 192) |= 0x80u;
  v48 = a6;
  *(_QWORD *)(v8 + 272) = 0LL;
  *(_QWORD *)(v8 + 304) = 0LL;
  *(_DWORD *)(v8 + 280) = 56;
  *(_QWORD *)(v8 + 312) = 4096LL;
  *(_QWORD *)(v8 + 320) = v39;
  MiObtainProtoReference(v48, 0LL);
  LOBYTE(v49) = 2;
  MiUnlockProtoPoolPage(v48, v49);
  *(_WORD *)(v8 + 282) |= 0x42u;
  *(_QWORD *)(v8 + 248) = v40;
  *(_QWORD *)(v8 + 208) = Src;
  *(_QWORD *)(v8 + 96) = v95;
  *(_QWORD *)(v8 + 240) = v41;
  *(_QWORD *)(v8 + 200) = 0LL;
  *(_QWORD *)(v8 + 160) = v48;
  v52 = MiReservePtes((__int64)&qword_140C4ED40, v91, v50, v51);
  v55 = (_QWORD *)v52;
  if ( v52 )
  {
    v56 = (__int64)(v52 << 25) >> 16;
    Srca = (void *)(v56 + (v95 & 0xFFF) + 4096);
    ValidPte = MiMakeValidPte(v52, v39, 2684354564LL, v54);
    v58 = 0;
    v59 = 0;
    v60 = ValidPte;
    if ( !MiPteInShadowRange((unsigned __int64)v55) )
      goto LABEL_63;
    if ( (unsigned int)MiPteHasShadow(v61, 0x8000000000000000uLL, v62, v63) )
    {
      v59 = 1;
      if ( !HIBYTE(word_140C4DE08) )
      {
        v83 = (v60 & 1) == 0;
LABEL_116:
        if ( !v83 )
          v60 |= v82;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v83 = (v60 & 1) == 0;
      goto LABEL_116;
    }
LABEL_63:
    *v55 = v60;
    if ( v59 )
      MiWritePteShadow(v55, v60);
    v64 = MiMakeValidPte(
            (unsigned __int64)(v55 + 1),
            (signed __int64)(BugCheckParameter2[0] + 0x58000000000LL) / 48,
            536870913LL,
            v63);
    if ( MiPteInShadowRange((unsigned __int64)(v55 + 1)) )
    {
      if ( (unsigned int)MiPteHasShadow(v66, v65, v67, v68) )
      {
        v58 = 1;
        if ( HIBYTE(word_140C4DE08) != v84 )
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
    v55[1] = v64;
    if ( v58 )
      MiWritePteShadow(v55 + 1, v64);
    if ( BugCheckParameter2[5] )
    {
      v69 = MiMakeValidPte(
              (unsigned __int64)(v55 + 2),
              (signed __int64)(BugCheckParameter2[5] + 0x58000000000LL) / 48,
              536870913LL,
              v68);
      v70 = 0;
      if ( MiPteInShadowRange((unsigned __int64)(v55 + 2)) )
      {
        if ( (unsigned int)MiPteHasShadow(v72, v71, v73, v74) )
        {
          v70 = 1;
          if ( HIBYTE(word_140C4DE08) != v85 )
            goto LABEL_70;
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        {
          goto LABEL_70;
        }
        if ( (v69 & 1) != 0 )
          v69 |= 0x8000000000000000uLL;
      }
LABEL_70:
      v55[2] = v69;
      if ( v70 )
        MiWritePteShadow(v55 + 2, v69);
    }
    if ( v95 + 4096 > v100 )
    {
      v81 = ((_WORD)v100 - (_WORD)v95) & 0xFFF;
      memmove((void *)v56, Srca, ((_WORD)v100 - (_WORD)v95) & 0xFFF);
      memset((void *)(v81 + v56), 0, 4096 - v81);
    }
    else
    {
      KeCopyPage(v56, Srca);
    }
    MiReleasePtes(&qword_140C4ED40, v55, v91);
    __incgsdword(0x2E98u);
    v48 = a6;
    v75 = 0;
  }
  else
  {
    v75 = -1073741670;
  }
  *(_DWORD *)(v8 + 80) = v75;
  DecayPfn = 0LL;
  if ( LOBYTE(BugCheckParameter2[4]) || LOBYTE(BugCheckParameter2[9]) )
    DecayPfn = MiCreateDecayPfn();
  v77 = BugCheckParameter2[0];
  v96 = BugCheckParameter2[0];
  if ( BugCheckParameter2[0] )
  {
    while ( 2 )
    {
      v102 = MiLockPageInline(v77);
      v78 = v102;
      if ( (unsigned int)MiRemoveLockedPageCharge(v77) )
      {
        if ( DecayPfn && *((_BYTE *)v38 + 32) && (*(_QWORD *)(v77 + 24) & 0x4000000000000000LL) == 0 )
        {
          MiInsertAndUnlockStandbyPages(DecayPfn, &v96, 1u, v78);
          v102 = 17;
          goto LABEL_85;
        }
        MiPfnReferenceCountIsZero(v77, (v77 + 0x58000000000LL) / 48);
      }
      if ( v78 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v79 = v102;
          if ( v102 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v79 = v102;
            v89 = ~(unsigned __int16)(-1LL << (v102 + 1));
            v83 = (v89 & SchedulerAssist[5]) == 0;
            v53 = (unsigned int)v89 & SchedulerAssist[5];
            SchedulerAssist[5] = v53;
            if ( v83 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        else
        {
          v79 = v102;
        }
        __writecr8(v79);
      }
LABEL_85:
      if ( v38 != BugCheckParameter2 || (v38 += 5, v77 = *v38, (v96 = v77) == 0) )
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
  MiRelockProtoPoolPage(v48, (char *)&v102, v53);
  LOBYTE(v80) = v102;
  *(_DWORD *)(v8 + 192) &= ~0x20u;
  MiUnlockProtoPoolPage(v48, v80);
  *(_QWORD *)(v8 + 88) = 4096LL;
  KeSetEvent((PRKEVENT)(v8 + 32), 0, 0);
  return 1LL;
}
