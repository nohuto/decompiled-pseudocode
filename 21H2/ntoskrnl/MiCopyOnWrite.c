/*
 * XREFs of MiCopyOnWrite @ 0x14023F300
 * Callers:
 *     MiValidFault @ 0x140209750 (MiValidFault.c)
 *     MiProbeLeafPteAccess @ 0x14020B6F0 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x140213D90 (MiCompleteProtoPteFault.c)
 *     MiWalkVaRange @ 0x14023C0F0 (MiWalkVaRange.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E6EF4 (MiMakeDriverPagesPrivate.c)
 *     MiSplitPrivatePage @ 0x14030CFB0 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x14030E538 (MiCopyToUserVa.c)
 *     MiSystemFault @ 0x140311400 (MiSystemFault.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiLockPagedAddress @ 0x14036B924 (MiLockPagedAddress.c)
 *     MiFaultInPagedPool @ 0x14052D114 (MiFaultInPagedPool.c)
 *     MiLockDriverPageRange @ 0x14052DA04 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x140530D94 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EBCC (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x1405479E4 (MiMakeProtoPrivate.c)
 *     MiValidVirtualizationFault @ 0x140548F5C (MiValidVirtualizationFault.c)
 * Callees:
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiChargeCommit @ 0x14021AAD0 (MiChargeCommit.c)
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     MiLocateCloneAddress @ 0x14023EF08 (MiLocateCloneAddress.c)
 *     MiComputeFaultNode @ 0x14023F100 (MiComputeFaultNode.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     MiSetPfnTbFlushStamp @ 0x140240160 (MiSetPfnTbFlushStamp.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     MiCopyPage @ 0x140240220 (MiCopyPage.c)
 *     MiWriteValidPteVolatile @ 0x140241370 (MiWriteValidPteVolatile.c)
 *     MiGetWsleProtection @ 0x140241400 (MiGetWsleProtection.c)
 *     PsGetPagePriorityThread @ 0x1402427D0 (PsGetPagePriorityThread.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiLocateAddress @ 0x14025B810 (MiLocateAddress.c)
 *     MiUnlockPageTableCharges @ 0x14026FD98 (MiUnlockPageTableCharges.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402BB418 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     EtwTraceKernelEvent @ 0x1402EAC90 (EtwTraceKernelEvent.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiChangePageAttribute @ 0x1403041E4 (MiChangePageAttribute.c)
 *     MiGetSessionVm @ 0x14031219C (MiGetSessionVm.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiLogPageAccess @ 0x14033A650 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x140349250 (MiIdentifyPfn.c)
 *     MiGetSystemRegionType @ 0x14034A950 (MiGetSystemRegionType.c)
 *     MiDecrementCombinedPte @ 0x140366EC4 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiDecrementCloneBlockReference @ 0x140559E88 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiCopyOnWrite(ULONG_PTR a1, ULONG_PTR *a2, __int64 Page, int a4)
{
  ULONG_PTR v4; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _LIST_ENTRY *Flink; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _LIST_ENTRY *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // r15
  int v21; // r14d
  __int64 v22; // r13
  BOOL v23; // r12d
  int SystemRegionType; // eax
  __int64 v25; // rdx
  __int64 SessionVm; // rax
  int v27; // r8d
  __int64 v28; // rdx
  unsigned int v29; // esi
  __int64 AnyMultiplexedVm; // rax
  int v31; // r8d
  int v32; // r8d
  unsigned int v34; // r13d
  _QWORD *v35; // r12
  unsigned __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  struct _LIST_ENTRY *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  unsigned __int8 v44; // cl
  int v45; // eax
  char v46; // r12
  int WsleProtection; // eax
  int v48; // ebx
  signed __int32 v49; // eax
  __int64 v50; // rbx
  __int64 Address; // rax
  unsigned int v52; // ecx
  __int64 v53; // r14
  __int64 v54; // rdx
  unsigned __int64 *v55; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v58; // eax
  _QWORD *v59; // rdx
  _QWORD *v60; // r12
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  struct _LIST_ENTRY *v67; // rax
  __int64 v68; // rax
  char v69; // rdx^7
  __int64 v70; // rcx
  __int64 v71; // r9
  unsigned __int64 v72; // r13
  __int64 v73; // r8
  __int64 v74; // rax
  unsigned __int64 *v75; // r12
  unsigned __int64 v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // r9
  struct _LIST_ENTRY *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  struct _LIST_ENTRY *v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int PagePriorityThread; // r12d
  __int64 v92; // rdx
  unsigned __int64 v93; // rax
  unsigned int v94; // ebx
  unsigned __int64 v95; // rax
  bool v96; // cf
  __int64 v97; // r12
  unsigned __int64 v98; // rax
  __int64 v99; // rdi
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  unsigned __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rdi
  char v109; // al
  int v110; // eax
  _QWORD *CloneAddress; // rax
  ULONG_PTR v112; // rdx
  int v113; // [rsp+30h] [rbp-D0h]
  int v114; // [rsp+34h] [rbp-CCh]
  __int64 v116; // [rsp+40h] [rbp-C0h]
  __int64 v117; // [rsp+48h] [rbp-B8h] BYREF
  int v118; // [rsp+50h] [rbp-B0h]
  int v119; // [rsp+54h] [rbp-ACh]
  int v120; // [rsp+58h] [rbp-A8h]
  int v121; // [rsp+5Ch] [rbp-A4h] BYREF
  int v122; // [rsp+60h] [rbp-A0h]
  int v123; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v124; // [rsp+68h] [rbp-98h] BYREF
  _KPROCESS *Process; // [rsp+70h] [rbp-90h]
  __int64 *v126; // [rsp+78h] [rbp-88h]
  unsigned __int64 v127; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v128; // [rsp+88h] [rbp-78h]
  __int64 v129; // [rsp+90h] [rbp-70h]
  __int128 v130; // [rsp+98h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v132; // [rsp+C0h] [rbp-40h]
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
  v120 = MiPteInShadowRange(a2, a2);
  if ( v120 && (unsigned int)MiPteHasShadow(v8, v7, v9, v10) && (v4 & 1) != 0 && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v7 = v6;
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v12 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v6 >> 3) & 0x1FF));
      v7 = v4 | 0x20;
      if ( (v12 & 0x20) == 0 )
        v7 = v4;
      v4 = v7;
      if ( (v12 & 0x42) != 0 )
        v4 = v7 | 0x42;
    }
  }
  v117 = v4;
  v13 = v4;
  if ( (unsigned int)MiPteInShadowRange(&v117, v7)
    && (unsigned int)MiPteHasShadow(v15, v14, v16, v17)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v18 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v18 )
    {
      v13 = v4 | 0x20;
      v19 = *((_QWORD *)&v18->Flink + (((unsigned __int64)&v117 >> 3) & 0x1FF));
      if ( (v19 & 0x20) == 0 )
        v13 = v4;
      if ( (v19 & 0x42) != 0 )
        v13 |= 0x42uLL;
    }
  }
  v133 = (v13 >> 12) & 0xFFFFFFFFFLL;
  v20 = 48 * v133 - 0x58000000000LL;
  v124 = 0LL;
  v21 = 0;
  v22 = *(_QWORD *)(v20 + 8);
  v23 = (v4 & 0x200) == 0;
  v128 = v22 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemRegionType = MiGetSystemRegionType(a1);
  switch ( SystemRegionType )
  {
    case 1:
      SessionVm = MiGetSessionVm(1LL, v25, 2LL);
      v28 = 0x1000000000LL;
      v116 = SessionVm;
      v29 = (v4 & 0x200) == 0;
      if ( (*(_QWORD *)(v20 + 40) & 0x1000000000LL) == 0 && v22 > 0 )
        v29 = v27 | v23;
      v113 = v27;
      break;
    case 12:
      v113 = 0;
      AnyMultiplexedVm = MiGetAnyMultiplexedVm(1LL);
      v28 = 0x1000000000LL;
      v116 = AnyMultiplexedVm;
      v29 = (v4 & 0x200) == 0;
      if ( (*(_QWORD *)(v20 + 40) & 0x1000000000LL) == 0 && v22 > 0 )
        v29 = v31 | v23;
      break;
    case 9:
    case 14:
      KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 2uLL);
    case 6:
      v113 = 0;
      v116 = MiGetAnyMultiplexedVm(2LL);
      v29 = v32 | v23;
      v28 = 0x1000000000LL;
      if ( (*(_QWORD *)(v20 + 40) & 0x1000000000LL) != 0 || v22 <= 0 )
        KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 0LL);
      break;
    case 5:
      KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 1uLL);
    default:
      if ( Process[1].Affinity.Bitmap[10] )
        return 3221226548LL;
      v113 = 1;
      v29 = (v4 & 0x200) == 0;
      v116 = (__int64)&Process[1].ActiveProcessorsPadding[6];
      if ( (*(_QWORD *)(v20 + 40) & 0x1000000000LL) == 0 && v22 > 0 )
        v29 = v23 | 2;
      v136[3] = __PAIR128__((unsigned __int64)&Process[1].ActiveProcessorsPadding[6], 0LL);
      v137 = 0LL;
      v136[0] = a1;
      memset(&v136[1], 0, 32);
      memset(&v136[4], 0, 64);
      v21 = MiComputeFaultNode((unsigned __int64 *)v136, 0LL, &v124);
      break;
  }
  v34 = 0;
  v129 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v116 + 174));
  v122 = *(_DWORD *)v20 & 1;
  v35 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v132 = v35;
  v36 = *v35;
  if ( (unsigned int)MiPteInShadowRange(v35, v28)
    && (unsigned int)MiPteHasShadow(v38, v37, v39, v40)
    && (v36 & 1) != 0
    && ((v36 & 0x20) == 0 || (v36 & 0x42) == 0) )
  {
    v41 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v41 )
    {
      v42 = *((_QWORD *)&v41->Flink + (((unsigned __int64)(unsigned int)v35 >> 3) & 0x1FF));
      v43 = v36 | 0x20;
      if ( (v42 & 0x20) == 0 )
        v43 = v36;
      v36 = v43;
      if ( (v42 & 0x42) != 0 )
        v36 = v43 | 0x42;
    }
  }
  v44 = HIBYTE(v36) & 0xF | (16 * ((v36 >> 60) & 7));
  v119 = v118 & 1;
  if ( (v118 & 1) != 0 || (HIBYTE(v36) & 0xF) == 0xA )
  {
    v45 = v113;
  }
  else
  {
    v45 = v113;
    if ( (HIBYTE(v36) & 0xF) == 9 )
    {
      v44 = (16 * ((v36 >> 60) & 7)) | 0xA;
    }
    else if ( v113 != 1 && (*(_BYTE *)(v20 + 35) & 8) != 0 )
    {
      v44 = (16 * ((v36 >> 60) & 7)) | 0xA;
    }
  }
  v46 = v44 & 0xF;
  if ( (v44 & 0xF) == 0xA )
    goto LABEL_67;
  if ( v46 == 8 && v45 != 2 )
  {
    v34 = 1;
    if ( (*(_DWORD *)(v20 + 16) & 0x400LL) != 0 )
      v34 = 2;
  }
  WsleProtection = MiGetWsleProtection(a1, v44);
  if ( !WsleProtection )
LABEL_67:
    WsleProtection = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v20 + 16) >> 5) & 0x1F;
  v48 = MmMakeProtectNotWriteCopy[WsleProtection];
  v114 = v48;
  if ( Page == -1 )
  {
    MiInitializePageColorBase(v116, v21, (__int64)&v130);
    v49 = _InterlockedExchangeAdd((volatile signed __int32 *)v130, 1u);
    Page = MiGetPage(v129, DWORD2(v130) & (unsigned int)v49 | HIDWORD(v130), 0LL);
    if ( Page == -1 )
      return 3221225495LL;
  }
  if ( v34 )
  {
    if ( v34 >= 2 )
    {
      v50 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(v20 + 40) >> 39) & 0x3FFLL));
      MiReturnCommit(v50, 1LL);
      if ( v113 == 1 )
        _InterlockedDecrement64((volatile signed __int64 *)(v50 + 7616));
      v48 = v114;
    }
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  if ( v48 == 24 )
  {
    Address = v124;
    LOBYTE(v48) = 1;
    LOBYTE(v114) = 1;
    if ( v124 || (Address = MiLocateAddress(a1), (v124 = Address) != 0) )
    {
      v52 = (*(_DWORD *)(Address + 48) >> 7) & 0x1F;
      if ( v52 >> 3 == 3 && (v52 & 7) != 0 )
      {
        LOBYTE(v48) = 25;
      }
      else if ( v52 >> 3 == 1 )
      {
        LOBYTE(v48) = 9;
      }
      LOBYTE(v114) = v48;
    }
  }
  v53 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)(v53 + 16) = MiSwizzleInvalidPte(32LL * (v48 & 0x1F));
  if ( v46 == 10 )
  {
    v72 = (unsigned __int64)v126;
  }
  else
  {
    v55 = (unsigned __int64 *)&unk_140C4F7C0;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    if ( (*(_BYTE *)(v116 + 184) & 7) != 2 )
      v55 = (unsigned __int64 *)(v116 + 256);
    LockHandle.LockQueue.Lock = v55;
    LockHandle.LockQueue.Next = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v58 = SchedulerAssist[6];
        SchedulerAssist[6] = v58 + 1;
        if ( v58 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v55);
    }
    else
    {
      v59 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v55, (__int64)&LockHandle);
      if ( v59 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v59);
    }
    ++*(_QWORD *)(v116 + 144);
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(v116 + 128);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v60 = v132;
    v61 = *v132;
    if ( (unsigned int)MiPteInShadowRange(v132, v62)
      && (unsigned int)MiPteHasShadow(v64, v63, v65, v66)
      && (v61 & 1) != 0
      && ((v61 & 0x20) == 0 || (v61 & 0x42) == 0) )
    {
      v67 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v67 )
      {
        v68 = *((_QWORD *)&v67->Flink + (((unsigned __int64)(unsigned int)v60 >> 3) & 0x1FF));
        v69 = HIBYTE(v61);
        if ( (v68 & 0x20) == 0 )
          v69 = HIBYTE(v61);
        HIBYTE(v61) = v69;
        if ( (v68 & 0x42) != 0 )
          HIBYTE(v61) = v69;
      }
    }
    MiWriteValidPteVolatile(v60, 0x80000000LL, HIBYTE(v61) & 0xF);
    v72 = (unsigned __int64)v126;
    v73 = *v126;
    if ( v120
      && (unsigned int)MiPteHasShadow(v70, v54, v73, v71)
      && (v73 & 1) != 0
      && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
    {
      v54 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v54 )
      {
        v74 = *(_QWORD *)(v54 + 8 * ((v72 >> 3) & 0x1FF));
        v54 = v73 | 0x20;
        if ( (v74 & 0x20) == 0 )
          v54 = v73;
        v73 = v54;
        if ( (v74 & 0x42) != 0 )
          v73 = v54 | 0x42;
      }
    }
    v117 = v73;
  }
  *(_WORD *)(v53 + 32) = 1;
  v75 = (unsigned __int64 *)(((v72 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v76 = *v75;
  if ( (unsigned int)MiPteInShadowRange(v75, v54)
    && (unsigned int)MiPteHasShadow(v78, v77, v79, v80)
    && (v76 & 1) != 0
    && ((v76 & 0x20) == 0 || (v76 & 0x42) == 0) )
  {
    v77 = (v72 >> 9) & 0xFFFFFFF8;
    v81 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v81 )
    {
      v82 = *((_QWORD *)&v81->Flink + ((((v72 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
      v77 = v76 | 0x20;
      if ( (v82 & 0x20) == 0 )
        v77 = v76;
      v76 = v77;
      if ( (v82 & 0x42) != 0 )
        v76 = v77 | 0x42;
    }
  }
  v127 = v76;
  if ( (unsigned int)MiPteInShadowRange(&v127, v77)
    && (unsigned int)MiPteHasShadow(v84, v83, v85, v86)
    && (v76 & 1) != 0
    && ((v76 & 0x20) == 0 || (v76 & 0x42) == 0) )
  {
    v87 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v87 )
    {
      v88 = *((_QWORD *)&v87->Flink + (((unsigned __int64)&v127 >> 3) & 0x1FF));
      v89 = v76 | 0x20;
      if ( (v88 & 0x20) == 0 )
        v89 = v76;
      v76 = v89;
      if ( (v88 & 0x42) != 0 )
        v76 = v89 | 0x42;
    }
  }
  *(_QWORD *)(v53 + 40) ^= (*(_QWORD *)(v53 + 40) ^ (v76 >> 12)) & 0xFFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
    PagePriorityThread = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v29 |= 4u;
  v121 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v53 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v121);
    while ( *(__int64 *)(v53 + 24) < 0 );
  }
  if ( v122 )
    *(_QWORD *)v53 |= 1uLL;
  *(_BYTE *)(v53 + 34) |= 0x10u;
  if ( v113 || (*(_BYTE *)(v20 + 35) & 8) == 0 || v119 )
    *(_BYTE *)(v53 + 35) &= ~8u;
  else
    *(_BYTE *)(v53 + 35) |= 8u;
  v92 = *(unsigned __int8 *)(v20 + 34) >> 6;
  if ( *(unsigned __int8 *)(v53 + 34) >> 6 != (_DWORD)v92 )
    MiChangePageAttribute(48 * Page - 0x58000000000LL, v92, 1LL);
  MiSetPfnTbFlushStamp(48 * Page - 0x58000000000LL, 0LL, 1LL);
  v93 = *(_QWORD *)(v53 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(v53 + 8) = v72;
  *(_QWORD *)(v53 + 24) = v93 | 1;
  *(_BYTE *)(v53 + 35) ^= (*(_BYTE *)(v53 + 35) ^ PagePriorityThread) & 7;
  *(_BYTE *)(v53 + 34) = *(_BYTE *)(v53 + 34) & 0xF8 | 6;
  if ( v29 >= 4 )
    MiIdentifyPfn(48 * Page - 0x58000000000LL, &v134);
  _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v29 >= 4 )
  {
    *((_QWORD *)&v135 + 1) |= 8uLL;
    v138[0] = &v134;
    v138[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v138, 1, 671088641, 642, 289413890);
  }
  __incgsdword(0x2E94u);
  v94 = 1;
  if ( (v114 & 2) == 0 )
  {
    v94 = 9;
LABEL_165:
    v95 = a1;
    goto LABEL_166;
  }
  if ( (MiFlags & 0x40000) != 0 )
    goto LABEL_165;
  v95 = a1;
  if ( (MiFlags & 0x10000) == 0 )
  {
LABEL_166:
    if ( v95 >= 0xFFFF800000000000uLL )
      goto LABEL_169;
    goto LABEL_167;
  }
  if ( a1 >= 0xFFFF800000000000uLL )
  {
    v94 = 17;
    if ( (v118 & 2) != 0 )
      v94 = 49;
    goto LABEL_166;
  }
LABEL_167:
  if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    v94 |= 0x10u;
LABEL_169:
  MiCopyPage(Page, v133, 0LL, v94);
  if ( dword_140C4E828 )
  {
    v96 = PagePriorityThread < dword_140C4E82C;
    v97 = v116;
    if ( !v96 )
      MiLogPageAccess(v116, v72);
  }
  else
  {
    v97 = v116;
  }
  v98 = v117;
  if ( (v29 & 1) == 0 )
  {
    if ( v117 < 0 || v113 != 1 )
      v98 = v117 | 0x42;
    v98 = v98 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
  }
  v142 = 20LL;
  v99 = v98 ^ (v98 ^ (Page << 12)) & 0xFFFFFFFFF000LL;
  v140 = 0;
  v143 = 0LL;
  v144 = 0LL;
  v117 = v99;
  v139 = v113;
  MiInsertTbFlushEntry(&v139, a1 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
  if ( (v94 & 0x20) != 0 || (v99 & 0x42) == 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(v72, v99);
    MiFlushTbList(&v139);
    goto LABEL_203;
  }
  v103 = v99 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  if ( v72 >= 0xFFFFF6FB7DBED000uLL
    && v72 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(v100, v103, v101, v102) )
  {
    *(_QWORD *)v72 = v103;
    MiWritePteShadow(v72, v103);
  }
  else
  {
    *(_QWORD *)v72 = v103;
  }
  MiFlushTbList(&v139);
  if ( v72 < 0xFFFFF6FB7DBED000uLL || v72 > 0xFFFFF6FB7DBED7F8uLL )
  {
LABEL_201:
    *(_QWORD *)v72 = v99;
    goto LABEL_203;
  }
  if ( !(unsigned int)MiPteHasShadow(v105, v104, v106, v107) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v99 & 1) != 0 )
      v99 |= 0x8000000000000000uLL;
    goto LABEL_201;
  }
  if ( !HIBYTE(word_140C4E008) && (v99 & 1) != 0 )
    v99 |= 0x8000000000000000uLL;
  *(_QWORD *)v72 = v99;
  MiWritePteShadow(v72, v99);
LABEL_203:
  v108 = (__int64)Process;
  if ( v113 == 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  v123 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v20 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v123);
    while ( *(__int64 *)(v20 + 24) < 0 );
  }
  if ( !v113 && !v119 )
  {
    v109 = *(_BYTE *)(v20 + 35);
    if ( (v109 & 8) != 0 )
      *(_BYTE *)(v20 + 35) = v109 & 0xF7;
  }
  MiDecrementShareCount(v20);
  _InterlockedAnd64((volatile signed __int64 *)(v20 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v29 & 2) != 0 )
  {
    v110 = MiDecrementCombinedPte(v97, v128);
  }
  else
  {
    if ( (*(_BYTE *)(v97 + 184) & 7) != 0 )
      return 0LL;
    CloneAddress = MiLocateCloneAddress(v108, v128);
    if ( !CloneAddress )
      return 0LL;
    v110 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v112);
  }
  if ( v110 == 3 )
    MiChargeCommit(v129, 1uLL, 4u);
  return 0LL;
}
