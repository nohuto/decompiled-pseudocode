/*
 * XREFs of MiFinishHardFault @ 0x1402DE0E0
 * Callers:
 *     MiPfCompleteInPageSupport @ 0x1403078E8 (MiPfCompleteInPageSupport.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 * Callees:
 *     MiIsPteInStore @ 0x140208FE0 (MiIsPteInStore.c)
 *     MiIsFaultPteIntact @ 0x14020A414 (MiIsFaultPteIntact.c)
 *     MiHandleInPageError @ 0x1402201C4 (MiHandleInPageError.c)
 *     MiDecayPfnFullyInitialized @ 0x140229794 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14022D038 (MiCreateDecayPfn.c)
 *     MiMakeTransitionPteValid @ 0x140230140 (MiMakeTransitionPteValid.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiInvalidateCollidedIos @ 0x140248AEC (MiInvalidateCollidedIos.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiReleaseFreshPage @ 0x140297AC4 (MiReleaseFreshPage.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1402DF700 (MiRemoveLockedPageCharge.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiFreeInPageSupportBlock @ 0x14030762C (MiFreeInPageSupportBlock.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiRelockFaultState @ 0x14030FFF8 (MiRelockFaultState.c)
 *     MiReleaseFaultState @ 0x14031A244 (MiReleaseFaultState.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiRelockProtoPoolPage @ 0x140324DC8 (MiRelockProtoPoolPage.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140330C10 (MiInsertAndUnlockStandbyPages.c)
 *     MiIsPfnCommitNotCharged @ 0x140332020 (MiIsPfnCommitNotCharged.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     ObDereferenceObjectDeferDelete @ 0x14034E290 (ObDereferenceObjectDeferDelete.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     MiMakeProtoReadOnly @ 0x14053AAD8 (MiMakeProtoReadOnly.c)
 *     MiSwapHardFaultPage @ 0x1405639B0 (MiSwapHardFaultPage.c)
 */

__int64 __fastcall MiFinishHardFault(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // r10
  __int64 v5; // r12
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
  int v23; // eax
  int IsFaultPteIntact; // eax
  int v25; // ecx
  unsigned __int64 v26; // rdi
  int v27; // ecx
  _SLIST_ENTRY *DecayPfn; // rcx
  __int64 v29; // r8
  _QWORD *v30; // rbx
  unsigned int v31; // r12d
  unsigned __int64 v32; // r14
  unsigned __int64 v33; // r9
  __int64 v34; // r13
  unsigned __int8 v35; // di
  ULONG_PTR v36; // r15
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
  _DWORD *v52; // r9
  int v53; // eax
  __int64 v54; // rbx
  unsigned __int64 v55; // rdi
  __int64 v56; // r8
  __int64 v57; // r9
  struct _KPRCB *v58; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v60; // eax
  __int64 result; // rax
  bool v62; // zf
  char v63; // al
  int v64; // eax
  __int64 v65; // rax
  _DWORD *v66; // rdi
  char v67; // al
  __int64 v68; // rcx
  int v69; // eax
  __int64 TransitionPteValid; // rdi
  unsigned __int64 v71; // rbx
  __int64 v72; // rcx
  unsigned __int8 v73; // al
  struct _KPRCB *v74; // r10
  _DWORD *v75; // r9
  int v76; // eax
  __int64 v77; // r9
  __int64 v78; // rax
  unsigned __int8 v79; // [rsp+20h] [rbp-178h]
  char v80; // [rsp+21h] [rbp-177h] BYREF
  int v81; // [rsp+24h] [rbp-174h]
  int v82; // [rsp+28h] [rbp-170h]
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-168h]
  unsigned int v84; // [rsp+38h] [rbp-160h]
  __int64 v85; // [rsp+40h] [rbp-158h]
  unsigned __int64 v86; // [rsp+48h] [rbp-150h]
  _QWORD *v87; // [rsp+50h] [rbp-148h]
  ULONG_PTR v88; // [rsp+58h] [rbp-140h]
  _QWORD *v89; // [rsp+60h] [rbp-138h]
  __int64 v90; // [rsp+68h] [rbp-130h]
  int v91; // [rsp+70h] [rbp-128h] BYREF
  unsigned __int64 v92; // [rsp+78h] [rbp-120h]
  __int64 CurrentIrql; // [rsp+80h] [rbp-118h]
  _DWORD *v94; // [rsp+88h] [rbp-110h]
  __int64 v95; // [rsp+90h] [rbp-108h]
  __int64 v96; // [rsp+98h] [rbp-100h]
  __int64 *v97; // [rsp+A0h] [rbp-F8h]
  __int64 v98; // [rsp+A8h] [rbp-F0h]
  __int64 v99; // [rsp+B0h] [rbp-E8h]
  __int64 v100; // [rsp+B8h] [rbp-E0h]
  _OWORD v101[8]; // [rsp+C0h] [rbp-D8h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a3 + 232);
  v6 = *(_DWORD *)(a3 + 112);
  v100 = a1 + 56;
  v9 = *(_QWORD *)(a3 + 152);
  v10 = a3;
  v88 = *(_QWORD *)(a3 + 104);
  v11 = 0;
  v12 = *(_DWORD **)(a3 + 256);
  v97 = a4;
  v13 = (_DWORD *)(a3 + 272);
  v90 = a3;
  if ( v12 )
    v13 = v12;
  v99 = v4;
  memset(v101, 0, sizeof(v101));
  v84 = v6;
  v14 = v13 + 12;
  v15 = (v13[8] + v13[11]) & 0xFFF;
  v16 = (unsigned int)v13[10] + 4095LL;
  v87 = (_QWORD *)v5;
  v94 = v13;
  v89 = v13 + 12;
  v86 = (unsigned __int64)&v13[2 * ((unsigned __int64)(v15 + v16) >> 12) + 10];
  v17 = *(unsigned int *)(a3 + 188);
  if ( (_DWORD)v17 == -1 )
    v92 = -1LL;
  else
    v92 = (unsigned __int64)&v13[2 * v17 + 12];
  v18 = *(_QWORD *)(a3 + 160);
  v85 = *(_QWORD *)(a3 + 248);
  v95 = *(_QWORD *)(a3 + 224);
  v19 = *(_DWORD *)(a3 + 192);
  v98 = v18;
  if ( (v19 & 0x100000) != 0 || !v4 || (v81 = 0, (v19 & 8) != 0) )
    v81 = -1073740748;
  v80 = 17;
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
    v21 = &v80;
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
  v82 = v22;
  v79 = 17;
  if ( *(_QWORD *)(v10 + 16) != v10 + 16 )
  {
    v23 = MiInvalidateCollidedIos(v10) & 1;
    v11 = 2 * v23;
    if ( !v23 )
    {
      *(_DWORD *)(v10 + 80) = -1073741801;
      *(_QWORD *)(v10 + 88) = 0LL;
    }
  }
  if ( v18 )
  {
    v91 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v18 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v91);
      while ( *(__int64 *)(v18 + 24) < 0 );
    }
    MiRemoveLockedPageChargeAndDecRef(v18);
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( v81 >= 0 )
  {
    IsFaultPteIntact = MiIsFaultPteIntact(a1, v95, v5, (_QWORD *)(v10 + 168));
    v25 = v81;
    if ( !IsFaultPteIntact )
      v25 = -1073740748;
    v81 = v25;
  }
  v26 = v86;
  if ( v22 >= 0
    && ((v27 = *(_DWORD *)(v10 + 192), (v27 & 8) != 0)
     || *(_QWORD *)(v10 + 256)
     || (_DWORD *)v86 != v14 && v92 > (unsigned __int64)(v94 + 14))
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
  v30 = v89;
  v31 = 0;
  v32 = ZeroPte;
  ListEntry = DecayPfn;
  v96 = 0LL;
  v33 = 0xFFFFFA8000000000uLL;
  if ( (unsigned __int64)v89 <= v26 )
  {
    v9 = 3221225535LL;
    v34 = v10;
    v35 = 17;
    while ( 1 )
    {
      v36 = 48LL * *v30 - 0x58000000000LL;
      if ( v36 == qword_140C4EDB0 )
        goto LABEL_84;
      if ( v31 )
      {
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
        {
          MiInsertAndUnlockStandbyPages(DecayPfn, v101, v31, v35);
          v29 = 0LL;
          v31 = 0;
          --v30;
          goto LABEL_83;
        }
        v37 = v79;
      }
      else
      {
        v37 = MiLockPageInline(48LL * *v30 - 0x58000000000LL);
        v79 = v37;
        v29 = 0LL;
        v9 = 3221225535LL;
      }
      v11 &= 0xFFFFFFCF;
      if ( (v6 & 1) != 0 && HIWORD(v6) )
        v6 = (unsigned __int16)v6 | ((HIWORD(v6) - 1) << 16);
      if ( (*(_QWORD *)(v36 + 24) & 0x4000000000000000LL) != 0 )
        break;
      v63 = *(_BYTE *)(v36 + 35);
      if ( (v63 & 0x10) != 0 )
      {
        v38 = v85;
        if ( v36 == v85 )
        {
          v64 = v82;
          if ( v82 >= 0 )
            v64 = -1073741761;
          v82 = v64;
        }
        v11 |= 0x10u;
      }
      else
      {
        if ( v82 < 0 )
        {
          *(_BYTE *)(v36 + 35) = v63 | 0x10;
          v11 |= 0x10u;
          goto LABEL_60;
        }
        if ( (unsigned __int64)v30 < v92 )
          goto LABEL_60;
        v9 = (unsigned int)v81;
        v33 = 3221226548LL;
        v38 = v85;
        if ( v36 == v85 )
          v9 = 3221226548LL;
        *(_BYTE *)(v36 + 35) = v63 | 0x10;
        v11 |= 0x10u;
        v81 = v9;
      }
LABEL_61:
      *(_BYTE *)(v36 + 34) &= ~0x20u;
      *(_QWORD *)v36 = 0LL;
      if ( (v11 & 0x30) != 0 )
      {
        if ( v31 )
        {
          LOBYTE(v33) = 17;
          MiInsertAndUnlockStandbyPages(ListEntry, v101, v31, v33);
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
            MiChargeCommit(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v36 + 40) >> 39) & 0x3FFLL)), 1uLL, 4u);
          }
          MiHandleInPageError(v36);
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
              v62 = (v42 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v42;
              if ( v62 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v37);
LABEL_81:
        v29 = 0LL;
LABEL_82:
        v35 = v79;
        goto LABEL_83;
      }
      if ( v36 != v38 )
        goto LABEL_179;
      v65 = v88;
      v11 |= 1u;
      if ( v88 )
      {
        if ( v31 )
        {
          LOBYTE(v33) = 17;
          MiInsertAndUnlockStandbyPages(ListEntry, v101, v31, v33);
          v65 = v88;
          v31 = 0;
        }
        v66 = v87;
        MiSwapHardFaultPage(v87, v36, v65);
        v38 = v88;
        v85 = v88;
        v36 = v88;
        v88 = 0LL;
      }
      else
      {
        v66 = v87;
      }
      if ( v36 != v38 || v81 < 0 )
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
            LOBYTE(v77) = 17;
            MiInsertAndUnlockStandbyPages(ListEntry, v101, 16LL, v77);
            v29 = 0LL;
            v31 = 1;
            *(_QWORD *)&v101[0] = v36;
          }
          else
          {
            v78 = v31;
            v29 = 0LL;
            ++v31;
            *((_QWORD *)v101 + v78) = v36;
          }
          goto LABEL_82;
        }
        goto LABEL_171;
      }
      if ( v31 )
      {
        LOBYTE(v33) = 17;
        MiInsertAndUnlockStandbyPages(ListEntry, v101, v31, v33);
        v31 = 0;
      }
      MiAddLockedPageCharge(v36, 3LL);
      v67 = *(_BYTE *)(v36 + 34) & 0xFE;
      *(_QWORD *)(v36 + 24) ^= ((*(_QWORD *)(v36 + 24) + 1LL) ^ *(_QWORD *)(v36 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_BYTE *)(v36 + 34) = v67 | 6;
      MiRemoveLockedPageChargeAndDecRef(v36);
      v68 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v36 + 40) >> 39) & 0x3FFLL));
      v69 = *(_DWORD *)(v36 + 16);
      v96 = v68;
      if ( (v69 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v68, *(_QWORD *)(v36 + 16)) )
        v32 = MiCaptureDirtyBitToPfn(v36);
      if ( (unsigned int)MI_PFN_IS_PROTO(v36) )
      {
        if ( ((*v66 >> 5) & 0x1F) == 0x18 )
          MiMakeProtoReadOnly(v66, v36);
        TransitionPteValid = MiMakeTransitionPteValid((__int64)v66);
        v71 = TransitionPteValid;
        if ( (unsigned int)MiPteInShadowRange(v87) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            if ( !HIBYTE(word_140C4E048) && (TransitionPteValid & 1) != 0 )
              v71 = TransitionPteValid | 0x8000000000000000uLL;
            v72 = (__int64)v87;
            *v87 = v71;
            MiWritePteShadow(v72, v71);
            goto LABEL_169;
          }
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
            && (TransitionPteValid & 1) != 0 )
          {
            v71 = TransitionPteValid | 0x8000000000000000uLL;
          }
        }
        *v87 = v71;
LABEL_169:
        v30 = v89;
        if ( v97 )
          *v97 = TransitionPteValid;
      }
LABEL_171:
      _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v31 )
        goto LABEL_81;
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || (v73 = KeGetCurrentIrql(), v73 > 0xFu) )
      {
        v35 = v79;
LABEL_186:
        __writecr8(v35);
        v29 = 0LL;
        goto LABEL_83;
      }
      v35 = v79;
      if ( v79 > 0xFu )
        goto LABEL_186;
      if ( v73 < 2u )
        goto LABEL_186;
      v74 = KeGetCurrentPrcb();
      v75 = v74->SchedulerAssist;
      v76 = ~(unsigned __int16)(-1LL << (v79 + 1));
      v62 = (v76 & v75[5]) == 0;
      v75[5] &= v76;
      if ( !v62 )
        goto LABEL_186;
      KiRemoveSystemWorkPriorityKick(v74);
      __writecr8(v79);
      v29 = 0LL;
LABEL_83:
      v9 = 3221225535LL;
      v33 = 0xFFFFFA8000000000uLL;
LABEL_84:
      v89 = ++v30;
      if ( (unsigned __int64)v30 > v86 )
      {
        v18 = v98;
        v84 = v6;
        if ( v31 )
          MiInsertAndUnlockStandbyPages(ListEntry, v101, v31, v35);
        v10 = v90;
        goto LABEL_88;
      }
      DecayPfn = ListEntry;
    }
    v11 |= 0x20u;
LABEL_60:
    v38 = v85;
    goto LABEL_61;
  }
LABEL_88:
  if ( v18 )
  {
    v43 = v80;
    if ( (_BYTE)CurrentIrql != 17 )
      v43 = 17;
    MiUnlockProtoPoolPage(v18, v43);
  }
  if ( (*(_DWORD *)(v10 + 192) & 0x8000) != 0 )
  {
    v44 = v94;
    MmCheckCachedPageStates(v95 + (*(_DWORD *)(v10 + 96) & 0x3FFFF), (unsigned int)v94[10], 2LL, 0LL);
    v45 = v86;
    v46 = (__int64 *)(v44 + 12);
    if ( (unsigned __int64)(v44 + 12) <= v86 )
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
                v52 = v51->SchedulerAssist;
                v53 = ~(unsigned __int16)v9;
                v62 = (v53 & v52[5]) == 0;
                v52[5] &= v53;
                if ( v62 )
                  KiRemoveSystemWorkPriorityKick(v51);
              }
            }
          }
          __writecr8(v49);
        }
        ++v46;
      }
      while ( (unsigned __int64)v46 <= v45 );
      LOBYTE(v6) = v84;
      v10 = v90;
    }
  }
  if ( ListEntry )
    MiDecayPfnFullyInitialized(ListEntry);
  if ( v32 )
    MiReleasePageFileInfo(v96, v32, 0);
  if ( v99 && (*(_DWORD *)(v10 + 192) & 0x1000000) != 0 )
  {
    LOBYTE(v9) = 17;
    MiReleaseFaultState(v100, v9, 0LL);
  }
  if ( (*(_DWORD *)(v10 + 192) & 0x200000) == 0 )
    ObDereferenceObjectDeferDelete(*(PVOID *)(v10 + 200));
  if ( *(int *)(v10 + 176) > 1 )
    KeSetEvent((PRKEVENT)(v10 + 56), 0, 0);
  MiFreeInPageSupportBlock((PSLIST_ENTRY)v10);
  if ( v88 )
  {
    v54 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v88 + 40) >> 39) & 0x3FFLL));
    MiReleaseFreshPage(v88);
    v55 = 1LL;
    MiReturnCommit(v54, 1LL, v56, v57);
    if ( (ULONG_PTR *)v54 == &MiSystemPartition )
    {
      v58 = KeGetCurrentPrcb();
      CachedResidentAvailable = (int)v58->CachedResidentAvailable;
      if ( (_DWORD)CachedResidentAvailable != -1 )
      {
        if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
        {
          do
          {
            v60 = _InterlockedCompareExchange(
                    (volatile signed __int32 *)&v58->CachedResidentAvailable,
                    CachedResidentAvailable + 1,
                    CachedResidentAvailable);
            v62 = (_DWORD)CachedResidentAvailable == v60;
            LODWORD(CachedResidentAvailable) = v60;
            if ( v62 )
              goto LABEL_128;
          }
          while ( v60 != -1 && (unsigned __int64)(v60 + 1LL) <= 0x100 );
        }
        if ( (int)CachedResidentAvailable > 192
          && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                  (volatile signed __int32 *)&v58->CachedResidentAvailable,
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
  result = (unsigned int)v82;
  if ( v82 >= 0 )
  {
    result = (unsigned int)v81;
    v62 = (v11 & 1) == 0;
  }
  else
  {
    if ( (v6 & 1) == 0 )
      return result;
    v62 = (v6 & 2) == 0;
  }
  if ( v62 )
    return 3221226548LL;
  return result;
}
