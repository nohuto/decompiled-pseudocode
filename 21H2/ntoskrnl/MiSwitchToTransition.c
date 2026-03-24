/*
 * XREFs of MiSwitchToTransition @ 0x140539F14
 * Callers:
 *     MmRotatePhysicalView @ 0x140682910 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020EAF0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x140213610 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiObtainFaultCharges @ 0x14021BA90 (MiObtainFaultCharges.c)
 *     MiGetContainingPageTable @ 0x14023E450 (MiGetContainingPageTable.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     MiGetEffectivePagePriorityThread @ 0x140270E84 (MiGetEffectivePagePriorityThread.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiReturnFaultCharges @ 0x14028E1E4 (MiReturnFaultCharges.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402906E0 (ExAcquireRundownProtectionCacheAware.c)
 *     MiIsProbeActive @ 0x140299E04 (MiIsProbeActive.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1402E3FE0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiReleaseFreshPage @ 0x1402E6774 (MiReleaseFreshPage.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     MiChangePageAttributeBatch @ 0x1403035A0 (MiChangePageAttributeBatch.c)
 *     MiSetPfnBlink @ 0x140318130 (MiSetPfnBlink.c)
 *     MiAddLockedPageCharge @ 0x14031A408 (MiAddLockedPageCharge.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140329F30 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x140335D70 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x14033B520 (MiFlushTbList.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiAddMdlTracker @ 0x140530854 (MiAddMdlTracker.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x1408C85B4 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR BugCheckParameter3, __int64 a2, unsigned int a3)
{
  ULONG_PTR v4; // r15
  unsigned __int64 v5; // r14
  unsigned __int8 v6; // di
  __int64 v7; // r11
  __int64 v8; // rsi
  __int64 v9; // r12
  unsigned int v10; // r10d
  __int64 v11; // rdx
  __int64 v12; // r8
  _DWORD *v13; // r9
  unsigned int v14; // r13d
  unsigned int v15; // ebx
  signed __int32 v16; // r8d
  __int64 Page; // rax
  __int64 v18; // r15
  _DWORD *v19; // r9
  __int64 v20; // rbx
  unsigned int v21; // r12d
  __int64 v22; // rax
  unsigned __int64 v23; // r13
  unsigned __int8 v24; // al
  __int64 v25; // r11
  ULONG_PTR v26; // rbx
  unsigned __int64 v27; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v29; // rax
  unsigned __int16 v30; // cx
  __int64 v31; // r15
  __int64 v32; // rax
  unsigned int v33; // ebx
  __int64 v34; // rdx
  __int64 v35; // r8
  unsigned __int64 v36; // r9
  unsigned __int8 v37; // r11
  __int64 v38; // rax
  struct _KTHREAD *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  char v42; // al
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v44; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v47; // eax
  bool v48; // zf
  __int64 TransitionPte; // rax
  char v50; // r15
  __int64 v51; // rbx
  __int64 v52; // r8
  int HasShadow; // eax
  int v54; // eax
  __int64 v55; // r8
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  unsigned int v59; // edi
  _KPROCESS *v60; // rsi
  _KPROCESS *v61; // rdx
  unsigned __int8 v63; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v64; // [rsp+31h] [rbp-CFh]
  __int64 v65; // [rsp+38h] [rbp-C8h]
  volatile signed __int64 *v66; // [rsp+38h] [rbp-C8h]
  int v68; // [rsp+44h] [rbp-BCh]
  __int64 v70; // [rsp+50h] [rbp-B0h]
  unsigned int v71; // [rsp+58h] [rbp-A8h]
  __int64 v72; // [rsp+60h] [rbp-A0h]
  char EffectivePagePriorityThread; // [rsp+68h] [rbp-98h]
  ULONG_PTR v74; // [rsp+70h] [rbp-90h] BYREF
  __int64 v75; // [rsp+78h] [rbp-88h] BYREF
  __int64 ContainingPageTable; // [rsp+80h] [rbp-80h]
  __int64 ReadyInPageBlock; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h]
  unsigned __int64 v79; // [rsp+98h] [rbp-68h]
  unsigned __int64 v80; // [rsp+A0h] [rbp-60h]
  __int128 v81; // [rsp+A8h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v83; // [rsp+C8h] [rbp-38h]
  _KPROCESS *Process; // [rsp+D0h] [rbp-30h]
  _QWORD v85[24]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = BugCheckParameter3;
  v81 = 0LL;
  memset(v85, 0, 0xB8uLL);
  v75 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  v80 = *(_QWORD *)(v4 + 32);
  v5 = ((v80 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v72 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v68 = 0;
  v6 = 0;
  MiInitializePageColorBase((__int64)&Process[1].ActiveProcessorsPadding[6], 0, (__int64)&v81);
  v65 = 0xFFFFFFFFFLL;
  v8 = 0LL;
  v9 = 0LL;
  v70 = *(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(v7 + 174));
  v14 = MiObtainFaultCharges((ULONG_PTR *)v70, v10, 2);
  v71 = v14;
  v15 = 0;
  if ( !v14 )
    goto LABEL_14;
  while ( 1 )
  {
    v16 = _InterlockedExchangeAdd((volatile signed __int32 *)v81, 1u);
    Page = MiGetPage(v70, DWORD2(v81) & (unsigned int)v16 | HIDWORD(v81), 0LL);
    v18 = Page;
    if ( Page != -1 )
    {
      v8 = 48 * Page - 0x58000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v8, a3) == 1 )
      {
        *(_QWORD *)(v8 + 16) = v9;
        v9 = v8;
      }
      MiSetPfnBlink(v8, v65, 0);
      v65 = v18;
      ++v15;
      goto LABEL_8;
    }
    if ( v15 )
      break;
    MiWaitForFreePage(v70);
LABEL_8:
    if ( v15 == v14 )
      goto LABEL_11;
  }
  MiReturnFaultCharges(v70, v14 - v15, 0);
  v14 = v15;
  v71 = v15;
LABEL_11:
  if ( v9 )
  {
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v75);
    MiChangePageAttributeBatch(v9, a3, v75, v19);
  }
  v4 = BugCheckParameter3;
LABEL_14:
  v20 = v72;
  v21 = 0;
  ContainingPageTable = -1LL;
  v22 = v14;
  v23 = 0LL;
  v79 = v5 + 8 * v22;
  v24 = MiLockWorkingSetShared(v72, v11, v12, v13);
  v64 = v24;
  if ( v5 >= v79 )
    goto LABEL_66;
  v25 = 1LL;
  v83 = v4 - ((v80 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  while ( 2 )
  {
    if ( v23 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v20, v23);
        goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v23 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v20, v23, 0LL);
      ContainingPageTable = MiGetContainingPageTable(v5);
      v25 = 1LL;
    }
    if ( (unsigned int)MiIsProbeActive(v5, v25, 3) )
      goto LABEL_63;
    v74 = MI_READ_PTE_LOCK_FREE(v5);
    v26 = v74;
    if ( (v74 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v5, v74, BugCheckParameter3);
    v27 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v74);
    BugCheckParameter4 = 48 * ((v27 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(48 * ((v27 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      goto LABEL_29;
    if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v5 )
      KeBugCheckEx(0x1Au, 0x41300uLL, v5, v26, BugCheckParameter4);
    v29 = *(_QWORD *)(BugCheckParameter4 + 40);
    v30 = 1;
    if ( (v29 & 0x1000000000LL) != 0 || (v29 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
      v30 = 2;
    if ( *(_WORD *)(BugCheckParameter4 + 32) < v30 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v5, v26, BugCheckParameter4);
    if ( *(_WORD *)(BugCheckParameter4 + 32) <= v30 )
    {
LABEL_29:
      v31 = v8;
      v66 = (volatile signed __int64 *)(v8 + 24);
      v32 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL;
      if ( v32 == 0xFFFFFFFFFLL )
        v8 = 0LL;
      else
        v8 = 48 * v32 - 0x58000000000LL;
      v78 = (v31 + 0x58000000000LL) / 48;
      v33 = (v26 & 0x800) != 0 ? 4 : 1;
      if ( a3 == 2 )
      {
        v33 |= 0x18u;
      }
      else if ( !a3 )
      {
        v33 |= 8u;
      }
      v74 = MiSwizzleInvalidPte(32LL * v33);
      *(_QWORD *)(v31 + 16) = v74;
      if ( (v6 & v37) == 0 )
      {
        v38 = ReadyInPageBlock;
        v39 = CurrentThread;
        *(_DWORD *)(ReadyInPageBlock + 192) |= 0x20u;
        *(_DWORD *)(v38 + 80) = 0;
        *(_QWORD *)(v38 + 88) = 0LL;
        v6 |= v37;
        *(_QWORD *)(v38 + 248) = v31;
        *(_QWORD *)(v38 + 152) = v39;
      }
      *(_QWORD *)(v31 + 40) ^= v36 & (ContainingPageTable ^ *(_QWORD *)(v31 + 40));
      v63 = MiLockPageInline(v31, v34, v35, (_DWORD *)v36);
      v40 = ReadyInPageBlock;
      *(_BYTE *)(v31 + 34) |= 0x20u;
      if ( v40 )
        v41 = v40 + 32;
      else
        v41 = 0LL;
      *(_QWORD *)v31 = v41;
      *v66 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v31, 1);
      v42 = *(_BYTE *)(v31 + 34) & 0xFA;
      *(_QWORD *)(v31 + 8) = v5;
      *(_BYTE *)(v31 + 34) = v42 | 2;
      *(_BYTE *)(v31 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v31 + 35)) & 7;
      if ( ((*(_QWORD *)(v31 + 40) >> 39) & 0x3FF) != 0 )
        ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v70 + 2144));
      _InterlockedAnd64(v66, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v44 = v63;
        if ( v63 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v47 = ~(unsigned __int16)(-1LL << (v63 + 1));
          v48 = (v47 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v47;
          if ( v48 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        v44 = v63;
      }
      __writecr8(v44);
      MiReturnFaultCharges(v70, 1uLL, 0);
      TransitionPte = MiMakeTransitionPte(v78, v33);
      v50 = TransitionPte;
      v74 = TransitionPte;
      v51 = TransitionPte;
      if ( MiPteInShadowRange(v5) )
      {
        HasShadow = MiPteHasShadow();
        v25 = 1LL;
        if ( HasShadow )
        {
          v54 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
LABEL_55:
            if ( (v50 & 1) != 0 )
              v51 |= 0x8000000000000000uLL;
          }
        }
        else
        {
          v54 = 0;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            goto LABEL_55;
        }
      }
      else
      {
        v54 = 0;
        v25 = 1LL;
      }
      *(_QWORD *)v5 = v51;
      if ( v54 )
        MiWritePteShadow(v5, v51, v52);
      v21 += v25;
      v20 = v72;
      *(_QWORD *)(v83 + v5 + 48) = v78;
      v5 += 8LL;
      if ( v5 >= v79 )
        goto LABEL_63;
      continue;
    }
    break;
  }
  v20 = v72;
  v68 = 1;
LABEL_63:
  if ( v23 )
    MiUnlockPageTableInternal(v20, v23);
  v24 = v64;
  v4 = BugCheckParameter3;
LABEL_66:
  MiUnlockWorkingSetShared(v20, v24);
  if ( v8 )
  {
    do
    {
      v55 = v8;
      v56 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL;
      if ( v56 == 0xFFFFFFFFFLL )
        v8 = 0LL;
      else
        v8 = 48 * v56 - 0x58000000000LL;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v55 + 16));
      MiReleaseFreshPage(v58, v57, v58);
    }
    while ( v8 );
    v4 = BugCheckParameter3;
  }
  if ( v21 == v71 )
  {
    v59 = v68;
  }
  else
  {
    MiReturnFaultCharges(v70, v71 - v21, 0);
    v59 = v68;
    if ( !v21 )
      v59 = 1;
  }
  *(_DWORD *)(v4 + 40) = v21 << 12;
  if ( v21 )
  {
    v60 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], v21);
    WORD2(v85[0]) = 0;
    v85[2] = 0LL;
    v85[3] = 0LL;
    LODWORD(v85[0]) = 1;
    LODWORD(v85[1]) = 20;
    MiInsertTbFlushEntry((__int64)v85, v80 & 0xFFFFFFFFFFFFF000uLL, v21, 0);
    MiFlushTbList((__int64)v85, v61);
    *(_QWORD *)(v4 + 16) = v60;
    *(_WORD *)(v4 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v60[1].Affinity.Bitmap[14], v21);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v4, v21, 4);
  }
  return v59;
}
