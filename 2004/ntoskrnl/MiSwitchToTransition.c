/*
 * XREFs of MiSwitchToTransition @ 0x140534A44
 * Callers:
 *     MmRotatePhysicalView @ 0x1406DE780 (MmRotatePhysicalView.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140221F20 (MiSetPfnBlink.c)
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiMakeTransitionPte @ 0x140234290 (MiMakeTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x14023A3C0 (MiFlushTbList.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025AF90 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiLockPageTableInternal @ 0x1402A0AD0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x1402A5AB0 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiObtainFaultCharges @ 0x1402ADCF0 (MiObtainFaultCharges.c)
 *     MiInsertTbFlushEntry @ 0x1402B0EF0 (MiInsertTbFlushEntry.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiGetContainingPageTable @ 0x1402B9DD0 (MiGetContainingPageTable.c)
 *     MiReleaseFreshPage @ 0x1402E1668 (MiReleaseFreshPage.c)
 *     MiChangePageAttributeBatch @ 0x1402F70C0 (MiChangePageAttributeBatch.c)
 *     MiReturnFaultCharges @ 0x140311E30 (MiReturnFaultCharges.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1403161BC (MiPageAttributeBatchChangeNeeded.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140324580 (ExAcquireRundownProtectionCacheAware.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiIsProbeActive @ 0x140335290 (MiIsProbeActive.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiAddMdlTracker @ 0x14052B384 (MiAddMdlTracker.c)
 *     MiWaitForFreePage @ 0x140556D5C (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x1408C4FB4 (MiGetReadyInPageBlock.c)
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
  unsigned int v11; // r13d
  unsigned int v12; // ebx
  signed __int32 v13; // r8d
  __int64 Page; // rax
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  unsigned int v20; // r12d
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  unsigned __int8 v23; // al
  __int64 v24; // r11
  ULONG_PTR v25; // rbx
  unsigned __int64 v26; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v28; // rax
  unsigned __int16 v29; // cx
  __int64 v30; // r15
  __int64 v31; // rax
  unsigned int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // r8
  unsigned __int64 v35; // r9
  unsigned __int8 v36; // r11
  __int64 v37; // rax
  struct _KTHREAD *v38; // rcx
  __int64 v39; // r8
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
  __int64 v55; // rdx
  __int64 v56; // r9
  __int64 v57; // r8
  __int64 v58; // rax
  __int64 v59; // r8
  unsigned int v60; // edi
  _KPROCESS *v61; // rsi
  _KPROCESS *v62; // rdx
  unsigned __int8 v64; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v65; // [rsp+31h] [rbp-CFh]
  __int64 v66; // [rsp+38h] [rbp-C8h]
  volatile signed __int64 *v67; // [rsp+38h] [rbp-C8h]
  int v69; // [rsp+44h] [rbp-BCh]
  __int64 v71; // [rsp+50h] [rbp-B0h]
  unsigned int v72; // [rsp+58h] [rbp-A8h]
  __int64 v73; // [rsp+60h] [rbp-A0h]
  char EffectivePagePriorityThread; // [rsp+68h] [rbp-98h]
  ULONG_PTR v75; // [rsp+70h] [rbp-90h] BYREF
  __int64 v76; // [rsp+78h] [rbp-88h] BYREF
  __int64 ContainingPageTable; // [rsp+80h] [rbp-80h]
  __int64 ReadyInPageBlock; // [rsp+88h] [rbp-78h]
  __int64 v79; // [rsp+90h] [rbp-70h]
  unsigned __int64 v80; // [rsp+98h] [rbp-68h]
  unsigned __int64 v81; // [rsp+A0h] [rbp-60h]
  __int128 v82; // [rsp+A8h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C8h] [rbp-38h]
  _KPROCESS *Process; // [rsp+D0h] [rbp-30h]
  _QWORD v86[24]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = BugCheckParameter3;
  v82 = 0LL;
  memset(v86, 0, 0xB8uLL);
  v76 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  v81 = *(_QWORD *)(v4 + 32);
  v5 = ((v81 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v73 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v69 = 0;
  v6 = 0;
  MiInitializePageColorBase((__int64)&Process[1].ActiveProcessorsPadding[6], 0, (__int64)&v82);
  v66 = 0xFFFFFFFFFLL;
  v8 = 0LL;
  v9 = 0LL;
  v71 = *(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(v7 + 174));
  v11 = MiObtainFaultCharges((ULONG_PTR *)v71, v10, 2);
  v72 = v11;
  v12 = 0;
  if ( !v11 )
    goto LABEL_14;
  while ( 1 )
  {
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v82, 1u);
    Page = MiGetPage(v71, DWORD2(v82) & (unsigned int)v13 | HIDWORD(v82), 0LL);
    v15 = Page;
    if ( Page != -1 )
    {
      v8 = 48 * Page - 0x58000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v8, a3) == 1 )
      {
        *(_QWORD *)(v8 + 16) = v9;
        v9 = v8;
      }
      MiSetPfnBlink(v8, v66, 0);
      v66 = v15;
      ++v12;
      goto LABEL_8;
    }
    if ( v12 )
      break;
    MiWaitForFreePage(v71);
LABEL_8:
    if ( v12 == v11 )
      goto LABEL_11;
  }
  MiReturnFaultCharges(v71, v11 - v12, 0);
  v11 = v12;
  v72 = v12;
LABEL_11:
  if ( v9 )
  {
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v76, v16, v17, v18);
    MiChangePageAttributeBatch(v9, a3, v76);
  }
  v4 = BugCheckParameter3;
LABEL_14:
  v19 = v73;
  v20 = 0;
  ContainingPageTable = -1LL;
  v21 = v11;
  v22 = 0LL;
  v80 = v5 + 8 * v21;
  v23 = MiLockWorkingSetShared(v73);
  v65 = v23;
  if ( v5 >= v80 )
    goto LABEL_66;
  v24 = 1LL;
  v84 = v4 - ((v81 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  while ( 2 )
  {
    if ( v22 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v19, v22);
        goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v22 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v19, v22, 0LL);
      ContainingPageTable = MiGetContainingPageTable(v5);
      v24 = 1LL;
    }
    if ( (unsigned int)MiIsProbeActive(v5, v24, 3) )
      goto LABEL_63;
    v75 = MI_READ_PTE_LOCK_FREE(v5);
    v25 = v75;
    if ( (v75 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v5, v75, BugCheckParameter3);
    v26 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v75);
    BugCheckParameter4 = 48 * ((v26 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(48 * ((v26 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      goto LABEL_29;
    if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v5 )
      KeBugCheckEx(0x1Au, 0x41300uLL, v5, v25, BugCheckParameter4);
    v28 = *(_QWORD *)(BugCheckParameter4 + 40);
    v29 = 1;
    if ( (v28 & 0x1000000000LL) != 0 || (v28 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
      v29 = 2;
    if ( *(_WORD *)(BugCheckParameter4 + 32) < v29 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v5, v25, BugCheckParameter4);
    if ( *(_WORD *)(BugCheckParameter4 + 32) <= v29 )
    {
LABEL_29:
      v30 = v8;
      v67 = (volatile signed __int64 *)(v8 + 24);
      v31 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL;
      if ( v31 == 0xFFFFFFFFFLL )
        v8 = 0LL;
      else
        v8 = 48 * v31 - 0x58000000000LL;
      v79 = (v30 + 0x58000000000LL) / 48;
      v32 = (v25 & 0x800) != 0 ? 4 : 1;
      if ( a3 == 2 )
      {
        v32 |= 0x18u;
      }
      else if ( !a3 )
      {
        v32 |= 8u;
      }
      v75 = MiSwizzleInvalidPte(32LL * v32);
      *(_QWORD *)(v30 + 16) = v75;
      if ( (v6 & v36) == 0 )
      {
        v37 = ReadyInPageBlock;
        v38 = CurrentThread;
        *(_DWORD *)(ReadyInPageBlock + 192) |= 0x20u;
        *(_DWORD *)(v37 + 80) = 0;
        *(_QWORD *)(v37 + 88) = 0LL;
        v6 |= v36;
        *(_QWORD *)(v37 + 248) = v30;
        *(_QWORD *)(v37 + 152) = v38;
      }
      *(_QWORD *)(v30 + 40) ^= v35 & (ContainingPageTable ^ *(_QWORD *)(v30 + 40));
      v64 = MiLockPageInline(v30, v33, v34, (_DWORD *)v35);
      v40 = ReadyInPageBlock;
      *(_BYTE *)(v30 + 34) |= 0x20u;
      if ( v40 )
        v41 = v40 + 32;
      else
        v41 = 0LL;
      *(_QWORD *)v30 = v41;
      *v67 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v30, 1LL, v39);
      v42 = *(_BYTE *)(v30 + 34) & 0xFA;
      *(_QWORD *)(v30 + 8) = v5;
      *(_BYTE *)(v30 + 34) = v42 | 2;
      *(_BYTE *)(v30 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v30 + 35)) & 7;
      if ( ((*(_QWORD *)(v30 + 40) >> 39) & 0x3FF) != 0 )
        ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v71 + 2144));
      _InterlockedAnd64(v67, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v44 = v64;
        if ( v64 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v47 = ~(unsigned __int16)(-1LL << (v64 + 1));
          v48 = (v47 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v47;
          if ( v48 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        v44 = v64;
      }
      __writecr8(v44);
      MiReturnFaultCharges(v71, 1uLL, 0);
      TransitionPte = MiMakeTransitionPte(v79, v32);
      v50 = TransitionPte;
      v75 = TransitionPte;
      v51 = TransitionPte;
      if ( MiPteInShadowRange(v5) )
      {
        HasShadow = MiPteHasShadow();
        v24 = 1LL;
        if ( HasShadow )
        {
          v54 = 1;
          if ( !HIBYTE(word_140C4DE08) )
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
        v24 = 1LL;
      }
      *(_QWORD *)v5 = v51;
      if ( v54 )
        MiWritePteShadow(v5, v51, v52);
      v20 += v24;
      v19 = v73;
      *(_QWORD *)(v84 + v5 + 48) = v79;
      v5 += 8LL;
      if ( v5 >= v80 )
        goto LABEL_63;
      continue;
    }
    break;
  }
  v19 = v73;
  v69 = 1;
LABEL_63:
  if ( v22 )
    MiUnlockPageTableInternal(v19, v22);
  v23 = v65;
  v4 = BugCheckParameter3;
LABEL_66:
  MiUnlockWorkingSetShared(v19, v23);
  if ( v8 )
  {
    do
    {
      v57 = v8;
      v58 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL;
      if ( v58 == 0xFFFFFFFFFLL )
        v8 = 0LL;
      else
        v8 = 48 * v58 - 0x58000000000LL;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v57 + 16), v55, v57, v56);
      MiReleaseFreshPage(v59);
    }
    while ( v8 );
    v4 = BugCheckParameter3;
  }
  if ( v20 == v72 )
  {
    v60 = v69;
  }
  else
  {
    MiReturnFaultCharges(v71, v72 - v20, 0);
    v60 = v69;
    if ( !v20 )
      v60 = 1;
  }
  *(_DWORD *)(v4 + 40) = v20 << 12;
  if ( v20 )
  {
    v61 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], v20);
    WORD2(v86[0]) = 0;
    v86[2] = 0LL;
    v86[3] = 0LL;
    LODWORD(v86[0]) = 1;
    LODWORD(v86[1]) = 20;
    MiInsertTbFlushEntry((__int64)v86, v81 & 0xFFFFFFFFFFFFF000uLL, v20, 0);
    MiFlushTbList((__int64)v86, v62);
    *(_QWORD *)(v4 + 16) = v61;
    *(_WORD *)(v4 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v61[1].Affinity.Bitmap[14], v20);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v4, v20, 4);
  }
  return v60;
}
