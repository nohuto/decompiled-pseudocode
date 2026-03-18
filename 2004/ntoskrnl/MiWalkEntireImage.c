/*
 * XREFs of MiWalkEntireImage @ 0x14022B620
 * Callers:
 *     MiRelocateImage @ 0x14060F080 (MiRelocateImage.c)
 *     MiUnloadSystemImage @ 0x1406A8E58 (MiUnloadSystemImage.c)
 *     MiValidateSectionCreate @ 0x1406EAE30 (MiValidateSectionCreate.c)
 *     MiSwitchBaseAddress @ 0x1406FCDAC (MiSwitchBaseAddress.c)
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x1407470B8 (MiApplyImportOptimizationToRuntimeDriver.c)
 *     MiFreeRetpolineImportInfo @ 0x1407BB404 (MiFreeRetpolineImportInfo.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiUseSlabAllocator @ 0x140221F88 (MiUseSlabAllocator.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402272A0 (MiIsPfnFromSlabAllocation.c)
 *     MiObtainProtoReference @ 0x140229634 (MiObtainProtoReference.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiInvalidPteConforms @ 0x14022A870 (MiInvalidPteConforms.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14022C020 (MiRemoveLockedPageCharge.c)
 *     MiCheckProtoPtePageState @ 0x14022C550 (MiCheckProtoPtePageState.c)
 *     MiChargeForLockedPage @ 0x14022CA80 (MiChargeForLockedPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1402318D0 (MiAreChargesNeededToLockPage.c)
 *     MiPfnReferenceCountIsZero @ 0x140234560 (MiPfnReferenceCountIsZero.c)
 *     MiInsertAndUnlockStandbyPages @ 0x140234630 (MiInsertAndUnlockStandbyPages.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiDeleteTransitionPte @ 0x1402419A0 (MiDeleteTransitionPte.c)
 *     MiStartingOffset @ 0x140245D90 (MiStartingOffset.c)
 *     MiInitializePageFaultPacket @ 0x14025ACC0 (MiInitializePageFaultPacket.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025AF90 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     ExfReleasePushLockShared @ 0x1402748E0 (ExfReleasePushLockShared.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiUnlinkPageFromList @ 0x1402A9D50 (MiUnlinkPageFromList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiCaptureDirtyBitToPfn @ 0x1402B6870 (MiCaptureDirtyBitToPfn.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     MiReleasePageFileInfo @ 0x1402D4690 (MiReleasePageFileInfo.c)
 *     MiGetSlabPage @ 0x1402E1028 (MiGetSlabPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14031273C (MiWaitForCollidedFaultComplete.c)
 *     MiGetPagingFileOffset @ 0x140315B24 (MiGetPagingFileOffset.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiReturnFreeZeroPage @ 0x14031C568 (MiReturnFreeZeroPage.c)
 *     MiTrimSharedPage @ 0x1403206B4 (MiTrimSharedPage.c)
 *     MiDecayPfnFullyInitialized @ 0x14033A13C (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x14033BC68 (MiCreateDecayPfn.c)
 *     MiFreeSlabPage @ 0x14037A0DC (MiFreeSlabPage.c)
 *     MiIsPfnSystemCharged @ 0x14037A998 (MiIsPfnSystemCharged.c)
 *     MiCheckSlabPage @ 0x14037B010 (MiCheckSlabPage.c)
 *     MiDiscardTransitionPteEx @ 0x140386594 (MiDiscardTransitionPteEx.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140394F3C (MiUpdateImagePfnImportRelocations.c)
 *     MiGetSharedProtos @ 0x1403A3578 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     VslApplySecureImageFixups @ 0x1404F6C78 (VslApplySecureImageFixups.c)
 *     MiDriverPageIsDangling @ 0x140530324 (MiDriverPageIsDangling.c)
 *     MiSplitDirectMapPage @ 0x14053CC6C (MiSplitDirectMapPage.c)
 *     MiRelocateImagePfn @ 0x1405FC710 (MiRelocateImagePfn.c)
 *     MiPrefetchControlArea @ 0x1406EB8A0 (MiPrefetchControlArea.c)
 *     MiValidateImagePfn @ 0x1406EBA64 (MiValidateImagePfn.c)
 *     MiPageHasRelocations @ 0x1406EBD8C (MiPageHasRelocations.c)
 *     MiGetNextDirectFixupProto @ 0x1408D46A4 (MiGetNextDirectFixupProto.c)
 *     MiGetSectionStrongImageReference @ 0x1408D48D0 (MiGetSectionStrongImageReference.c)
 */

__int64 __fastcall MiWalkEntireImage(ULONG_PTR a1, __int64 a2, int a3, __int64 a4)
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
  __int64 v19; // rbx
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // r15
  __int64 v23; // r12
  __int64 v24; // rbx
  bool v25; // zf
  __int64 *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // r12
  __int64 Flink; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rbx
  __int64 v34; // r12
  int v35; // r14d
  char v36; // cl
  int v37; // r15d
  unsigned int v38; // esi
  __int64 v39; // rdx
  unsigned __int8 v40; // bl
  unsigned __int64 v41; // rcx
  ULONG_PTR v42; // rbx
  int updated; // eax
  __int64 v44; // rdx
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
  __int64 v56; // r10
  __int64 NextDirectFixupProto; // rax
  __int64 v58; // r10
  __int64 v59; // rax
  __int64 SharedProtos; // rax
  __int64 v61; // rcx
  unsigned int EffectivePagePriorityThread; // eax
  int v63; // edx
  unsigned int v64; // r8d
  __int64 v65; // rax
  __int64 v66; // rax
  BOOL IsPfnFromSlabAllocation; // eax
  __int64 v68; // r11
  unsigned __int8 v69; // al
  struct _KPRCB *v70; // r10
  _DWORD *v71; // r9
  int v72; // eax
  int v73; // eax
  int v74; // eax
  _DWORD *v75; // r9
  struct _LIST_ENTRY *v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  unsigned __int8 v79; // al
  struct _KPRCB *v80; // r10
  _DWORD *v81; // r9
  int v82; // eax
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  unsigned __int64 v86; // rcx
  __int64 v87; // rax
  ULONG_PTR v88; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v92; // eax
  ULONG_PTR v93; // rbx
  unsigned __int8 v94; // al
  unsigned __int8 v95; // bl
  struct _KPRCB *v96; // r9
  _DWORD *v97; // r8
  int v98; // eax
  char BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  int v100; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v101[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v102; // [rsp+44h] [rbp-BCh]
  int v103; // [rsp+48h] [rbp-B8h]
  __int64 v104; // [rsp+50h] [rbp-B0h]
  __int64 SlabPage; // [rsp+58h] [rbp-A8h]
  unsigned int v106; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v107; // [rsp+68h] [rbp-98h]
  __int64 v108; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h] BYREF
  __int64 *v110; // [rsp+80h] [rbp-80h]
  __int64 v111; // [rsp+88h] [rbp-78h]
  int v112; // [rsp+90h] [rbp-70h]
  unsigned int v113; // [rsp+94h] [rbp-6Ch]
  __int64 v114; // [rsp+98h] [rbp-68h]
  _BYTE *v115; // [rsp+A0h] [rbp-60h]
  __int64 v116; // [rsp+A8h] [rbp-58h] BYREF
  int v117; // [rsp+B0h] [rbp-50h] BYREF
  int v118; // [rsp+B4h] [rbp-4Ch]
  __int64 v119; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v120; // [rsp+C0h] [rbp-40h]
  __int64 v121; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v122; // [rsp+D0h] [rbp-30h]
  ULONG_PTR DecayPfn; // [rsp+D8h] [rbp-28h]
  int v124; // [rsp+E0h] [rbp-20h] BYREF
  int v125; // [rsp+E4h] [rbp-1Ch] BYREF
  int v126; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v127; // [rsp+F0h] [rbp-10h]
  __int64 *v128; // [rsp+F8h] [rbp-8h]
  __int64 v129; // [rsp+100h] [rbp+0h]
  __int64 v130; // [rsp+108h] [rbp+8h]
  struct _KTHREAD *v131; // [rsp+110h] [rbp+10h]
  __int64 v132; // [rsp+118h] [rbp+18h]
  _KPROCESS *Process; // [rsp+120h] [rbp+20h]
  _BYTE *v134; // [rsp+130h] [rbp+30h]
  __int128 v135; // [rsp+138h] [rbp+38h] BYREF
  _BYTE v136[144]; // [rsp+150h] [rbp+50h] BYREF

  v4 = *(_QWORD *)(a1 + 96);
  v5 = a1;
  v6 = *(_QWORD *)a1;
  v107 = a1;
  v7 = a3;
  v8 = 0;
  v9 = *(_WORD *)(a1 + 60) & 0x3FF;
  v129 = a2;
  v10 = *(unsigned int *)(v5 + 56);
  v103 = a3;
  v106 = a4;
  v11 = *(_QWORD *)(qword_140C4E448 + 8 * v9);
  v117 = 0;
  v116 = 0LL;
  v119 = v4;
  v132 = v6;
  v121 = v11;
  v112 = a3 & 8;
  v135 = 0LL;
  if ( (v10 & 0x40000000) == 0 || (a3 & 8) != 0 )
  {
    v112 = a3 & 8;
    if ( (v10 & 0x800) == 0 )
      goto LABEL_3;
    v112 = a3 & 8;
  }
  v8 = 2;
LABEL_3:
  if ( (a3 & 8) != 0 )
  {
    MiInitializePageColorBase(v11 + 7424, ((unsigned int)v10 >> 20) & 0x3F, &v135);
    NextDirectFixupProto = MiGetNextDirectFixupProto(v56, 0LL);
    v120 = *(_QWORD *)(NextDirectFixupProto + 8) | 0x8000000000000000uLL;
    v59 = MiGetNextDirectFixupProto(v58, NextDirectFixupProto);
    v10 = *(unsigned int *)(v5 + 56);
    a4 = v106;
    v122 = v59;
  }
  else
  {
    v120 = 0LL;
    v122 = 0LL;
  }
  v12 = (_BYTE *)(v5 + 128);
  v13 = *(_QWORD *)(v5 + 136);
  v14 = -1LL;
  v115 = (_BYTE *)(v5 + 128);
  v15 = 0;
  v114 = v13;
  v16 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  CurrentThread = KeGetCurrentThread();
  v131 = CurrentThread;
  v101[0] = 17;
  v102 = 0;
  v111 = 0LL;
  DecayPfn = 0LL;
  SlabPage = -1LL;
  v113 = 0;
  if ( (v10 & 0x4000000) != 0 )
  {
    v8 |= 4u;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(v6 + 40, 0LL);
    v5 = v107;
    v14 = SlabPage;
    v13 = v114;
    a4 = v106;
    v4 = v119;
    v113 = 0x20000;
  }
  if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v5 + 92) & 0xC0000) != 0 && !*(_QWORD *)(v4 + 56) )
  {
    result = MiGetSectionStrongImageReference(v4, v10, v13, a4);
    v102 = result;
    v15 = result;
    if ( (int)result >= 0 )
    {
      v14 = SlabPage;
      v13 = v114;
      goto LABEL_27;
    }
    return result;
  }
  while ( 2 )
  {
    v22 = *((_QWORD *)v12 + 1);
    v134 = (_BYTE *)*((_QWORD *)v12 + 2);
    v23 = (__int64)(v22 - v13) >> 3;
    v25 = (v12[34] & 2) == 0;
    v110 = (__int64 *)v22;
    v104 = v23;
    if ( !v25 )
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
        v22 = *(_QWORD *)(SharedProtos + 72);
        LODWORD(a4) = v106;
        v110 = (__int64 *)v22;
      }
    }
    v24 = MiStartingOffset(v12, v22, (unsigned int)a4);
    v108 = v24;
    v26 = (__int64 *)(v22 + 8LL * *((unsigned int *)v115 + 11));
    v127 = (unsigned __int64)v26;
    if ( v120 )
    {
      if ( v120 >= (unsigned __int64)v26 )
        goto LABEL_272;
      v61 = v120 - v22;
      v22 = v120;
      v61 >>= 3;
      v23 = (unsigned int)(v61 + v23);
      v110 = (__int64 *)v120;
      v24 += v61 << 12;
      v104 = v23;
      v108 = v24;
    }
    v18 = 0LL;
    v128 = 0LL;
    if ( v22 >= (unsigned __int64)v26 )
      goto LABEL_22;
LABEL_11:
    if ( (v22 & 0xFFF) != 0 )
    {
      if ( v16 )
        goto LABEL_13;
    }
    else if ( v16 )
    {
      MiUnlockProtoPoolPage(v16, v101[0]);
    }
    if ( (v8 & 2) != 0 )
      v28 = MiLockProtoPoolPage(v22, v101);
    else
      v28 = MiCheckProtoPtePageState(v22);
    v111 = v28;
    v16 = v28;
    if ( !v28 )
    {
      if ( (v8 & 2) != 0 )
      {
        MmAccessFault(2uLL, v22);
        goto LABEL_21;
      }
      v54 = (unsigned __int64)(4096 - (unsigned int)(v22 & 0xFFF)) >> 3;
      v24 += v54 << 12;
      v23 = (unsigned int)(v54 + v23);
      v22 += 8 * v54;
      v104 = v23;
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
        v27 = 6 * ((v20 >> 12) & 0xFFFFFFFFFLL);
        if ( (*(_QWORD *)(48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) != 0 )
        {
          v21 = 48 * ((v20 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          v124 = v18;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v124, v27);
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
      if ( MiInvalidPteConforms(*(_QWORD *)v22) )
      {
        v20 = v19;
        if ( qword_140C4DD40 && (v19 & 0x10) == 0 )
          v20 = v19 & ~qword_140C4DD40;
        goto LABEL_36;
      }
    }
    v21 = v18;
LABEL_16:
    BugCheckParameter2 = v21;
    if ( !v21 )
    {
      if ( (v8 & 2) == 0 )
        goto LABEL_18;
      v116 = MI_READ_PTE_LOCK_FREE(v22);
      if ( (v116 & 0x400) != 0 )
        goto LABEL_18;
      if ( !(unsigned int)MiGetPagingFileOffset(&v116) )
        goto LABEL_18;
      MiUnlockProtoPoolPage(v16, v101[0]);
      v111 = 0LL;
      if ( (v7 & 2) != 0 && !(unsigned int)MiPageHasRelocations(v119, (unsigned int)v23) )
        goto LABEL_18;
      EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(v131, (unsigned int)((_DWORD)v23 << 12));
      if ( EffectivePagePriorityThread > 5 )
        EffectivePagePriorityThread = 5;
      if ( (__int64 *)v22 == v128 )
      {
        v64 = 4096;
      }
      else
      {
        v128 = (__int64 *)v22;
        v64 = (unsigned int)((__int64)(v127 - v22) >> 3) << 12;
      }
      if ( (int)MiPrefetchControlArea(v107, v63, v64, EffectivePagePriorityThread, 2, v106) < 0 )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      v15 = 0;
      v102 = 0;
      v24 = v108;
LABEL_21:
      v16 = v111;
      if ( v22 >= v127 )
      {
LABEL_22:
        if ( v16 )
        {
          MiUnlockProtoPoolPage(v16, v101[0]);
          v16 = 0LL;
          v111 = 0LL;
        }
LABEL_24:
        v14 = SlabPage;
        if ( SlabPage != -1 )
        {
          v88 = 48 * SlabPage - 0x58000000000LL;
          BugCheckParameter2 = v88;
          v101[0] = MiLockPageInline(v88);
          MiFreeSlabPage(v88);
          _InterlockedAnd64((volatile signed __int64 *)(v88 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KiIrqlFlags )
          {
            if ( (KiIrqlFlags & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v101[0] <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                SchedulerAssist = CurrentPrcb->SchedulerAssist;
                v92 = ~(unsigned __int16)(-1LL << (v101[0] + 1));
                v25 = (v92 & SchedulerAssist[5]) == 0;
                SchedulerAssist[5] &= v92;
                if ( v25 )
                  KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              }
            }
          }
          __writecr8(v101[0]);
          v14 = -1LL;
          SlabPage = -1LL;
        }
LABEL_25:
        v13 = v114;
LABEL_26:
        v115 = v134;
        v12 = v134;
        if ( !v134 )
          goto LABEL_117;
LABEL_27:
        LODWORD(a4) = v106;
        v5 = v107;
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
      v65 = *(_QWORD *)(Flink + 8 * ((v22 >> 3) & 0x1FF));
      Flink = v29 | 0x20;
      if ( (v65 & 0x20) == 0 )
        Flink = v29;
      v29 = Flink;
      if ( (v65 & 0x42) != 0 )
        v29 = Flink | 0x42;
    }
  }
  v116 = v29;
  v33 = v29 & 1;
  if ( (v29 & 1) != 0 )
  {
    if ( (unsigned int)MiPteInShadowRange(&v116)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v66 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v116 >> 3) & 0x1FF));
        Flink = v29 | 0x20;
        if ( (v66 & 0x20) == 0 )
          Flink = v29;
        v29 = Flink;
        if ( (v66 & 0x42) != 0 )
          v29 = Flink | 0x42;
      }
    }
  }
  else if ( qword_140C4DD40 && (v29 & 0x10) == 0 )
  {
    v29 &= ~qword_140C4DD40;
  }
  v34 = (v29 >> 12) & 0xFFFFFFFFFLL;
  if ( (v7 & 4) != 0 )
  {
    if ( (unsigned int)MiIsPfnSystemCharged(v21) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v21 + 35) &= ~0x20u;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_18:
    LODWORD(v104) = v104 + 1;
    v22 += 8LL;
    LODWORD(v23) = v104;
    v24 = v108 + 4096;
    v15 = v102;
LABEL_19:
    v110 = (__int64 *)v22;
    goto LABEL_20;
  }
  v35 = v7 & 1;
  if ( v35 && ((*(_QWORD *)(v21 + 40) >> 60) & 7) == 3 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v7 = v103;
    goto LABEL_18;
  }
  if ( (*(_DWORD *)(v21 + 16) & 0x400LL) == 0 && (v8 & 2) == 0 || (v36 = *(_BYTE *)(v21 + 35), (v36 & 0x10) != 0) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    goto LABEL_107;
  }
  if ( !v33 && (*(_BYTE *)(v21 + 34) & 0x20) != 0 )
  {
    memset(v136, 0, 0x88uLL);
    v7 = v103;
    if ( (*(_DWORD *)(v107 + 56) & 2) != 0 || (v103 & 2) == 0 )
    {
      MiInitializePageFaultPacket(0, 0, 0, 0, (__int64)v136);
      v117 = 1;
      MiObtainProtoReference(v16, 1LL);
      MiWaitForCollidedFaultComplete((unsigned int)v136, v21, v16, v101[0], (__int64)&v117);
      LODWORD(v23) = v104;
      v24 = v108;
      v15 = 0;
      v111 = 0LL;
      v102 = 0;
      goto LABEL_21;
    }
    MiDeleteTransitionPte(v22);
    goto LABEL_18;
  }
  v37 = 8;
  v118 = 8;
  if ( !v33 )
  {
    if ( (v36 & 8) != 0 )
    {
      v37 = v36 & 7;
      v118 = v37;
    }
    if ( (unsigned int)MiUnlinkPageFromList(v21) )
    {
      *(_QWORD *)(v21 + 24) &= 0xC000000000000000uLL;
      goto LABEL_62;
    }
    MiDiscardTransitionPteEx(v21, 0LL);
    _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = (unsigned __int64)v110;
    if ( (v8 & 2) != 0 )
    {
      v15 = v102;
      v7 = v103;
      LODWORD(v23) = v104;
      v24 = v108;
      goto LABEL_21;
    }
LABEL_107:
    v7 = v103;
    goto LABEL_18;
  }
LABEL_62:
  if ( !v35
    || !(unsigned int)MiUseSlabAllocator(v121, v115, *(_QWORD *)(v21 + 16), 0LL)
    || (IsPfnFromSlabAllocation = MiIsPfnFromSlabAllocation(v21),
        IsPfnFromSlabAllocation
     && (unsigned int)MiCheckSlabPage(v21, 0LL, (*(unsigned __int16 *)(v68 + 32) >> 1) & 0x1F)) )
  {
    v38 = v8 & 0xFFFFFFEF;
  }
  else
  {
    v38 = v8 | 0x10;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v21, Flink, v31, v32)
    || (unsigned int)MiChargeForLockedPage(v21, 1LL) )
  {
    ++*(_WORD *)(v21 + 32);
  }
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v125 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v125, v39);
    while ( *(__int64 *)(v16 + 24) < 0 );
  }
  *(_BYTE *)(v16 + 34) &= ~0x20u;
  if ( (unsigned int)MiRemoveLockedPageCharge(v16) )
    MiPfnReferenceCountIsZero(v16, (v16 + 0x58000000000LL) / 48);
  _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v40 = v101[0];
  if ( v101[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v69 = KeGetCurrentIrql();
        if ( v69 <= 0xFu && v101[0] <= 0xFu && v69 >= 2u )
        {
          v70 = KeGetCurrentPrcb();
          v71 = v70->SchedulerAssist;
          v40 = v101[0];
          v72 = ~(unsigned __int16)(-1LL << (v101[0] + 1));
          v25 = (v72 & v71[5]) == 0;
          v71[5] &= v72;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v70);
        }
      }
    }
    __writecr8(v40);
  }
  v41 = *(_QWORD *)(v21 + 40);
  v111 = 0LL;
  if ( (v41 & 0x2000000000000LL) != 0 )
    v8 = v38 | 1;
  else
    v8 = v38 & 0xFFFFFFFE;
  if ( v112 )
  {
    if ( (unsigned int)MiPageHasRelocations(v119, (unsigned int)v104) )
    {
      v34 = MiSplitDirectMapPage(v115, &v135, v34);
      v44 = 0xFFFFFFFFFFELL;
      *(_QWORD *)v21 ^= (*(_QWORD *)v21 ^ (v122 >> 3)) & 0xFFFFFFFFFFELL;
      BugCheckParameter2 = 48 * v34 - 0x58000000000LL;
    }
  }
  else if ( (v103 & 2) != 0 )
  {
    v42 = v107;
    if ( (MiFlags & 0x4000) != 0 && (*(_DWORD *)(v107 + 92) & 0xC0000) != 0 && ((v41 >> 60) & 7) == 3 )
    {
      v73 = VslApplySecureImageFixups(*(_QWORD *)(v119 + 56), (unsigned int)v104, v34);
      v102 = v73;
      if ( v73 < 0 )
        KeBugCheckEx(0x1Au, 0xD8A18uLL, v73, v34, v42);
      goto LABEL_81;
    }
    updated = MiRelocateImagePfn(v107, 0LL, v100, 4);
    v102 = updated;
    if ( !updated )
    {
      v8 |= 8u;
      goto LABEL_81;
    }
LABEL_79:
    if ( updated == 1 )
      v102 = 0;
  }
  else
  {
    if ( (v103 & 0x10) == 0 )
    {
      v102 = MiValidateImagePfn(
               v107,
               v108,
               (_DWORD)Process,
               v104,
               BugCheckParameter4,
               (*((unsigned __int16 *)v115 + 16) >> 1) & 0x1F,
               v34,
               0x4000000);
      goto LABEL_81;
    }
    v53 = v107;
    if ( (MiFlags & 0x4000) == 0 || (*(_DWORD *)(v107 + 92) & 0xC0000) == 0 || ((v41 >> 60) & 7) != 3 )
    {
      updated = MiUpdateImagePfnImportRelocations(v107, v129, (unsigned int)v104, v34);
      v102 = updated;
      if ( !updated )
      {
        v8 |= 8u;
        goto LABEL_81;
      }
      goto LABEL_79;
    }
    v74 = VslApplySecureImageFixups(*(_QWORD *)(v119 + 56), (unsigned int)v104, v34);
    v102 = v74;
    if ( v74 < 0 )
      KeBugCheckEx(0x1Au, 0xD9A18uLL, v74, v34, v53);
  }
LABEL_81:
  if ( v37 != 8 && !DecayPfn && (v8 & 1) == 0 )
    DecayPfn = MiCreateDecayPfn();
  if ( (v8 & 0x10) != 0 && SlabPage == -1 )
  {
    SlabPage = MiGetSlabPage(v121, (*((unsigned __int16 *)v115 + 16) >> 1) & 0x1F, 0, -1, v113);
    if ( SlabPage == -1 )
      v8 &= ~0x10u;
  }
  v45 = 0LL;
  v46 = 0LL;
  v47 = KeGetCurrentIrql();
  v130 = v47;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v47 <= 0xFu )
  {
    v75 = KeGetCurrentPrcb()->SchedulerAssist;
    v44 = (-1LL << ((unsigned __int8)v47 + 1)) & 4;
    v75[5] |= v44;
  }
  v126 = 0;
  v48 = BugCheckParameter2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v48 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v126, v44);
    while ( *(__int64 *)(v48 + 24) < 0 );
  }
  v101[0] = v47;
  if ( (v8 & 0x10) != 0 && (*(_QWORD *)(v48 + 24) & 0x4000000000000000LL) != 0 )
    v8 &= ~0x10u;
  v49 = BugCheckParameter2;
  if ( (v103 & 2) != 0 )
  {
    v50 = *(_QWORD *)(BugCheckParameter2 + 16);
    v51 = BugCheckParameter2 + 16;
    if ( (unsigned int)MiPteInShadowRange(BugCheckParameter2 + 16) && (MiFlags & 0xC00000) != 0 )
    {
      if ( KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v50 & 1) != 0
        && ((v50 & 0x20) == 0 || (v50 & 0x42) == 0) )
      {
        v76 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v76 )
        {
          v77 = v50 | 0x20;
          v78 = *((_QWORD *)&v76->Flink + ((v51 >> 3) & 0x1FF));
          if ( (v78 & 0x20) == 0 )
            v77 = v50;
          v50 = v77;
          if ( (v78 & 0x42) != 0 )
            v50 = v77 | 0x42;
        }
      }
      v49 = BugCheckParameter2;
    }
    v116 = v50;
    if ( (v50 & 0x400) != 0 )
    {
      v45 = 0LL;
    }
    else
    {
      v46 = MiCaptureDirtyBitToPfn(v49);
      v45 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v49 + 40) >> 39) & 0x3FFLL));
    }
    LOBYTE(v47) = v130;
  }
  if ( (v8 & 0x10) != 0 && (*(_BYTE *)(v49 + 34) & 7) == 6 )
  {
    MiTrimSharedPage(v49, (unsigned __int8)v47, v113);
    if ( (*(_QWORD *)(v48 + 24) & 0x4000000000000000LL) != 0 )
      v8 &= ~0x10u;
  }
  if ( (unsigned int)MiRemoveLockedPageCharge(v49) )
  {
    if ( (v8 & 1) != 0
      || v118 == 8
      || (*(_BYTE *)(v49 + 34) & 0x10) != 0
      || _bittest64((const signed __int64 *)(v48 + 24), 0x3Eu)
      || (v8 & 0x10) != 0 )
    {
      MiPfnReferenceCountIsZero(v49, v34);
    }
    else
    {
      MiInsertAndUnlockStandbyPages(DecayPfn, &BugCheckParameter2, 1LL, (unsigned __int8)v47);
      v101[0] = 17;
    }
  }
  if ( (v8 & 0x10) != 0 && !*(_WORD *)(v49 + 32) )
  {
    MiIsPfnFromSlabAllocation(v49);
    MiReplaceTransitionPage(v49);
    *(_QWORD *)(v49 + 16) = ZeroPte;
    SlabPage = -1LL;
    MiSetOriginalPtePfnFromFreeList();
    MiReturnFreeZeroPage(v49, 0LL);
  }
  if ( v101[0] != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v48 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v46 )
    MiReleasePageFileInfo(v45, v46, 1LL);
  if ( v101[0] != 17 )
  {
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v79 = KeGetCurrentIrql();
        if ( v79 <= 0xFu && v101[0] <= 0xFu && v79 >= 2u )
        {
          v80 = KeGetCurrentPrcb();
          v81 = v80->SchedulerAssist;
          v82 = ~(unsigned __int16)(-1LL << (v101[0] + 1));
          v25 = (v82 & v81[5]) == 0;
          v81[5] &= v82;
          if ( v25 )
            KiRemoveSystemWorkPriorityKick(v80);
        }
      }
    }
    __writecr8(v101[0]);
    v101[0] = 17;
  }
  v15 = v102;
  if ( v102 < 0 )
  {
    v14 = SlabPage;
    dword_140C4CA18 = (v102 != -1073741670) + 113;
  }
  else
  {
    if ( !v120 )
    {
      v22 = (unsigned __int64)v110;
      goto LABEL_107;
    }
    if ( v122 )
    {
      v83 = MiGetNextDirectFixupProto(v107, v122);
      v85 = *(_QWORD *)(v84 + 8);
      v7 = v103;
      v122 = v83;
      v86 = v85 | 0x8000000000000000uLL;
      v120 = v86;
      if ( v86 >= v127 )
      {
        v16 = v111;
        goto LABEL_24;
      }
      v22 = v86;
      v87 = (__int64)(v86 - (_QWORD)v110) >> 3;
      LODWORD(v23) = v87 + v104;
      v110 = (__int64 *)v86;
      v24 = (v87 << 12) + v108;
      v104 = (unsigned int)(v87 + v104);
LABEL_20:
      v108 = v24;
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
    v55 = v132;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v132 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v55 + 40);
    KeAbPostRelease(v55 + 40);
    KiLeaveGuardedRegionUnsafe((__int64)v131);
    v14 = SlabPage;
  }
  if ( v14 != -1 )
  {
    v93 = 48 * v14 - 0x58000000000LL;
    BugCheckParameter2 = v93;
    v101[0] = MiLockPageInline(v93);
    MiFreeSlabPage(v93);
    _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (v94 = KeGetCurrentIrql(), v94 <= 0xFu) )
    {
      v95 = v101[0];
      if ( v101[0] <= 0xFu && v94 >= 2u )
      {
        v96 = KeGetCurrentPrcb();
        v97 = v96->SchedulerAssist;
        v95 = v101[0];
        v98 = ~(unsigned __int16)(-1LL << (v101[0] + 1));
        v25 = (v98 & v97[5]) == 0;
        v97[5] &= v98;
        if ( v25 )
          KiRemoveSystemWorkPriorityKick(v96);
      }
    }
    else
    {
      v95 = v101[0];
    }
    __writecr8(v95);
  }
  return v15;
}
