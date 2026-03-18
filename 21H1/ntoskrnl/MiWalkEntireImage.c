/*
 * XREFs of MiWalkEntireImage @ 0x140284670
 * Callers:
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x1406C9BB0 (MiValidateSectionCreate.c)
 *     MiSwitchBaseAddress @ 0x1406D96BC (MiSwitchBaseAddress.c)
 *     MiUnloadSystemImage @ 0x1406EF978 (MiUnloadSystemImage.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140745538 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiFreeRetpolineImportInfo @ 0x1407B8294 (MiFreeRetpolineImportInfo.c)
 * Callees:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCaptureDirtyBitToPfn @ 0x140223BF0 (MiCaptureDirtyBitToPfn.c)
 *     KeDelayExecutionThread @ 0x1402295B0 (KeDelayExecutionThread.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiUseSlabAllocator @ 0x14027AFD8 (MiUseSlabAllocator.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MiObtainProtoReference @ 0x140282684 (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x140282DC0 (MiLockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x1402838C0 (MiInvalidPteConforms.c)
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x140285070 (MiRemoveLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x1402855A0 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x140285AD0 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x14028A920 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x14028D5B0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14028D680 (MiInsertAndUnlockStandbyPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiDeleteTransitionPte @ 0x14029A9D0 (MiDeleteTransitionPte.c)
 *     MiStartingOffset @ 0x14029EDC0 (MiStartingOffset.c)
 *     MiInitializePageFaultPacket @ 0x1402B3CF0 (MiInitializePageFaultPacket.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402B3FC0 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiTrimSharedPage @ 0x1402CDD9C (MiTrimSharedPage.c)
 *     MiDecayPfnFullyInitialized @ 0x1402FCDFC (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x1402FF368 (MiCreateDecayPfn.c)
 *     MiGetSlabPage @ 0x140326128 (MiGetSlabPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x140341A74 (MiWaitForCollidedFaultComplete.c)
 *     MiGetPagingFileOffset @ 0x140344E64 (MiGetPagingFileOffset.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiReturnFreeZeroPage @ 0x14034B8A8 (MiReturnFreeZeroPage.c)
 *     MiReleasePageFileInfo @ 0x14034EFC0 (MiReleasePageFileInfo.c)
 *     ExfReleasePushLockShared @ 0x14035A580 (ExfReleasePushLockShared.c)
 *     MiFreeSlabPage @ 0x140379234 (MiFreeSlabPage.c)
 *     MiIsPfnSystemCharged @ 0x140379C18 (MiIsPfnSystemCharged.c)
 *     MiCheckSlabPage @ 0x14037A290 (MiCheckSlabPage.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 *     MiUpdateImagePfnImportRelocations @ 0x14039436C (MiUpdateImagePfnImportRelocations.c)
 *     MiGetSharedProtos @ 0x1403A2DE8 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     VslApplySecureImageFixups @ 0x1404F6628 (VslApplySecureImageFixups.c)
 *     MiDriverPageIsDangling @ 0x14052FCD4 (MiDriverPageIsDangling.c)
 *     MiSplitDirectMapPage @ 0x14053C61C (MiSplitDirectMapPage.c)
 *     MiRelocateImagePfn @ 0x140631750 (MiRelocateImagePfn.c)
 *     MiPrefetchControlArea @ 0x1406CA620 (MiPrefetchControlArea.c)
 *     MiValidateImagePfn @ 0x1406CA7E4 (MiValidateImagePfn.c)
 *     MiPageHasRelocations @ 0x1406CAB0C (MiPageHasRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x1408D3354 (MiGetNextDirectFixupProto.c)
 *     MiGetSectionStrongImageReference @ 0x1408D3580 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiWalkEntireImage(ULONG_PTR a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // r11
  ULONG_PTR v5; // r10
  __int64 v6; // r15
  char v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 Flink; // rdx
  __int64 v11; // rax
  _BYTE *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rax
  __int64 v20; // rdi
  unsigned __int64 v21; // r15
  __int64 v22; // r12
  __int64 v23; // rbx
  bool v24; // zf
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rbx
  __int64 v30; // r12
  int v31; // r14d
  char v32; // cl
  int v33; // r15d
  unsigned int v34; // esi
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int8 v38; // bl
  unsigned __int64 v39; // rcx
  ULONG_PTR v40; // rbx
  int updated; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  _DWORD *v44; // r9
  __int64 v45; // r14
  __int64 v46; // rdi
  __int64 v47; // rbx
  ULONG_PTR v48; // r13
  ULONG_PTR v49; // r15
  __int64 v50; // rbx
  ULONG_PTR v51; // r14
  __int64 result; // rax
  ULONG_PTR v53; // rbx
  unsigned __int64 v54; // rcx
  __int64 v55; // rbx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r10
  __int64 NextDirectFixupProto; // rax
  __int64 v61; // r10
  __int64 v62; // rax
  __int64 SharedProtos; // rax
  __int64 v64; // rcx
  unsigned int EffectivePagePriorityThread; // eax
  int v66; // edx
  unsigned int v67; // r8d
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // r8
  __int64 v71; // r9
  BOOL IsPfnFromSlabAllocation; // eax
  __int64 v73; // r11
  unsigned __int8 v74; // al
  struct _KPRCB *v75; // r10
  _DWORD *v76; // r9
  int v77; // eax
  int v78; // eax
  int v79; // eax
  struct _LIST_ENTRY *v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  unsigned __int8 v83; // al
  struct _KPRCB *v84; // r10
  int v85; // eax
  __int64 v86; // rax
  __int64 v87; // rcx
  unsigned __int64 v88; // rcx
  __int64 v89; // rax
  ULONG_PTR v90; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v94; // eax
  ULONG_PTR v95; // rbx
  unsigned __int8 v96; // al
  unsigned __int8 v97; // bl
  struct _KPRCB *v98; // r9
  _DWORD *v99; // r8
  int v100; // eax
  char BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v102; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v103[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v104; // [rsp+44h] [rbp-BCh]
  int v105; // [rsp+48h] [rbp-B8h]
  __int64 v106; // [rsp+50h] [rbp-B0h]
  __int64 SlabPage; // [rsp+58h] [rbp-A8h]
  unsigned int v108; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v109; // [rsp+68h] [rbp-98h]
  __int64 v110; // [rsp+70h] [rbp-90h]
  ULONG_PTR v111; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v112; // [rsp+80h] [rbp-80h]
  __int64 v113; // [rsp+88h] [rbp-78h]
  int v114; // [rsp+90h] [rbp-70h]
  unsigned int v115; // [rsp+94h] [rbp-6Ch]
  __int64 v116; // [rsp+98h] [rbp-68h]
  _BYTE *v117; // [rsp+A0h] [rbp-60h]
  __int64 v118; // [rsp+A8h] [rbp-58h] BYREF
  int v119; // [rsp+B0h] [rbp-50h] BYREF
  int v120; // [rsp+B4h] [rbp-4Ch]
  __int64 v121; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v122; // [rsp+C0h] [rbp-40h]
  __int64 v123; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v124; // [rsp+D0h] [rbp-30h]
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-28h]
  int v126; // [rsp+E0h] [rbp-20h] BYREF
  int v127; // [rsp+E4h] [rbp-1Ch] BYREF
  int v128; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v129; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v130; // [rsp+F8h] [rbp-8h]
  __int64 v131; // [rsp+100h] [rbp+0h]
  __int64 v132; // [rsp+108h] [rbp+8h]
  struct _KTHREAD *v133; // [rsp+110h] [rbp+10h]
  __int64 v134; // [rsp+118h] [rbp+18h]
  _KPROCESS *Process; // [rsp+120h] [rbp+20h]
  _BYTE *v136; // [rsp+130h] [rbp+30h]
  __int128 v137; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v138[144]; // [rsp+150h] [rbp+50h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  v5 = a1;
  v6 = *(_QWORD *)a1;
  v109 = a1;
  v7 = a3;
  v8 = 0;
  v9 = *(_WORD *)(a1 + 60) & 0x3FF;
  v131 = a2;
  Flink = *(unsigned int *)(v5 + 56);
  v105 = a3;
  v108 = a4;
  v11 = *(_QWORD *)(qword_140C4E588 + 8 * v9);
  v119 = 0;
  v118 = 0LL;
  v121 = v4;
  v134 = v6;
  v123 = v11;
  v114 = a3 & 8;
  v137 = 0LL;
  if ( (Flink & 0x40000000) == 0 || (a3 & 8) != 0 )
  {
    v114 = a3 & 8;
    if ( (Flink & 0x800) == 0 )
      goto LABEL_3;
    v114 = a3 & 8;
  }
  v8 = 2;
LABEL_3:
  if ( (a3 & 8) != 0 )
  {
    MiInitializePageColorBase(v11 + 7424, ((unsigned int)Flink >> 20) & 0x3F, &v137);
    NextDirectFixupProto = MiGetNextDirectFixupProto(v59, 0LL);
    v122 = *(_QWORD *)(NextDirectFixupProto + 8) | 0x8000000000000000uLL;
    v62 = MiGetNextDirectFixupProto(v61, NextDirectFixupProto);
    Flink = *(unsigned int *)(v5 + 56);
    a4 = v108;
    v124 = v62;
  }
  else
  {
    v122 = 0LL;
    v124 = 0LL;
  }
  v12 = (_BYTE *)(v5 + 128);
  v13 = *(_QWORD *)(v5 + 136);
  v14 = -1LL;
  v117 = (_BYTE *)(v5 + 128);
  v15 = 0;
  v116 = v13;
  v16 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  v133 = CurrentThread;
  v103[0] = 17;
  v104 = 0;
  v113 = 0LL;
  BugCheckParameter2 = 0LL;
  SlabPage = -1LL;
  v115 = 0;
  if ( (Flink & 0x4000000) != 0 )
  {
    v8 |= 4u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v6 + 40, 0LL);
    v5 = v109;
    v14 = SlabPage;
    v13 = v116;
    a4 = v108;
    v4 = v121;
    v115 = 0x20000;
  }
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && !*(_QWORD *)(v4 + 56) )
  {
    result = MiGetSectionStrongImageReference(v4, Flink, v13, a4);
    v104 = result;
    v15 = result;
    if ( (int)result >= 0 )
    {
      v14 = SlabPage;
      v13 = v116;
      goto LABEL_27;
    }
    return result;
  }
  while ( 2 )
  {
    v21 = *((_QWORD *)v12 + 1);
    v136 = (_BYTE *)*((_QWORD *)v12 + 2);
    v22 = (__int64)(v21 - v13) >> 3;
    v24 = (v12[34] & 2) == 0;
    v112 = v21;
    v106 = v22;
    if ( !v24 )
    {
      if ( (v7 & 1) != 0 )
        goto LABEL_26;
      if ( (*(_DWORD *)(v5 + 56) & 0x4000000) != 0 )
      {
        if ( (v7 & 0xA) != 0 || !*((_QWORD *)v12 + 3) )
          goto LABEL_26;
        SharedProtos = MiGetSharedProtos(v5, (unsigned int)a4, v12);
        if ( !SharedProtos )
        {
LABEL_272:
          v14 = SlabPage;
          goto LABEL_25;
        }
        v21 = *(_QWORD *)(SharedProtos + 72);
        LODWORD(a4) = v108;
        v112 = v21;
      }
    }
    v23 = MiStartingOffset(v12, v21, (unsigned int)a4);
    v110 = v23;
    v26 = v21 + 8LL * *((unsigned int *)v117 + 11);
    v129 = v26;
    if ( v122 )
    {
      if ( v122 >= v26 )
        goto LABEL_272;
      v64 = v122 - v21;
      v21 = v122;
      v64 >>= 3;
      v22 = (unsigned int)(v64 + v22);
      v112 = v122;
      v23 += v64 << 12;
      v106 = v22;
      v110 = v23;
    }
    v13 = 0LL;
    v130 = 0LL;
    if ( v21 >= v26 )
      goto LABEL_22;
LABEL_11:
    if ( (v21 & 0xFFF) != 0 )
    {
      if ( v16 )
        goto LABEL_13;
    }
    else if ( v16 )
    {
      MiUnlockProtoPoolPage(v16, v103[0], 0LL, v25);
    }
    if ( (v8 & 2) != 0 )
      v27 = MiLockProtoPoolPage(v21, (__int64)v103);
    else
      v27 = MiCheckProtoPtePageState(v21);
    v113 = v27;
    v16 = v27;
    if ( !v27 )
    {
      if ( (v8 & 2) != 0 )
      {
        MmAccessFault(2uLL, v21, 0, 0LL);
        goto LABEL_21;
      }
      v54 = (unsigned __int64)(4096 - (unsigned int)(v21 & 0xFFF)) >> 3;
      v23 += v54 << 12;
      v22 = (unsigned int)(v54 + v22);
      v21 += 8 * v54;
      v106 = v22;
      goto LABEL_19;
    }
    v13 = 0LL;
    while ( 1 )
    {
LABEL_13:
      while ( 1 )
      {
        v18 = *(_QWORD *)v21;
        v19 = *(_QWORD *)v21;
        if ( (*(_QWORD *)v21 & 1) == 0 )
          break;
LABEL_36:
        Flink = 6 * ((v19 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
        {
          v20 = 48 * ((v19 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v126 = v13;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v126, Flink, v13, v25);
              while ( *(__int64 *)(v20 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) );
            v13 = 0LL;
          }
          if ( *(_QWORD *)v21 == v18 )
            goto LABEL_16;
          _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (*(_QWORD *)v21 & 0xC00LL) != 0x800 )
        break;
      if ( MiInvalidPteConforms(*(_QWORD *)v21) )
      {
        v19 = v18;
        if ( qword_140C4DE80 && (v18 & 0x10) == 0 )
          v19 = v18 & ~qword_140C4DE80;
        goto LABEL_36;
      }
    }
    v20 = v13;
LABEL_16:
    v111 = v20;
    if ( !v20 )
    {
      if ( (v8 & 2) == 0 )
        goto LABEL_18;
      v118 = MI_READ_PTE_LOCK_FREE(v21);
      if ( (v118 & 0x400) != 0 )
        goto LABEL_18;
      if ( !(unsigned int)MiGetPagingFileOffset(&v118) )
        goto LABEL_18;
      MiUnlockProtoPoolPage(v16, v103[0], v13, v25);
      v113 = 0LL;
      if ( (v7 & 2) != 0 && !(unsigned int)MiPageHasRelocations(v121, (unsigned int)v22) )
        goto LABEL_18;
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v133, (unsigned int)((_DWORD)v22 << 12));
      if ( EffectivePagePriorityThread > 5 )
        EffectivePagePriorityThread = 5;
      if ( v21 == v130 )
      {
        v67 = 4096;
      }
      else
      {
        v130 = v21;
        v67 = (unsigned int)((__int64)(v129 - v21) >> 3) << 12;
      }
      if ( (int)MiPrefetchControlArea(v109, v66, v67, EffectivePagePriorityThread, 2, v108) < 0 )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      v15 = 0;
      v104 = 0;
      v23 = v110;
LABEL_21:
      v16 = v113;
      if ( v21 >= v129 )
      {
LABEL_22:
        if ( v16 )
        {
          MiUnlockProtoPoolPage(v16, v103[0], v13, v25);
          v16 = 0LL;
          v113 = 0LL;
        }
LABEL_24:
        v14 = SlabPage;
        if ( SlabPage != -1 )
        {
          v90 = 48 * SlabPage - 0x58000000000LL;
          v111 = v90;
          v103[0] = MiLockPageInline(v90, Flink, v13);
          MiFreeSlabPage(v90);
          _InterlockedAnd64((volatile signed __int64 *)(v90 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v103[0] <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                Flink = -1LL << (v103[0] + 1);
                v94 = ~(unsigned __int16)Flink;
                v24 = (v94 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v94;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v103[0]);
          v14 = -1LL;
          SlabPage = -1LL;
        }
LABEL_25:
        v13 = v116;
LABEL_26:
        v117 = v136;
        v12 = v136;
        if ( !v136 )
          goto LABEL_117;
LABEL_27:
        LODWORD(a4) = v108;
        v5 = v109;
        continue;
      }
      v13 = 0LL;
      goto LABEL_11;
    }
    break;
  }
  v28 = *(_QWORD *)v21;
  if ( (unsigned int)MiPteInShadowRange(v21, Flink)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v28 & 1) != 0
    && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v68 = *(_QWORD *)(Flink + 8 * ((v21 >> 3) & 0x1FF));
      Flink = v28 | 0x20;
      if ( (v68 & 0x20) == 0 )
        Flink = v28;
      v28 = Flink;
      if ( (v68 & 0x42) != 0 )
        v28 = Flink | 0x42;
    }
  }
  v118 = v28;
  v29 = v28 & 1;
  if ( (v28 & 1) != 0 )
  {
    if ( (unsigned int)MiPteInShadowRange(&v118, Flink)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v69 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v118 >> 3) & 0x1FF));
        Flink = v28 | 0x20;
        if ( (v69 & 0x20) == 0 )
          Flink = v28;
        v28 = Flink;
        if ( (v69 & 0x42) != 0 )
          v28 = Flink | 0x42;
      }
    }
  }
  else if ( qword_140C4DE80 && (v28 & 0x10) == 0 )
  {
    v28 &= ~qword_140C4DE80;
  }
  v30 = (v28 >> 12) & 0xFFFFFFFFFLL;
  if ( (v7 & 4) != 0 )
  {
    if ( (unsigned int)MiIsPfnSystemCharged(v20) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v20 + 35) &= ~0x20u;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_18:
    LODWORD(v106) = v106 + 1;
    v21 += 8LL;
    LODWORD(v22) = v106;
    v23 = v110 + 4096;
    v15 = v104;
LABEL_19:
    v112 = v21;
    goto LABEL_20;
  }
  v31 = v7 & 1;
  if ( v31 && ((*(_QWORD *)(v20 + 40) >> 60) & 7) == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = v105;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v20 + 16) & 0x400LL) == 0 && (v8 & 2) == 0 || (v32 = *(_BYTE *)(v20 + 35), (v32 & 0x10) != 0) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_107;
  }
  if ( !v29 && (*(_BYTE *)(v20 + 34) & 0x20) != 0 )
  {
    memset(v138, 0, 0x88uLL);
    v7 = v105;
    if ( (*(_DWORD *)(v109 + 56) & 2) != 0 || (v105 & 2) == 0 )
    {
      MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v138);
      v119 = 1;
      MiObtainProtoReference(v16, 1LL, v70, v71);
      MiWaitForCollidedFaultComplete((unsigned int)v138, v20, v16, v103[0], (__int64)&v119);
      LODWORD(v22) = v106;
      v23 = v110;
      v15 = 0;
      v113 = 0LL;
      v104 = 0;
      goto LABEL_21;
    }
    MiDeleteTransitionPte(v21, v20);
    goto LABEL_18;
  }
  v33 = 8;
  v120 = 8;
  if ( !v29 )
  {
    if ( (v32 & 8) != 0 )
    {
      v33 = v32 & 7;
      v120 = v33;
    }
    if ( (unsigned int)MiUnlinkPageFromList(v20, 0) )
    {
      *(_QWORD *)(v20 + 24) &= 0xC000000000000000uLL;
      goto LABEL_62;
    }
    MiDiscardTransitionPteEx(v20, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = v112;
    if ( (v8 & 2) != 0 )
    {
      v15 = v104;
      v7 = v105;
      LODWORD(v22) = v106;
      v23 = v110;
      goto LABEL_21;
    }
LABEL_107:
    v7 = v105;
    goto LABEL_18;
  }
LABEL_62:
  if ( !v31
    || !(unsigned int)MiUseSlabAllocator(v123, v117, *(_QWORD *)(v20 + 16), 0LL)
    || (IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(v20),
        IsPfnFromSlabAllocation
     && (unsigned int)MiCheckSlabPage(v20, 0LL, (*(unsigned __int16 *)(v73 + 32) >> 1) & 0x1F)) )
  {
    v34 = v8 & 0xFFFFFFEF;
  }
  else
  {
    v34 = v8 | 0x10;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v20) || (unsigned int)MiChargeForLockedPage(v20, 1LL) )
    ++*(_WORD *)(v20 + 32);
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v127 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v127, v35, v36, v37);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  *(_BYTE *)(v16 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v16) )
    MiPfnReferenceCountIsZero(v16, (v16 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v38 = v103[0];
  if ( v103[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v74 = KeGetCurrentIrql();
        if ( v74 <= 0xFu && v103[0] <= 0xFu && v74 >= 2u )
        {
          v75 = KeGetCurrentPrcb();
          v76 = v75->SchedulerAssist;
          v38 = v103[0];
          v77 = ~(unsigned __int16)(-1LL << (v103[0] + 1));
          v24 = (v77 & v76[5]) == 0;
          v76[5] &= v77;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v75);
        }
      }
    }
    __writecr8(v38);
  }
  v39 = *(_QWORD *)(v20 + 40);
  v113 = 0LL;
  if ( (v39 & 0x2000000000000LL) != 0 )
    v8 = v34 | 1;
  else
    v8 = v34 & 0xFFFFFFFE;
  if ( v114 )
  {
    if ( (unsigned int)MiPageHasRelocations(v121, (unsigned int)v106) )
    {
      v30 = MiSplitDirectMapPage(v117, &v137, v30);
      v42 = 0xFFFFFFFFFFELL;
      *(_QWORD *)v20 ^= (*(_QWORD *)v20 ^ (v124 >> 3)) & 0xFFFFFFFFFFELL;
      v111 = 48 * v30 - 0x58000000000LL;
    }
  }
  else if ( (v105 & 2) != 0 )
  {
    v40 = v109;
    if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v109 + 92) & 0xC0000) != 0 && ((v39 >> 60) & 7) == 3 )
    {
      v78 = VslApplySecureImageFixups(*(_QWORD *)(v121 + 56), (unsigned int)v106, v30);
      v104 = v78;
      if ( v78 < 0 )
        KeBugCheckEx(0x1Au, 0xD8A18uLL, v78, v30, v40);
      goto LABEL_81;
    }
    updated = MiRelocateImagePfn(v109, 0LL, v102, 4);
    v104 = updated;
    if ( !updated )
    {
      v8 |= 8u;
      goto LABEL_81;
    }
LABEL_79:
    if ( updated == 1 )
      v104 = 0;
  }
  else
  {
    if ( (v105 & 0x10) == 0 )
    {
      v104 = MiValidateImagePfn(
               v109,
               v110,
               (_DWORD)Process,
               v106,
               BugCheckParameter4,
               (*((unsigned __int16 *)v117 + 16) >> 1) & 0x1F,
               v30,
               0x4000000);
      goto LABEL_81;
    }
    v53 = v109;
    if ( (MiFlags & 0x4000) == 0 || (*(_DWORD *)(v109 + 92) & 0xC0000) == 0 || ((v39 >> 60) & 7) != 3 )
    {
      updated = MiUpdateImagePfnImportRelocations(v109, v131, (unsigned int)v106, v30);
      v104 = updated;
      if ( !updated )
      {
        v8 |= 8u;
        goto LABEL_81;
      }
      goto LABEL_79;
    }
    v79 = VslApplySecureImageFixups(*(_QWORD *)(v121 + 56), (unsigned int)v106, v30);
    v104 = v79;
    if ( v79 < 0 )
      KeBugCheckEx(0x1Au, 0xD9A18uLL, v79, v30, v53);
  }
LABEL_81:
  if ( v33 != 8 && !BugCheckParameter2 && (v8 & 1) == 0 )
    BugCheckParameter2 = MiCreateDecayPfn();
  if ( (v8 & 0x10) != 0 && SlabPage == -1 )
  {
    SlabPage = MiGetSlabPage(v123, (*((unsigned __int16 *)v117 + 16) >> 1) & 0x1F, 0, -1, v115);
    if ( SlabPage == -1 )
      v8 &= ~0x10u;
  }
  v45 = 0LL;
  v46 = 0LL;
  v47 = KeGetCurrentIrql();
  v132 = v47;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v47 <= 0xFu )
  {
    v44 = KeGetCurrentPrcb()->SchedulerAssist;
    v42 = (-1LL << ((unsigned __int8)v47 + 1)) & 4;
    v43 = (unsigned int)v42 | v44[5];
    v44[5] = v43;
  }
  v128 = 0;
  v48 = v111;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v128, v42, v43, (__int64)v44);
    while ( *(__int64 *)(v48 + 24) < 0 );
  }
  v103[0] = v47;
  if ( (v8 & 0x10) != 0 && (*(_QWORD *)(v48 + 24) & 0x4000000000000000LL) != 0 )
    v8 &= ~0x10u;
  v49 = v111;
  if ( (v105 & 2) != 0 )
  {
    v50 = *(_QWORD *)(v111 + 16);
    v51 = v111 + 16;
    if ( (unsigned int)MiPteInShadowRange(v111 + 16, v42) && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v50 & 1) != 0
        && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
      {
        v80 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v80 )
        {
          v81 = v50 | 0x20;
          v82 = *((_QWORD *)&v80->Flink + ((v51 >> 3) & 0x1FF));
          if ( (v82 & 0x20) == 0 )
            v81 = v50;
          v50 = v81;
          if ( (v82 & 0x42) != 0 )
            v50 = v81 | 0x42;
        }
      }
      v49 = v111;
    }
    v118 = v50;
    if ( (v50 & 0x400) != 0 )
    {
      v45 = 0LL;
    }
    else
    {
      v46 = MiCaptureDirtyBitToPfn(v49);
      v45 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v49 + 40) >> 39) & 0x3FFLL));
    }
    LOBYTE(v47) = v132;
  }
  if ( (v8 & 0x10) != 0 && (*(_BYTE *)(v49 + 34) & 7) == 6 )
  {
    MiTrimSharedPage(v49, (unsigned __int8)v47, v115);
    if ( (*(_QWORD *)(v48 + 24) & 0x4000000000000000LL) != 0 )
      v8 &= ~0x10u;
  }
  if ( (unsigned int)MiRemoveLockedPageCharge(v49) )
  {
    if ( (v8 & 1) != 0
      || v120 == 8
      || (*(_BYTE *)(v49 + 34) & 0x10) != 0
      || _bittest64((const signed __int64 *)(v48 + 24), 0x3Eu)
      || (v8 & 0x10) != 0 )
    {
      MiPfnReferenceCountIsZero(v49, v30);
    }
    else
    {
      MiInsertAndUnlockStandbyPages(BugCheckParameter2, &v111, 1LL, (unsigned __int8)v47);
      v103[0] = 17;
    }
  }
  if ( (v8 & 0x10) != 0 && !*(_WORD *)(v49 + 32) )
  {
    MiIsPfnFromSlabAllocation(v49);
    MiReplaceTransitionPage(v49);
    *(_QWORD *)(v49 + 16) = ZeroPte;
    SlabPage = -1LL;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v49 + 16));
    MiReturnFreeZeroPage(v49, 0LL);
  }
  if ( v103[0] != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v46 )
    MiReleasePageFileInfo(v45, v46, 1LL);
  if ( v103[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v83 = KeGetCurrentIrql();
        if ( v83 <= 0xFu && v103[0] <= 0xFu && v83 >= 2u )
        {
          v84 = KeGetCurrentPrcb();
          v25 = (__int64)v84->SchedulerAssist;
          Flink = -1LL << (v103[0] + 1);
          v85 = ~(unsigned __int16)Flink;
          v24 = (v85 & *(_DWORD *)(v25 + 20)) == 0;
          v13 = (unsigned int)v85 & *(_DWORD *)(v25 + 20);
          *(_DWORD *)(v25 + 20) = v13;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v84);
        }
      }
    }
    __writecr8(v103[0]);
    v103[0] = 17;
  }
  v15 = v104;
  if ( v104 < 0 )
  {
    v14 = SlabPage;
    dword_140C4CB58 = (v104 != -1073741670) + 113;
  }
  else
  {
    if ( !v122 )
    {
      v21 = v112;
      goto LABEL_107;
    }
    v13 = v124;
    if ( v124 )
    {
      v86 = MiGetNextDirectFixupProto(v109, v124);
      v87 = *(_QWORD *)(Flink + 8);
      v7 = v105;
      v124 = v86;
      v88 = v87 | 0x8000000000000000uLL;
      v122 = v88;
      if ( v88 >= v129 )
      {
        v16 = v113;
        goto LABEL_24;
      }
      v21 = v88;
      v89 = (__int64)(v88 - v112) >> 3;
      LODWORD(v22) = v89 + v106;
      v112 = v88;
      v23 = (v89 << 12) + v110;
      v106 = (unsigned int)(v89 + v106);
LABEL_20:
      v110 = v23;
      goto LABEL_21;
    }
    v14 = SlabPage;
  }
LABEL_117:
  if ( BugCheckParameter2 )
  {
    MiDecayPfnFullyInitialized(BugCheckParameter2);
    v14 = SlabPage;
  }
  if ( (v8 & 4) != 0 )
  {
    v55 = v134;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v134 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v55 + 40);
    KeAbPostRelease(v55 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)v133, v56, v57, v58);
    v14 = SlabPage;
  }
  if ( v14 != -1 )
  {
    v95 = 48 * v14 - 0x58000000000LL;
    v111 = v95;
    v103[0] = MiLockPageInline(v95, Flink, v13);
    MiFreeSlabPage(v95);
    _InterlockedAnd64((volatile signed __int64 *)(v95 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v96 = KeGetCurrentIrql(), v96 <= 0xFu) )
    {
      v97 = v103[0];
      if ( v103[0] <= 0xFu && v96 >= 2u )
      {
        v98 = KeGetCurrentPrcb();
        v99 = v98->SchedulerAssist;
        v97 = v103[0];
        v100 = ~(unsigned __int16)(-1LL << (v103[0] + 1));
        v24 = (v100 & v99[5]) == 0;
        v99[5] &= v100;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v98);
      }
    }
    else
    {
      v97 = v103[0];
    }
    __writecr8(v97);
  }
  return v15;
}
