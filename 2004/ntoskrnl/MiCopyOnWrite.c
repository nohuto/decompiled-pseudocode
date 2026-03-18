/*
 * XREFs of MiCopyOnWrite @ 0x140238700
 * Callers:
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiProbeLeafPteAccess @ 0x14024E770 (MiProbeLeafPteAccess.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x140255888 (MiSplitPrivatePage.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MiCompleteProtoPteFault @ 0x1402A6230 (MiCompleteProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 *     MiMakeDriverPagesPrivate @ 0x1402E0360 (MiMakeDriverPagesPrivate.c)
 *     MiValidFault @ 0x1402EFCC0 (MiValidFault.c)
 *     MiLockPagedAddress @ 0x140369694 (MiLockPagedAddress.c)
 *     MiFaultInPagedPool @ 0x140527C44 (MiFaultInPagedPool.c)
 *     MiLockDriverPageRange @ 0x140528534 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B8C4 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x14053044C (MmReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405396FC (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x140542514 (MiMakeProtoPrivate.c)
 *     MiValidVirtualizationFault @ 0x140543A8C (MiValidVirtualizationFault.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140206380 (MiIdentifyPfn.c)
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiLogPageAccess @ 0x140245760 (MiLogPageAccess.c)
 *     MiWriteValidPteVolatile @ 0x140245E30 (MiWriteValidPteVolatile.c)
 *     MiLocateAddress @ 0x14024BB30 (MiLocateAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     MiUnlockPageTableCharges @ 0x14025E10C (MiUnlockPageTableCharges.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x14025EBC0 (MiComputeFaultNode.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiChargeCommit @ 0x1402ACF70 (MiChargeCommit.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiCopyPage @ 0x1402B4680 (MiCopyPage.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiGetWsleProtection @ 0x1402B6070 (MiGetWsleProtection.c)
 *     MiSetPfnTbFlushStamp @ 0x1402B7890 (MiSetPfnTbFlushStamp.c)
 *     PsGetPagePriorityThread @ 0x1402B8E40 (PsGetPagePriorityThread.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     MiChangePageAttribute @ 0x1402F4EBC (MiChangePageAttribute.c)
 *     MiDecrementShareCount @ 0x1402F7060 (MiDecrementShareCount.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140330A4C (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLocateCloneAddress @ 0x14033A8E4 (MiLocateCloneAddress.c)
 *     MiDecrementCombinedPte @ 0x140364C34 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiDecrementCloneBlockReference @ 0x1405549E8 (MiDecrementCloneBlockReference.c)
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
  unsigned int v22; // r14d
  __int64 v23; // r13
  BOOL v24; // r12d
  int SystemRegionType; // eax
  __int64 v26; // rdx
  int v27; // r8d
  unsigned int v28; // esi
  int v29; // r8d
  int v30; // r8d
  unsigned int v32; // r13d
  unsigned __int64 *v33; // r12
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
  __int64 v46; // r8
  __int64 v47; // r9
  int v48; // ebx
  signed __int32 v49; // eax
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 Address; // rax
  unsigned int v53; // ecx
  __int64 v54; // r14
  unsigned __int64 *v55; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v58; // eax
  unsigned __int64 v59; // r12
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r9
  unsigned __int64 v67; // r13
  __int64 v68; // r8
  struct _LIST_ENTRY *v69; // rdx
  __int64 v70; // rax
  __int64 v71; // rdx
  unsigned __int64 *v72; // r12
  unsigned __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // r9
  struct _LIST_ENTRY *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 v84; // r9
  __int64 v85; // rax
  int Queue; // r12d
  unsigned int PagePriorityThread; // r12d
  __int64 v88; // rdx
  unsigned __int64 v89; // rax
  unsigned int v90; // ebx
  unsigned __int64 v91; // rax
  bool v92; // cf
  __int64 v93; // r12
  unsigned __int64 v94; // rax
  __int64 v95; // rdi
  __int64 v96; // rcx
  __int64 v97; // r8
  __int64 v98; // r9
  unsigned __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  __int64 v103; // r9
  __int64 v104; // rdx
  _KPROCESS *v105; // rdi
  char v106; // al
  int v107; // eax
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v109; // rdx
  int v110; // [rsp+30h] [rbp-D0h]
  int v111; // [rsp+34h] [rbp-CCh]
  __int64 SessionVm; // [rsp+40h] [rbp-C0h]
  __int64 v114; // [rsp+48h] [rbp-B8h] BYREF
  int v115; // [rsp+50h] [rbp-B0h]
  int v116; // [rsp+54h] [rbp-ACh]
  BOOL v117; // [rsp+58h] [rbp-A8h]
  int v118; // [rsp+5Ch] [rbp-A4h] BYREF
  int v119; // [rsp+60h] [rbp-A0h]
  int v120; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v121; // [rsp+68h] [rbp-98h] BYREF
  _KPROCESS *Process; // [rsp+70h] [rbp-90h]
  __int64 *v123; // [rsp+78h] [rbp-88h]
  unsigned __int64 v124; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v125; // [rsp+88h] [rbp-78h]
  __int64 v126; // [rsp+90h] [rbp-70h]
  __int128 v127; // [rsp+98h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 *v129; // [rsp+C0h] [rbp-40h]
  __int64 v130; // [rsp+C8h] [rbp-38h]
  __int128 v131; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v132; // [rsp+E0h] [rbp-20h]
  _OWORD v133[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v134; // [rsp+170h] [rbp+70h]
  _QWORD v135[2]; // [rsp+180h] [rbp+80h] BYREF
  int v136; // [rsp+190h] [rbp+90h] BYREF
  __int16 v137; // [rsp+194h] [rbp+94h]
  __int16 v138; // [rsp+196h] [rbp+96h]
  __int64 v139; // [rsp+198h] [rbp+98h]
  __int64 v140; // [rsp+1A0h] [rbp+A0h]
  __int64 v141; // [rsp+1A8h] [rbp+A8h]
  __int128 v142; // [rsp+1B0h] [rbp+B0h]
  __int128 v143; // [rsp+1C0h] [rbp+C0h]
  __int128 v144; // [rsp+1D0h] [rbp+D0h]
  __int128 v145; // [rsp+1E0h] [rbp+E0h]
  __int128 v146; // [rsp+1F0h] [rbp+F0h]
  __int128 v147; // [rsp+200h] [rbp+100h]
  __int128 v148; // [rsp+210h] [rbp+110h]
  __int128 v149; // [rsp+220h] [rbp+120h]
  __int128 v150; // [rsp+230h] [rbp+130h]
  __int64 v151; // [rsp+240h] [rbp+140h]

  v4 = *a2;
  v138 = 0;
  v127 = 0LL;
  v151 = 0LL;
  v142 = 0LL;
  v115 = a4;
  v6 = (unsigned int)a2;
  v143 = 0LL;
  v123 = (__int64 *)a2;
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  v147 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v131 = 0LL;
  v132 = 0LL;
  v117 = MiPteInShadowRange((unsigned __int64)a2);
  if ( v117 && (unsigned int)MiPteHasShadow(v8, v7, v9, v10) && (v4 & 1) != 0 && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
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
  v114 = v4;
  v14 = v4;
  if ( MiPteInShadowRange((unsigned __int64)&v114)
    && (unsigned int)MiPteHasShadow(v16, v15, v17, v18)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v19 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v19 )
    {
      v14 = v4 | 0x20;
      v20 = *((_QWORD *)&v19->Flink + (((unsigned __int64)&v114 >> 3) & 0x1FF));
      if ( (v20 & 0x20) == 0 )
        v14 = v4;
      if ( (v20 & 0x42) != 0 )
        v14 |= 0x42uLL;
    }
  }
  v130 = (v14 >> 12) & 0xFFFFFFFFFLL;
  v21 = 48 * v130 - 0x58000000000LL;
  v121 = 0LL;
  v22 = 0;
  v23 = *(_QWORD *)(v21 + 8);
  v24 = (v4 & 0x200) == 0;
  v125 = v23 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemRegionType = MiGetSystemRegionType(a1);
  switch ( SystemRegionType )
  {
    case 1:
      SessionVm = MiGetSessionVm(1LL, v26, 2LL);
      v28 = (v4 & 0x200) == 0;
      if ( (*(_QWORD *)(v21 + 40) & 0x1000000000LL) == 0 && v23 > 0 )
        v28 = v27 | v24;
      v110 = v27;
      break;
    case 12:
      v110 = 0;
      SessionVm = MiGetAnyMultiplexedVm(1LL);
      v28 = (v4 & 0x200) == 0;
      if ( (*(_QWORD *)(v21 + 40) & 0x1000000000LL) == 0 && v23 > 0 )
        v28 = v29 | v24;
      break;
    case 9:
    case 14:
      KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 2uLL);
    case 6:
      v110 = 0;
      SessionVm = MiGetAnyMultiplexedVm(2LL);
      v28 = v30 | v24;
      if ( (*(_QWORD *)(v21 + 40) & 0x1000000000LL) != 0 || v23 <= 0 )
        KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 0LL);
      break;
    case 5:
      KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 1uLL);
    default:
      if ( Process[1].Affinity.Bitmap[10] )
        return 3221226548LL;
      v110 = 1;
      v28 = (v4 & 0x200) == 0;
      SessionVm = (__int64)&Process[1].ActiveProcessorsPadding[6];
      if ( (*(_QWORD *)(v21 + 40) & 0x1000000000LL) == 0 && v23 > 0 )
        v28 = v24 | 2;
      v133[3] = __PAIR128__((unsigned __int64)&Process[1].ActiveProcessorsPadding[6], 0LL);
      v134 = 0LL;
      v133[0] = a1;
      memset(&v133[1], 0, 32);
      memset(&v133[4], 0, 64);
      v22 = MiComputeFaultNode(v133, 0LL, &v121);
      break;
  }
  v32 = 0;
  v126 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  v119 = *(_DWORD *)v21 & 1;
  v33 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v129 = v33;
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
  v116 = v115 & 1;
  if ( (v115 & 1) != 0 || (HIBYTE(v34) & 0xF) == 0xA )
  {
    v43 = v110;
  }
  else
  {
    v43 = v110;
    if ( (HIBYTE(v34) & 0xF) == 9 )
    {
      v42 = (16 * ((v34 >> 60) & 7)) | 0xA;
    }
    else if ( v110 != 1 && (*(_BYTE *)(v21 + 35) & 8) != 0 )
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
  v48 = MmMakeProtectNotWriteCopy[WsleProtection];
  v111 = v48;
  if ( Page == -1 )
  {
    MiInitializePageColorBase(SessionVm, v22, &v127);
    v49 = _InterlockedExchangeAdd((volatile signed __int32 *)v127, 1u);
    Page = MiGetPage(v126, DWORD2(v127) & (unsigned int)v49 | HIDWORD(v127), 0LL);
    if ( Page == -1 )
      return 3221225495LL;
  }
  if ( v32 )
  {
    if ( v32 >= 2 )
    {
      v50 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(v21 + 40) >> 39) & 0x3FFLL));
      MiReturnCommit(v50, 1LL);
      if ( v110 == 1 )
        _InterlockedDecrement64((volatile signed __int64 *)(v50 + 7616));
      v48 = v111;
    }
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v21 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  v51 = 9LL;
  if ( v48 == 24 )
  {
    Address = v121;
    LOBYTE(v48) = 1;
    LOBYTE(v111) = 1;
    if ( !v121 )
    {
      Address = MiLocateAddress(a1);
      v121 = Address;
      if ( !Address )
        goto LABEL_87;
      v51 = 9LL;
    }
    v53 = (*(_DWORD *)(Address + 48) >> 7) & 0x1F;
    if ( v53 >> 3 == 3 && (v53 & 7) != 0 )
    {
      LOBYTE(v48) = 25;
    }
    else if ( v53 >> 3 == 1 )
    {
      LOBYTE(v48) = 9;
    }
    LOBYTE(v111) = v48;
  }
LABEL_87:
  v54 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)(v54 + 16) = MiSwizzleInvalidPte(32LL * (v48 & 0x1F), v51, v46, v47);
  if ( v44 == 10 )
  {
    v67 = (unsigned __int64)v123;
  }
  else
  {
    v55 = (unsigned __int64 *)&unk_140C4F5C0;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    if ( (*(_BYTE *)(SessionVm + 184) & 7) != 2 )
      v55 = (unsigned __int64 *)(SessionVm + 256);
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
    else if ( _InterlockedExchange64((volatile __int64 *)v55, (__int64)&LockHandle) )
    {
      KxWaitForLockOwnerShip(&LockHandle);
    }
    ++*(_QWORD *)(SessionVm + 144);
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(SessionVm + 128);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v59 = (unsigned __int64)v129;
    if ( MiPteInShadowRange((unsigned __int64)v129) )
      MiPteHasShadow(v61, v60, v62, v63);
    MiWriteValidPteVolatile(v59, 0x80000000LL);
    v67 = (unsigned __int64)v123;
    v68 = *v123;
    if ( v117
      && (unsigned int)MiPteHasShadow(v65, v64, v68, v66)
      && (v68 & 1) != 0
      && ((v68 & 0x20) == 0 || (v68 & 0x42) == 0) )
    {
      v69 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v69 )
      {
        v70 = *((_QWORD *)&v69->Flink + ((v67 >> 3) & 0x1FF));
        v71 = v68 | 0x20;
        if ( (v70 & 0x20) == 0 )
          v71 = v68;
        v68 = v71;
        if ( (v70 & 0x42) != 0 )
          v68 = v71 | 0x42;
      }
    }
    v114 = v68;
  }
  *(_WORD *)(v54 + 32) = 1;
  v72 = (unsigned __int64 *)(((v67 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v73 = *v72;
  if ( MiPteInShadowRange((unsigned __int64)v72)
    && (unsigned int)MiPteHasShadow(v75, v74, v76, v77)
    && (v73 & 1) != 0
    && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
  {
    v78 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v78 )
    {
      v79 = *((_QWORD *)&v78->Flink + ((((v67 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
      v80 = v73 | 0x20;
      if ( (v79 & 0x20) == 0 )
        v80 = v73;
      v73 = v80;
      if ( (v79 & 0x42) != 0 )
        v73 = v80 | 0x42;
    }
  }
  v124 = v73;
  if ( MiPteInShadowRange((unsigned __int64)&v124)
    && (unsigned int)MiPteHasShadow(v82, v81, v83, v84)
    && (v73 & 1) != 0
    && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
  {
    v81 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v81 )
    {
      v85 = *(_QWORD *)(v81 + 8 * (((unsigned __int64)&v124 >> 3) & 0x1FF));
      v81 = v73 | 0x20;
      if ( (v85 & 0x20) == 0 )
        v81 = v73;
      v73 = v81;
      if ( (v85 & 0x42) != 0 )
        v73 = v81 | 0x42;
    }
  }
  *(_QWORD *)(v54 + 40) ^= (*(_QWORD *)(v54 + 40) ^ (v73 >> 12)) & 0xFFFFFFFFFLL;
  Queue = (int)KeGetCurrentThread()[1].Queue;
  if ( (Queue & 0x100) != 0 )
    PagePriorityThread = (unsigned __int16)(Queue & 0xE00) >> 9;
  else
    PagePriorityThread = PsGetPagePriorityThread();
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v28 |= 4u;
  v118 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v54 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v118, v81);
    while ( *(__int64 *)(v54 + 24) < 0 );
  }
  if ( v119 )
    *(_QWORD *)v54 |= 1uLL;
  *(_BYTE *)(v54 + 34) |= 0x10u;
  if ( v110 || (*(_BYTE *)(v21 + 35) & 8) == 0 || v116 )
    *(_BYTE *)(v54 + 35) &= ~8u;
  else
    *(_BYTE *)(v54 + 35) |= 8u;
  v88 = *(unsigned __int8 *)(v21 + 34) >> 6;
  if ( *(unsigned __int8 *)(v54 + 34) >> 6 != (_DWORD)v88 )
    MiChangePageAttribute(48 * Page - 0x58000000000LL, v88, 1LL);
  MiSetPfnTbFlushStamp(48 * Page - 0x58000000000LL, 0LL, 1LL);
  v89 = *(_QWORD *)(v54 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(v54 + 8) = v67;
  *(_QWORD *)(v54 + 24) = v89 | 1;
  *(_BYTE *)(v54 + 35) ^= (*(_BYTE *)(v54 + 35) ^ PagePriorityThread) & 7;
  *(_BYTE *)(v54 + 34) = *(_BYTE *)(v54 + 34) & 0xF8 | 6;
  if ( v28 >= 4 )
    MiIdentifyPfn((__m128i *)(48 * Page - 0x58000000000LL), (unsigned __int64 *)&v131);
  _InterlockedAnd64((volatile signed __int64 *)(v54 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v28 >= 4 )
  {
    *((_QWORD *)&v132 + 1) |= 8uLL;
    v135[0] = &v131;
    v135[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v135, 1, 671088641, 642, 289413890);
  }
  __incgsdword(0x2E94u);
  v90 = 1;
  if ( (v111 & 2) == 0 )
  {
    v90 = 9;
LABEL_158:
    v91 = a1;
    goto LABEL_159;
  }
  if ( (MiFlags & 0x40000) != 0 )
    goto LABEL_158;
  v91 = a1;
  if ( (MiFlags & 0x10000) == 0 )
  {
LABEL_159:
    if ( v91 >= 0xFFFF800000000000uLL )
      goto LABEL_162;
    goto LABEL_160;
  }
  if ( a1 >= 0xFFFF800000000000uLL )
  {
    v90 = 17;
    if ( (v115 & 2) != 0 )
      v90 = 49;
    goto LABEL_159;
  }
LABEL_160:
  if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    v90 |= 0x10u;
LABEL_162:
  MiCopyPage(Page, v130, 0LL, v90);
  if ( dword_140C4E628 )
  {
    v92 = PagePriorityThread < dword_140C4E62C;
    v93 = SessionVm;
    if ( !v92 )
      MiLogPageAccess(SessionVm, v67);
  }
  else
  {
    v93 = SessionVm;
  }
  v94 = v114;
  if ( (v28 & 1) == 0 )
  {
    if ( v114 < 0 || v110 != 1 )
      v94 = v114 | 0x42;
    v94 = v94 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
  }
  v139 = 20LL;
  v95 = v94 ^ (v94 ^ (Page << 12)) & 0xFFFFFFFFF000LL;
  v137 = 0;
  v140 = 0LL;
  v141 = 0LL;
  v114 = v95;
  v136 = v110;
  MiInsertTbFlushEntry(&v136, a1 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
  if ( (v90 & 0x20) != 0 || (v95 & 0x42) == 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(v67, v95);
    MiFlushTbList(&v136, v104);
    goto LABEL_196;
  }
  v99 = v95 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  if ( v67 >= 0xFFFFF6FB7DBED000uLL && v67 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow(v96, v99, v97, v98) )
  {
    *(_QWORD *)v67 = v99;
    MiWritePteShadow(v67, v99);
  }
  else
  {
    *(_QWORD *)v67 = v99;
  }
  MiFlushTbList(&v136, v99);
  if ( v67 < 0xFFFFF6FB7DBED000uLL || v67 > 0xFFFFF6FB7DBED7F8uLL )
  {
LABEL_194:
    *(_QWORD *)v67 = v95;
    goto LABEL_196;
  }
  if ( !(unsigned int)MiPteHasShadow(v101, v100, v102, v103) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v95 & 1) != 0 )
      v95 |= 0x8000000000000000uLL;
    goto LABEL_194;
  }
  if ( !HIBYTE(word_140C4DE08) && (v95 & 1) != 0 )
    v95 |= 0x8000000000000000uLL;
  *(_QWORD *)v67 = v95;
  MiWritePteShadow(v67, v95);
LABEL_196:
  v105 = Process;
  if ( v110 == 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  v120 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v21 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v120, v100);
    while ( *(__int64 *)(v21 + 24) < 0 );
  }
  if ( !v110 && !v116 )
  {
    v106 = *(_BYTE *)(v21 + 35);
    if ( (v106 & 8) != 0 )
      *(_BYTE *)(v21 + 35) = v106 & 0xF7;
  }
  MiDecrementShareCount(v21);
  _InterlockedAnd64((volatile signed __int64 *)(v21 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v28 & 2) != 0 )
  {
    v107 = MiDecrementCombinedPte(v93, v125);
  }
  else
  {
    if ( (*(_BYTE *)(v93 + 184) & 7) != 0 )
      return 0LL;
    CloneAddress = MiLocateCloneAddress(v105, v125);
    if ( !CloneAddress )
      return 0LL;
    v107 = MiDecrementCloneBlockReference(CloneAddress, v109);
  }
  if ( v107 == 3 )
    MiChargeCommit(v126, 1LL, 4LL);
  return 0LL;
}
