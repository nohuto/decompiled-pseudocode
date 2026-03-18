/*
 * XREFs of MiFinishHardFault @ 0x14022AA00
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x14025AD4C (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x14025B740 (MiIssueHardFault.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiFreeInPageSupportBlock @ 0x140229534 (MiFreeInPageSupportBlock.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140229704 (MiRelockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14022C020 (MiRemoveLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiIsPfnCommitNotCharged @ 0x14022CF60 (MiIsPfnCommitNotCharged.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140234630 (MiInsertAndUnlockStandbyPages.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiRelockFaultState @ 0x140253F1C (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14025BE38 (MiReleaseFaultState.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDelete @ 0x140286A70 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiIsPteInStore @ 0x140314E74 (MiIsPteInStore.c)
 *     MiIsFaultPteIntact @ 0x140315C5C (MiIsFaultPteIntact.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiDecayPfnFullyInitialized @ 0x14033A13C (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14033BC68 (MiCreateDecayPfn.c)
 *     MiMakeTransitionPteValid @ 0x1403405A0 (MiMakeTransitionPteValid.c)
 *     MiHandleInPageError @ 0x140357D0C (MiHandleInPageError.c)
 *     MiInvalidateCollidedIos @ 0x14035875C (MiInvalidateCollidedIos.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     MiMakeProtoReadOnly @ 0x1405353C8 (MiMakeProtoReadOnly.c)
 *     MiSwapHardFaultPage @ 0x14055E2D0 (MiSwapHardFaultPage.c)
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
  unsigned __int64 v33; // r9
  __int64 v34; // r13
  unsigned __int8 v35; // di
  __int64 v36; // r15
  unsigned __int8 v37; // di
  __int64 v38; // rcx
  unsigned __int8 v39; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v42; // eax
  unsigned __int8 v43; // al
  _DWORD *v44; // rbx
  unsigned __int64 v45; // r13
  __int64 *v46; // r12
  __int64 v47; // rax
  __int64 v48; // rbx
  unsigned __int64 v49; // rdi
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  int v52; // eax
  __int64 v53; // rbx
  unsigned __int64 v54; // rdi
  struct _KPRCB *v55; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v57; // eax
  __int64 result; // rax
  bool v59; // zf
  char v60; // al
  int v61; // eax
  __int64 v62; // rax
  unsigned __int64 *v63; // rdi
  char v64; // al
  __int64 v65; // rcx
  int v66; // eax
  __int64 TransitionPteValid; // rdi
  unsigned __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  unsigned __int64 *v73; // rcx
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  __int64 v78; // r9
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
    MiRelockFaultState(a1 + 56, a2);
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
    MiRelockProtoPoolPage(v18, v21, a3);
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
        KeYieldProcessorEx(&v92, v9);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v18);
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v82 >= 0 )
  {
    IsFaultPteIntact = MiIsFaultPteIntact(a1, v96, v5, v10 + 168);
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
  v33 = 0xFFFFFA8000000000uLL;
  if ( (unsigned __int64)v90 <= v26 )
  {
    v9 = 3221225535LL;
    v34 = v10;
    v35 = 17;
    while ( 1 )
    {
      v36 = 48LL * *v30 - 0x58000000000LL;
      if ( v36 == qword_140C4EB70 )
        goto LABEL_84;
      if ( v31 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
        {
          MiInsertAndUnlockStandbyPages(DecayPfn, v102, v31, v35);
          v29 = 0LL;
          v31 = 0;
          --v30;
          goto LABEL_83;
        }
        v37 = v80;
      }
      else
      {
        v37 = MiLockPageInline(48LL * *v30 - 0x58000000000LL);
        v80 = v37;
        v29 = 0LL;
        v9 = 3221225535LL;
      }
      v11 &= 0xFFFFFFCF;
      if ( (v6 & 1) != 0 && HIWORD(v6) )
        v6 = (unsigned __int16)v6 | ((HIWORD(v6) - 1) << 16);
      if ( (*(_QWORD *)(v36 + 24) & 0x4000000000000000LL) != 0 )
        break;
      v60 = *(_BYTE *)(v36 + 35);
      if ( (v60 & 0x10) != 0 )
      {
        v38 = v86;
        if ( v36 == v86 )
        {
          v61 = v83;
          if ( v83 >= 0 )
            v61 = -1073741761;
          v83 = v61;
        }
        v11 |= 0x10u;
      }
      else
      {
        if ( v83 < 0 )
        {
          *(_BYTE *)(v36 + 35) = v60 | 0x10;
          v11 |= 0x10u;
          goto LABEL_60;
        }
        if ( (unsigned __int64)v30 < v93 )
          goto LABEL_60;
        v9 = (unsigned int)v82;
        v33 = 3221226548LL;
        v38 = v86;
        if ( v36 == v86 )
          v9 = 3221226548LL;
        *(_BYTE *)(v36 + 35) = v60 | 0x10;
        v11 |= 0x10u;
        v82 = v9;
      }
LABEL_61:
      *(_BYTE *)(v36 + 34) &= ~0x20u;
      *(_QWORD *)v36 = 0LL;
      if ( (v11 & 0x30) != 0 )
      {
        if ( v31 )
        {
          LOBYTE(v33) = 17;
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v102, v31, v33);
          v31 = 0;
        }
        if ( (v11 & 0x30) == 0x10 )
        {
          v11 &= ~4u;
          if ( (*(_DWORD *)(v34 + 192) & 0x10) == 0 || (v11 & 2) != 0 )
            v11 |= 4u;
          if ( (v11 & 4) != 0
            && (*(_DWORD *)(v36 + 16) & 0x400LL) == 0
            && !(unsigned int)MiIsPfnCommitNotCharged(v36, v9, v29) )
          {
            MiChargeCommit(*(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v36 + 40) >> 39) & 0x3FFLL)), 1LL, 4LL);
          }
          MiHandleInPageError(v36, v9, v29);
        }
        MiRemoveLockedPageChargeAndDecRef(v36);
        _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v39 = KeGetCurrentIrql();
            if ( v39 <= 0xFu && v37 <= 0xFu && v39 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v42 = ~(unsigned __int16)(-1LL << (v37 + 1));
              v59 = (v42 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v42;
              if ( v59 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v37);
LABEL_81:
        v29 = 0LL;
LABEL_82:
        v35 = v80;
        goto LABEL_83;
      }
      if ( v36 != v38 )
        goto LABEL_179;
      v62 = v89;
      v11 |= 1u;
      if ( v89 )
      {
        if ( v31 )
        {
          LOBYTE(v33) = 17;
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v102, v31, v33);
          v62 = v89;
          v31 = 0;
        }
        v63 = v88;
        MiSwapHardFaultPage(v88, v36, v62);
        v38 = v89;
        v86 = v89;
        v36 = v89;
        v89 = 0LL;
      }
      else
      {
        v63 = v88;
      }
      if ( v36 != v38 || v82 < 0 )
      {
LABEL_179:
        if ( (*(_DWORD *)(v34 + 192) & 0x8000) != 0 )
        {
          *v30 |= 0x8000000000000000uLL;
        }
        else if ( (unsigned int)MiRemoveLockedPageCharge(v36) )
        {
          if ( v31 == 16 )
          {
            LOBYTE(v78) = 17;
            MiInsertAndUnlockStandbyPages(BugCheckParameter2, v102, 16LL, v78);
            v29 = 0LL;
            v31 = 1;
            *(_QWORD *)&v102[0] = v36;
          }
          else
          {
            v79 = v31;
            v29 = 0LL;
            ++v31;
            *((_QWORD *)v102 + v79) = v36;
          }
          goto LABEL_82;
        }
        goto LABEL_171;
      }
      if ( v31 )
      {
        LOBYTE(v33) = 17;
        MiInsertAndUnlockStandbyPages(BugCheckParameter2, v102, v31, v33);
        v31 = 0;
      }
      MiAddLockedPageCharge(v36, 3LL, v29);
      v64 = *(_BYTE *)(v36 + 34) & 0xFE;
      *(_QWORD *)(v36 + 24) ^= ((*(_QWORD *)(v36 + 24) + 1LL) ^ *(_QWORD *)(v36 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_BYTE *)(v36 + 34) = v64 | 6;
      MiRemoveLockedPageChargeAndDecRef(v36);
      v65 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v36 + 40) >> 39) & 0x3FFLL));
      v66 = *(_DWORD *)(v36 + 16);
      v97 = v65;
      if ( (v66 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v65, *(_QWORD *)(v36 + 16)) )
        v32 = MiCaptureDirtyBitToPfn(v36);
      if ( (unsigned int)MI_PFN_IS_PROTO(v36) )
      {
        if ( ((*(_DWORD *)v63 >> 5) & 0x1F) == 0x18 )
          MiMakeProtoReadOnly(v63, v36);
        TransitionPteValid = MiMakeTransitionPteValid(v63);
        v68 = TransitionPteValid;
        if ( (unsigned int)MiPteInShadowRange(v88) )
        {
          if ( (unsigned int)MiPteHasShadow(v70, v69, v71, v72) )
          {
            if ( !HIBYTE(word_140C4DE08) && (TransitionPteValid & 1) != 0 )
              v68 = TransitionPteValid | 0x8000000000000000uLL;
            v73 = v88;
            *v88 = v68;
            MiWritePteShadow(v73, v68);
            goto LABEL_169;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (TransitionPteValid & 1) != 0 )
          {
            v68 = TransitionPteValid | 0x8000000000000000uLL;
          }
        }
        *v88 = v68;
LABEL_169:
        v30 = v90;
        if ( v98 )
          *v98 = TransitionPteValid;
      }
LABEL_171:
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v31 )
        goto LABEL_81;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || (v74 = KeGetCurrentIrql(), v74 > 0xFu) )
      {
        v35 = v80;
LABEL_186:
        __writecr8(v35);
        v29 = 0LL;
        goto LABEL_83;
      }
      v35 = v80;
      if ( v80 > 0xFu )
        goto LABEL_186;
      if ( v74 < 2u )
        goto LABEL_186;
      v75 = KeGetCurrentPrcb();
      v76 = v75->SchedulerAssist;
      v77 = ~(unsigned __int16)(-1LL << (v80 + 1));
      v59 = (v77 & v76[5]) == 0;
      v76[5] &= v77;
      if ( !v59 )
        goto LABEL_186;
      KiRemoveSystemWorkPriorityKick(v75);
      __writecr8(v80);
      v29 = 0LL;
LABEL_83:
      v9 = 3221225535LL;
      v33 = 0xFFFFFA8000000000uLL;
LABEL_84:
      v90 = ++v30;
      if ( (unsigned __int64)v30 > v87 )
      {
        v18 = v99;
        v85 = v6;
        if ( v31 )
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v102, v31, v35);
        v10 = v91;
        goto LABEL_88;
      }
      DecayPfn = BugCheckParameter2;
    }
    v11 |= 0x20u;
LABEL_60:
    v38 = v86;
    goto LABEL_61;
  }
LABEL_88:
  if ( v18 )
  {
    v43 = v81;
    if ( (_BYTE)CurrentIrql != 17 )
      v43 = 17;
    MiUnlockProtoPoolPage(v18, v43);
  }
  if ( (*(_DWORD *)(v10 + 192) & 0x8000) != 0 )
  {
    v44 = v95;
    MmCheckCachedPageStates(v96 + (*(_DWORD *)(v10 + 96) & 0x3FFFF), (unsigned int)v95[10], 2LL, 0LL);
    v45 = v87;
    v46 = (__int64 *)(v44 + 12);
    if ( (unsigned __int64)(v44 + 12) <= v87 )
    {
      do
      {
        if ( *v46 < 0 )
        {
          v47 = *v46 & 0x7FFFFFFFFFFFFFFFLL;
          *v46 = v47;
          v48 = 48 * v47 - 0x58000000000LL;
          v49 = (unsigned __int8)MiLockPageInline(v48);
          MiRemoveLockedPageChargeAndDecRef(v48);
          _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v50 = KeGetCurrentIrql();
              if ( v50 <= 0xFu && (unsigned __int8)v49 <= 0xFu && v50 >= 2u )
              {
                v51 = KeGetCurrentPrcb();
                v9 = -1LL << ((unsigned __int8)v49 + 1);
                v33 = (unsigned __int64)v51->SchedulerAssist;
                v52 = ~(unsigned __int16)v9;
                v59 = (v52 & *(_DWORD *)(v33 + 20)) == 0;
                *(_DWORD *)(v33 + 20) &= v52;
                if ( v59 )
                  KiRemoveSystemWorkPriorityKick(v51);
              }
            }
          }
          __writecr8(v49);
        }
        ++v46;
      }
      while ( (unsigned __int64)v46 <= v45 );
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
    MiReleaseFaultState(v101, v9, 0LL, v33);
  }
  if ( (*(_DWORD *)(v10 + 192) & 0x200000) == 0 )
    ObDereferenceObjectDeferDelete(*(PVOID *)(v10 + 200));
  if ( *(int *)(v10 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v10 + 56), 0, 0);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v10);
  if ( v89 )
  {
    v53 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v89 + 40) >> 39) & 0x3FFLL));
    MiReleaseFreshPage(v89);
    v54 = 1LL;
    MiReturnCommit(v53, 1LL);
    if ( (ULONG_PTR *)v53 == &MiSystemPartition )
    {
      v55 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v55->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v57 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v55->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v59 = (_DWORD)CachedResidentAvailable == v57;
            LODWORD(CachedResidentAvailable) = v57;
            if ( v59 )
              goto LABEL_128;
          }
          while ( v57 != -1 && (unsigned __int64)(v57 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v55->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v54 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( !v54 )
          goto LABEL_128;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v53 + 7168), v54);
  }
LABEL_128:
  result = (unsigned int)v83;
  if ( v83 >= 0 )
  {
    result = (unsigned int)v82;
    v59 = (v11 & 1) == 0;
  }
  else
  {
    if ( (v6 & 1) == 0 )
      return result;
    v59 = (v6 & 2) == 0;
  }
  if ( v59 )
    return 3221226548LL;
  return result;
}
