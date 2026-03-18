/*
 * XREFs of MiCopyOnWrite @ 0x140291750
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213720 (MiCompleteProtoPteFault.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiProbeLeafPteAccess @ 0x1402A77A0 (MiProbeLeafPteAccess.c)
 *     MiCopyToUserVa @ 0x1402AD900 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1402AE8B8 (MiSplitPrivatePage.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiMakeDriverPagesPrivate @ 0x140325460 (MiMakeDriverPagesPrivate.c)
 *     MiValidFault @ 0x140334E00 (MiValidFault.c)
 *     MiLockPagedAddress @ 0x140368CD4 (MiLockPagedAddress.c)
 *     MiFaultInPagedPool @ 0x1405275F4 (MiFaultInPagedPool.c)
 *     MiLockDriverPageRange @ 0x140527EE4 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B274 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x14052FDFC (MmReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405390AC (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x140541EC4 (MiMakeProtoPrivate.c)
 *     MiValidVirtualizationFault @ 0x14054343C (MiValidVirtualizationFault.c)
 * Callees:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiChargeCommit @ 0x14021A460 (MiChargeCommit.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiCopyPage @ 0x140221A00 (MiCopyPage.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiGetWsleProtection @ 0x1402233F0 (MiGetWsleProtection.c)
 *     MiSetPfnTbFlushStamp @ 0x140224C10 (MiSetPfnTbFlushStamp.c)
 *     PsGetPagePriorityThread @ 0x1402261C0 (PsGetPagePriorityThread.c)
 *     MiGetSessionVm @ 0x14022B5AC (MiGetSessionVm.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     MiIdentifyPfn @ 0x14025F2A0 (MiIdentifyPfn.c)
 *     MiGetSystemRegionType @ 0x1402609A0 (MiGetSystemRegionType.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiLogPageAccess @ 0x14029E790 (MiLogPageAccess.c)
 *     MiWriteValidPteVolatile @ 0x14029EE60 (MiWriteValidPteVolatile.c)
 *     MiLocateAddress @ 0x1402A4B60 (MiLocateAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     MiUnlockPageTableCharges @ 0x1402B713C (MiUnlockPageTableCharges.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiComputeFaultNode @ 0x1402B7BF0 (MiComputeFaultNode.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1402F3E4C (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLocateCloneAddress @ 0x1402FD5A4 (MiLocateCloneAddress.c)
 *     MiChangePageAttribute @ 0x140350E98 (MiChangePageAttribute.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MiDecrementCombinedPte @ 0x140364274 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiDecrementCloneBlockReference @ 0x140554398 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiCopyOnWrite(unsigned __int64 a1, ULONG_PTR *a2, ULONG_PTR Page, int a4)
{
  ULONG_PTR v4; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _LIST_ENTRY *v15; // rdx
  __int64 v16; // rax
  ULONG_PTR v17; // r15
  unsigned int v18; // r14d
  __int64 v19; // r13
  BOOL v20; // r12d
  int SystemRegionType; // eax
  int v22; // r8d
  unsigned int v23; // esi
  int v24; // r8d
  int v25; // r8d
  unsigned int v27; // r13d
  _QWORD *v28; // r12
  unsigned __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _LIST_ENTRY *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned __int8 v35; // cl
  int v36; // eax
  char v37; // r12
  int WsleProtection; // eax
  int v39; // ebx
  signed __int32 v40; // eax
  __int64 v41; // rbx
  __int64 Address; // rax
  unsigned int v43; // ecx
  __int64 v44; // r14
  unsigned __int64 *v45; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v48; // eax
  _QWORD *v49; // rdx
  _QWORD *v50; // r12
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // rcx
  struct _LIST_ENTRY *v54; // rax
  __int64 v55; // rax
  char v56; // rdx^7
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int64 v59; // r13
  __int64 v60; // r8
  struct _LIST_ENTRY *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  unsigned __int64 *v64; // r12
  unsigned __int64 v65; // rbx
  __int64 v66; // rdx
  __int64 v67; // rcx
  struct _LIST_ENTRY *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rax
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int PagePriorityThread; // r12d
  __int64 v78; // rdx
  unsigned __int64 v79; // rax
  int v80; // ebx
  unsigned __int64 v81; // rax
  bool v82; // cf
  unsigned __int64 v83; // r12
  unsigned __int64 v84; // rax
  __int64 v85; // rdi
  __int64 v86; // rcx
  unsigned __int64 v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  _KPROCESS *v92; // rdi
  char v93; // al
  int v94; // eax
  ULONG_PTR CloneAddress; // rax
  ULONG_PTR v96; // rdx
  int v97; // [rsp+30h] [rbp-D0h]
  int v98; // [rsp+34h] [rbp-CCh]
  unsigned __int64 SessionVm; // [rsp+40h] [rbp-C0h]
  __int64 v101; // [rsp+48h] [rbp-B8h] BYREF
  int v102; // [rsp+50h] [rbp-B0h]
  int v103; // [rsp+54h] [rbp-ACh]
  BOOL v104; // [rsp+58h] [rbp-A8h]
  int v105; // [rsp+5Ch] [rbp-A4h] BYREF
  int v106; // [rsp+60h] [rbp-A0h]
  int v107; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v108; // [rsp+68h] [rbp-98h] BYREF
  _KPROCESS *Process; // [rsp+70h] [rbp-90h]
  __int64 *v110; // [rsp+78h] [rbp-88h]
  unsigned __int64 v111; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v112; // [rsp+88h] [rbp-78h]
  __int64 v113; // [rsp+90h] [rbp-70h]
  __int128 v114; // [rsp+98h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  _QWORD *v116; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v117; // [rsp+C8h] [rbp-38h]
  __int128 v118; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v119; // [rsp+E0h] [rbp-20h]
  _OWORD v120[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v121; // [rsp+170h] [rbp+70h]
  _QWORD v122[2]; // [rsp+180h] [rbp+80h] BYREF
  int v123; // [rsp+190h] [rbp+90h] BYREF
  __int16 v124; // [rsp+194h] [rbp+94h]
  __int16 v125; // [rsp+196h] [rbp+96h]
  __int64 v126; // [rsp+198h] [rbp+98h]
  __int64 v127; // [rsp+1A0h] [rbp+A0h]
  __int64 v128; // [rsp+1A8h] [rbp+A8h]
  __int128 v129; // [rsp+1B0h] [rbp+B0h]
  __int128 v130; // [rsp+1C0h] [rbp+C0h]
  __int128 v131; // [rsp+1D0h] [rbp+D0h]
  __int128 v132; // [rsp+1E0h] [rbp+E0h]
  __int128 v133; // [rsp+1F0h] [rbp+F0h]
  __int128 v134; // [rsp+200h] [rbp+100h]
  __int128 v135; // [rsp+210h] [rbp+110h]
  __int128 v136; // [rsp+220h] [rbp+120h]
  __int128 v137; // [rsp+230h] [rbp+130h]
  __int64 v138; // [rsp+240h] [rbp+140h]

  v4 = *a2;
  v125 = 0;
  v114 = 0LL;
  v138 = 0LL;
  v129 = 0LL;
  v102 = a4;
  v6 = (unsigned int)a2;
  v130 = 0LL;
  v110 = (__int64 *)a2;
  v131 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  v134 = 0LL;
  v135 = 0LL;
  v136 = 0LL;
  v137 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v104 = MiPteInShadowRange((unsigned __int64)a2);
  if ( v104 && (unsigned int)MiPteHasShadow(v8, v7) && (v4 & 1) != 0 && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v10 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v6 >> 3) & 0x1FF));
      v11 = v4 | 0x20;
      if ( (v10 & 0x20) == 0 )
        v11 = v4;
      v4 = v11;
      if ( (v10 & 0x42) != 0 )
        v4 = v11 | 0x42;
    }
  }
  v101 = v4;
  v12 = v4;
  if ( MiPteInShadowRange((unsigned __int64)&v101)
    && (unsigned int)MiPteHasShadow(v14, v13)
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v15 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v15 )
    {
      v12 = v4 | 0x20;
      v16 = *((_QWORD *)&v15->Flink + (((unsigned __int64)&v101 >> 3) & 0x1FF));
      if ( (v16 & 0x20) == 0 )
        v12 = v4;
      if ( (v16 & 0x42) != 0 )
        v12 |= 0x42uLL;
    }
  }
  v117 = (v12 >> 12) & 0xFFFFFFFFFLL;
  v17 = 48 * v117 - 0x58000000000LL;
  v108 = 0LL;
  v18 = 0;
  v19 = *(_QWORD *)(v17 + 8);
  v20 = (v4 & 0x200) == 0;
  v112 = v19 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemRegionType = MiGetSystemRegionType(a1);
  switch ( SystemRegionType )
  {
    case 1:
      SessionVm = MiGetSessionVm();
      v23 = (v4 & 0x200) == 0;
      if ( (*(_QWORD *)(v17 + 40) & 0x1000000000LL) == 0 && v19 > 0 )
        v23 = v22 | v20;
      v97 = v22;
      break;
    case 12:
      v97 = 0;
      SessionVm = MiGetAnyMultiplexedVm(1LL);
      v23 = (v4 & 0x200) == 0;
      if ( (*(_QWORD *)(v17 + 40) & 0x1000000000LL) == 0 && v19 > 0 )
        v23 = v24 | v20;
      break;
    case 9:
    case 14:
      KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 2uLL);
    case 6:
      v97 = 0;
      SessionVm = MiGetAnyMultiplexedVm(2LL);
      v23 = v25 | v20;
      if ( (*(_QWORD *)(v17 + 40) & 0x1000000000LL) != 0 || v19 <= 0 )
        KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 0LL);
      break;
    case 5:
      KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 1uLL);
    default:
      if ( Process[1].Affinity.Bitmap[10] )
        return 3221226548LL;
      v97 = 1;
      v23 = (v4 & 0x200) == 0;
      SessionVm = (unsigned __int64)&Process[1].ActiveProcessorsPadding[6];
      if ( (*(_QWORD *)(v17 + 40) & 0x1000000000LL) == 0 && v19 > 0 )
        v23 = v20 | 2;
      v120[3] = __PAIR128__((unsigned __int64)&Process[1].ActiveProcessorsPadding[6], 0LL);
      v121 = 0LL;
      v120[0] = a1;
      memset(&v120[1], 0, 32);
      memset(&v120[4], 0, 64);
      v18 = MiComputeFaultNode(v120, 0LL, &v108);
      break;
  }
  v27 = 0;
  v113 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  v106 = *(_DWORD *)v17 & 1;
  v28 = (_QWORD *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v116 = v28;
  v29 = *v28;
  if ( MiPteInShadowRange((unsigned __int64)v28)
    && (unsigned int)MiPteHasShadow(v31, v30)
    && (v29 & 1) != 0
    && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
  {
    v32 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v32 )
    {
      v33 = *((_QWORD *)&v32->Flink + (((unsigned __int64)(unsigned int)v28 >> 3) & 0x1FF));
      v34 = v29 | 0x20;
      if ( (v33 & 0x20) == 0 )
        v34 = v29;
      v29 = v34;
      if ( (v33 & 0x42) != 0 )
        v29 = v34 | 0x42;
    }
  }
  v35 = HIBYTE(v29) & 0xF | (16 * ((v29 >> 60) & 7));
  v103 = v102 & 1;
  if ( (v102 & 1) != 0 || (HIBYTE(v29) & 0xF) == 0xA )
  {
    v36 = v97;
  }
  else
  {
    v36 = v97;
    if ( (HIBYTE(v29) & 0xF) == 9 )
    {
      v35 = (16 * ((v29 >> 60) & 7)) | 0xA;
    }
    else if ( v97 != 1 && (*(_BYTE *)(v17 + 35) & 8) != 0 )
    {
      v35 = (16 * ((v29 >> 60) & 7)) | 0xA;
    }
  }
  v37 = v35 & 0xF;
  if ( (v35 & 0xF) == 0xA )
    goto LABEL_67;
  if ( v37 == 8 && v36 != 2 )
  {
    v27 = 1;
    if ( (*(_DWORD *)(v17 + 16) & 0x400LL) != 0 )
      v27 = 2;
  }
  WsleProtection = MiGetWsleProtection(a1, v35);
  if ( !WsleProtection )
LABEL_67:
    WsleProtection = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v17 + 16) >> 5) & 0x1F;
  v39 = MmMakeProtectNotWriteCopy[WsleProtection];
  v98 = v39;
  if ( Page == -1LL )
  {
    MiInitializePageColorBase(SessionVm, v18, &v114);
    v40 = _InterlockedExchangeAdd((volatile signed __int32 *)v114, 1u);
    Page = MiGetPage(v113, DWORD2(v114) & (unsigned int)v40 | HIDWORD(v114), 0LL);
    if ( Page == -1LL )
      return 3221225495LL;
  }
  if ( v27 )
  {
    if ( v27 >= 2 )
    {
      v41 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v17 + 40) >> 39) & 0x3FFLL));
      MiReturnCommit(v41, 1LL);
      if ( v97 == 1 )
        _InterlockedDecrement64((volatile signed __int64 *)(v41 + 7616));
      v39 = v98;
    }
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v17 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL);
  }
  if ( v39 == 24 )
  {
    Address = v108;
    LOBYTE(v39) = 1;
    LOBYTE(v98) = 1;
    if ( v108 || (Address = MiLocateAddress(a1), (v108 = Address) != 0) )
    {
      v43 = (*(_DWORD *)(Address + 48) >> 7) & 0x1F;
      if ( v43 >> 3 == 3 && (v43 & 7) != 0 )
      {
        LOBYTE(v39) = 25;
      }
      else if ( v43 >> 3 == 1 )
      {
        LOBYTE(v39) = 9;
      }
      LOBYTE(v98) = v39;
    }
  }
  v44 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)(v44 + 16) = MiSwizzleInvalidPte(32LL * (v39 & 0x1F));
  if ( v37 == 10 )
  {
    v59 = (unsigned __int64)v110;
  }
  else
  {
    v45 = (unsigned __int64 *)&unk_140C4F700;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    if ( (*(_BYTE *)(SessionVm + 184) & 7) != 2 )
      v45 = (unsigned __int64 *)(SessionVm + 256);
    LockHandle.LockQueue.Lock = v45;
    LockHandle.LockQueue.Next = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v48 = SchedulerAssist[6];
        SchedulerAssist[6] = v48 + 1;
        if ( v48 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v45);
    }
    else
    {
      v49 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v45, (__int64)&LockHandle);
      if ( v49 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v49);
    }
    ++*(_QWORD *)(SessionVm + 144);
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(SessionVm + 128);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v50 = v116;
    v51 = *v116;
    if ( MiPteInShadowRange((unsigned __int64)v116)
      && (unsigned int)MiPteHasShadow(v53, v52)
      && (v51 & 1) != 0
      && ((v51 & 0x20) == 0 || (v51 & 0x42) == 0) )
    {
      v54 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v54 )
      {
        v55 = *((_QWORD *)&v54->Flink + (((unsigned __int64)(unsigned int)v50 >> 3) & 0x1FF));
        v56 = HIBYTE(v51);
        if ( (v55 & 0x20) == 0 )
          v56 = HIBYTE(v51);
        HIBYTE(v51) = v56;
        if ( (v55 & 0x42) != 0 )
          HIBYTE(v51) = v56;
      }
    }
    MiWriteValidPteVolatile(v50, 0x80000000LL, HIBYTE(v51) & 0xF);
    v59 = (unsigned __int64)v110;
    v60 = *v110;
    if ( v104 && (unsigned int)MiPteHasShadow(v58, v57) && (v60 & 1) != 0 && ((v60 & 0x20) == 0 || (v60 & 0x42) == 0) )
    {
      v61 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v61 )
      {
        v62 = *((_QWORD *)&v61->Flink + ((v59 >> 3) & 0x1FF));
        v63 = v60 | 0x20;
        if ( (v62 & 0x20) == 0 )
          v63 = v60;
        v60 = v63;
        if ( (v62 & 0x42) != 0 )
          v60 = v63 | 0x42;
      }
    }
    v101 = v60;
  }
  *(_WORD *)(v44 + 32) = 1;
  v64 = (unsigned __int64 *)(((v59 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v65 = *v64;
  if ( MiPteInShadowRange((unsigned __int64)v64)
    && (unsigned int)MiPteHasShadow(v67, v66)
    && (v65 & 1) != 0
    && ((v65 & 0x20) == 0 || (v65 & 0x42) == 0) )
  {
    v68 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v68 )
    {
      v69 = *((_QWORD *)&v68->Flink + ((((v59 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
      v70 = v65 | 0x20;
      if ( (v69 & 0x20) == 0 )
        v70 = v65;
      v65 = v70;
      if ( (v69 & 0x42) != 0 )
        v65 = v70 | 0x42;
    }
  }
  v111 = v65;
  if ( MiPteInShadowRange((unsigned __int64)&v111)
    && (unsigned int)MiPteHasShadow(v72, v71)
    && (v65 & 1) != 0
    && ((v65 & 0x20) == 0 || (v65 & 0x42) == 0) )
  {
    v71 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v71 )
    {
      v75 = *(_QWORD *)(v71 + 8 * (((unsigned __int64)&v111 >> 3) & 0x1FF));
      v71 = v65 | 0x20;
      if ( (v75 & 0x20) == 0 )
        v71 = v65;
      v65 = v71;
      if ( (v75 & 0x42) != 0 )
        v65 = v71 | 0x42;
    }
  }
  *(_QWORD *)(v44 + 40) ^= (*(_QWORD *)(v44 + 40) ^ (v65 >> 12)) & 0xFFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
    PagePriorityThread = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  else
    PagePriorityThread = PsGetPagePriorityThread((__int64)CurrentThread);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v23 |= 4u;
  v105 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v105, v71, v73, v74);
    while ( *(__int64 *)(v44 + 24) < 0 );
  }
  if ( v106 )
    *(_QWORD *)v44 |= 1uLL;
  *(_BYTE *)(v44 + 34) |= 0x10u;
  if ( v97 || (*(_BYTE *)(v17 + 35) & 8) == 0 || v103 )
    *(_BYTE *)(v44 + 35) &= ~8u;
  else
    *(_BYTE *)(v44 + 35) |= 8u;
  v78 = *(unsigned __int8 *)(v17 + 34) >> 6;
  if ( *(unsigned __int8 *)(v44 + 34) >> 6 != (_DWORD)v78 )
    MiChangePageAttribute(48 * Page - 0x58000000000LL, v78, 1LL);
  MiSetPfnTbFlushStamp(48 * Page - 0x58000000000LL, 0, 1);
  v79 = *(_QWORD *)(v44 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(v44 + 8) = v59;
  *(_QWORD *)(v44 + 24) = v79 | 1;
  *(_BYTE *)(v44 + 35) ^= (*(_BYTE *)(v44 + 35) ^ PagePriorityThread) & 7;
  *(_BYTE *)(v44 + 34) = *(_BYTE *)(v44 + 34) & 0xF8 | 6;
  if ( v23 >= 4 )
    MiIdentifyPfn((__m128i *)(48 * Page - 0x58000000000LL), (unsigned __int64 *)&v118);
  _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v23 >= 4 )
  {
    *((_QWORD *)&v119 + 1) |= 8uLL;
    v122[0] = &v118;
    v122[1] = 32LL;
    EtwTraceKernelEvent((unsigned int)v122, 1, 671088641, 642, 289413890);
  }
  __incgsdword(0x2E94u);
  v80 = 1;
  if ( (v98 & 2) == 0 )
  {
    v80 = 9;
LABEL_165:
    v81 = a1;
    goto LABEL_166;
  }
  if ( (MiFlags & 0x40000) != 0 )
    goto LABEL_165;
  v81 = a1;
  if ( (MiFlags & 0x10000) == 0 )
  {
LABEL_166:
    if ( v81 >= 0xFFFF800000000000uLL )
      goto LABEL_169;
    goto LABEL_167;
  }
  if ( a1 >= 0xFFFF800000000000uLL )
  {
    v80 = 17;
    if ( (v102 & 2) != 0 )
      v80 = 49;
    goto LABEL_166;
  }
LABEL_167:
  if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    v80 |= 0x10u;
LABEL_169:
  MiCopyPage(Page, v117, 0LL, v80);
  if ( dword_140C4E768 )
  {
    v82 = PagePriorityThread < dword_140C4E76C;
    v83 = SessionVm;
    if ( !v82 )
      MiLogPageAccess(SessionVm, v59);
  }
  else
  {
    v83 = SessionVm;
  }
  v84 = v101;
  if ( (v23 & 1) == 0 )
  {
    if ( v101 < 0 || v97 != 1 )
      v84 = v101 | 0x42;
    v84 = v84 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
  }
  v126 = 20LL;
  v85 = v84 ^ (v84 ^ (Page << 12)) & 0xFFFFFFFFF000LL;
  v124 = 0;
  v127 = 0LL;
  v128 = 0LL;
  v101 = v85;
  v123 = v97;
  MiInsertTbFlushEntry((__int64)&v123, a1 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0);
  if ( (v80 & 0x20) != 0 || (v85 & 0x42) == 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE(v59, v85);
    MiFlushTbList(&v123);
    goto LABEL_203;
  }
  v87 = v85 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  if ( v59 >= 0xFFFFF6FB7DBED000uLL && v59 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow(v86, v87) )
  {
    *(_QWORD *)v59 = v87;
    MiWritePteShadow(v59, v87);
  }
  else
  {
    *(_QWORD *)v59 = v87;
  }
  MiFlushTbList(&v123);
  if ( v59 < 0xFFFFF6FB7DBED000uLL || v59 > 0xFFFFF6FB7DBED7F8uLL )
  {
LABEL_201:
    *(_QWORD *)v59 = v85;
    goto LABEL_203;
  }
  if ( !(unsigned int)MiPteHasShadow(v89, v88) )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v85 & 1) != 0 )
      v85 |= 0x8000000000000000uLL;
    goto LABEL_201;
  }
  if ( !HIBYTE(word_140C4DF48) && (v85 & 1) != 0 )
    v85 |= 0x8000000000000000uLL;
  *(_QWORD *)v59 = v85;
  MiWritePteShadow(v59, v85);
LABEL_203:
  v92 = Process;
  if ( v97 == 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  v107 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v107, v88, v90, v91);
    while ( *(__int64 *)(v17 + 24) < 0 );
  }
  if ( !v97 && !v103 )
  {
    v93 = *(_BYTE *)(v17 + 35);
    if ( (v93 & 8) != 0 )
      *(_BYTE *)(v17 + 35) = v93 & 0xF7;
  }
  MiDecrementShareCount(v17);
  _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v23 & 2) != 0 )
  {
    v94 = MiDecrementCombinedPte(v83, v112);
  }
  else
  {
    if ( (*(_BYTE *)(v83 + 184) & 7) != 0 )
      return 0LL;
    CloneAddress = MiLocateCloneAddress(v92, v112);
    if ( !CloneAddress )
      return 0LL;
    v94 = MiDecrementCloneBlockReference(CloneAddress, v96);
  }
  if ( v94 == 3 )
    MiChargeCommit(v113, 1uLL, 4u);
  return 0LL;
}
