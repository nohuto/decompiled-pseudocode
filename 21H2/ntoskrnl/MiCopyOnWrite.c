/*
 * XREFs of MiCopyOnWrite @ 0x1402E3B50
 * Callers:
 *     MiMakeDriverPagesPrivate @ 0x140298244 (MiMakeDriverPagesPrivate.c)
 *     MiValidFault @ 0x1402AE050 (MiValidFault.c)
 *     MiProbeLeafPteAccess @ 0x1402AFFF0 (MiProbeLeafPteAccess.c)
 *     MiCompleteProtoPteFault @ 0x1402B8690 (MiCompleteProtoPteFault.c)
 *     MiWalkVaRange @ 0x1402E0940 (MiWalkVaRange.c)
 *     MmProtectPool @ 0x1402F8098 (MmProtectPool.c)
 *     MiSplitPrivatePage @ 0x140317D00 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x140319288 (MiCopyToUserVa.c)
 *     MiSystemFault @ 0x14031C150 (MiSystemFault.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 *     MiLockPagedAddress @ 0x14036BAD4 (MiLockPagedAddress.c)
 *     MiFaultInPagedPool @ 0x14052D354 (MiFaultInPagedPool.c)
 *     MiLockDriverPageRange @ 0x14052DC44 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x140530FD4 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x140535B5C (MmReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EE0C (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x140547C24 (MiMakeProtoPrivate.c)
 *     MiValidVirtualizationFault @ 0x14054919C (MiValidVirtualizationFault.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x140239628 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiUnlockPageTableCharges @ 0x14025DD38 (MiUnlockPageTableCharges.c)
 *     MiLocateAddress @ 0x14027CD80 (MiLocateAddress.c)
 *     EtwTraceKernelEvent @ 0x14029BFE0 (EtwTraceKernelEvent.c)
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiChargeCommit @ 0x1402BF3D0 (MiChargeCommit.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     MiLocateCloneAddress @ 0x1402E3758 (MiLocateCloneAddress.c)
 *     MiComputeFaultNode @ 0x1402E3950 (MiComputeFaultNode.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiSetPfnTbFlushStamp @ 0x1402E49B0 (MiSetPfnTbFlushStamp.c)
 *     MiDecrementShareCount @ 0x1402E4A10 (MiDecrementShareCount.c)
 *     MiCopyPage @ 0x1402E4A70 (MiCopyPage.c)
 *     MiWriteValidPteVolatile @ 0x1402E5BC0 (MiWriteValidPteVolatile.c)
 *     MiGetWsleProtection @ 0x1402E5C50 (MiGetWsleProtection.c)
 *     PsGetPagePriorityThread @ 0x1402E7020 (PsGetPagePriorityThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiChangePageAttribute @ 0x14030EF34 (MiChangePageAttribute.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiInsertTbFlushEntry @ 0x140340AC0 (MiInsertTbFlushEntry.c)
 *     MiLogPageAccess @ 0x1403453A0 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x140346270 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiIdentifyPfn @ 0x140353FA0 (MiIdentifyPfn.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiDecrementCombinedPte @ 0x140367074 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiDecrementCloneBlockReference @ 0x14055A0C8 (MiDecrementCloneBlockReference.c)
 */

__int64 __fastcall MiCopyOnWrite(ULONG_PTR a1, ULONG_PTR *a2, __int64 Page, int a4)
{
  ULONG_PTR v4; // rbx
  unsigned int v6; // esi
  struct _LIST_ENTRY *Flink; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  unsigned __int64 v10; // rsi
  struct _LIST_ENTRY *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // r14d
  __int64 v15; // r13
  BOOL v16; // r12d
  int SystemRegionType; // eax
  __int64 v18; // rdx
  int v19; // r8d
  unsigned int v20; // esi
  int v21; // r8d
  int v22; // r8d
  unsigned int v24; // r13d
  unsigned __int64 *v25; // r12
  unsigned __int64 v26; // rbx
  struct _LIST_ENTRY *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int8 v30; // cl
  int v31; // eax
  char v32; // r12
  int WsleProtection; // eax
  __int64 v34; // r8
  __int64 v35; // r9
  int v36; // ebx
  signed __int32 v37; // eax
  __int64 v38; // rbx
  __int64 **Address; // rax
  unsigned int v40; // ecx
  __int64 v41; // r14
  unsigned __int64 *v42; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v45; // eax
  _QWORD *v46; // rdx
  unsigned __int64 *v47; // r12
  unsigned __int64 v48; // r13
  __int64 v49; // r8
  struct _LIST_ENTRY *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  unsigned __int64 *v53; // r12
  unsigned __int64 v54; // rbx
  struct _LIST_ENTRY *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rdx
  struct _LIST_ENTRY *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  struct _KTHREAD *CurrentThread; // rcx
  unsigned int PagePriorityThread; // r12d
  __int64 v63; // rdx
  unsigned __int64 v64; // rax
  unsigned int v65; // ebx
  unsigned __int64 v66; // rax
  bool v67; // cf
  __int64 v68; // r12
  unsigned __int64 v69; // rax
  __int64 v70; // rdi
  unsigned __int64 v71; // rdx
  __int64 v72; // rdi
  char v73; // al
  int v74; // eax
  _QWORD *CloneAddress; // rax
  ULONG_PTR v76; // rdx
  int v77; // [rsp+30h] [rbp-D0h]
  int v78; // [rsp+34h] [rbp-CCh]
  __int64 SessionVm; // [rsp+40h] [rbp-C0h]
  __int64 v81; // [rsp+48h] [rbp-B8h] BYREF
  int v82; // [rsp+50h] [rbp-B0h]
  int v83; // [rsp+54h] [rbp-ACh]
  int v84; // [rsp+58h] [rbp-A8h]
  int v85; // [rsp+5Ch] [rbp-A4h] BYREF
  int v86; // [rsp+60h] [rbp-A0h]
  int v87; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 **v88; // [rsp+68h] [rbp-98h] BYREF
  _KPROCESS *Process; // [rsp+70h] [rbp-90h]
  __int64 *v90; // [rsp+78h] [rbp-88h]
  unsigned __int64 v91; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v92; // [rsp+88h] [rbp-78h]
  __int64 v93; // [rsp+90h] [rbp-70h]
  __int128 v94; // [rsp+98h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 *v96; // [rsp+C0h] [rbp-40h]
  __int64 v97; // [rsp+C8h] [rbp-38h]
  __int128 v98; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v99; // [rsp+E0h] [rbp-20h]
  _OWORD v100[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v101; // [rsp+170h] [rbp+70h]
  _QWORD v102[2]; // [rsp+180h] [rbp+80h] BYREF
  int v103; // [rsp+190h] [rbp+90h] BYREF
  __int16 v104; // [rsp+194h] [rbp+94h]
  __int16 v105; // [rsp+196h] [rbp+96h]
  __int64 v106; // [rsp+198h] [rbp+98h]
  __int64 v107; // [rsp+1A0h] [rbp+A0h]
  __int64 v108; // [rsp+1A8h] [rbp+A8h]
  __int128 v109; // [rsp+1B0h] [rbp+B0h]
  __int128 v110; // [rsp+1C0h] [rbp+C0h]
  __int128 v111; // [rsp+1D0h] [rbp+D0h]
  __int128 v112; // [rsp+1E0h] [rbp+E0h]
  __int128 v113; // [rsp+1F0h] [rbp+F0h]
  __int128 v114; // [rsp+200h] [rbp+100h]
  __int128 v115; // [rsp+210h] [rbp+110h]
  __int128 v116; // [rsp+220h] [rbp+120h]
  __int128 v117; // [rsp+230h] [rbp+130h]
  __int64 v118; // [rsp+240h] [rbp+140h]

  v4 = *a2;
  v105 = 0;
  v94 = 0LL;
  v118 = 0LL;
  v109 = 0LL;
  v82 = a4;
  v6 = (unsigned int)a2;
  v110 = 0LL;
  v90 = (__int64 *)a2;
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  v98 = 0LL;
  v99 = 0LL;
  v84 = MiPteInShadowRange(a2);
  if ( v84 && (unsigned int)MiPteHasShadow() && (v4 & 1) != 0 && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v8 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)v6 >> 3) & 0x1FF));
      v9 = v4 | 0x20;
      if ( (v8 & 0x20) == 0 )
        v9 = v4;
      v4 = v9;
      if ( (v8 & 0x42) != 0 )
        v4 = v9 | 0x42;
    }
  }
  v81 = v4;
  v10 = v4;
  if ( (unsigned int)MiPteInShadowRange(&v81)
    && (unsigned int)MiPteHasShadow()
    && (v4 & 1) != 0
    && ((v4 & 0x20) == 0 || (v4 & 0x42) == 0) )
  {
    v11 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v11 )
    {
      v10 = v4 | 0x20;
      v12 = *((_QWORD *)&v11->Flink + (((unsigned __int64)&v81 >> 3) & 0x1FF));
      if ( (v12 & 0x20) == 0 )
        v10 = v4;
      if ( (v12 & 0x42) != 0 )
        v10 |= 0x42uLL;
    }
  }
  v97 = (v10 >> 12) & 0xFFFFFFFFFLL;
  v13 = 48 * v97 - 0x58000000000LL;
  v88 = 0LL;
  v14 = 0;
  v15 = *(_QWORD *)(v13 + 8);
  v16 = (v4 & 0x200) == 0;
  v92 = v15 | 0x8000000000000000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SystemRegionType = MiGetSystemRegionType(a1);
  switch ( SystemRegionType )
  {
    case 1:
      SessionVm = MiGetSessionVm(1LL, v18, 2LL);
      v20 = (v4 & 0x200) == 0;
      if ( (*(_QWORD *)(v13 + 40) & 0x1000000000LL) == 0 && v15 > 0 )
        v20 = v19 | v16;
      v77 = v19;
      break;
    case 12:
      v77 = 0;
      SessionVm = MiGetAnyMultiplexedVm(1LL);
      v20 = (v4 & 0x200) == 0;
      if ( (*(_QWORD *)(v13 + 40) & 0x1000000000LL) == 0 && v15 > 0 )
        v20 = v21 | v16;
      break;
    case 9:
    case 14:
      KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 2uLL);
    case 6:
      v77 = 0;
      SessionVm = MiGetAnyMultiplexedVm(2LL);
      v20 = v22 | v16;
      if ( (*(_QWORD *)(v13 + 40) & 0x1000000000LL) != 0 || v15 <= 0 )
        KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 0LL);
      break;
    case 5:
      KeBugCheckEx(0x1Au, 0x3300uLL, a1, v4, 1uLL);
    default:
      if ( Process[1].Affinity.Bitmap[10] )
        return 3221226548LL;
      v77 = 1;
      v20 = (v4 & 0x200) == 0;
      SessionVm = (__int64)&Process[1].ActiveProcessorsPadding[6];
      if ( (*(_QWORD *)(v13 + 40) & 0x1000000000LL) == 0 && v15 > 0 )
        v20 = v16 | 2;
      v100[3] = __PAIR128__((unsigned __int64)&Process[1].ActiveProcessorsPadding[6], 0LL);
      v101 = 0LL;
      v100[0] = a1;
      memset(&v100[1], 0, 32);
      memset(&v100[4], 0, 64);
      v14 = MiComputeFaultNode((unsigned __int64 *)v100, 0LL, &v88);
      break;
  }
  v24 = 0;
  v93 = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(SessionVm + 174));
  v86 = *(_DWORD *)v13 & 1;
  v25 = (unsigned __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v96 = v25;
  v26 = *v25;
  if ( (unsigned int)MiPteInShadowRange(v25)
    && (unsigned int)MiPteHasShadow()
    && (v26 & 1) != 0
    && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
  {
    v27 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v27 )
    {
      v28 = *((_QWORD *)&v27->Flink + (((unsigned __int64)(unsigned int)v25 >> 3) & 0x1FF));
      v29 = v26 | 0x20;
      if ( (v28 & 0x20) == 0 )
        v29 = v26;
      v26 = v29;
      if ( (v28 & 0x42) != 0 )
        v26 = v29 | 0x42;
    }
  }
  v30 = HIBYTE(v26) & 0xF | (16 * ((v26 >> 60) & 7));
  v83 = v82 & 1;
  if ( (v82 & 1) != 0 || (HIBYTE(v26) & 0xF) == 0xA )
  {
    v31 = v77;
  }
  else
  {
    v31 = v77;
    if ( (HIBYTE(v26) & 0xF) == 9 )
    {
      v30 = (16 * ((v26 >> 60) & 7)) | 0xA;
    }
    else if ( v77 != 1 && (*(_BYTE *)(v13 + 35) & 8) != 0 )
    {
      v30 = (16 * ((v26 >> 60) & 7)) | 0xA;
    }
  }
  v32 = v30 & 0xF;
  if ( (v30 & 0xF) == 0xA )
    goto LABEL_67;
  if ( v32 == 8 && v31 != 2 )
  {
    v24 = 1;
    if ( (*(_DWORD *)(v13 + 16) & 0x400LL) != 0 )
      v24 = 2;
  }
  WsleProtection = MiGetWsleProtection(a1, v30);
  if ( !WsleProtection )
LABEL_67:
    WsleProtection = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(v13 + 16) >> 5) & 0x1F;
  v36 = MmMakeProtectNotWriteCopy[WsleProtection];
  v78 = v36;
  if ( Page == -1 )
  {
    MiInitializePageColorBase(SessionVm, v14, (__int64)&v94);
    v37 = _InterlockedExchangeAdd((volatile signed __int32 *)v94, 1u);
    Page = MiGetPage(v93, DWORD2(v94) & (unsigned int)v37 | HIDWORD(v94), 0LL);
    if ( Page == -1 )
      return 3221225495LL;
  }
  if ( v24 )
  {
    if ( v24 >= 2 )
    {
      v38 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v13 + 40) >> 39) & 0x3FFLL));
      MiReturnCommit(v38, 1LL, v34, v35);
      if ( v77 == 1 )
        _InterlockedDecrement64((volatile signed __int64 *)(v38 + 7616));
      v36 = v78;
    }
    MiUnlockPageTableCharges(48 * (*(_QWORD *)(v13 + 40) & 0xFFFFFFFFFLL) - 0x58000000000LL, 1, v34, v35);
  }
  if ( v36 == 24 )
  {
    Address = v88;
    LOBYTE(v36) = 1;
    LOBYTE(v78) = 1;
    if ( v88 || (Address = MiLocateAddress(a1), (v88 = Address) != 0LL) )
    {
      v40 = (*((_DWORD *)Address + 12) >> 7) & 0x1F;
      if ( v40 >> 3 == 3 && (v40 & 7) != 0 )
      {
        LOBYTE(v36) = 25;
      }
      else if ( v40 >> 3 == 1 )
      {
        LOBYTE(v36) = 9;
      }
      LOBYTE(v78) = v36;
    }
  }
  v41 = 48 * Page - 0x58000000000LL;
  *(_QWORD *)(v41 + 16) = MiSwizzleInvalidPte(32LL * (v36 & 0x1F));
  if ( v32 == 10 )
  {
    v48 = (unsigned __int64)v90;
  }
  else
  {
    v42 = (unsigned __int64 *)&unk_140C4F800;
    *(_QWORD *)&LockHandle.OldIrql = 0LL;
    if ( (*(_BYTE *)(SessionVm + 184) & 7) != 2 )
      v42 = (unsigned __int64 *)(SessionVm + 256);
    LockHandle.LockQueue.Lock = v42;
    LockHandle.LockQueue.Next = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v45 = SchedulerAssist[6];
        SchedulerAssist[6] = v45 + 1;
        if ( v45 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&LockHandle, v42);
    }
    else
    {
      v46 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v42, (__int64)&LockHandle);
      if ( v46 )
        KxWaitForLockOwnerShip((__int64)&LockHandle, v46);
    }
    ++*(_QWORD *)(SessionVm + 144);
    if ( a1 < 0xFFFFF68000000000uLL || a1 > 0xFFFFF6FFFFFFFFFFuLL )
      ++*(_QWORD *)(SessionVm + 128);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v47 = v96;
    if ( (unsigned int)MiPteInShadowRange(v96) )
      MiPteHasShadow();
    MiWriteValidPteVolatile(v47, 0x80000000LL);
    v48 = (unsigned __int64)v90;
    v49 = *v90;
    if ( v84 && (unsigned int)MiPteHasShadow() && (v49 & 1) != 0 && ((v49 & 0x20) == 0 || (v49 & 0x42) == 0) )
    {
      v50 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v50 )
      {
        v51 = *((_QWORD *)&v50->Flink + ((v48 >> 3) & 0x1FF));
        v52 = v49 | 0x20;
        if ( (v51 & 0x20) == 0 )
          v52 = v49;
        v49 = v52;
        if ( (v51 & 0x42) != 0 )
          v49 = v52 | 0x42;
      }
    }
    v81 = v49;
  }
  *(_WORD *)(v41 + 32) = 1;
  v53 = (unsigned __int64 *)(((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v54 = *v53;
  if ( (unsigned int)MiPteInShadowRange(v53)
    && (unsigned int)MiPteHasShadow()
    && (v54 & 1) != 0
    && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
  {
    v55 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v55 )
    {
      v56 = *((_QWORD *)&v55->Flink + ((((v48 >> 9) & 0xFFFFFFF8) >> 3) & 0x1FF));
      v57 = v54 | 0x20;
      if ( (v56 & 0x20) == 0 )
        v57 = v54;
      v54 = v57;
      if ( (v56 & 0x42) != 0 )
        v54 = v57 | 0x42;
    }
  }
  v91 = v54;
  if ( (unsigned int)MiPteInShadowRange(&v91)
    && (unsigned int)MiPteHasShadow()
    && (v54 & 1) != 0
    && ((v54 & 0x20) == 0 || (v54 & 0x42) == 0) )
  {
    v58 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( v58 )
    {
      v59 = *((_QWORD *)&v58->Flink + (((unsigned __int64)&v91 >> 3) & 0x1FF));
      v60 = v54 | 0x20;
      if ( (v59 & 0x20) == 0 )
        v60 = v54;
      v54 = v60;
      if ( (v59 & 0x42) != 0 )
        v54 = v60 | 0x42;
    }
  }
  *(_QWORD *)(v41 + 40) ^= (*(_QWORD *)(v41 + 40) ^ (v54 >> 12)) & 0xFFFFFFFFFLL;
  CurrentThread = KeGetCurrentThread();
  if ( ((__int64)CurrentThread[1].Queue & 0x100) != 0 )
    PagePriorityThread = (unsigned __int64)((__int64)CurrentThread[1].Queue & 0xE00) >> 9;
  else
    PagePriorityThread = PsGetPagePriorityThread(CurrentThread);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x8000001) != 0 )
    v20 |= 4u;
  v85 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v41 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v85);
    while ( *(__int64 *)(v41 + 24) < 0 );
  }
  if ( v86 )
    *(_QWORD *)v41 |= 1uLL;
  *(_BYTE *)(v41 + 34) |= 0x10u;
  if ( v77 || (*(_BYTE *)(v13 + 35) & 8) == 0 || v83 )
    *(_BYTE *)(v41 + 35) &= ~8u;
  else
    *(_BYTE *)(v41 + 35) |= 8u;
  v63 = *(unsigned __int8 *)(v13 + 34) >> 6;
  if ( *(unsigned __int8 *)(v41 + 34) >> 6 != (_DWORD)v63 )
    MiChangePageAttribute(48 * Page - 0x58000000000LL, v63, 1LL);
  MiSetPfnTbFlushStamp(48 * Page - 0x58000000000LL, 0LL, 1LL);
  v64 = *(_QWORD *)(v41 + 24) & 0xC000000000000001uLL;
  *(_QWORD *)(v41 + 8) = v48;
  *(_QWORD *)(v41 + 24) = v64 | 1;
  *(_BYTE *)(v41 + 35) ^= (*(_BYTE *)(v41 + 35) ^ PagePriorityThread) & 7;
  *(_BYTE *)(v41 + 34) = *(_BYTE *)(v41 + 34) & 0xF8 | 6;
  if ( v20 >= 4 )
    MiIdentifyPfn(48 * Page - 0x58000000000LL, &v98);
  _InterlockedAnd64((volatile signed __int64 *)(v41 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v20 >= 4 )
  {
    *((_QWORD *)&v99 + 1) |= 8uLL;
    v102[0] = &v98;
    v102[1] = 32LL;
    EtwTraceKernelEvent((int)v102, 1, 0x28000001u, 642, 289413890);
  }
  __incgsdword(0x2E94u);
  v65 = 1;
  if ( (v78 & 2) == 0 )
  {
    v65 = 9;
LABEL_157:
    v66 = a1;
    goto LABEL_158;
  }
  if ( (MiFlags & 0x40000) != 0 )
    goto LABEL_157;
  v66 = a1;
  if ( (MiFlags & 0x10000) == 0 )
  {
LABEL_158:
    if ( v66 >= 0xFFFF800000000000uLL )
      goto LABEL_161;
    goto LABEL_159;
  }
  if ( a1 >= 0xFFFF800000000000uLL )
  {
    v65 = 17;
    if ( (v82 & 2) != 0 )
      v65 = 49;
    goto LABEL_158;
  }
LABEL_159:
  if ( (KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle & 1) != 0 )
    v65 |= 0x10u;
LABEL_161:
  MiCopyPage(Page, v97, 0LL, v65);
  if ( dword_140C4E868 )
  {
    v67 = PagePriorityThread < dword_140C4E86C;
    v68 = SessionVm;
    if ( !v67 )
      MiLogPageAccess(SessionVm, v48);
  }
  else
  {
    v68 = SessionVm;
  }
  v69 = v81;
  if ( (v20 & 1) == 0 )
  {
    if ( v81 < 0 || v77 != 1 )
      v69 = v81 | 0x42;
    v69 = v69 & 0xFFFFFFFFFFFFF5DFuLL | 0x820;
  }
  v106 = 20LL;
  v70 = v69 ^ (v69 ^ (Page << 12)) & 0xFFFFFFFFF000LL;
  v104 = 0;
  v107 = 0LL;
  v108 = 0LL;
  v81 = v70;
  v103 = v77;
  MiInsertTbFlushEntry(&v103, a1 & 0xFFFFFFFFFFFFF000uLL, 1LL, 0LL);
  if ( (v65 & 0x20) != 0 || (v70 & 0x42) == 0 )
  {
    MI_INTERLOCKED_EXCHANGE_PTE((volatile __int64 *)v48, v70);
    MiFlushTbList(&v103);
    goto LABEL_195;
  }
  v71 = v70 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
  if ( v48 >= 0xFFFFF6FB7DBED000uLL && v48 <= 0xFFFFF6FB7DBED7F8uLL && (unsigned int)MiPteHasShadow() )
  {
    *(_QWORD *)v48 = v71;
    MiWritePteShadow(v48, v71);
  }
  else
  {
    *(_QWORD *)v48 = v71;
  }
  MiFlushTbList(&v103);
  if ( v48 < 0xFFFFF6FB7DBED000uLL || v48 > 0xFFFFF6FB7DBED7F8uLL )
  {
LABEL_193:
    *(_QWORD *)v48 = v70;
    goto LABEL_195;
  }
  if ( !(unsigned int)MiPteHasShadow() )
  {
    if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 && (v70 & 1) != 0 )
      v70 |= 0x8000000000000000uLL;
    goto LABEL_193;
  }
  if ( !HIBYTE(word_140C4E048) && (v70 & 1) != 0 )
    v70 |= 0x8000000000000000uLL;
  *(_QWORD *)v48 = v70;
  MiWritePteShadow(v48, v70);
LABEL_195:
  v72 = (__int64)Process;
  if ( v77 == 1 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 1uLL);
  v87 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v87);
    while ( *(__int64 *)(v13 + 24) < 0 );
  }
  if ( !v77 && !v83 )
  {
    v73 = *(_BYTE *)(v13 + 35);
    if ( (v73 & 8) != 0 )
      *(_BYTE *)(v13 + 35) = v73 & 0xF7;
  }
  MiDecrementShareCount(v13);
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v20 & 2) != 0 )
  {
    v74 = MiDecrementCombinedPte(v68, v92);
  }
  else
  {
    if ( (*(_BYTE *)(v68 + 184) & 7) != 0 )
      return 0LL;
    CloneAddress = MiLocateCloneAddress(v72, v92);
    if ( !CloneAddress )
      return 0LL;
    v74 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v76);
  }
  if ( v74 == 3 )
    MiChargeCommit(v93, 1uLL, 4u);
  return 0LL;
}
