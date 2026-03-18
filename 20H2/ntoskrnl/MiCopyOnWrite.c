/*
 * XREFs of MiCopyOnWrite @ 0x14028F8B0
 * Callers:
 *     MiCopyToUserVa @ 0x140234540 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     MmProtectPool @ 0x1402385B4 (MmProtectPool.c)
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiValidFault @ 0x14026AA70 (MiValidFault.c)
 *     MiProbeLeafPteAccess @ 0x14026CA10 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x140275570 (MiCompleteProtoPteFault.c)
 *     MiSystemFault @ 0x1402989E0 (MiSystemFault.c)
 *     MiLockCode @ 0x1402A6D00 (MiLockCode.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 *     MiLockPagedAddress @ 0x14036B674 (MiLockPagedAddress.c)
 *     MiFaultInPagedPool @ 0x14052B614 (MiFaultInPagedPool.c)
 *     MiLockDriverPageRange @ 0x14052BF04 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x14052F294 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x140533E1C (MmReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053D0CC (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x140545EE4 (MiMakeProtoPrivate.c)
 *     MiValidVirtualizationFault @ 0x14054745C (MiValidVirtualizationFault.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x14021F300 (MiIdentifyPfn.c)
 *     MiGetSystemRegionType @ 0x140220A00 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiLocateAddress @ 0x14022ED30 (MiLocateAddress.c)
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x140232270 (MiComputeFaultNode.c)
 *     MiChangePageAttribute @ 0x14023DCD0 (MiChangePageAttribute.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiChargeCommit @ 0x14027C2B0 (MiChargeCommit.c)
 *     PsGetPagePriorityThread @ 0x14028EE10 (PsGetPagePriorityThread.c)
 *     MiWriteValidPteVolatile @ 0x14028F7D0 (MiWriteValidPteVolatile.c)
 *     MiGetWsleProtection @ 0x14028F860 (MiGetWsleProtection.c)
 *     MiSetPfnTbFlushStamp @ 0x140290710 (MiSetPfnTbFlushStamp.c)
 *     MiDecrementShareCount @ 0x140290770 (MiDecrementShareCount.c)
 *     MiCopyPage @ 0x1402907D0 (MiCopyPage.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     MiGetSessionVm @ 0x14029977C (MiGetSessionVm.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiLogPageAccess @ 0x1402BDB30 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiUnlockPageTableCharges @ 0x1402D3FC8 (MiUnlockPageTableCharges.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140318E28 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLocateCloneAddress @ 0x140344118 (MiLocateCloneAddress.c)
 *     MiDecrementCombinedPte @ 0x140366C14 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiDecrementCloneBlockReference @ 0x1405583B8 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiCopyOnWrite(unsigned __int64 a1, ULONG_PTR *a2, __int64 Page, int a4)
{
  ULONG_PTR v4; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _LIST_ENTRY *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r15
  int v22; // r14d
  __int64 v23; // r13
  BOOL v24; // r12d
  int SystemRegionType; // eax
  __int64 v26; // rdx
  int v27; // r8d
  unsigned int v28; // esi
  int v29; // r8d
  int v30; // r8d
  unsigned int v32; // r13d
  volatile signed __int64 *v33; // r12
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  struct _LIST_ENTRY *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rdx
  unsigned __int8 v42; // cl
  int v43; // eax
  char v44; // r12
  int WsleProtection; // eax
  int v46; // ebx
  signed __int32 v47; // eax
  __int64 v48; // rbx
  __int64 **Address; // rax
  unsigned int v50; // ecx
  __int64 v51; // r14
  unsigned __int64 *v52; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v55; // eax
  volatile signed __int64 *v56; // r12
  volatile signed __int64 v57; // rbx
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  struct _LIST_ENTRY *v62; // rax
  __int64 v63; // rax
  char v64; // rdx^7
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r9
  unsigned __int64 v68; // r13
  __int64 v69; // r8
  struct _LIST_ENTRY *v70; // rdx
  __int64 v71; // rax
  __int64 v72; // rdx
  unsigned __int64 *v73; // r12
  unsigned __int64 v74; // rbx
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  struct _LIST_ENTRY *v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r8
  __int64 v85; // r9
  struct _LIST_ENTRY *v86; // rdx
  __int64 v87; // rax
  __int64 v88; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int PagePriorityThread; // r12d
  unsigned int v91; // edx
  unsigned __int64 v92; // rax
  unsigned int v93; // ebx
  unsigned __int64 v94; // rax
  bool v95; // cf
  char *v96; // r12
  unsigned __int64 v97; // rax
  __int64 v98; // rdi
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // r9
  unsigned __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 v104; // rcx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rdx
  _KPROCESS *v108; // rdi
  char v109; // al
  int v110; // eax
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v112; // rdx
  int v113; // [rsp+30h] [rbp-D0h]
  int v114; // [rsp+34h] [rbp-CCh]
  char *SessionVm; // [rsp+40h] [rbp-C0h]
  __int64 v117; // [rsp+48h] [rbp-B8h] BYREF
  int v118; // [rsp+50h] [rbp-B0h]
  int v119; // [rsp+54h] [rbp-ACh]
  BOOL v120; // [rsp+58h] [rbp-A8h]
  int v121; // [rsp+5Ch] [rbp-A4h] BYREF
  int v122; // [rsp+60h] [rbp-A0h]
  int v123; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 **v124; // [rsp+68h] [rbp-98h] BYREF
  _KPROCESS *Process; // [rsp+70h] [rbp-90h]
  __int64 *v126; // [rsp+78h] [rbp-88h]
  unsigned __int64 v127; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v128; // [rsp+88h] [rbp-78h]
  unsigned __int64 v129; // [rsp+90h] [rbp-70h]
  __int128 v130; // [rsp+98h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int64 *v132; // [rsp+C0h] [rbp-40h]
  __int64 v133; // [rsp+C8h] [rbp-38h]
  __int128 v134; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v135; // [rsp+E0h] [rbp-20h]
  _OWORD v136[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v137; // [rsp+170h] [rbp+70h]
  _QWORD v138[2]; // [rsp+180h] [rbp+80h] BYREF
  int v139; // [rsp+190h] [rbp+90h] BYREF
  __int16 v140; // [rsp+194h] [rbp+94h]
  __int16 v141; // [rsp+196h] [rbp+96h]
  __int64 v142; // [rsp+198h] [rbp+98h]
  __int64 v143; // [rsp+1A0h] [rbp+A0h]
  __int64 v144; // [rsp+1A8h] [rbp+A8h]
  __int128 v145; // [rsp+1B0h] [rbp+B0h]
  __int128 v146; // [rsp+1C0h] [rbp+C0h]
  __int128 v147; // [rsp+1D0h] [rbp+D0h]
  __int128 v148; // [rsp+1E0h] [rbp+E0h]
  __int128 v149; // [rsp+1F0h] [rbp+F0h]
  __int128 v150; // [rsp+200h] [rbp+100h]
  __int128 v151; // [rsp+210h] [rbp+110h]
  __int128 v152; // [rsp+220h] [rbp+120h]
  __int128 v153; // [rsp+230h] [rbp+130h]
  __int64 v154; // [rsp+240h] [rbp+140h]

  v4 = *a2;
  v141 = 0;
  v130 = 0LL;
  v154 = 0LL;
  v145 = 0LL;
  v118 = a4;
  v6 = (unsigned int)a2;
  v146 = 0LL;
  v126 = (__int64 *)a2;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v120 = MiPteInShadowRange((unsigned __int64)a2);
  if ( v120 && (unsigned int)MiPteHasShadow(v8, v7, v9, v10) && (v4 & 1) != 0 && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v6 >> 3) & 0x1FF));
      v13 = v4 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v13 = v4;
      v4 = v13;
      if ( (v12 & 0x42) != 0 )
        v4 = v13 | 0x42;
    }
  }
  v117 = v4;
  v14 = v4;
  if ( MiPteInShadowRange((unsigned __int64)&v117)
    && (unsigned int)MiPteHasShadow(v16, v15, v17, v18)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v19 )
    {
      v14 = v4 | 0x20;
      v20 = *((_QWORD *)&v19->Flink + (((unsigned __int64)&v117 >> 3) & 0x1FF));
      if ( (v20 & 0x20) == 0 )
        v14 = v4;
      if ( (v20 & 0x42) != 0 )
        v14 |= 0x42uLL;
    }
  }
  v133 = (v14 >> 12) & 0xFFFFFFFFFLL;
  v21 = 48 * v133 - 0x58000000000LL;
  v124 = 0LL;
  v22 = 0;
  v23 = *(_QWORD *)(v21 + 8);
  v24 = (v4 & 0x200) == 0;
  v128 = v23 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemRegionType = MiGetSystemRegionType(a1);
  switch ( SystemRegionType )
  {
    case 1:
      SessionVm = (char *)MiGetSessionVm(1LL, v26);
      v28 = (v4 & 0x200) == 0;
      if ( (*(_QWORD *)(v21 + 40) & 0x1000000000LL) == 0 && v23 > 0 )
        v28 = v27 | v24;
      v113 = v27;
      break;
    case 12:
      v113 = 0;
      SessionVm = MiGetAnyMultiplexedVm(1);
      v28 = (v4 & 0x200) == 0;
      if ( (*(_QWORD *)(v21 + 40) & 0x1000000000LL) == 0 && v23 > 0 )
        v28 = v29 | v24;
      break;
    case 9:
    case 14:
      KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 2uLL);
    case 6:
      v113 = 0;
      SessionVm = MiGetAnyMultiplexedVm(2);
      v28 = v30 | v24;
      if ( (*(_QWORD *)(v21 + 40) & 0x1000000000LL) != 0 || v23 <= 0 )
        KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 0LL);
      break;
    case 5:
      KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 1uLL);
    default:
      if ( Process[1].Affinity.Bitmap[10] )
        return 3221226548LL;
      v113 = 1;
      v28 = (v4 & 0x200) == 0;
      SessionVm = (char *)&Process[1].ActiveProcessorsPadding[6];
      if ( (*(_QWORD *)(v21 + 40) & 0x1000000000LL) == 0 && v23 > 0 )
        v28 = v24 | 2;
      v136[3] = __PAIR128__((unsigned __int64)&Process[1].ActiveProcessorsPadding[6], 0LL);
      v137 = 0LL;
      v136[0] = a1;
      memset(&v136[1], 0, 32);
      memset(&v136[4], 0, 64);
      v22 = MiComputeFaultNode((unsigned __int64 *)v136, 0LL, &v124);
      break;
  }
  v32 = 0;
  v129 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *((unsigned __int16 *)SessionVm + 87));
  v122 = *(_DWORD *)v21 & 1;
  v33 = (volatile signed __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v132 = v33;
  v34 = *v33;
  if ( MiPteInShadowRange((unsigned __int64)v33)
    && (unsigned int)MiPteHasShadow(v36, v35, v37, v38)
    && (v34 & 1) != 0
    && ((v34 & 0x20) == 0 || (v34 & 0x42) == 0) )
  {
    v39 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v39 )
    {
      v40 = *((_QWORD *)&v39->Flink + (((unsigned __int64)(unsigned int)v33 >> 3) & 0x1FF));
      v41 = v34 | 0x20;
      if ( (v40 & 0x20) == 0 )
        v41 = v34;
      v34 = v41;
      if ( (v40 & 0x42) != 0 )
        v34 = v41 | 0x42;
    }
  }
  v42 = HIBYTE(v34) & 0xF | (16 * ((v34 >> 60) & 7));
  v119 = v118 & 1;
  if ( (v118 & 1) != 0 || (HIBYTE(v34) & 0xF) == 0xA )
  {
    v43 = v113;
  }
  else
  {
    v43 = v113;
    if ( (HIBYTE(v34) & 0xF) == 9 )
    {
      v42 = (16 * ((v34 >> 60) & 7)) | 0xA;
    }
    else if ( v113 != 1 && (*(_BYTE *)(v21 + 35) & 8) != 0 )
    {
      v42 = (16 * ((v34 >> 60) & 7)) | 0xA;
    }
  }
  v44 = v42 & 0xF;
  if ( (v42 & 0xF) == 0xA )
    goto LABEL_67;
  if ( v44 == 8 && v43 != 2 )
  {
    v32 = 1;
    if ( (*(_DWORD *)(v21 + 16) & 0x400LL) != 0 )
      v32 = 2;
  }
  WsleProtection = MiGetWsleProtection(a1, v42);
  if ( !WsleProtection )
LABEL_67:
    WsleProtection = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v21 + 16) >> 5) & 0x1F;
  v46 = MmMakeProtectNotWriteCopy[WsleProtection];
  v114 = v46;
  if ( Page == -1 )
  {
    MiInitializePageColorBase((__int64)SessionVm, v22, (__int64)&v130);
    v47 = _InterlockedExchangeAdd((volatile signed __int32 *)v130, 1u);
    Page = MiGetPage(v129, DWORD2(v130) & (unsigned int)v47 | HIDWORD(v130), 0LL);
    if ( Page == -1 )
      return 3221225495LL;
  }
  if ( v32 )
  {
    if ( v32 >= 2 )
    {
      v48 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(v21 + 40) >> 39) & 0x3FFLL));
      MiReturnCommit(v48, 1LL);
      if ( v113 == 1 )
        _InterlockedDecrement64((volatile signed __int64 *)(v48 + 7616));
      v46 = v114;
    }
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v21 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  if ( v46 == 24 )
  {
    Address = v124;
    LOBYTE(v46) = 1;
    LOBYTE(v114) = 1;
    if ( v124 || (Address = MiLocateAddress(a1), (v124 = Address) != 0LL) )
    {
      v50 = (*((_DWORD *)Address + 12) >> 7) & 0x1F;
      if ( v50 >> 3 == 3 && (v50 & 7) != 0 )
      {
        LOBYTE(v46) = 25;
      }
      else if ( v50 >> 3 == 1 )
      {
        LOBYTE(v46) = 9;
      }
      LOBYTE(v114) = v46;
    }
  }
  v51 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)(v51 + 16) = MiSwizzleInvalidPte(32LL * (v46 & 0x1F));
  if ( v44 == 10 )
  {
    v68 = (unsigned __int64)v126;
  }
  else
  {
    v52 = (unsigned __int64 *)&unk_140C4F640;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    if ( (SessionVm[184] & 7) != 2 )
      v52 = (unsigned __int64 *)(SessionVm + 256);
    LockHandle.LockQueue.Lock = v52;
    LockHandle.LockQueue.Next = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v55 = SchedulerAssist[6];
        SchedulerAssist[6] = v55 + 1;
        if ( v55 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v52);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)v52, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    ++*((_QWORD *)SessionVm + 18);
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*((_QWORD *)SessionVm + 16);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v56 = v132;
    v57 = *v132;
    if ( MiPteInShadowRange((unsigned __int64)v132)
      && (unsigned int)MiPteHasShadow(v59, v58, v60, v61)
      && (v57 & 1) != 0
      && ((v57 & 0x20) == 0 || (v57 & 0x42) == 0) )
    {
      v62 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v62 )
      {
        v63 = *((_QWORD *)&v62->Flink + (((unsigned __int64)(unsigned int)v56 >> 3) & 0x1FF));
        v64 = HIBYTE(v57);
        if ( (v63 & 0x20) == 0 )
          v64 = HIBYTE(v57);
        HIBYTE(v57) = v64;
        if ( (v63 & 0x42) != 0 )
          HIBYTE(v57) = v64;
      }
    }
    MiWriteValidPteVolatile(v56, 0x80000000, HIBYTE(v57) & 0xF);
    v68 = (unsigned __int64)v126;
    v69 = *v126;
    if ( v120
      && (unsigned int)MiPteHasShadow(v66, v65, v69, v67)
      && (v69 & 1) != 0
      && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0) )
    {
      v70 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v70 )
      {
        v71 = *((_QWORD *)&v70->Flink + ((v68 >> 3) & 0x1FF));
        v72 = v69 | 0x20;
        if ( (v71 & 0x20) == 0 )
          v72 = v69;
        v69 = v72;
        if ( (v71 & 0x42) != 0 )
          v69 = v72 | 0x42;
      }
    }
    v117 = v69;
  }
  *(_WORD *)(v51 + 32) = 1;
  v73 = (unsigned __int64 *)(((v68 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v74 = *v73;
  if ( MiPteInShadowRange((unsigned __int64)v73)
    && (unsigned int)MiPteHasShadow(v76, v75, v77, v78)
    && (v74 & 1) != 0
    && ((v74 & 0x20) == 0 || (v74 & 0x42) == 0) )
  {
    v79 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v79 )
    {
      v80 = *((_QWORD *)&v79->Flink + ((((v68 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
      v81 = v74 | 0x20;
      if ( (v80 & 0x20) == 0 )
        v81 = v74;
      v74 = v81;
      if ( (v80 & 0x42) != 0 )
        v74 = v81 | 0x42;
    }
  }
  v127 = v74;
  if ( MiPteInShadowRange((unsigned __int64)&v127)
    && (unsigned int)MiPteHasShadow(v83, v82, v84, v85)
    && (v74 & 1) != 0
    && ((v74 & 0x20) == 0 || (v74 & 0x42) == 0) )
  {
    v86 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v86 )
    {
      v87 = *((_QWORD *)&v86->Flink + (((unsigned __int64)&v127 >> 3) & 0x1FF));
      v88 = v74 | 0x20;
      if ( (v87 & 0x20) == 0 )
        v88 = v74;
      v74 = v88;
      if ( (v87 & 0x42) != 0 )
        v74 = v88 | 0x42;
    }
  }
  *(_QWORD *)(v51 + 40) ^= (*(_QWORD *)(v51 + 40) ^ (v74 >> 12)) & 0xFFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
    PagePriorityThread = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  else
    PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v28 |= 4u;
  v121 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v121);
    while ( *(__int64 *)(v51 + 24) < 0 );
  }
  if ( v122 )
    *(_QWORD *)v51 |= 1uLL;
  *(_BYTE *)(v51 + 34) |= 0x10u;
  if ( v113 || (*(_BYTE *)(v21 + 35) & 8) == 0 || v119 )
    *(_BYTE *)(v51 + 35) &= ~8u;
  else
    *(_BYTE *)(v51 + 35) |= 8u;
  v91 = *(unsigned __int8 *)(v21 + 34) >> 6;
  if ( *(unsigned __int8 *)(v51 + 34) >> 6 != v91 )
    MiChangePageAttribute(48 * Page - 0x58000000000LL, v91, 1);
  MiSetPfnTbFlushStamp(48 * Page - 0x58000000000LL, 0LL, 1LL);
  v92 = *(_QWORD *)(v51 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(v51 + 8) = v68;
  *(_QWORD *)(v51 + 24) = v92 | 1;
  *(_BYTE *)(v51 + 35) ^= (*(_BYTE *)(v51 + 35) ^ PagePriorityThread) & 7;
  *(_BYTE *)(v51 + 34) = *(_BYTE *)(v51 + 34) & 0xF8 | 6;
  if ( v28 >= 4 )
    MiIdentifyPfn((__m128i *)(48 * Page - 0x58000000000LL), (unsigned __int64 *)&v134);
  _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v28 >= 4 )
  {
    *((_QWORD *)&v135 + 1) |= 8uLL;
    v138[0] = &v134;
    v138[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v138, 1, 671088641, 642, 289413890);
  }
  __incgsdword(0x2E94u);
  v93 = 1;
  if ( (v114 & 2) == 0 )
  {
    v93 = 9;
LABEL_165:
    v94 = a1;
    goto LABEL_166;
  }
  if ( (MiFlags & 0x40000) != 0 )
    goto LABEL_165;
  v94 = a1;
  if ( (MiFlags & 0x10000) == 0 )
  {
LABEL_166:
    if ( v94 >= 0xFFFF800000000000uLL )
      goto LABEL_169;
    goto LABEL_167;
  }
  if ( a1 >= 0xFFFF800000000000uLL )
  {
    v93 = 17;
    if ( (v118 & 2) != 0 )
      v93 = 49;
    goto LABEL_166;
  }
LABEL_167:
  if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    v93 |= 0x10u;
LABEL_169:
  MiCopyPage(Page, v133, 0LL, v93);
  if ( dword_140C4E6A8 )
  {
    v95 = PagePriorityThread < dword_140C4E6AC;
    v96 = SessionVm;
    if ( !v95 )
      MiLogPageAccess(SessionVm, v68);
  }
  else
  {
    v96 = SessionVm;
  }
  v97 = v117;
  if ( (v28 & 1) == 0 )
  {
    if ( v117 < 0 || v113 != 1 )
      v97 = v117 | 0x42;
    v97 = v97 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
  }
  v142 = 20LL;
  v98 = v97 ^ (v97 ^ (Page << 12)) & 0xFFFFFFFFF000LL;
  v140 = 0;
  v143 = 0LL;
  v144 = 0LL;
  v117 = v98;
  v139 = v113;
  MiInsertTbFlushEntry(&v139, a1 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
  if ( (v93 & 0x20) != 0 || (v98 & 0x42) == 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(v68, v98);
    MiFlushTbList(&v139, v107);
    goto LABEL_203;
  }
  v102 = v98 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  if ( v68 >= 0xFFFFF6FB7DBED000uLL
    && v68 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v99, v102, v100, v101) )
  {
    *(_QWORD *)v68 = v102;
    MiWritePteShadow(v68, v102);
  }
  else
  {
    *(_QWORD *)v68 = v102;
  }
  MiFlushTbList(&v139, v102);
  if ( v68 < 0xFFFFF6FB7DBED000uLL || v68 > 0xFFFFF6FB7DBED7F8uLL )
  {
LABEL_201:
    *(_QWORD *)v68 = v98;
    goto LABEL_203;
  }
  if ( !(unsigned int)MiPteHasShadow(v104, v103, v105, v106) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v98 & 1) != 0 )
      v98 |= 0x8000000000000000uLL;
    goto LABEL_201;
  }
  if ( !HIBYTE(word_140C4DE88) && (v98 & 1) != 0 )
    v98 |= 0x8000000000000000uLL;
  *(_QWORD *)v68 = v98;
  MiWritePteShadow(v68, v98);
LABEL_203:
  v108 = Process;
  if ( v113 == 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  v123 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v123);
    while ( *(__int64 *)(v21 + 24) < 0 );
  }
  if ( !v113 && !v119 )
  {
    v109 = *(_BYTE *)(v21 + 35);
    if ( (v109 & 8) != 0 )
      *(_BYTE *)(v21 + 35) = v109 & 0xF7;
  }
  MiDecrementShareCount(v21, v103, v105, v106);
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v28 & 2) != 0 )
  {
    v110 = MiDecrementCombinedPte(v96, v128);
  }
  else
  {
    if ( (v96[184] & 7) != 0 )
      return 0LL;
    CloneAddress = MiLocateCloneAddress(v108, v128);
    if ( !CloneAddress )
      return 0LL;
    v110 = MiDecrementCloneBlockReference(CloneAddress, v112);
  }
  if ( v110 == 3 )
    MiChargeCommit(v129, 1uLL, 4u);
  return 0LL;
}
