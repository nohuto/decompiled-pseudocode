/*
 * XREFs of MiWalkEntireImage @ 0x14023A4B0
 * Callers:
 *     MiUnloadSystemImage @ 0x1406D11C8 (MiUnloadSystemImage.c)
 *     MiRelocateImage @ 0x1406D54B0 (MiRelocateImage.c)
 *     MiSwitchBaseAddress @ 0x1407149DC (MiSwitchBaseAddress.c)
 *     MiValidateSectionCreate @ 0x140714C70 (MiValidateSectionCreate.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075CB78 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiFreeRetpolineImportInfo @ 0x1407CDF54 (MiFreeRetpolineImportInfo.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1402178B0 (MiUnlinkPageFromList.c)
 *     MiDeleteTransitionPte @ 0x140238830 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14023AEB0 (MiRemoveLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x14023B270 (MiCheckProtoPtePageState.c)
 *     MiInvalidPteConforms @ 0x14023B540 (MiInvalidPteConforms.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     MiReleasePageFileInfo @ 0x140267CB0 (MiReleasePageFileInfo.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiGetEffectivePagePriorityThread @ 0x140270E84 (MiGetEffectivePagePriorityThread.c)
 *     MiGetPagingFileOffset @ 0x1402712A0 (MiGetPagingFileOffset.c)
 *     MiWaitForCollidedFaultComplete @ 0x14028C1F0 (MiWaitForCollidedFaultComplete.c)
 *     MiDecayPfnFullyInitialized @ 0x1402AB654 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x1402AECD8 (MiCreateDecayPfn.c)
 *     MiGetSlabPage @ 0x1402E803C (MiGetSlabPage.c)
 *     MiTrimSharedPage @ 0x1402EEA08 (MiTrimSharedPage.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     MiInitializePageFaultPacket @ 0x1402FCC78 (MiInitializePageFaultPacket.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiIsPfnFromSlabAllocation @ 0x140302EF0 (MiIsPfnFromSlabAllocation.c)
 *     MiReturnFreeZeroPage @ 0x140303050 (MiReturnFreeZeroPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14030FB10 (MiCaptureDirtyBitToPfn.c)
 *     MiUseSlabAllocator @ 0x140318198 (MiUseSlabAllocator.c)
 *     MiObtainProtoReference @ 0x14031A00C (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiStartingOffset @ 0x14031E410 (MiStartingOffset.c)
 *     MiAreChargesNeededToLockPage @ 0x140323430 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140325DF0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140325EC0 (MiInsertAndUnlockStandbyPages.c)
 *     MiChargeForLockedPage @ 0x140328AA0 (MiChargeForLockedPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140329F30 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiFreeSlabPage @ 0x14037BF74 (MiFreeSlabPage.c)
 *     MiIsPfnSystemCharged @ 0x14037C958 (MiIsPfnSystemCharged.c)
 *     MiCheckSlabPage @ 0x14037CFD0 (MiCheckSlabPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388E94 (MiDiscardTransitionPteEx.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140397874 (MiUpdateImagePfnImportRelocations.c)
 *     MiGetSharedProtos @ 0x1403A6208 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     VslApplySecureImageFixups @ 0x1404FC0A8 (VslApplySecureImageFixups.c)
 *     MiDriverPageIsDangling @ 0x1405357F4 (MiDriverPageIsDangling.c)
 *     MiSplitDirectMapPage @ 0x14054213C (MiSplitDirectMapPage.c)
 *     MiRelocateImagePfn @ 0x1405FC260 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x14069BD04 (MiValidateImagePfn.c)
 *     MiPageHasRelocations @ 0x14069C02C (MiPageHasRelocations.c)
 *     MiPrefetchControlArea @ 0x140715998 (MiPrefetchControlArea.c)
 *     MiGetNextDirectFixupProto @ 0x1408D7CA4 (MiGetNextDirectFixupProto.c)
 *     MiGetSectionStrongImageReference @ 0x1408D7ED0 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiWalkEntireImage(ULONG_PTR a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // r11
  ULONG_PTR v5; // r10
  __int64 v6; // r15
  char v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 Flink; // rdx
  __int64 v11; // rax
  ULONG_PTR v12; // rbx
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r13
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rax
  ULONG_PTR v20; // rdi
  ULONG_PTR v21; // r15
  __int64 v22; // r12
  __int64 v23; // rbx
  bool v24; // zf
  _DWORD *v25; // r9
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rbx
  __int64 v30; // r12
  int v31; // r14d
  char v32; // cl
  int v33; // r15d
  unsigned int v34; // esi
  unsigned __int8 v35; // bl
  unsigned __int64 v36; // rcx
  ULONG_PTR v37; // rbx
  int updated; // eax
  __int64 v39; // rdx
  __int64 v40; // r14
  __int64 v41; // rdi
  __int64 v42; // rbx
  ULONG_PTR v43; // r13
  ULONG_PTR v44; // r15
  __int64 v45; // rbx
  ULONG_PTR v46; // r14
  __int64 result; // rax
  ULONG_PTR v48; // rbx
  unsigned __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // r10
  __int64 NextDirectFixupProto; // rax
  __int64 v53; // r10
  __int64 v54; // rax
  __int64 SharedProtos; // rax
  __int64 v56; // rcx
  unsigned int EffectivePagePriorityThread; // eax
  int v58; // edx
  unsigned int v59; // r8d
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // r8
  int IsPfnFromSlabAllocation; // eax
  __int64 v64; // r11
  unsigned __int8 v65; // al
  struct _KPRCB *v66; // r10
  _DWORD *v67; // r9
  int v68; // eax
  int v69; // eax
  int v70; // eax
  _DWORD *v71; // r9
  struct _LIST_ENTRY *v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int8 v75; // al
  struct _KPRCB *v76; // r10
  int v77; // eax
  __int64 v78; // rax
  __int64 v79; // rcx
  unsigned __int64 v80; // rcx
  __int64 v81; // rax
  ULONG_PTR v82; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v86; // eax
  ULONG_PTR v87; // rbx
  unsigned __int8 v88; // al
  unsigned __int8 v89; // bl
  struct _KPRCB *v90; // r9
  _DWORD *v91; // r8
  int v92; // eax
  char BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v94; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v95[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v96; // [rsp+44h] [rbp-BCh]
  int v97; // [rsp+48h] [rbp-B8h]
  __int64 v98; // [rsp+50h] [rbp-B0h]
  __int64 SlabPage; // [rsp+58h] [rbp-A8h]
  unsigned int v100; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v101; // [rsp+68h] [rbp-98h]
  __int64 v102; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v104; // [rsp+80h] [rbp-80h]
  __int64 v105; // [rsp+88h] [rbp-78h]
  int v106; // [rsp+90h] [rbp-70h]
  unsigned int v107; // [rsp+94h] [rbp-6Ch]
  unsigned __int64 v108; // [rsp+98h] [rbp-68h]
  ULONG_PTR v109; // [rsp+A0h] [rbp-60h]
  __int64 v110; // [rsp+A8h] [rbp-58h] BYREF
  int v111; // [rsp+B0h] [rbp-50h] BYREF
  int v112; // [rsp+B4h] [rbp-4Ch]
  __int64 v113; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v114; // [rsp+C0h] [rbp-40h]
  __int64 v115; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v116; // [rsp+D0h] [rbp-30h]
  ULONG_PTR DecayPfn; // [rsp+D8h] [rbp-28h]
  int v118; // [rsp+E0h] [rbp-20h] BYREF
  int v119; // [rsp+E4h] [rbp-1Ch] BYREF
  int v120; // [rsp+E8h] [rbp-18h] BYREF
  ULONG_PTR v121; // [rsp+F0h] [rbp-10h]
  ULONG_PTR v122; // [rsp+F8h] [rbp-8h]
  __int64 v123; // [rsp+100h] [rbp+0h]
  __int64 v124; // [rsp+108h] [rbp+8h]
  struct _KTHREAD *v125; // [rsp+110h] [rbp+10h]
  __int64 v126; // [rsp+118h] [rbp+18h]
  _KPROCESS *Process; // [rsp+120h] [rbp+20h]
  ULONG_PTR v128; // [rsp+130h] [rbp+30h]
  __int128 v129; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v130[144]; // [rsp+150h] [rbp+50h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  v5 = a1;
  v6 = *(_QWORD *)a1;
  v101 = a1;
  v7 = a3;
  v8 = 0;
  v9 = *(_WORD *)(a1 + 60) & 0x3FF;
  v123 = a2;
  Flink = *(unsigned int *)(v5 + 56);
  v97 = a3;
  v100 = a4;
  v11 = *(_QWORD *)(qword_140C4E648 + 8 * v9);
  v111 = 0;
  v110 = 0LL;
  v113 = v4;
  v126 = v6;
  v115 = v11;
  v106 = a3 & 8;
  v129 = 0LL;
  if ( (Flink & 0x40000000) == 0 || (a3 & 8) != 0 )
  {
    v106 = a3 & 8;
    if ( (Flink & 0x800) == 0 )
      goto LABEL_3;
    v106 = a3 & 8;
  }
  v8 = 2;
LABEL_3:
  if ( (a3 & 8) != 0 )
  {
    MiInitializePageColorBase(v11 + 7424, ((unsigned int)Flink >> 20) & 0x3F, &v129);
    NextDirectFixupProto = MiGetNextDirectFixupProto(v51, 0LL);
    v114 = *(_QWORD *)(NextDirectFixupProto + 8) | 0x8000000000000000uLL;
    v54 = MiGetNextDirectFixupProto(v53, NextDirectFixupProto);
    Flink = *(unsigned int *)(v5 + 56);
    a4 = v100;
    v116 = v54;
  }
  else
  {
    v114 = 0LL;
    v116 = 0LL;
  }
  v12 = v5 + 128;
  v13 = *(_QWORD *)(v5 + 136);
  v14 = -1LL;
  v109 = v5 + 128;
  v15 = 0;
  v108 = v13;
  v16 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  v125 = CurrentThread;
  v95[0] = 17;
  v96 = 0;
  v105 = 0LL;
  DecayPfn = 0LL;
  SlabPage = -1LL;
  v107 = 0;
  if ( (Flink & 0x4000000) != 0 )
  {
    v8 |= 4u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v6 + 40, 0LL);
    v5 = v101;
    v14 = SlabPage;
    v13 = v108;
    a4 = v100;
    v4 = v113;
    v107 = 0x20000;
  }
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && !*(_QWORD *)(v4 + 56) )
  {
    result = MiGetSectionStrongImageReference(v4, Flink, v13);
    v96 = result;
    v15 = result;
    if ( (int)result >= 0 )
    {
      v14 = SlabPage;
      v13 = v108;
      goto LABEL_27;
    }
    return result;
  }
  while ( 2 )
  {
    v21 = *(_QWORD *)(v12 + 8);
    v128 = *(_QWORD *)(v12 + 16);
    v22 = (__int64)(v21 - v13) >> 3;
    v24 = (*(_BYTE *)(v12 + 34) & 2) == 0;
    v104 = v21;
    v98 = v22;
    if ( !v24 )
    {
      if ( (v7 & 1) != 0 )
        goto LABEL_26;
      if ( (*(_DWORD *)(v5 + 56) & 0x4000000) != 0 )
      {
        if ( (v7 & 0xA) != 0 || !*(_QWORD *)(v12 + 24) )
          goto LABEL_26;
        SharedProtos = MiGetSharedProtos(v5, a4, v12);
        if ( !SharedProtos )
        {
LABEL_272:
          v14 = SlabPage;
          goto LABEL_25;
        }
        v21 = *(_QWORD *)(SharedProtos + 72);
        a4 = v100;
        v104 = v21;
      }
    }
    v23 = MiStartingOffset(v12, v21, a4);
    v102 = v23;
    v26 = v21 + 8LL * *(unsigned int *)(v109 + 44);
    v121 = v26;
    if ( v114 )
    {
      if ( v114 >= v26 )
        goto LABEL_272;
      v56 = v114 - v21;
      v21 = v114;
      v56 >>= 3;
      v22 = (unsigned int)(v56 + v22);
      v104 = v114;
      v23 += v56 << 12;
      v98 = v22;
      v102 = v23;
    }
    v13 = 0LL;
    v122 = 0LL;
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
      MiUnlockProtoPoolPage(v16, v95[0]);
    }
    if ( (v8 & 2) != 0 )
      v27 = MiLockProtoPoolPage(v21, v95);
    else
      v27 = MiCheckProtoPtePageState(v21);
    v105 = v27;
    v16 = v27;
    if ( !v27 )
    {
      if ( (v8 & 2) != 0 )
      {
        MmAccessFault(2uLL, v21, 0, 0LL);
        goto LABEL_21;
      }
      v49 = (unsigned __int64)(4096 - (unsigned int)(v21 & 0xFFF)) >> 3;
      v23 += v49 << 12;
      v22 = (unsigned int)(v49 + v22);
      v21 += 8 * v49;
      v98 = v22;
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
          v118 = v13;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v118);
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
      if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v21, Flink, v13, v25) )
      {
        v19 = v18;
        if ( qword_140C4DF40 && (v18 & 0x10) == 0 )
          v19 = v18 & ~qword_140C4DF40;
        goto LABEL_36;
      }
    }
    v20 = v13;
LABEL_16:
    BugCheckParameter2 = v20;
    if ( !v20 )
    {
      if ( (v8 & 2) == 0 )
        goto LABEL_18;
      v110 = MI_READ_PTE_LOCK_FREE(v21);
      if ( (v110 & 0x400) != 0 )
        goto LABEL_18;
      if ( !(unsigned int)MiGetPagingFileOffset(&v110) )
        goto LABEL_18;
      MiUnlockProtoPoolPage(v16, v95[0]);
      v105 = 0LL;
      if ( (v7 & 2) != 0 && !(unsigned int)MiPageHasRelocations(v113, (unsigned int)v22) )
        goto LABEL_18;
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v125, (unsigned int)((_DWORD)v22 << 12));
      if ( EffectivePagePriorityThread > 5 )
        EffectivePagePriorityThread = 5;
      if ( v21 == v122 )
      {
        v59 = 4096;
      }
      else
      {
        v122 = v21;
        v59 = (unsigned int)((__int64)(v121 - v21) >> 3) << 12;
      }
      if ( (int)MiPrefetchControlArea(v101, v58, v59, EffectivePagePriorityThread, 2, v100) < 0 )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      v15 = 0;
      v96 = 0;
      v23 = v102;
LABEL_21:
      v16 = v105;
      if ( v21 >= v121 )
      {
LABEL_22:
        if ( v16 )
        {
          MiUnlockProtoPoolPage(v16, v95[0]);
          v16 = 0LL;
          v105 = 0LL;
        }
LABEL_24:
        v14 = SlabPage;
        if ( SlabPage != -1 )
        {
          v82 = 48 * SlabPage - 0x58000000000LL;
          BugCheckParameter2 = v82;
          v95[0] = MiLockPageInline(v82, Flink, v13);
          MiFreeSlabPage(v82);
          _InterlockedAnd64((volatile signed __int64 *)(v82 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v95[0] <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                Flink = -1LL << (v95[0] + 1);
                v86 = ~(unsigned __int16)Flink;
                v24 = (v86 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v86;
                if ( v24 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v95[0]);
          v14 = -1LL;
          SlabPage = -1LL;
        }
LABEL_25:
        v13 = v108;
LABEL_26:
        v109 = v128;
        v12 = v128;
        if ( !v128 )
          goto LABEL_117;
LABEL_27:
        a4 = v100;
        v5 = v101;
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
      v60 = *(_QWORD *)(Flink + 8 * ((v21 >> 3) & 0x1FF));
      Flink = v28 | 0x20;
      if ( (v60 & 0x20) == 0 )
        Flink = v28;
      v28 = Flink;
      if ( (v60 & 0x42) != 0 )
        v28 = Flink | 0x42;
    }
  }
  v110 = v28;
  v29 = v28 & 1;
  if ( (v28 & 1) != 0 )
  {
    if ( (unsigned int)MiPteInShadowRange(&v110, Flink)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v28 & 0x20) == 0 || (v28 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v61 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v110 >> 3) & 0x1FF));
        Flink = v28 | 0x20;
        if ( (v61 & 0x20) == 0 )
          Flink = v28;
        v28 = Flink;
        if ( (v61 & 0x42) != 0 )
          v28 = Flink | 0x42;
      }
    }
  }
  else if ( qword_140C4DF40 && (v28 & 0x10) == 0 )
  {
    v28 &= ~qword_140C4DF40;
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
    LODWORD(v98) = v98 + 1;
    v21 += 8LL;
    LODWORD(v22) = v98;
    v23 = v102 + 4096;
    v15 = v96;
LABEL_19:
    v104 = v21;
    goto LABEL_20;
  }
  v31 = v7 & 1;
  if ( v31 && ((*(_QWORD *)(v20 + 40) >> 60) & 7) == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = v97;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v20 + 16) & 0x400LL) == 0 && (v8 & 2) == 0 || (v32 = *(_BYTE *)(v20 + 35), (v32 & 0x10) != 0) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_107;
  }
  if ( !v29 && (*(_BYTE *)(v20 + 34) & 0x20) != 0 )
  {
    memset(v130, 0, 0x88uLL);
    v7 = v97;
    if ( (*(_DWORD *)(v101 + 56) & 2) != 0 || (v97 & 2) == 0 )
    {
      MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v130);
      v111 = 1;
      MiObtainProtoReference(v16, 1LL);
      MiWaitForCollidedFaultComplete((unsigned int)v130, v20, v16, v95[0], (__int64)&v111);
      LODWORD(v22) = v98;
      v23 = v102;
      v15 = 0;
      v105 = 0LL;
      v96 = 0;
      goto LABEL_21;
    }
    LOBYTE(v62) = 17;
    MiDeleteTransitionPte(v21, v20, v62, 1);
    goto LABEL_18;
  }
  v33 = 8;
  v112 = 8;
  if ( !v29 )
  {
    if ( (v32 & 8) != 0 )
    {
      v33 = v32 & 7;
      v112 = v33;
    }
    if ( (unsigned int)MiUnlinkPageFromList(v20, 0) )
    {
      *(_QWORD *)(v20 + 24) &= 0xC000000000000000uLL;
      goto LABEL_62;
    }
    MiDiscardTransitionPteEx(v20, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = v104;
    if ( (v8 & 2) != 0 )
    {
      v15 = v96;
      v7 = v97;
      LODWORD(v22) = v98;
      v23 = v102;
      goto LABEL_21;
    }
LABEL_107:
    v7 = v97;
    goto LABEL_18;
  }
LABEL_62:
  if ( !v31
    || !(unsigned int)MiUseSlabAllocator(v115, v109, *(_QWORD *)(v20 + 16), 0LL)
    || (IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(v20),
        IsPfnFromSlabAllocation
     && (unsigned int)MiCheckSlabPage(v20, 0LL, (*(unsigned __int16 *)(v64 + 32) >> 1) & 0x1F)) )
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
  v119 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v119);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  *(_BYTE *)(v16 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v16) )
    MiPfnReferenceCountIsZero(v16, (v16 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v35 = v95[0];
  if ( v95[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v65 = KeGetCurrentIrql();
        if ( v65 <= 0xFu && v95[0] <= 0xFu && v65 >= 2u )
        {
          v66 = KeGetCurrentPrcb();
          v67 = v66->SchedulerAssist;
          v35 = v95[0];
          v68 = ~(unsigned __int16)(-1LL << (v95[0] + 1));
          v24 = (v68 & v67[5]) == 0;
          v67[5] &= v68;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v66);
        }
      }
    }
    __writecr8(v35);
  }
  v36 = *(_QWORD *)(v20 + 40);
  v105 = 0LL;
  if ( (v36 & 0x2000000000000LL) != 0 )
    v8 = v34 | 1;
  else
    v8 = v34 & 0xFFFFFFFE;
  if ( v106 )
  {
    if ( (unsigned int)MiPageHasRelocations(v113, (unsigned int)v98) )
    {
      v30 = MiSplitDirectMapPage(v109, &v129, v30);
      v39 = 0xFFFFFFFFFFELL;
      *(_QWORD *)v20 ^= (*(_QWORD *)v20 ^ (v116 >> 3)) & 0xFFFFFFFFFFELL;
      BugCheckParameter2 = 48 * v30 - 0x58000000000LL;
    }
  }
  else if ( (v97 & 2) != 0 )
  {
    v37 = v101;
    if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v101 + 92) & 0xC0000) != 0 && ((v36 >> 60) & 7) == 3 )
    {
      v69 = VslApplySecureImageFixups(*(_QWORD *)(v113 + 56), (unsigned int)v98, v30);
      v96 = v69;
      if ( v69 < 0 )
        KeBugCheckEx(0x1Au, 0xD8A18uLL, v69, v30, v37);
      goto LABEL_81;
    }
    updated = MiRelocateImagePfn(v101, 0LL, v94, 4);
    v96 = updated;
    if ( !updated )
    {
      v8 |= 8u;
      goto LABEL_81;
    }
LABEL_79:
    if ( updated == 1 )
      v96 = 0;
  }
  else
  {
    if ( (v97 & 0x10) == 0 )
    {
      v96 = MiValidateImagePfn(
              v101,
              v102,
              (_DWORD)Process,
              v98,
              BugCheckParameter4,
              (*(unsigned __int16 *)(v109 + 32) >> 1) & 0x1F,
              v30,
              0x4000000);
      goto LABEL_81;
    }
    v48 = v101;
    if ( (MiFlags & 0x4000) == 0 || (*(_DWORD *)(v101 + 92) & 0xC0000) == 0 || ((v36 >> 60) & 7) != 3 )
    {
      updated = MiUpdateImagePfnImportRelocations(v101, v123, (unsigned int)v98, v30);
      v96 = updated;
      if ( !updated )
      {
        v8 |= 8u;
        goto LABEL_81;
      }
      goto LABEL_79;
    }
    v70 = VslApplySecureImageFixups(*(_QWORD *)(v113 + 56), (unsigned int)v98, v30);
    v96 = v70;
    if ( v70 < 0 )
      KeBugCheckEx(0x1Au, 0xD9A18uLL, v70, v30, v48);
  }
LABEL_81:
  if ( v33 != 8 && !DecayPfn && (v8 & 1) == 0 )
    DecayPfn = MiCreateDecayPfn();
  if ( (v8 & 0x10) != 0 && SlabPage == -1 )
  {
    SlabPage = MiGetSlabPage(v115, (*(unsigned __int16 *)(v109 + 32) >> 1) & 0x1F, 0, -1, v107);
    if ( SlabPage == -1 )
      v8 &= ~0x10u;
  }
  v40 = 0LL;
  v41 = 0LL;
  v42 = KeGetCurrentIrql();
  v124 = v42;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v42 <= 0xFu )
  {
    v71 = KeGetCurrentPrcb()->SchedulerAssist;
    v39 = (-1LL << ((unsigned __int8)v42 + 1)) & 4;
    v71[5] |= v39;
  }
  v120 = 0;
  v43 = BugCheckParameter2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v120);
    while ( *(__int64 *)(v43 + 24) < 0 );
  }
  v95[0] = v42;
  if ( (v8 & 0x10) != 0 && (*(_QWORD *)(v43 + 24) & 0x4000000000000000LL) != 0 )
    v8 &= ~0x10u;
  v44 = BugCheckParameter2;
  if ( (v97 & 2) != 0 )
  {
    v45 = *(_QWORD *)(BugCheckParameter2 + 16);
    v46 = BugCheckParameter2 + 16;
    if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2 + 16, v39) && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v45 & 1) != 0
        && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
      {
        v72 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v72 )
        {
          v73 = v45 | 0x20;
          v74 = *((_QWORD *)&v72->Flink + ((v46 >> 3) & 0x1FF));
          if ( (v74 & 0x20) == 0 )
            v73 = v45;
          v45 = v73;
          if ( (v74 & 0x42) != 0 )
            v45 = v73 | 0x42;
        }
      }
      v44 = BugCheckParameter2;
    }
    v110 = v45;
    if ( (v45 & 0x400) != 0 )
    {
      v40 = 0LL;
    }
    else
    {
      v41 = MiCaptureDirtyBitToPfn(v44);
      v40 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v44 + 40) >> 39) & 0x3FFLL));
    }
    LOBYTE(v42) = v124;
  }
  if ( (v8 & 0x10) != 0 && (*(_BYTE *)(v44 + 34) & 7) == 6 )
  {
    MiTrimSharedPage(v44, (unsigned __int8)v42, v107);
    if ( (*(_QWORD *)(v43 + 24) & 0x4000000000000000LL) != 0 )
      v8 &= ~0x10u;
  }
  if ( (unsigned int)MiRemoveLockedPageCharge(v44) )
  {
    if ( (v8 & 1) != 0
      || v112 == 8
      || (*(_BYTE *)(v44 + 34) & 0x10) != 0
      || _bittest64((const signed __int64 *)(v43 + 24), 0x3Eu)
      || (v8 & 0x10) != 0 )
    {
      MiPfnReferenceCountIsZero(v44, v30);
    }
    else
    {
      MiInsertAndUnlockStandbyPages(DecayPfn, &BugCheckParameter2, 1LL, (unsigned __int8)v42);
      v95[0] = 17;
    }
  }
  if ( (v8 & 0x10) != 0 && !*(_WORD *)(v44 + 32) )
  {
    MiIsPfnFromSlabAllocation(v44);
    MiReplaceTransitionPage(v44);
    *(_QWORD *)(v44 + 16) = ZeroPte;
    SlabPage = -1LL;
    MiSetOriginalPtePfnFromFreeList(v44 + 16);
    MiReturnFreeZeroPage(v44, 0LL);
  }
  if ( v95[0] != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v41 )
    MiReleasePageFileInfo(v40, v41, 1LL);
  if ( v95[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v75 = KeGetCurrentIrql();
        if ( v75 <= 0xFu && v95[0] <= 0xFu && v75 >= 2u )
        {
          v76 = KeGetCurrentPrcb();
          v25 = v76->SchedulerAssist;
          Flink = -1LL << (v95[0] + 1);
          v77 = ~(unsigned __int16)Flink;
          v24 = (v77 & v25[5]) == 0;
          v13 = (unsigned int)v77 & v25[5];
          v25[5] = v13;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v76);
        }
      }
    }
    __writecr8(v95[0]);
    v95[0] = 17;
  }
  v15 = v96;
  if ( v96 < 0 )
  {
    v14 = SlabPage;
    dword_140C4CC18 = (v96 != -1073741670) + 113;
  }
  else
  {
    if ( !v114 )
    {
      v21 = v104;
      goto LABEL_107;
    }
    v13 = v116;
    if ( v116 )
    {
      v78 = MiGetNextDirectFixupProto(v101, v116);
      v79 = *(_QWORD *)(Flink + 8);
      v7 = v97;
      v116 = v78;
      v80 = v79 | 0x8000000000000000uLL;
      v114 = v80;
      if ( v80 >= v121 )
      {
        v16 = v105;
        goto LABEL_24;
      }
      v21 = v80;
      v81 = (__int64)(v80 - v104) >> 3;
      LODWORD(v22) = v81 + v98;
      v104 = v80;
      v23 = (v81 << 12) + v102;
      v98 = (unsigned int)(v81 + v98);
LABEL_20:
      v102 = v23;
      goto LABEL_21;
    }
    v14 = SlabPage;
  }
LABEL_117:
  if ( DecayPfn )
  {
    MiDecayPfnFullyInitialized(DecayPfn);
    v14 = SlabPage;
  }
  if ( (v8 & 4) != 0 )
  {
    v50 = v126;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v126 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v50 + 40);
    KeAbPostRelease(v50 + 40);
    KiLeaveGuardedRegionUnsafe(v125);
    v14 = SlabPage;
  }
  if ( v14 != -1 )
  {
    v87 = 48 * v14 - 0x58000000000LL;
    BugCheckParameter2 = v87;
    v95[0] = MiLockPageInline(v87, Flink, v13);
    MiFreeSlabPage(v87);
    _InterlockedAnd64((volatile signed __int64 *)(v87 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v88 = KeGetCurrentIrql(), v88 <= 0xFu) )
    {
      v89 = v95[0];
      if ( v95[0] <= 0xFu && v88 >= 2u )
      {
        v90 = KeGetCurrentPrcb();
        v91 = v90->SchedulerAssist;
        v89 = v95[0];
        v92 = ~(unsigned __int16)(-1LL << (v95[0] + 1));
        v24 = (v92 & v91[5]) == 0;
        v91[5] &= v92;
        if ( v24 )
          KiRemoveSystemWorkPriorityKick(v90);
      }
    }
    else
    {
      v89 = v95[0];
    }
    __writecr8(v89);
  }
  return v15;
}
