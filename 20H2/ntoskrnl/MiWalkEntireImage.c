/*
 * XREFs of MiWalkEntireImage @ 0x1402C8CD0
 * Callers:
 *     MiSwitchBaseAddress @ 0x14062BE34 (MiSwitchBaseAddress.c)
 *     MiUnloadSystemImage @ 0x1406CB9B0 (MiUnloadSystemImage.c)
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x14070EA48 (MiValidateSectionCreate.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x140755C98 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiFreeRetpolineImportInfo @ 0x1407C9C94 (MiFreeRetpolineImportInfo.c)
 * Callees:
 *     MiWaitForCollidedFaultComplete @ 0x140201D9C (MiWaitForCollidedFaultComplete.c)
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUseSlabAllocator @ 0x1402301F8 (MiUseSlabAllocator.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiGetPagingFileOffset @ 0x1402397FC (MiGetPagingFileOffset.c)
 *     ExfReleasePushLockShared @ 0x140242A40 (ExfReleasePushLockShared.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x140279090 (MiUnlinkPageFromList.c)
 *     MiCaptureDirtyBitToPfn @ 0x14029F1B0 (MiCaptureDirtyBitToPfn.c)
 *     MiStartingOffset @ 0x1402A1B60 (MiStartingOffset.c)
 *     MiAreChargesNeededToLockPage @ 0x1402A6B80 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x1402A9540 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1402A9610 (MiInsertAndUnlockStandbyPages.c)
 *     MiChargeForLockedPage @ 0x1402AC1F0 (MiChargeForLockedPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteTransitionPte @ 0x1402C7050 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x1402C96D0 (MiRemoveLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x1402C9A90 (MiCheckProtoPtePageState.c)
 *     MiInvalidPteConforms @ 0x1402C9D60 (MiInvalidPteConforms.c)
 *     MiObtainProtoReference @ 0x1402CA8B8 (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiInitializePageFaultPacket @ 0x1402CFE30 (MiInitializePageFaultPacket.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402D1080 (MiGetEffectivePagePriorityThread.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiTrimSharedPage @ 0x14031F424 (MiTrimSharedPage.c)
 *     MiGetSlabPage @ 0x140332E88 (MiGetSlabPage.c)
 *     MiReleasePageFileInfo @ 0x140344F70 (MiReleasePageFileInfo.c)
 *     MiIsPfnFromSlabAllocation @ 0x14034D190 (MiIsPfnFromSlabAllocation.c)
 *     MiReturnFreeZeroPage @ 0x14034D2F0 (MiReturnFreeZeroPage.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiDecayPfnFullyInitialized @ 0x140351A08 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x140351B30 (MiCreateDecayPfn.c)
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MiFreeSlabPage @ 0x14037BE0C (MiFreeSlabPage.c)
 *     MiIsPfnSystemCharged @ 0x14037C6C8 (MiIsPfnSystemCharged.c)
 *     MiCheckSlabPage @ 0x14037CD40 (MiCheckSlabPage.c)
 *     MiDiscardTransitionPteEx @ 0x140388734 (MiDiscardTransitionPteEx.c)
 *     MiUpdateImagePfnImportRelocations @ 0x1403973FC (MiUpdateImagePfnImportRelocations.c)
 *     MiGetSharedProtos @ 0x1403A5948 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     VslApplySecureImageFixups @ 0x1404FA508 (VslApplySecureImageFixups.c)
 *     MiDriverPageIsDangling @ 0x140533CF4 (MiDriverPageIsDangling.c)
 *     MiSplitDirectMapPage @ 0x14054063C (MiSplitDirectMapPage.c)
 *     MiRelocateImagePfn @ 0x1406818C0 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1406BEE74 (MiValidateImagePfn.c)
 *     MiPageHasRelocations @ 0x1406BF19C (MiPageHasRelocations.c)
 *     MiPrefetchControlArea @ 0x14070F6A0 (MiPrefetchControlArea.c)
 *     MiGetNextDirectFixupProto @ 0x1408DA4E4 (MiGetNextDirectFixupProto.c)
 *     MiGetSectionStrongImageReference @ 0x1408DA710 (MiGetSectionStrongImageReference.c)
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
  _BYTE *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v18; // r8
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // r15
  __int64 v23; // r12
  unsigned __int64 v24; // rbx
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
  _DWORD *v77; // r9
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rcx
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  ULONG_PTR v83; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v87; // eax
  ULONG_PTR v88; // rbx
  unsigned __int8 v89; // al
  unsigned __int8 v90; // bl
  struct _KPRCB *v91; // r9
  _DWORD *v92; // r8
  int v93; // eax
  char BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v95; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v96[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v97; // [rsp+44h] [rbp-BCh]
  int v98; // [rsp+48h] [rbp-B8h]
  __int64 v99; // [rsp+50h] [rbp-B0h]
  __int64 SlabPage; // [rsp+58h] [rbp-A8h]
  unsigned int v101; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v102; // [rsp+68h] [rbp-98h]
  unsigned __int64 v103; // [rsp+70h] [rbp-90h]
  ULONG_PTR v104; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v105; // [rsp+80h] [rbp-80h]
  __int64 v106; // [rsp+88h] [rbp-78h]
  int v107; // [rsp+90h] [rbp-70h]
  unsigned int v108; // [rsp+94h] [rbp-6Ch]
  __int64 v109; // [rsp+98h] [rbp-68h]
  _BYTE *v110; // [rsp+A0h] [rbp-60h]
  __int64 v111; // [rsp+A8h] [rbp-58h] BYREF
  int v112; // [rsp+B0h] [rbp-50h] BYREF
  int v113; // [rsp+B4h] [rbp-4Ch]
  __int64 v114; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v115; // [rsp+C0h] [rbp-40h]
  __int64 v116; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v117; // [rsp+D0h] [rbp-30h]
  ULONG_PTR BugCheckParameter2; // [rsp+D8h] [rbp-28h]
  int v119; // [rsp+E0h] [rbp-20h] BYREF
  int v120; // [rsp+E4h] [rbp-1Ch] BYREF
  int v121; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v122; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v123; // [rsp+F8h] [rbp-8h]
  __int64 v124; // [rsp+100h] [rbp+0h]
  __int64 v125; // [rsp+108h] [rbp+8h]
  struct _KTHREAD *v126; // [rsp+110h] [rbp+10h]
  __int64 v127; // [rsp+118h] [rbp+18h]
  _KPROCESS *Process; // [rsp+120h] [rbp+20h]
  _BYTE *v129; // [rsp+130h] [rbp+30h]
  __int128 v130; // [rsp+138h] [rbp+38h] BYREF
  _QWORD v131[18]; // [rsp+150h] [rbp+50h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  v5 = a1;
  v6 = *(_QWORD *)a1;
  v102 = a1;
  v7 = a3;
  v8 = 0;
  v9 = *(_WORD *)(a1 + 60) & 0x3FF;
  v124 = a2;
  v10 = *(unsigned int *)(v5 + 56);
  v98 = a3;
  v101 = a4;
  v11 = *(_QWORD *)(qword_140C4E4C8 + 8 * v9);
  v112 = 0;
  v111 = 0LL;
  v114 = v4;
  v127 = v6;
  v116 = v11;
  v107 = a3 & 8;
  v130 = 0LL;
  if ( (v10 & 0x40000000) == 0 || (a3 & 8) != 0 )
  {
    v107 = a3 & 8;
    if ( (v10 & 0x800) == 0 )
      goto LABEL_3;
    v107 = a3 & 8;
  }
  v8 = 2;
LABEL_3:
  if ( (a3 & 8) != 0 )
  {
    MiInitializePageColorBase(v11 + 7424, ((unsigned int)v10 >> 20) & 0x3F, (__int64)&v130);
    NextDirectFixupProto = MiGetNextDirectFixupProto(v51, 0LL);
    v115 = *(_QWORD *)(NextDirectFixupProto + 8) | 0x8000000000000000uLL;
    v54 = MiGetNextDirectFixupProto(v53, NextDirectFixupProto);
    v10 = *(unsigned int *)(v5 + 56);
    a4 = v101;
    v117 = v54;
  }
  else
  {
    v115 = 0LL;
    v117 = 0LL;
  }
  v12 = (_BYTE *)(v5 + 128);
  v13 = *(_QWORD *)(v5 + 136);
  v14 = -1LL;
  v110 = (_BYTE *)(v5 + 128);
  v15 = 0;
  v109 = v13;
  v16 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  v126 = CurrentThread;
  v96[0] = 17;
  v97 = 0;
  v106 = 0LL;
  BugCheckParameter2 = 0LL;
  SlabPage = -1LL;
  v108 = 0;
  if ( (v10 & 0x4000000) != 0 )
  {
    v8 |= 4u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v6 + 40, 0LL);
    v5 = v102;
    v14 = SlabPage;
    v13 = v109;
    a4 = v101;
    v4 = v114;
    v108 = 0x20000;
  }
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && !*(_QWORD *)(v4 + 56) )
  {
    result = MiGetSectionStrongImageReference(v4, v10, v13);
    v97 = result;
    v15 = result;
    if ( (int)result >= 0 )
    {
      v14 = SlabPage;
      v13 = v109;
      goto LABEL_27;
    }
    return result;
  }
  while ( 2 )
  {
    v22 = *((_QWORD *)v12 + 1);
    v129 = (_BYTE *)*((_QWORD *)v12 + 2);
    v23 = (__int64)(v22 - v13) >> 3;
    v25 = (v12[34] & 2) == 0;
    v105 = v22;
    v99 = v23;
    if ( !v25 )
    {
      if ( (v7 & 1) != 0 )
        goto LABEL_26;
      if ( (*(_DWORD *)(v5 + 56) & 0x4000000) != 0 )
      {
        if ( (v7 & 0xA) != 0 || !*((_QWORD *)v12 + 3) )
          goto LABEL_26;
        SharedProtos = MiGetSharedProtos(v5, a4, v12);
        if ( !SharedProtos )
        {
LABEL_272:
          v14 = SlabPage;
          goto LABEL_25;
        }
        v22 = *(_QWORD *)(SharedProtos + 72);
        a4 = v101;
        v105 = v22;
      }
    }
    v24 = MiStartingOffset((__int64 *)v12, v22, a4);
    v103 = v24;
    v27 = v22 + 8LL * *((unsigned int *)v110 + 11);
    v122 = v27;
    if ( v115 )
    {
      if ( v115 >= v27 )
        goto LABEL_272;
      v56 = v115 - v22;
      v22 = v115;
      v56 >>= 3;
      v23 = (unsigned int)(v56 + v23);
      v105 = v115;
      v24 += v56 << 12;
      v99 = v23;
      v103 = v24;
    }
    v18 = 0LL;
    v123 = 0LL;
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
      MiUnlockProtoPoolPage(v16, v96[0]);
    }
    if ( (v8 & 2) != 0 )
      v28 = MiLockProtoPoolPage(v22, v96);
    else
      v28 = MiCheckProtoPtePageState(v22);
    v106 = v28;
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
      v99 = v23;
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
          v119 = v18;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v119);
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
        if ( qword_140C4DDC0 && (v19 & 0x10) == 0 )
          v20 = v19 & ~qword_140C4DDC0;
        goto LABEL_36;
      }
    }
    v21 = v18;
LABEL_16:
    v104 = v21;
    if ( !v21 )
    {
      if ( (v8 & 2) == 0 )
        goto LABEL_18;
      v111 = MI_READ_PTE_LOCK_FREE(v22);
      if ( (v111 & 0x400) != 0 )
        goto LABEL_18;
      if ( !(unsigned int)MiGetPagingFileOffset((__int64)&v111) )
        goto LABEL_18;
      MiUnlockProtoPoolPage(v16, v96[0]);
      v106 = 0LL;
      if ( (v7 & 2) != 0 && !(unsigned int)MiPageHasRelocations(v114, (unsigned int)v23) )
        goto LABEL_18;
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v126);
      if ( EffectivePagePriorityThread > 5 )
        EffectivePagePriorityThread = 5;
      if ( v22 == v123 )
      {
        v59 = 4096;
      }
      else
      {
        v123 = v22;
        v59 = (unsigned int)((__int64)(v122 - v22) >> 3) << 12;
      }
      if ( (int)MiPrefetchControlArea(v102, v58, v59, EffectivePagePriorityThread, 2, v101) < 0 )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      v15 = 0;
      v97 = 0;
      v24 = v103;
LABEL_21:
      v16 = v106;
      if ( v22 >= v122 )
      {
LABEL_22:
        if ( v16 )
        {
          MiUnlockProtoPoolPage(v16, v96[0]);
          v16 = 0LL;
          v106 = 0LL;
        }
LABEL_24:
        v14 = SlabPage;
        if ( SlabPage != -1 )
        {
          v83 = 48 * SlabPage - 0x58000000000LL;
          v104 = v83;
          v96[0] = MiLockPageInline(v83);
          MiFreeSlabPage(v83);
          _InterlockedAnd64((volatile signed __int64 *)(v83 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v96[0] <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v87 = ~(unsigned __int16)(-1LL << (v96[0] + 1));
                v25 = (v87 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v87;
                if ( v25 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v96[0]);
          v14 = -1LL;
          SlabPage = -1LL;
        }
LABEL_25:
        v13 = v109;
LABEL_26:
        v110 = v129;
        v12 = v129;
        if ( !v129 )
          goto LABEL_117;
LABEL_27:
        a4 = v101;
        v5 = v102;
        continue;
      }
      v18 = 0LL;
      goto LABEL_11;
    }
    break;
  }
  v29 = *(_QWORD *)v22;
  if ( MiPteInShadowRange(v22)
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
  v111 = v29;
  v30 = v29 & 1;
  if ( (v29 & 1) != 0 )
  {
    if ( MiPteInShadowRange((unsigned __int64)&v111)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v61 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v111 >> 3) & 0x1FF));
        Flink = v29 | 0x20;
        if ( (v61 & 0x20) == 0 )
          Flink = v29;
        v29 = Flink;
        if ( (v61 & 0x42) != 0 )
          v29 = Flink | 0x42;
      }
    }
  }
  else if ( qword_140C4DDC0 && (v29 & 0x10) == 0 )
  {
    v29 &= ~qword_140C4DDC0;
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
    LODWORD(v99) = v99 + 1;
    v22 += 8LL;
    LODWORD(v23) = v99;
    v24 = v103 + 4096;
    v15 = v97;
LABEL_19:
    v105 = v22;
    goto LABEL_20;
  }
  v32 = v7 & 1;
  if ( v32 && ((*(_QWORD *)(v21 + 40) >> 60) & 7) == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = v98;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 && (v8 & 2) == 0 || (v33 = *(_BYTE *)(v21 + 35), (v33 & 0x10) != 0) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_107;
  }
  if ( !v30 && (*(_BYTE *)(v21 + 34) & 0x20) != 0 )
  {
    memset(v131, 0, 0x88uLL);
    v7 = v98;
    if ( (*(_DWORD *)(v102 + 56) & 2) != 0 || (v98 & 2) == 0 )
    {
      MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v131);
      v112 = 1;
      MiObtainProtoReference(v16, 1LL);
      MiWaitForCollidedFaultComplete(v131, v21, v16, v96[0], &v112);
      LODWORD(v23) = v99;
      v24 = v103;
      v15 = 0;
      v106 = 0LL;
      v97 = 0;
      goto LABEL_21;
    }
    LOBYTE(v62) = 17;
    MiDeleteTransitionPte(v22, v21, v62, 1);
    goto LABEL_18;
  }
  v34 = 8;
  v113 = 8;
  if ( !v30 )
  {
    if ( (v33 & 8) != 0 )
    {
      v34 = v33 & 7;
      v113 = v34;
    }
    if ( (unsigned int)MiUnlinkPageFromList(v21, 0) )
    {
      *(_QWORD *)(v21 + 24) &= 0xC000000000000000uLL;
      goto LABEL_62;
    }
    MiDiscardTransitionPteEx(v21, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = v105;
    if ( (v8 & 2) != 0 )
    {
      v15 = v97;
      v7 = v98;
      LODWORD(v23) = v99;
      v24 = v103;
      goto LABEL_21;
    }
LABEL_107:
    v7 = v98;
    goto LABEL_18;
  }
LABEL_62:
  if ( !v32
    || !(unsigned int)MiUseSlabAllocator(v116, v110, *(_QWORD *)(v21 + 16), 0LL)
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
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v21) || (unsigned int)MiChargeForLockedPage(v21, 1) )
    ++*(_WORD *)(v21 + 32);
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v120 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v120);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  *(_BYTE *)(v16 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v16) )
    MiPfnReferenceCountIsZero(v16, (v16 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v36 = v96[0];
  if ( v96[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v65 = KeGetCurrentIrql();
        if ( v65 <= 0xFu && v96[0] <= 0xFu && v65 >= 2u )
        {
          v66 = KeGetCurrentPrcb();
          v67 = v66->SchedulerAssist;
          v36 = v96[0];
          v68 = ~(unsigned __int16)(-1LL << (v96[0] + 1));
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
  v106 = 0LL;
  if ( (v37 & 0x2000000000000LL) != 0 )
    v8 = v35 | 1;
  else
    v8 = v35 & 0xFFFFFFFE;
  if ( v107 )
  {
    if ( (unsigned int)MiPageHasRelocations(v114, (unsigned int)v99) )
    {
      v31 = MiSplitDirectMapPage(v110, &v130, v31);
      *(_QWORD *)v21 ^= (*(_QWORD *)v21 ^ (v117 >> 3)) & 0xFFFFFFFFFFELL;
      v104 = 48 * v31 - 0x58000000000LL;
    }
  }
  else if ( (v98 & 2) != 0 )
  {
    v38 = v102;
    if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v102 + 92) & 0xC0000) != 0 && ((v37 >> 60) & 7) == 3 )
    {
      v69 = VslApplySecureImageFixups(*(_QWORD *)(v114 + 56), (unsigned int)v99, v31);
      v97 = v69;
      if ( v69 < 0 )
        KeBugCheckEx(0x1Au, 0xD8A18uLL, v69, v31, v38);
      goto LABEL_81;
    }
    updated = MiRelocateImagePfn(v102, 0LL, v95, 4);
    v97 = updated;
    if ( !updated )
    {
      v8 |= 8u;
      goto LABEL_81;
    }
LABEL_79:
    if ( updated == 1 )
      v97 = 0;
  }
  else
  {
    if ( (v98 & 0x10) == 0 )
    {
      v97 = MiValidateImagePfn(
              v102,
              v103,
              (_DWORD)Process,
              v99,
              BugCheckParameter4,
              (*((unsigned __int16 *)v110 + 16) >> 1) & 0x1F,
              v31,
              0x4000000);
      goto LABEL_81;
    }
    v48 = v102;
    if ( (MiFlags & 0x4000) == 0 || (*(_DWORD *)(v102 + 92) & 0xC0000) == 0 || ((v37 >> 60) & 7) != 3 )
    {
      updated = MiUpdateImagePfnImportRelocations(v102, v124, (unsigned int)v99, v31);
      v97 = updated;
      if ( !updated )
      {
        v8 |= 8u;
        goto LABEL_81;
      }
      goto LABEL_79;
    }
    v70 = VslApplySecureImageFixups(*(_QWORD *)(v114 + 56), (unsigned int)v99, v31);
    v97 = v70;
    if ( v70 < 0 )
      KeBugCheckEx(0x1Au, 0xD9A18uLL, v70, v31, v48);
  }
LABEL_81:
  if ( v34 != 8 && !BugCheckParameter2 && (v8 & 1) == 0 )
    BugCheckParameter2 = MiCreateDecayPfn();
  if ( (v8 & 0x10) != 0 && SlabPage == -1 )
  {
    SlabPage = MiGetSlabPage(v116, (*((unsigned __int16 *)v110 + 16) >> 1) & 0x1F, 0, -1, v108);
    if ( SlabPage == -1 )
      v8 &= ~0x10u;
  }
  v40 = 0LL;
  v41 = 0LL;
  v42 = KeGetCurrentIrql();
  v125 = v42;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v42 <= 0xFu )
  {
    v71 = KeGetCurrentPrcb()->SchedulerAssist;
    v71[5] |= (-1 << (v42 + 1)) & 4;
  }
  v121 = 0;
  v43 = v104;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v43 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v121);
    while ( *(__int64 *)(v43 + 24) < 0 );
  }
  v96[0] = v42;
  if ( (v8 & 0x10) != 0 && (*(_QWORD *)(v43 + 24) & 0x4000000000000000LL) != 0 )
    v8 &= ~0x10u;
  v44 = v104;
  if ( (v98 & 2) != 0 )
  {
    v45 = *(_QWORD *)(v104 + 16);
    v46 = v104 + 16;
    if ( MiPteInShadowRange(v104 + 16) && (MiFlags & 0xC00000) != 0 )
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
      v44 = v104;
    }
    v111 = v45;
    if ( (v45 & 0x400) != 0 )
    {
      v40 = 0LL;
    }
    else
    {
      v41 = MiCaptureDirtyBitToPfn(v44);
      v40 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v44 + 40) >> 39) & 0x3FFLL));
    }
    LOBYTE(v42) = v125;
  }
  if ( (v8 & 0x10) != 0 && (*(_BYTE *)(v44 + 34) & 7) == 6 )
  {
    MiTrimSharedPage(v44, (unsigned __int8)v42, v108);
    if ( (*(_QWORD *)(v43 + 24) & 0x4000000000000000LL) != 0 )
      v8 &= ~0x10u;
  }
  if ( (unsigned int)MiRemoveLockedPageCharge(v44) )
  {
    if ( (v8 & 1) != 0
      || v113 == 8
      || (*(_BYTE *)(v44 + 34) & 0x10) != 0
      || _bittest64((const signed __int64 *)(v43 + 24), 0x3Eu)
      || (v8 & 0x10) != 0 )
    {
      MiPfnReferenceCountIsZero(v44, v31);
    }
    else
    {
      MiInsertAndUnlockStandbyPages(BugCheckParameter2, &v104, 1u, v42);
      v96[0] = 17;
    }
  }
  if ( (v8 & 0x10) != 0 && !*(_WORD *)(v44 + 32) )
  {
    MiIsPfnFromSlabAllocation(v44);
    MiReplaceTransitionPage(v44);
    *(_QWORD *)(v44 + 16) = ZeroPte;
    SlabPage = -1LL;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v44 + 16));
    MiReturnFreeZeroPage(v44, 0LL);
  }
  if ( v96[0] != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v43 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v41 )
    MiReleasePageFileInfo(v40, v41, 1LL);
  if ( v96[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v75 = KeGetCurrentIrql();
        if ( v75 <= 0xFu && v96[0] <= 0xFu && v75 >= 2u )
        {
          v76 = KeGetCurrentPrcb();
          v77 = v76->SchedulerAssist;
          Flink = -1LL << (v96[0] + 1);
          v78 = ~(unsigned __int16)Flink;
          v25 = (v78 & v77[5]) == 0;
          v77[5] &= v78;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v76);
        }
      }
    }
    __writecr8(v96[0]);
    v96[0] = 17;
  }
  v15 = v97;
  if ( v97 < 0 )
  {
    v14 = SlabPage;
    dword_140C4CA98 = (v97 != -1073741670) + 113;
  }
  else
  {
    if ( !v115 )
    {
      v22 = v105;
      goto LABEL_107;
    }
    if ( v117 )
    {
      v79 = MiGetNextDirectFixupProto(v102, v117);
      v80 = *(_QWORD *)(Flink + 8);
      v7 = v98;
      v117 = v79;
      v81 = v80 | 0x8000000000000000uLL;
      v115 = v81;
      if ( v81 >= v122 )
      {
        v16 = v106;
        goto LABEL_24;
      }
      v22 = v81;
      v82 = (__int64)(v81 - v105) >> 3;
      LODWORD(v23) = v82 + v99;
      v105 = v81;
      v24 = (v82 << 12) + v103;
      v99 = (unsigned int)(v82 + v99);
LABEL_20:
      v103 = v24;
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
    v50 = v127;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v127 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v50 + 40));
    KeAbPostRelease(v50 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)v126);
    v14 = SlabPage;
  }
  if ( v14 != -1 )
  {
    v88 = 48 * v14 - 0x58000000000LL;
    v104 = v88;
    v96[0] = MiLockPageInline(v88);
    MiFreeSlabPage(v88);
    _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v89 = KeGetCurrentIrql(), v89 <= 0xFu) )
    {
      v90 = v96[0];
      if ( v96[0] <= 0xFu && v89 >= 2u )
      {
        v91 = KeGetCurrentPrcb();
        v92 = v91->SchedulerAssist;
        v90 = v96[0];
        v93 = ~(unsigned __int16)(-1LL << (v96[0] + 1));
        v25 = (v93 & v92[5]) == 0;
        v92[5] &= v93;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v91);
      }
    }
    else
    {
      v90 = v96[0];
    }
    __writecr8(v90);
  }
  return v15;
}
