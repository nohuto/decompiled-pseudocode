/*
 * XREFs of MiWalkEntireImage @ 0x1402DED00
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiRelocateImage @ 0x1406AC790 (MiRelocateImage.c)
 *     MiSwitchBaseAddress @ 0x1406C302C (MiSwitchBaseAddress.c)
 *     MiValidateSectionCreate @ 0x1406C32C0 (MiValidateSectionCreate.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14075CD38 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiFreeRetpolineImportInfo @ 0x1407CE0C4 (MiFreeRetpolineImportInfo.c)
 * Callees:
 *     MiWaitForCollidedFaultComplete @ 0x140209390 (MiWaitForCollidedFaultComplete.c)
 *     MiDecayPfnFullyInitialized @ 0x140229794 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14022D038 (MiCreateDecayPfn.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025EE24 (MiGetEffectivePagePriorityThread.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiGetSlabPage @ 0x14029938C (MiGetSlabPage.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiDeleteTransitionPte @ 0x1402DD080 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1402DF700 (MiRemoveLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x1402DFAC0 (MiCheckProtoPtePageState.c)
 *     MiInvalidPteConforms @ 0x1402DFD90 (MiInvalidPteConforms.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiTrimSharedPage @ 0x1402F9758 (MiTrimSharedPage.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     MiInitializePageFaultPacket @ 0x1403079C8 (MiInitializePageFaultPacket.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiReturnFreeZeroPage @ 0x14030DDA0 (MiReturnFreeZeroPage.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiUseSlabAllocator @ 0x140322EE8 (MiUseSlabAllocator.c)
 *     MiObtainProtoReference @ 0x140324D5C (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiStartingOffset @ 0x140329160 (MiStartingOffset.c)
 *     MiAreChargesNeededToLockPage @ 0x14032E180 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140330B40 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140330C10 (MiInsertAndUnlockStandbyPages.c)
 *     MiChargeForLockedPage @ 0x1403337F0 (MiChargeForLockedPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiFreeSlabPage @ 0x14037BAC4 (MiFreeSlabPage.c)
 *     MiIsPfnSystemCharged @ 0x14037C4A8 (MiIsPfnSystemCharged.c)
 *     MiCheckSlabPage @ 0x14037CB20 (MiCheckSlabPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403979C4 (MiUpdateImagePfnImportRelocations.c)
 *     MiGetSharedProtos @ 0x1403A6358 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     VslApplySecureImageFixups @ 0x1404FC028 (VslApplySecureImageFixups.c)
 *     MiDriverPageIsDangling @ 0x140535A34 (MiDriverPageIsDangling.c)
 *     MiSplitDirectMapPage @ 0x14054237C (MiSplitDirectMapPage.c)
 *     MiValidateImagePfn @ 0x1405FAEC4 (MiValidateImagePfn.c)
 *     MiPageHasRelocations @ 0x1405FB1EC (MiPageHasRelocations.c)
 *     MiPrefetchControlArea @ 0x1406C3FE8 (MiPrefetchControlArea.c)
 *     MiRelocateImagePfn @ 0x1406EB9C0 (MiRelocateImagePfn.c)
 *     MiGetNextDirectFixupProto @ 0x1408D7E04 (MiGetNextDirectFixupProto.c)
 *     MiGetSectionStrongImageReference @ 0x1408D8030 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiWalkEntireImage(ULONG_PTR a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 v4; // r11
  ULONG_PTR v5; // r10
  __int64 v6; // r15
  char v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  ULONG_PTR v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  ULONG_PTR v22; // r15
  __int64 v23; // r12
  __int64 v24; // rbx
  bool v25; // zf
  __int64 Flink; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // rbx
  __int64 v31; // r12
  int v32; // r14d
  char v33; // cl
  int v34; // r15d
  unsigned int v35; // esi
  unsigned __int8 v36; // bl
  unsigned __int64 v37; // rcx
  ULONG_PTR v38; // rbx
  int updated; // eax
  __int64 v40; // r14
  unsigned __int64 v41; // rdi
  __int64 v42; // rbx
  __int64 v43; // r13
  ULONG_PTR v44; // r15
  __int64 v45; // rbx
  unsigned __int64 v46; // r14
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
  int v75; // eax
  __int64 v76; // rdx
  unsigned __int8 v77; // al
  struct _KPRCB *v78; // r10
  _DWORD *v79; // r9
  int v80; // eax
  __int64 v81; // rax
  __int64 v82; // rcx
  unsigned __int64 v83; // rcx
  __int64 v84; // rax
  __int64 v85; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v89; // eax
  __int64 v90; // rbx
  unsigned __int8 v91; // al
  unsigned __int8 v92; // bl
  struct _KPRCB *v93; // r9
  _DWORD *v94; // r8
  int v95; // eax
  char BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v97; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v98[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v99; // [rsp+44h] [rbp-BCh]
  int v100; // [rsp+48h] [rbp-B8h]
  __int64 v101; // [rsp+50h] [rbp-B0h]
  __int64 SlabPage; // [rsp+58h] [rbp-A8h]
  unsigned int v103; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v104; // [rsp+68h] [rbp-98h]
  __int64 v105; // [rsp+70h] [rbp-90h]
  __int64 v106; // [rsp+78h] [rbp-88h] BYREF
  ULONG_PTR v107; // [rsp+80h] [rbp-80h]
  __int64 v108; // [rsp+88h] [rbp-78h]
  int v109; // [rsp+90h] [rbp-70h]
  unsigned int v110; // [rsp+94h] [rbp-6Ch]
  __int64 v111; // [rsp+98h] [rbp-68h]
  ULONG_PTR v112; // [rsp+A0h] [rbp-60h]
  __int64 v113; // [rsp+A8h] [rbp-58h] BYREF
  int v114; // [rsp+B0h] [rbp-50h] BYREF
  int v115; // [rsp+B4h] [rbp-4Ch]
  __int64 v116; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v117; // [rsp+C0h] [rbp-40h]
  __int64 v118; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v119; // [rsp+D0h] [rbp-30h]
  PSLIST_ENTRY ListEntry; // [rsp+D8h] [rbp-28h]
  int v121; // [rsp+E0h] [rbp-20h] BYREF
  int v122; // [rsp+E4h] [rbp-1Ch] BYREF
  int v123; // [rsp+E8h] [rbp-18h] BYREF
  ULONG_PTR v124; // [rsp+F0h] [rbp-10h]
  ULONG_PTR v125; // [rsp+F8h] [rbp-8h]
  __int64 v126; // [rsp+100h] [rbp+0h]
  __int64 v127; // [rsp+108h] [rbp+8h]
  struct _KTHREAD *v128; // [rsp+110h] [rbp+10h]
  __int64 v129; // [rsp+118h] [rbp+18h]
  _KPROCESS *Process; // [rsp+120h] [rbp+20h]
  ULONG_PTR v131; // [rsp+130h] [rbp+30h]
  __int128 v132; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v133[18]; // [rsp+150h] [rbp+50h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  v5 = a1;
  v6 = *(_QWORD *)a1;
  v104 = a1;
  v7 = a3;
  v8 = 0;
  v9 = *(_WORD *)(a1 + 60) & 0x3FF;
  v126 = a2;
  v10 = *(unsigned int *)(v5 + 56);
  v100 = a3;
  v103 = a4;
  v11 = *(_QWORD *)(qword_140C4E688 + 8 * v9);
  v114 = 0;
  v113 = 0LL;
  v116 = v4;
  v129 = v6;
  v118 = v11;
  v109 = a3 & 8;
  v132 = 0LL;
  if ( (v10 & 0x40000000) == 0 || (a3 & 8) != 0 )
  {
    v109 = a3 & 8;
    if ( (v10 & 0x800) == 0 )
      goto LABEL_3;
    v109 = a3 & 8;
  }
  v8 = 2;
LABEL_3:
  if ( (a3 & 8) != 0 )
  {
    MiInitializePageColorBase(v11 + 7424, ((unsigned int)v10 >> 20) & 0x3F, &v132);
    NextDirectFixupProto = MiGetNextDirectFixupProto(v51, 0LL);
    v117 = *(_QWORD *)(NextDirectFixupProto + 8) | 0x8000000000000000uLL;
    v54 = MiGetNextDirectFixupProto(v53, NextDirectFixupProto);
    v10 = *(unsigned int *)(v5 + 56);
    a4 = v103;
    v119 = v54;
  }
  else
  {
    v117 = 0LL;
    v119 = 0LL;
  }
  v12 = v5 + 128;
  v13 = *(_QWORD *)(v5 + 136);
  v14 = -1LL;
  v112 = v5 + 128;
  v15 = 0;
  v111 = v13;
  v16 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  v128 = CurrentThread;
  v98[0] = 17;
  v99 = 0;
  v108 = 0LL;
  ListEntry = 0LL;
  SlabPage = -1LL;
  v110 = 0;
  if ( (v10 & 0x4000000) != 0 )
  {
    v8 |= 4u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v6 + 40, 0LL);
    v5 = v104;
    v14 = SlabPage;
    v13 = v111;
    a4 = v103;
    v4 = v116;
    v110 = 0x20000;
  }
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && !*(_QWORD *)(v4 + 56) )
  {
    result = MiGetSectionStrongImageReference(v4, v10, v13);
    v99 = result;
    v15 = result;
    if ( (int)result >= 0 )
    {
      v14 = SlabPage;
      v13 = v111;
      goto LABEL_27;
    }
    return result;
  }
  while ( 2 )
  {
    v22 = *(_QWORD *)(v12 + 8);
    v131 = *(_QWORD *)(v12 + 16);
    v23 = (__int64)(v22 - v13) >> 3;
    v25 = (*(_BYTE *)(v12 + 34) & 2) == 0;
    v107 = v22;
    v101 = v23;
    if ( !v25 )
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
        v22 = *(_QWORD *)(SharedProtos + 72);
        a4 = v103;
        v107 = v22;
      }
    }
    v24 = MiStartingOffset(v12, v22, a4);
    v105 = v24;
    v27 = v22 + 8LL * *(unsigned int *)(v112 + 44);
    v124 = v27;
    if ( v117 )
    {
      if ( v117 >= v27 )
        goto LABEL_272;
      v56 = v117 - v22;
      v22 = v117;
      v56 >>= 3;
      v23 = (unsigned int)(v56 + v23);
      v107 = v117;
      v24 += v56 << 12;
      v101 = v23;
      v105 = v24;
    }
    v18 = 0LL;
    v125 = 0LL;
    if ( v22 >= v27 )
      goto LABEL_22;
LABEL_11:
    if ( (v22 & 0xFFF) != 0 )
    {
      if ( v16 )
        goto LABEL_13;
    }
    else if ( v16 )
    {
      MiUnlockProtoPoolPage(v16, v98[0]);
    }
    if ( (v8 & 2) != 0 )
      v28 = MiLockProtoPoolPage(v22, v98);
    else
      v28 = MiCheckProtoPtePageState(v22);
    v108 = v28;
    v16 = v28;
    if ( !v28 )
    {
      if ( (v8 & 2) != 0 )
      {
        MmAccessFault(2uLL, v22, 0, 0LL);
        goto LABEL_21;
      }
      v49 = (unsigned __int64)(4096 - (unsigned int)(v22 & 0xFFF)) >> 3;
      v24 += v49 << 12;
      v23 = (unsigned int)(v49 + v23);
      v22 += 8 * v49;
      v101 = v23;
      goto LABEL_19;
    }
    v18 = 0LL;
    while ( 1 )
    {
LABEL_13:
      while ( 1 )
      {
        v19 = *(_QWORD *)v22;
        v20 = *(_QWORD *)v22;
        if ( (*(_QWORD *)v22 & 1) == 0 )
          break;
LABEL_36:
        Flink = 6 * ((v20 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
        {
          v21 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v121 = v18;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v121);
              while ( *(__int64 *)(v21 + 24) < 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) );
            v18 = 0LL;
          }
          if ( *(_QWORD *)v22 == v19 )
            goto LABEL_16;
          _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (*(_QWORD *)v22 & 0xC00LL) != 0x800 )
        break;
      if ( (unsigned int)MiInvalidPteConforms(*(_QWORD *)v22, Flink) )
      {
        v20 = v19;
        if ( qword_140C4DF80 && (v19 & 0x10) == 0 )
          v20 = v19 & ~qword_140C4DF80;
        goto LABEL_36;
      }
    }
    v21 = v18;
LABEL_16:
    v106 = v21;
    if ( !v21 )
    {
      if ( (v8 & 2) == 0 )
        goto LABEL_18;
      v113 = MI_READ_PTE_LOCK_FREE(v22);
      if ( (v113 & 0x400) != 0 )
        goto LABEL_18;
      if ( !(unsigned int)MiGetPagingFileOffset((__int64)&v113) )
        goto LABEL_18;
      MiUnlockProtoPoolPage(v16, v98[0]);
      v108 = 0LL;
      if ( (v7 & 2) != 0 && !(unsigned int)MiPageHasRelocations(v116, (unsigned int)v23) )
        goto LABEL_18;
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)v128);
      if ( EffectivePagePriorityThread > 5 )
        EffectivePagePriorityThread = 5;
      if ( v22 == v125 )
      {
        v59 = 4096;
      }
      else
      {
        v125 = v22;
        v59 = (unsigned int)((__int64)(v124 - v22) >> 3) << 12;
      }
      if ( (int)MiPrefetchControlArea(v104, v58, v59, EffectivePagePriorityThread, 2, v103) < 0 )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      v15 = 0;
      v99 = 0;
      v24 = v105;
LABEL_21:
      v16 = v108;
      if ( v22 >= v124 )
      {
LABEL_22:
        if ( v16 )
        {
          MiUnlockProtoPoolPage(v16, v98[0]);
          v16 = 0LL;
          v108 = 0LL;
        }
LABEL_24:
        v14 = SlabPage;
        if ( SlabPage != -1 )
        {
          v85 = 48 * SlabPage - 0x58000000000LL;
          v106 = v85;
          v98[0] = MiLockPageInline(v85);
          MiFreeSlabPage(v85);
          _InterlockedAnd64((volatile signed __int64 *)(v85 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v98[0] <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v89 = ~(unsigned __int16)(-1LL << (v98[0] + 1));
                v25 = (v89 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v89;
                if ( v25 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v98[0]);
          v14 = -1LL;
          SlabPage = -1LL;
        }
LABEL_25:
        v13 = v111;
LABEL_26:
        v112 = v131;
        v12 = v131;
        if ( !v131 )
          goto LABEL_117;
LABEL_27:
        a4 = v103;
        v5 = v104;
        continue;
      }
      v18 = 0LL;
      goto LABEL_11;
    }
    break;
  }
  v29 = *(_QWORD *)v22;
  if ( (unsigned int)MiPteInShadowRange(v22)
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && (v29 & 1) != 0
    && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v60 = *(_QWORD *)(Flink + 8 * ((v22 >> 3) & 0x1FF));
      Flink = v29 | 0x20;
      if ( (v60 & 0x20) == 0 )
        Flink = v29;
      v29 = Flink;
      if ( (v60 & 0x42) != 0 )
        v29 = Flink | 0x42;
    }
  }
  v113 = v29;
  v30 = v29 & 1;
  if ( (v29 & 1) != 0 )
  {
    if ( (unsigned int)MiPteInShadowRange(&v113)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v61 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v113 >> 3) & 0x1FF));
        Flink = v29 | 0x20;
        if ( (v61 & 0x20) == 0 )
          Flink = v29;
        v29 = Flink;
        if ( (v61 & 0x42) != 0 )
          v29 = Flink | 0x42;
      }
    }
  }
  else if ( qword_140C4DF80 && (v29 & 0x10) == 0 )
  {
    v29 &= ~qword_140C4DF80;
  }
  v31 = (v29 >> 12) & 0xFFFFFFFFFLL;
  if ( (v7 & 4) != 0 )
  {
    if ( (unsigned int)MiIsPfnSystemCharged(v21) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v21 + 35) &= ~0x20u;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_18:
    LODWORD(v101) = v101 + 1;
    v22 += 8LL;
    LODWORD(v23) = v101;
    v24 = v105 + 4096;
    v15 = v99;
LABEL_19:
    v107 = v22;
    goto LABEL_20;
  }
  v32 = v7 & 1;
  if ( v32 && ((*(_QWORD *)(v21 + 40) >> 60) & 7) == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = v100;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 && (v8 & 2) == 0 || (v33 = *(_BYTE *)(v21 + 35), (v33 & 0x10) != 0) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_107;
  }
  if ( !v30 && (*(_BYTE *)(v21 + 34) & 0x20) != 0 )
  {
    memset(v133, 0, 0x88uLL);
    v7 = v100;
    if ( (*(_DWORD *)(v104 + 56) & 2) != 0 || (v100 & 2) == 0 )
    {
      MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v133);
      v114 = 1;
      MiObtainProtoReference(v16, 1LL);
      MiWaitForCollidedFaultComplete(v133, v21, v16, v98[0], &v114);
      LODWORD(v23) = v101;
      v24 = v105;
      v15 = 0;
      v108 = 0LL;
      v99 = 0;
      goto LABEL_21;
    }
    LOBYTE(v62) = 17;
    MiDeleteTransitionPte(v22, v21, v62, 1);
    goto LABEL_18;
  }
  v34 = 8;
  v115 = 8;
  if ( !v30 )
  {
    if ( (v33 & 8) != 0 )
    {
      v34 = v33 & 7;
      v115 = v34;
    }
    if ( (unsigned int)MiUnlinkPageFromList(v21, 0) )
    {
      *(_QWORD *)(v21 + 24) &= 0xC000000000000000uLL;
      goto LABEL_62;
    }
    MiDiscardTransitionPteEx(v21, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = v107;
    if ( (v8 & 2) != 0 )
    {
      v15 = v99;
      v7 = v100;
      LODWORD(v23) = v101;
      v24 = v105;
      goto LABEL_21;
    }
LABEL_107:
    v7 = v100;
    goto LABEL_18;
  }
LABEL_62:
  if ( !v32
    || !(unsigned int)MiUseSlabAllocator(v118, v112, *(_QWORD *)(v21 + 16), 0LL)
    || (IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(v21),
        IsPfnFromSlabAllocation
     && (unsigned int)MiCheckSlabPage(v21, 0LL, (*(unsigned __int16 *)(v64 + 32) >> 1) & 0x1F)) )
  {
    v35 = v8 & 0xFFFFFFEF;
  }
  else
  {
    v35 = v8 | 0x10;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v21) || (unsigned int)MiChargeForLockedPage(v21, 1LL) )
    ++*(_WORD *)(v21 + 32);
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v122 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v122);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  *(_BYTE *)(v16 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v16) )
    MiPfnReferenceCountIsZero(v16, (v16 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v36 = v98[0];
  if ( v98[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v65 = KeGetCurrentIrql();
        if ( v65 <= 0xFu && v98[0] <= 0xFu && v65 >= 2u )
        {
          v66 = KeGetCurrentPrcb();
          v67 = v66->SchedulerAssist;
          v36 = v98[0];
          v68 = ~(unsigned __int16)(-1LL << (v98[0] + 1));
          v25 = (v68 & v67[5]) == 0;
          v67[5] &= v68;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v66);
        }
      }
    }
    __writecr8(v36);
  }
  v37 = *(_QWORD *)(v21 + 40);
  v108 = 0LL;
  if ( (v37 & 0x2000000000000LL) != 0 )
    v8 = v35 | 1;
  else
    v8 = v35 & 0xFFFFFFFE;
  if ( v109 )
  {
    if ( (unsigned int)MiPageHasRelocations(v116, (unsigned int)v101) )
    {
      v31 = MiSplitDirectMapPage(v112, &v132, v31);
      *(_QWORD *)v21 ^= (*(_QWORD *)v21 ^ (v119 >> 3)) & 0xFFFFFFFFFFELL;
      v106 = 48 * v31 - 0x58000000000LL;
    }
  }
  else if ( (v100 & 2) != 0 )
  {
    v38 = v104;
    if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v104 + 92) & 0xC0000) != 0 && ((v37 >> 60) & 7) == 3 )
    {
      v69 = VslApplySecureImageFixups(*(_QWORD *)(v116 + 56), (unsigned int)v101, v31);
      v99 = v69;
      if ( v69 < 0 )
        KeBugCheckEx(0x1Au, 0xD8A18uLL, v69, v31, v38);
      goto LABEL_81;
    }
    updated = MiRelocateImagePfn(v104, 0LL, v97, 4);
    v99 = updated;
    if ( !updated )
    {
      v8 |= 8u;
      goto LABEL_81;
    }
LABEL_79:
    if ( updated == 1 )
      v99 = 0;
  }
  else
  {
    if ( (v100 & 0x10) == 0 )
    {
      v99 = MiValidateImagePfn(
              v104,
              v105,
              (_DWORD)Process,
              v101,
              BugCheckParameter4,
              (*(unsigned __int16 *)(v112 + 32) >> 1) & 0x1F,
              v31,
              0x4000000);
      goto LABEL_81;
    }
    v48 = v104;
    if ( (MiFlags & 0x4000) == 0 || (*(_DWORD *)(v104 + 92) & 0xC0000) == 0 || ((v37 >> 60) & 7) != 3 )
    {
      updated = MiUpdateImagePfnImportRelocations(v104, v126, (unsigned int)v101, v31);
      v99 = updated;
      if ( !updated )
      {
        v8 |= 8u;
        goto LABEL_81;
      }
      goto LABEL_79;
    }
    v70 = VslApplySecureImageFixups(*(_QWORD *)(v116 + 56), (unsigned int)v101, v31);
    v99 = v70;
    if ( v70 < 0 )
      KeBugCheckEx(0x1Au, 0xD9A18uLL, v70, v31, v48);
  }
LABEL_81:
  if ( v34 != 8 && !ListEntry && (v8 & 1) == 0 )
    ListEntry = MiCreateDecayPfn();
  if ( (v8 & 0x10) != 0 && SlabPage == -1 )
  {
    SlabPage = MiGetSlabPage(
                 v118,
                 (*(unsigned __int16 *)(v112 + 32) >> 1) & 0x1F,
                 0,
                 (__int64 *)0xFFFFFFFFFFFFFFFFLL,
                 v110);
    if ( SlabPage == -1 )
      v8 &= ~0x10u;
  }
  v40 = 0LL;
  v41 = 0LL;
  v42 = KeGetCurrentIrql();
  v127 = v42;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v42 <= 0xFu )
  {
    v71 = KeGetCurrentPrcb()->SchedulerAssist;
    v71[5] |= (-1 << (v42 + 1)) & 4;
  }
  v123 = 0;
  v43 = v106;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v123);
    while ( *(__int64 *)(v43 + 24) < 0 );
  }
  v98[0] = v42;
  if ( (v8 & 0x10) != 0 && (*(_QWORD *)(v43 + 24) & 0x4000000000000000LL) != 0 )
    v8 &= ~0x10u;
  v44 = v106;
  if ( (v100 & 2) != 0 )
  {
    v45 = *(_QWORD *)(v106 + 16);
    v46 = v106 + 16;
    if ( (unsigned int)MiPteInShadowRange(v106 + 16) && (MiFlags & 0xC00000) != 0 )
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
      v44 = v106;
    }
    v113 = v45;
    if ( (v45 & 0x400) != 0 )
    {
      v40 = 0LL;
    }
    else
    {
      v41 = MiCaptureDirtyBitToPfn(v44);
      v40 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v44 + 40) >> 39) & 0x3FFLL));
    }
    LOBYTE(v42) = v127;
  }
  if ( (v8 & 0x10) != 0 && (*(_BYTE *)(v44 + 34) & 7) == 6 )
  {
    MiTrimSharedPage(v44, (unsigned __int8)v42, v110);
    if ( (*(_QWORD *)(v43 + 24) & 0x4000000000000000LL) != 0 )
      v8 &= ~0x10u;
  }
  if ( (unsigned int)MiRemoveLockedPageCharge(v44) )
  {
    if ( (v8 & 1) != 0
      || v115 == 8
      || (*(_BYTE *)(v44 + 34) & 0x10) != 0
      || _bittest64((const signed __int64 *)(v43 + 24), 0x3Eu)
      || (v8 & 0x10) != 0 )
    {
      MiPfnReferenceCountIsZero(v44, v31);
    }
    else
    {
      MiInsertAndUnlockStandbyPages(ListEntry, &v106, 1LL, (unsigned __int8)v42);
      v98[0] = 17;
    }
  }
  if ( (v8 & 0x10) != 0 && !*(_WORD *)(v44 + 32) )
  {
    v75 = MiIsPfnFromSlabAllocation(v44);
    MiReplaceTransitionPage(v44, 48 * SlabPage - 0x58000000000LL, v75, 0LL);
    *(_QWORD *)(v44 + 16) = ZeroPte;
    SlabPage = -1LL;
    MiSetOriginalPtePfnFromFreeList(v44 + 16, v76);
    MiReturnFreeZeroPage(v44, 0LL);
  }
  if ( v98[0] != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v41 )
    MiReleasePageFileInfo(v40, v41, 1);
  if ( v98[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v77 = KeGetCurrentIrql();
        if ( v77 <= 0xFu && v98[0] <= 0xFu && v77 >= 2u )
        {
          v78 = KeGetCurrentPrcb();
          v79 = v78->SchedulerAssist;
          Flink = -1LL << (v98[0] + 1);
          v80 = ~(unsigned __int16)Flink;
          v25 = (v80 & v79[5]) == 0;
          v79[5] &= v80;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v78);
        }
      }
    }
    __writecr8(v98[0]);
    v98[0] = 17;
  }
  v15 = v99;
  if ( v99 < 0 )
  {
    v14 = SlabPage;
    dword_140C4CC58 = (v99 != -1073741670) + 113;
  }
  else
  {
    if ( !v117 )
    {
      v22 = v107;
      goto LABEL_107;
    }
    if ( v119 )
    {
      v81 = MiGetNextDirectFixupProto(v104, v119);
      v82 = *(_QWORD *)(Flink + 8);
      v7 = v100;
      v119 = v81;
      v83 = v82 | 0x8000000000000000uLL;
      v117 = v83;
      if ( v83 >= v124 )
      {
        v16 = v108;
        goto LABEL_24;
      }
      v22 = v83;
      v84 = (__int64)(v83 - v107) >> 3;
      LODWORD(v23) = v84 + v101;
      v107 = v83;
      v24 = (v84 << 12) + v105;
      v101 = (unsigned int)(v84 + v101);
LABEL_20:
      v105 = v24;
      goto LABEL_21;
    }
    v14 = SlabPage;
  }
LABEL_117:
  if ( ListEntry )
  {
    MiDecayPfnFullyInitialized(ListEntry);
    v14 = SlabPage;
  }
  if ( (v8 & 4) != 0 )
  {
    v50 = v129;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v129 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v50 + 40);
    KeAbPostRelease(v50 + 40);
    KiLeaveGuardedRegionUnsafe(v128);
    v14 = SlabPage;
  }
  if ( v14 != -1 )
  {
    v90 = 48 * v14 - 0x58000000000LL;
    v106 = v90;
    v98[0] = MiLockPageInline(v90);
    MiFreeSlabPage(v90);
    _InterlockedAnd64((volatile signed __int64 *)(v90 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v91 = KeGetCurrentIrql(), v91 <= 0xFu) )
    {
      v92 = v98[0];
      if ( v98[0] <= 0xFu && v91 >= 2u )
      {
        v93 = KeGetCurrentPrcb();
        v94 = v93->SchedulerAssist;
        v92 = v98[0];
        v95 = ~(unsigned __int16)(-1LL << (v98[0] + 1));
        v25 = (v95 & v94[5]) == 0;
        v94[5] &= v95;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v93);
      }
    }
    else
    {
      v92 = v98[0];
    }
    __writecr8(v92);
  }
  return v15;
}
