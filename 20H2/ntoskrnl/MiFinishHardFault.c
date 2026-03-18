/*
 * XREFs of MiFinishHardFault @ 0x1402C80B0
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x1402CFEBC (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x1402CFFA0 (MiIssueHardFault.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140219220 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiRelockFaultState @ 0x140235F50 (MiRelockFaultState.c)
 *     MiIsFaultPteIntact @ 0x140236AF4 (MiIsFaultPteIntact.c)
 *     MiIsPteInStore @ 0x14023AE70 (MiIsPteInStore.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1402A9610 (MiInsertAndUnlockStandbyPages.c)
 *     MiIsPfnCommitNotCharged @ 0x1402AAA20 (MiIsPfnCommitNotCharged.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1402C96D0 (MiRemoveLockedPageCharge.c)
 *     MiFreeInPageSupportBlock @ 0x1402CA7B8 (MiFreeInPageSupportBlock.c)
 *     MiRelockProtoPoolPage @ 0x1402CA924 (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 *     MiReleaseFaultState @ 0x1402D0698 (MiReleaseFaultState.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiMakeTransitionPteValid @ 0x1403115D0 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiHandleInPageError @ 0x1403284DC (MiHandleInPageError.c)
 *     MiInvalidateCollidedIos @ 0x140328AC8 (MiInvalidateCollidedIos.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiDecayPfnFullyInitialized @ 0x140351A08 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x140351B30 (MiCreateDecayPfn.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     MiMakeProtoReadOnly @ 0x140538D98 (MiMakeProtoReadOnly.c)
 *     MiSwapHardFaultPage @ 0x140561CA0 (MiSwapHardFaultPage.c)
 */

__int64 __fastcall MiFinishHardFault(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r10
  unsigned __int64 *v5; // r12
  unsigned int v6; // ebp
  __int64 v9; // rdx
  __int64 v10; // r15
  int v11; // esi
  _DWORD *v12; // rax
  _DWORD *v13; // r9
  _DWORD *v14; // r14
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r13
  int v19; // eax
  __int64 v20; // rax
  char *v21; // rdx
  int v22; // ebx
  __int64 v23; // rax
  int IsFaultPteIntact; // eax
  int v25; // ecx
  unsigned __int64 v26; // rdi
  int v27; // ecx
  __int64 DecayPfn; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rbx
  unsigned int v31; // r12d
  __int64 v32; // r14
  __int64 v33; // r13
  unsigned __int8 v34; // di
  __int64 v35; // r15
  unsigned __int8 v36; // di
  __int64 v37; // rcx
  unsigned __int8 v38; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v41; // eax
  unsigned __int8 v42; // al
  _DWORD *v43; // rbx
  unsigned __int64 v44; // r13
  __int64 *v45; // r12
  __int64 v46; // rax
  __int64 v47; // rbx
  unsigned __int64 v48; // rdi
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rbx
  unsigned __int64 v55; // rdi
  struct _KPRCB *v56; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v58; // eax
  __int64 result; // rax
  bool v60; // zf
  char v61; // al
  int v62; // eax
  __int64 v63; // rax
  unsigned __int64 *v64; // rdi
  char v65; // al
  __int64 v66; // rcx
  int v67; // eax
  __int64 TransitionPteValid; // rdi
  unsigned __int64 v69; // rbx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int64 *v74; // rcx
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r10
  _DWORD *v77; // r9
  int v78; // eax
  __int64 v79; // rax
  unsigned __int8 v80; // [rsp+20h] [rbp-178h]
  char v81; // [rsp+21h] [rbp-177h] BYREF
  int v82; // [rsp+24h] [rbp-174h]
  int v83; // [rsp+28h] [rbp-170h]
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-168h]
  unsigned int v85; // [rsp+38h] [rbp-160h]
  __int64 v86; // [rsp+40h] [rbp-158h]
  unsigned __int64 v87; // [rsp+48h] [rbp-150h]
  unsigned __int64 *v88; // [rsp+50h] [rbp-148h]
  __int64 v89; // [rsp+58h] [rbp-140h]
  _QWORD *v90; // [rsp+60h] [rbp-138h]
  __int64 v91; // [rsp+68h] [rbp-130h]
  int v92; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int64 v93; // [rsp+78h] [rbp-120h]
  __int64 CurrentIrql; // [rsp+80h] [rbp-118h]
  _DWORD *v95; // [rsp+88h] [rbp-110h]
  __int64 v96; // [rsp+90h] [rbp-108h]
  __int64 v97; // [rsp+98h] [rbp-100h]
  __int64 *v98; // [rsp+A0h] [rbp-F8h]
  __int64 v99; // [rsp+A8h] [rbp-F0h]
  __int64 v100; // [rsp+B0h] [rbp-E8h]
  __int64 v101; // [rsp+B8h] [rbp-E0h]
  _OWORD v102[8]; // [rsp+C0h] [rbp-D8h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(unsigned __int64 **)(a3 + 232);
  v6 = *(_DWORD *)(a3 + 112);
  v101 = a1 + 56;
  v9 = *(_QWORD *)(a3 + 152);
  v10 = a3;
  v89 = *(_QWORD *)(a3 + 104);
  v11 = 0;
  v12 = *(_DWORD **)(a3 + 256);
  v98 = a4;
  v13 = (_DWORD *)(a3 + 272);
  v91 = a3;
  if ( v12 )
    v13 = v12;
  v100 = v4;
  memset(v102, 0, sizeof(v102));
  v85 = v6;
  v14 = v13 + 12;
  v15 = (v13[8] + v13[11]) & 0xFFF;
  v16 = (unsigned int)v13[10] + 4095LL;
  v88 = v5;
  v95 = v13;
  v90 = v13 + 12;
  v87 = (unsigned __int64)&v13[2 * ((unsigned __int64)(v15 + v16) >> 12) + 10];
  v17 = *(unsigned int *)(a3 + 188);
  if ( (_DWORD)v17 == -1 )
    v93 = -1LL;
  else
    v93 = (unsigned __int64)&v13[2 * v17 + 12];
  v18 = *(_QWORD *)(a3 + 160);
  v86 = *(_QWORD *)(a3 + 248);
  v96 = *(_QWORD *)(a3 + 224);
  v19 = *(_DWORD *)(a3 + 192);
  v99 = v18;
  if ( (v19 & 0x100000) != 0 || !v4 || (v82 = 0, (v19 & 8) != 0) )
    v82 = -1073740748;
  v81 = 17;
  v20 = 1LL;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( (*(_DWORD *)(a3 + 192) & 0x1000000) == 0 )
    {
      if ( (*(_BYTE *)(v4 + 184) & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v9);
      else
        KeLeaveCriticalRegionThread(v9);
    }
    MiRelockFaultState((__int64 *)(a1 + 56), a2);
    LOBYTE(v20) = CurrentIrql;
    *(_BYTE *)(a1 + 68) = CurrentIrql;
  }
  else
  {
    LOBYTE(v20) = 17;
    CurrentIrql = v20;
  }
  if ( v18 )
  {
    v21 = &v81;
    if ( (_BYTE)v20 != 17 )
      v21 = 0LL;
    MiRelockProtoPoolPage(v18, v21);
  }
  if ( *(_DWORD *)(v10 + 180) )
  {
    v22 = -1073741670;
    *(_QWORD *)(v10 + 88) = 0LL;
    *(_DWORD *)(v10 + 80) = -1073741670;
  }
  else
  {
    v22 = *(_DWORD *)(v10 + 80);
  }
  v83 = v22;
  v80 = 17;
  if ( *(_QWORD *)(v10 + 16) != v10 + 16 )
  {
    v23 = MiInvalidateCollidedIos(v10) & 1;
    v11 = 2 * v23;
    if ( !(_DWORD)v23 )
    {
      *(_DWORD *)(v10 + 80) = -1073741801;
      *(_QWORD *)(v10 + 88) = 0LL;
    }
  }
  if ( v18 )
  {
    v92 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v92);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v18);
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v82 >= 0 )
  {
    IsFaultPteIntact = MiIsFaultPteIntact(a1, v96, (__int64)v5, (_QWORD *)(v10 + 168));
    v25 = v82;
    if ( !IsFaultPteIntact )
      v25 = -1073740748;
    v82 = v25;
  }
  v26 = v87;
  if ( v22 >= 0
    && ((v27 = *(_DWORD *)(v10 + 192), (v27 & 8) != 0)
     || *(_QWORD *)(v10 + 256)
     || (_DWORD *)v87 != v14 && v93 > (unsigned __int64)(v95 + 14))
    && (v27 & 0xE00) != 0
    && (v27 & 0x80000) != 0
    && (v27 & 0x8000) == 0 )
  {
    DecayPfn = MiCreateDecayPfn();
    v29 = 0LL;
  }
  else
  {
    v29 = 0LL;
    DecayPfn = 0LL;
  }
  v30 = v90;
  v31 = 0;
  v32 = ZeroPte;
  BugCheckParameter2 = DecayPfn;
  v97 = 0LL;
  if ( (unsigned __int64)v90 <= v26 )
  {
    v9 = 3221225535LL;
    v33 = v10;
    v34 = 17;
    while ( 1 )
    {
      v35 = 48LL * *v30 - 0x58000000000LL;
      if ( v35 == qword_140C4EBF0 )
        goto LABEL_84;
      if ( v31 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
        {
          MiInsertAndUnlockStandbyPages(DecayPfn, v102, v31, v34);
          v29 = 0LL;
          v31 = 0;
          --v30;
          goto LABEL_83;
        }
        v36 = v80;
      }
      else
      {
        v36 = MiLockPageInline(48LL * *v30 - 0x58000000000LL);
        v80 = v36;
        v29 = 0LL;
        v9 = 3221225535LL;
      }
      v11 &= 0xFFFFFFCF;
      if ( (v6 & 1) != 0 && HIWORD(v6) )
        v6 = (unsigned __int16)v6 | ((HIWORD(v6) - 1) << 16);
      if ( (*(_QWORD *)(v35 + 24) & 0x4000000000000000LL) != 0 )
        break;
      v61 = *(_BYTE *)(v35 + 35);
      if ( (v61 & 0x10) != 0 )
      {
        v37 = v86;
        if ( v35 == v86 )
        {
          v62 = v83;
          if ( v83 >= 0 )
            v62 = -1073741761;
          v83 = v62;
        }
        v11 |= 0x10u;
      }
      else
      {
        if ( v83 < 0 )
        {
          *(_BYTE *)(v35 + 35) = v61 | 0x10;
          v11 |= 0x10u;
          goto LABEL_60;
        }
        if ( (unsigned __int64)v30 < v93 )
          goto LABEL_60;
        v9 = (unsigned int)v82;
        v37 = v86;
        if ( v35 == v86 )
          v9 = 3221226548LL;
        *(_BYTE *)(v35 + 35) = v61 | 0x10;
        v11 |= 0x10u;
        v82 = v9;
      }
LABEL_61:
      *(_BYTE *)(v35 + 34) &= ~0x20u;
      *(_QWORD *)v35 = 0LL;
      if ( (v11 & 0x30) != 0 )
      {
        if ( v31 )
        {
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v102, v31, 0x11u);
          v31 = 0;
        }
        if ( (v11 & 0x30) == 0x10 )
        {
          v11 &= ~4u;
          if ( (*(_DWORD *)(v33 + 192) & 0x10) == 0 || (v11 & 2) != 0 )
            v11 |= 4u;
          if ( (v11 & 4) != 0 && (*(_DWORD *)(v35 + 16) & 0x400LL) == 0 && !(unsigned int)MiIsPfnCommitNotCharged(v35) )
            MiChargeCommit(*(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v35 + 40) >> 39) & 0x3FFLL)), 1uLL, 4u);
          MiHandleInPageError(v35, v9, v29);
        }
        MiRemoveLockedPageChargeAndDecRef(v35);
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v38 = KeGetCurrentIrql();
            if ( v38 <= 0xFu && v36 <= 0xFu && v38 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v41 = ~(unsigned __int16)(-1LL << (v36 + 1));
              v60 = (v41 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v41;
              if ( v60 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v36);
LABEL_81:
        v29 = 0LL;
LABEL_82:
        v34 = v80;
        goto LABEL_83;
      }
      if ( v35 != v37 )
        goto LABEL_179;
      v63 = v89;
      v11 |= 1u;
      if ( v89 )
      {
        if ( v31 )
        {
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v102, v31, 0x11u);
          v63 = v89;
          v31 = 0;
        }
        v64 = v88;
        MiSwapHardFaultPage(v88, v35, v63);
        v37 = v89;
        v86 = v89;
        v35 = v89;
        v89 = 0LL;
      }
      else
      {
        v64 = v88;
      }
      if ( v35 != v37 || v82 < 0 )
      {
LABEL_179:
        if ( (*(_DWORD *)(v33 + 192) & 0x8000) != 0 )
        {
          *v30 |= 0x8000000000000000uLL;
        }
        else if ( (unsigned int)MiRemoveLockedPageCharge(v35) )
        {
          if ( v31 == 16 )
          {
            MiInsertAndUnlockStandbyPages(BugCheckParameter2, v102, 0x10u, 0x11u);
            v29 = 0LL;
            v31 = 1;
            *(_QWORD *)&v102[0] = v35;
          }
          else
          {
            v79 = v31;
            v29 = 0LL;
            ++v31;
            *((_QWORD *)v102 + v79) = v35;
          }
          goto LABEL_82;
        }
        goto LABEL_171;
      }
      if ( v31 )
      {
        MiInsertAndUnlockStandbyPages(BugCheckParameter2, v102, v31, 0x11u);
        v31 = 0;
      }
      MiAddLockedPageCharge(v35, 3LL);
      v65 = *(_BYTE *)(v35 + 34) & 0xFE;
      *(_QWORD *)(v35 + 24) ^= ((*(_QWORD *)(v35 + 24) + 1LL) ^ *(_QWORD *)(v35 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_BYTE *)(v35 + 34) = v65 | 6;
      MiRemoveLockedPageChargeAndDecRef(v35);
      v66 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v35 + 40) >> 39) & 0x3FFLL));
      v67 = *(_DWORD *)(v35 + 16);
      v97 = v66;
      if ( (v67 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v66, *(_QWORD *)(v35 + 16)) )
        v32 = MiCaptureDirtyBitToPfn(v35);
      if ( (unsigned int)MI_PFN_IS_PROTO(v35) )
      {
        if ( ((*(_DWORD *)v64 >> 5) & 0x1F) == 0x18 )
          MiMakeProtoReadOnly(v64, v35);
        TransitionPteValid = MiMakeTransitionPteValid(v64);
        v69 = TransitionPteValid;
        if ( MiPteInShadowRange((unsigned __int64)v88) )
        {
          if ( (unsigned int)MiPteHasShadow(v71, v70, v72, v73) )
          {
            if ( !HIBYTE(word_140C4DE88) && (TransitionPteValid & 1) != 0 )
              v69 = TransitionPteValid | 0x8000000000000000uLL;
            v74 = v88;
            *v88 = v69;
            MiWritePteShadow(v74, v69);
            goto LABEL_169;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (TransitionPteValid & 1) != 0 )
          {
            v69 = TransitionPteValid | 0x8000000000000000uLL;
          }
        }
        *v88 = v69;
LABEL_169:
        v30 = v90;
        if ( v98 )
          *v98 = TransitionPteValid;
      }
LABEL_171:
      _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v31 )
        goto LABEL_81;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || (v75 = KeGetCurrentIrql(), v75 > 0xFu) )
      {
        v34 = v80;
LABEL_186:
        __writecr8(v34);
        v29 = 0LL;
        goto LABEL_83;
      }
      v34 = v80;
      if ( v80 > 0xFu )
        goto LABEL_186;
      if ( v75 < 2u )
        goto LABEL_186;
      v76 = KeGetCurrentPrcb();
      v77 = v76->SchedulerAssist;
      v78 = ~(unsigned __int16)(-1LL << (v80 + 1));
      v60 = (v78 & v77[5]) == 0;
      v77[5] &= v78;
      if ( !v60 )
        goto LABEL_186;
      KiRemoveSystemWorkPriorityKick(v76);
      __writecr8(v80);
      v29 = 0LL;
LABEL_83:
      v9 = 3221225535LL;
LABEL_84:
      v90 = ++v30;
      if ( (unsigned __int64)v30 > v87 )
      {
        v18 = v99;
        v85 = v6;
        if ( v31 )
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v102, v31, v34);
        v10 = v91;
        goto LABEL_88;
      }
      DecayPfn = BugCheckParameter2;
    }
    v11 |= 0x20u;
LABEL_60:
    v37 = v86;
    goto LABEL_61;
  }
LABEL_88:
  if ( v18 )
  {
    v42 = v81;
    if ( (_BYTE)CurrentIrql != 17 )
      v42 = 17;
    MiUnlockProtoPoolPage(v18, v42);
  }
  if ( (*(_DWORD *)(v10 + 192) & 0x8000) != 0 )
  {
    v43 = v95;
    MmCheckCachedPageStates(v96 + (*(_DWORD *)(v10 + 96) & 0x3FFFF), (unsigned int)v95[10], 2, 0LL);
    v44 = v87;
    v45 = (__int64 *)(v43 + 12);
    if ( (unsigned __int64)(v43 + 12) <= v87 )
    {
      do
      {
        if ( *v45 < 0 )
        {
          v46 = *v45 & 0x7FFFFFFFFFFFFFFFLL;
          *v45 = v46;
          v47 = 48 * v46 - 0x58000000000LL;
          v48 = (unsigned __int8)MiLockPageInline(v47);
          MiRemoveLockedPageChargeAndDecRef(v47);
          _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v49 = KeGetCurrentIrql();
              if ( v49 <= 0xFu && (unsigned __int8)v48 <= 0xFu && v49 >= 2u )
              {
                v50 = KeGetCurrentPrcb();
                v9 = -1LL << ((unsigned __int8)v48 + 1);
                v51 = v50->SchedulerAssist;
                v52 = ~(unsigned __int16)v9;
                v60 = (v52 & v51[5]) == 0;
                v51[5] &= v52;
                if ( v60 )
                  KiRemoveSystemWorkPriorityKick(v50);
              }
            }
          }
          __writecr8(v48);
        }
        ++v45;
      }
      while ( (unsigned __int64)v45 <= v44 );
      LOBYTE(v6) = v85;
      v10 = v91;
    }
  }
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  if ( v32 )
    MiReleasePageFileInfo(v97, v32, 0LL);
  if ( v100 && (*(_DWORD *)(v10 + 192) & 0x1000000) != 0 )
  {
    LOBYTE(v9) = 17;
    MiReleaseFaultState(v101, v9, 0LL);
  }
  if ( (*(_DWORD *)(v10 + 192) & 0x200000) == 0 )
    ObDereferenceObjectDeferDelete(*(PVOID *)(v10 + 200));
  if ( *(int *)(v10 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v10 + 56), 0, 0);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v10);
  if ( v89 )
  {
    v53 = (*(_QWORD *)(v89 + 40) >> 39) & 0x3FFLL;
    v54 = *(_QWORD *)(qword_140C4E4C8 + 8 * v53);
    MiReleaseFreshPage(v89, v53);
    v55 = 1LL;
    MiReturnCommit(v54, 1LL);
    if ( (ULONG_PTR *)v54 == &MiSystemPartition )
    {
      v56 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v56->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v58 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v56->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v60 = (_DWORD)CachedResidentAvailable == v58;
            LODWORD(CachedResidentAvailable) = v58;
            if ( v60 )
              goto LABEL_128;
          }
          while ( v58 != -1 && (unsigned __int64)(v58 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v56->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v55 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( !v55 )
          goto LABEL_128;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v54 + 7168), v55);
  }
LABEL_128:
  result = (unsigned int)v83;
  if ( v83 >= 0 )
  {
    result = (unsigned int)v82;
    v60 = (v11 & 1) == 0;
  }
  else
  {
    if ( (v6 & 1) == 0 )
      return result;
    v60 = (v6 & 2) == 0;
  }
  if ( v60 )
    return 3221226548LL;
  return result;
}
