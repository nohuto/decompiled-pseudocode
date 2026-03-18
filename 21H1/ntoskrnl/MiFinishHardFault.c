/*
 * XREFs of MiFinishHardFault @ 0x140283A50
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x1402B3D7C (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x1402B4770 (MiIssueHardFault.c)
 * Callees:
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x14024A1D0 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiFreeInPageSupportBlock @ 0x140282584 (MiFreeInPageSupportBlock.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiRelockProtoPoolPage @ 0x140282754 (MiRelockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140285070 (MiRemoveLockedPageCharge.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiIsPfnCommitNotCharged @ 0x140285FB0 (MiIsPfnCommitNotCharged.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14028D680 (MiInsertAndUnlockStandbyPages.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiRelockFaultState @ 0x1402ACF4C (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x1402B4E68 (MiReleaseFaultState.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiDecayPfnFullyInitialized @ 0x1402FCDFC (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x1402FF368 (MiCreateDecayPfn.c)
 *     MiMakeTransitionPteValid @ 0x1403037D0 (MiMakeTransitionPteValid.c)
 *     MiHandleInPageError @ 0x14031A1EC (MiHandleInPageError.c)
 *     MiInvalidateCollidedIos @ 0x14031ACAC (MiInvalidateCollidedIos.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiIsPteInStore @ 0x1403441B4 (MiIsPteInStore.c)
 *     MiIsFaultPteIntact @ 0x140344F9C (MiIsFaultPteIntact.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     MiMakeProtoReadOnly @ 0x140534D78 (MiMakeProtoReadOnly.c)
 *     MiSwapHardFaultPage @ 0x14055DC80 (MiSwapHardFaultPage.c)
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
  __int64 v33; // r9
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
  __int64 v45; // r8
  unsigned __int64 v46; // r13
  __int64 *v47; // r12
  __int64 v48; // rax
  __int64 v49; // rbx
  unsigned __int64 v50; // rdi
  unsigned __int8 v51; // al
  struct _KPRCB *v52; // r10
  _DWORD *v53; // r9
  int v54; // eax
  __int64 v55; // rbx
  unsigned __int64 v56; // rdi
  struct _KPRCB *v57; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v59; // eax
  __int64 result; // rax
  bool v61; // zf
  char v62; // al
  int v63; // eax
  __int64 v64; // rax
  unsigned __int64 *v65; // rdi
  char v66; // al
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rcx
  int v70; // eax
  __int64 TransitionPteValid; // rdi
  unsigned __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 v75; // rcx
  unsigned __int64 *v76; // rcx
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r10
  _DWORD *v79; // r9
  int v80; // eax
  __int64 v81; // r9
  __int64 v82; // rax
  unsigned __int8 v83; // [rsp+20h] [rbp-178h]
  char v84; // [rsp+21h] [rbp-177h] BYREF
  int v85; // [rsp+24h] [rbp-174h]
  int v86; // [rsp+28h] [rbp-170h]
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-168h]
  unsigned int v88; // [rsp+38h] [rbp-160h]
  __int64 v89; // [rsp+40h] [rbp-158h]
  unsigned __int64 v90; // [rsp+48h] [rbp-150h]
  unsigned __int64 *v91; // [rsp+50h] [rbp-148h]
  __int64 v92; // [rsp+58h] [rbp-140h]
  _QWORD *v93; // [rsp+60h] [rbp-138h]
  __int64 v94; // [rsp+68h] [rbp-130h]
  int v95; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int64 v96; // [rsp+78h] [rbp-120h]
  __int64 CurrentIrql; // [rsp+80h] [rbp-118h]
  _DWORD *v98; // [rsp+88h] [rbp-110h]
  __int64 v99; // [rsp+90h] [rbp-108h]
  __int64 v100; // [rsp+98h] [rbp-100h]
  __int64 *v101; // [rsp+A0h] [rbp-F8h]
  __int64 v102; // [rsp+A8h] [rbp-F0h]
  __int64 v103; // [rsp+B0h] [rbp-E8h]
  __int64 v104; // [rsp+B8h] [rbp-E0h]
  _OWORD v105[8]; // [rsp+C0h] [rbp-D8h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(unsigned __int64 **)(a3 + 232);
  v6 = *(_DWORD *)(a3 + 112);
  v104 = a1 + 56;
  v9 = *(_QWORD *)(a3 + 152);
  v10 = a3;
  v92 = *(_QWORD *)(a3 + 104);
  v11 = 0;
  v12 = *(_DWORD **)(a3 + 256);
  v101 = a4;
  v13 = (_DWORD *)(a3 + 272);
  v94 = a3;
  if ( v12 )
    v13 = v12;
  v103 = v4;
  memset(v105, 0, sizeof(v105));
  v88 = v6;
  v14 = v13 + 12;
  v15 = (v13[8] + v13[11]) & 0xFFF;
  v16 = (unsigned int)v13[10] + 4095LL;
  v91 = v5;
  v98 = v13;
  v93 = v13 + 12;
  v90 = (unsigned __int64)&v13[2 * ((unsigned __int64)(v15 + v16) >> 12) + 10];
  v17 = *(unsigned int *)(a3 + 188);
  if ( (_DWORD)v17 == -1 )
    v96 = -1LL;
  else
    v96 = (unsigned __int64)&v13[2 * v17 + 12];
  v18 = *(_QWORD *)(a3 + 160);
  v89 = *(_QWORD *)(a3 + 248);
  v99 = *(_QWORD *)(a3 + 224);
  v19 = *(_DWORD *)(a3 + 192);
  v102 = v18;
  if ( (v19 & 0x100000) != 0 || !v4 || (v85 = 0, (v19 & 8) != 0) )
    v85 = -1073740748;
  v84 = 17;
  v20 = 1LL;
  if ( v4 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( (*(_DWORD *)(a3 + 192) & 0x1000000) == 0 )
    {
      if ( (*(_BYTE *)(v4 + 184) & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v9, v9, a3, (__int64)v13);
      else
        KeLeaveCriticalRegionThread(v9, v9, a3, (__int64)v13);
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
    v21 = &v84;
    if ( (_BYTE)v20 != 17 )
      v21 = 0LL;
    MiRelockProtoPoolPage(v18, v21, a3, (__int64)v13);
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
  v86 = v22;
  v83 = 17;
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
    v95 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v95, v9, a3, (__int64)v13);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v18);
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v85 >= 0 )
  {
    IsFaultPteIntact = MiIsFaultPteIntact(a1, v99, v5, v10 + 168);
    v25 = v85;
    if ( !IsFaultPteIntact )
      v25 = -1073740748;
    v85 = v25;
  }
  v26 = v90;
  if ( v22 >= 0
    && ((v27 = *(_DWORD *)(v10 + 192), (v27 & 8) != 0)
     || *(_QWORD *)(v10 + 256)
     || (_DWORD *)v90 != v14 && v96 > (unsigned __int64)(v98 + 14))
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
  v30 = v93;
  v31 = 0;
  v32 = ZeroPte;
  BugCheckParameter2 = DecayPfn;
  v100 = 0LL;
  v33 = 0xFFFFFA8000000000uLL;
  if ( (unsigned __int64)v93 <= v26 )
  {
    v9 = 3221225535LL;
    v34 = v10;
    v35 = 17;
    while ( 1 )
    {
      v36 = 48LL * *v30 - 0x58000000000LL;
      if ( v36 == qword_140C4ECB0 )
        goto LABEL_84;
      if ( v31 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
        {
          MiInsertAndUnlockStandbyPages(DecayPfn, v105, v31, v35);
          v29 = 0LL;
          v31 = 0;
          --v30;
          goto LABEL_83;
        }
        v37 = v83;
      }
      else
      {
        v37 = MiLockPageInline(48LL * *v30 - 0x58000000000LL, 3221225535LL, 0LL);
        v83 = v37;
        v29 = 0LL;
        v9 = 3221225535LL;
      }
      v11 &= 0xFFFFFFCF;
      if ( (v6 & 1) != 0 && HIWORD(v6) )
        v6 = (unsigned __int16)v6 | ((HIWORD(v6) - 1) << 16);
      if ( (*(_QWORD *)(v36 + 24) & 0x4000000000000000LL) != 0 )
        break;
      v62 = *(_BYTE *)(v36 + 35);
      if ( (v62 & 0x10) != 0 )
      {
        v38 = v89;
        if ( v36 == v89 )
        {
          v63 = v86;
          if ( v86 >= 0 )
            v63 = -1073741761;
          v86 = v63;
        }
        v11 |= 0x10u;
      }
      else
      {
        if ( v86 < 0 )
        {
          *(_BYTE *)(v36 + 35) = v62 | 0x10;
          v11 |= 0x10u;
          goto LABEL_60;
        }
        if ( (unsigned __int64)v30 < v96 )
          goto LABEL_60;
        v9 = (unsigned int)v85;
        v33 = 3221226548LL;
        v38 = v89;
        if ( v36 == v89 )
          v9 = 3221226548LL;
        *(_BYTE *)(v36 + 35) = v62 | 0x10;
        v11 |= 0x10u;
        v85 = v9;
      }
LABEL_61:
      *(_BYTE *)(v36 + 34) &= ~0x20u;
      *(_QWORD *)v36 = 0LL;
      if ( (v11 & 0x30) != 0 )
      {
        if ( v31 )
        {
          LOBYTE(v33) = 17;
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v105, v31, v33);
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
            MiChargeCommit(*(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v36 + 40) >> 39) & 0x3FFLL)), 1uLL, 4u);
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
              v61 = (v42 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v42;
              if ( v61 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v37);
LABEL_81:
        v29 = 0LL;
LABEL_82:
        v35 = v83;
        goto LABEL_83;
      }
      if ( v36 != v38 )
        goto LABEL_179;
      v64 = v92;
      v11 |= 1u;
      if ( v92 )
      {
        if ( v31 )
        {
          LOBYTE(v33) = 17;
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v105, v31, v33);
          v64 = v92;
          v31 = 0;
        }
        v65 = v91;
        MiSwapHardFaultPage(v91, v36, v64);
        v38 = v92;
        v89 = v92;
        v36 = v92;
        v92 = 0LL;
      }
      else
      {
        v65 = v91;
      }
      if ( v36 != v38 || v85 < 0 )
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
            LOBYTE(v81) = 17;
            MiInsertAndUnlockStandbyPages(BugCheckParameter2, v105, 16LL, v81);
            v29 = 0LL;
            v31 = 1;
            *(_QWORD *)&v105[0] = v36;
          }
          else
          {
            v82 = v31;
            v29 = 0LL;
            ++v31;
            *((_QWORD *)v105 + v82) = v36;
          }
          goto LABEL_82;
        }
        goto LABEL_171;
      }
      if ( v31 )
      {
        LOBYTE(v33) = 17;
        MiInsertAndUnlockStandbyPages(BugCheckParameter2, v105, v31, v33);
        v31 = 0;
      }
      MiAddLockedPageCharge(v36, 3);
      v66 = *(_BYTE *)(v36 + 34) & 0xFE;
      *(_QWORD *)(v36 + 24) ^= ((*(_QWORD *)(v36 + 24) + 1LL) ^ *(_QWORD *)(v36 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_BYTE *)(v36 + 34) = v66 | 6;
      MiRemoveLockedPageChargeAndDecRef(v36);
      v69 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v36 + 40) >> 39) & 0x3FFLL));
      v70 = *(_DWORD *)(v36 + 16);
      v100 = v69;
      if ( (v70 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v69, *(_QWORD *)(v36 + 16)) )
        v32 = MiCaptureDirtyBitToPfn(v36);
      if ( (unsigned int)MI_PFN_IS_PROTO(v36, v67, v68) )
      {
        if ( ((*(_DWORD *)v65 >> 5) & 0x1F) == 0x18 )
          MiMakeProtoReadOnly(v65, v36);
        TransitionPteValid = MiMakeTransitionPteValid(v65);
        v72 = TransitionPteValid;
        if ( (unsigned int)MiPteInShadowRange(v91, v73) )
        {
          if ( (unsigned int)MiPteHasShadow(v75, v74) )
          {
            if ( !HIBYTE(word_140C4DF48) && (TransitionPteValid & 1) != 0 )
              v72 = TransitionPteValid | 0x8000000000000000uLL;
            v76 = v91;
            *v91 = v72;
            MiWritePteShadow(v76, v72);
            goto LABEL_169;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (TransitionPteValid & 1) != 0 )
          {
            v72 = TransitionPteValid | 0x8000000000000000uLL;
          }
        }
        *v91 = v72;
LABEL_169:
        v30 = v93;
        if ( v101 )
          *v101 = TransitionPteValid;
      }
LABEL_171:
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v31 )
        goto LABEL_81;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || (v77 = KeGetCurrentIrql(), v77 > 0xFu) )
      {
        v35 = v83;
LABEL_186:
        __writecr8(v35);
        v29 = 0LL;
        goto LABEL_83;
      }
      v35 = v83;
      if ( v83 > 0xFu )
        goto LABEL_186;
      if ( v77 < 2u )
        goto LABEL_186;
      v78 = KeGetCurrentPrcb();
      v79 = v78->SchedulerAssist;
      v80 = ~(unsigned __int16)(-1LL << (v83 + 1));
      v61 = (v80 & v79[5]) == 0;
      v79[5] &= v80;
      if ( !v61 )
        goto LABEL_186;
      KiRemoveSystemWorkPriorityKick(v78);
      __writecr8(v83);
      v29 = 0LL;
LABEL_83:
      v9 = 3221225535LL;
      v33 = 0xFFFFFA8000000000uLL;
LABEL_84:
      v93 = ++v30;
      if ( (unsigned __int64)v30 > v90 )
      {
        v18 = v102;
        v88 = v6;
        if ( v31 )
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v105, v31, v35);
        v10 = v94;
        goto LABEL_88;
      }
      DecayPfn = BugCheckParameter2;
    }
    v11 |= 0x20u;
LABEL_60:
    v38 = v89;
    goto LABEL_61;
  }
LABEL_88:
  if ( v18 )
  {
    v43 = v84;
    if ( (_BYTE)CurrentIrql != 17 )
      v43 = 17;
    MiUnlockProtoPoolPage(v18, v43, v29, v33);
  }
  if ( (*(_DWORD *)(v10 + 192) & 0x8000) != 0 )
  {
    v44 = v98;
    MmCheckCachedPageStates(v99 + (*(_DWORD *)(v10 + 96) & 0x3FFFF), (unsigned int)v98[10], 2LL, 0LL);
    v46 = v90;
    v47 = (__int64 *)(v44 + 12);
    if ( (unsigned __int64)(v44 + 12) <= v90 )
    {
      do
      {
        if ( *v47 < 0 )
        {
          v48 = *v47 & 0x7FFFFFFFFFFFFFFFLL;
          *v47 = v48;
          v49 = 48 * v48 - 0x58000000000LL;
          v50 = (unsigned __int8)MiLockPageInline(v49, v9, v45);
          MiRemoveLockedPageChargeAndDecRef(v49);
          _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              v51 = KeGetCurrentIrql();
              if ( v51 <= 0xFu && (unsigned __int8)v50 <= 0xFu && v51 >= 2u )
              {
                v52 = KeGetCurrentPrcb();
                v9 = -1LL << ((unsigned __int8)v50 + 1);
                v53 = v52->SchedulerAssist;
                v54 = ~(unsigned __int16)v9;
                v61 = (v54 & v53[5]) == 0;
                v45 = (unsigned int)v54 & v53[5];
                v53[5] = v45;
                if ( v61 )
                  KiRemoveSystemWorkPriorityKick(v52);
              }
            }
          }
          __writecr8(v50);
        }
        ++v47;
      }
      while ( (unsigned __int64)v47 <= v46 );
      LOBYTE(v6) = v88;
      v10 = v94;
    }
  }
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  if ( v32 )
    MiReleasePageFileInfo(v100, v32, 0LL);
  if ( v103 && (*(_DWORD *)(v10 + 192) & 0x1000000) != 0 )
  {
    LOBYTE(v9) = 17;
    MiReleaseFaultState(v104, v9, 0LL);
  }
  if ( (*(_DWORD *)(v10 + 192) & 0x200000) == 0 )
    ObDereferenceObjectDeferDelete(*(PVOID *)(v10 + 200));
  if ( *(int *)(v10 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v10 + 56), 0, 0);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v10);
  if ( v92 )
  {
    v55 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v92 + 40) >> 39) & 0x3FFLL));
    MiReleaseFreshPage(v92);
    v56 = 1LL;
    MiReturnCommit(v55, 1LL);
    if ( (ULONG_PTR *)v55 == &MiSystemPartition )
    {
      v57 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v57->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v59 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v57->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v61 = (_DWORD)CachedResidentAvailable == v59;
            LODWORD(CachedResidentAvailable) = v59;
            if ( v61 )
              goto LABEL_128;
          }
          while ( v59 != -1 && (unsigned __int64)(v59 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v57->CachedResidentAvailable,
                                                  192,
                                                  CachedResidentAvailable) )
        {
          v56 = (int)CachedResidentAvailable - 192 + 1LL;
        }
        if ( !v56 )
          goto LABEL_128;
      }
    }
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v55 + 7168), v56);
  }
LABEL_128:
  result = (unsigned int)v86;
  if ( v86 >= 0 )
  {
    result = (unsigned int)v85;
    v61 = (v11 & 1) == 0;
  }
  else
  {
    if ( (v6 & 1) == 0 )
      return result;
    v61 = (v6 & 2) == 0;
  }
  if ( v61 )
    return 3221226548LL;
  return result;
}
