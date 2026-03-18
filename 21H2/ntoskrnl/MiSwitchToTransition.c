/*
 * XREFs of MiSwitchToTransition @ 0x1405954F4
 * Callers:
 *     MiReplaceRotateWithDemandZero @ 0x14096D10C (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiIsProbeActive @ 0x140201144 (MiIsProbeActive.c)
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x140220160 (ExAcquireRundownProtectionCacheAware.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiReturnFaultCharges @ 0x14024AA58 (MiReturnFaultCharges.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140266074 (MiPageAttributeBatchChangeNeeded.c)
 *     MiChangePageAttributeBatch @ 0x1402680C0 (MiChangePageAttributeBatch.c)
 *     MiReleaseFreshPage @ 0x140268408 (MiReleaseFreshPage.c)
 *     MiAddLockedPageCharge @ 0x140274508 (MiAddLockedPageCharge.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiInsertTbFlushEntry @ 0x1402CF280 (MiInsertTbFlushEntry.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiMakeTransitionPte @ 0x1402E4D28 (MiMakeTransitionPte.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402E670C (MiGetEffectivePagePriorityThread.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402E89B0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLockPageInline @ 0x1402F2700 (MiLockPageInline.c)
 *     MiSetPfnBlink @ 0x140313CA0 (MiSetPfnBlink.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiGetPage @ 0x1403250B0 (MiGetPage.c)
 *     MiObtainFaultCharges @ 0x140329630 (MiObtainFaultCharges.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiInitializePageColorBase @ 0x140339C20 (MiInitializePageColorBase.c)
 *     MiGetContainingPageTable @ 0x14033AC10 (MiGetContainingPageTable.c)
 *     MiSetPfnPteFrame @ 0x14033C3E0 (MiSetPfnPteFrame.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiAddMdlTracker @ 0x140584030 (MiAddMdlTracker.c)
 *     MiWaitForFreePage @ 0x1405B8348 (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x14096D038 (MiGetReadyInPageBlock.c)
 */

__int64 __fastcall MiSwitchToTransition(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r15
  ULONG_PTR *v9; // r14
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r12
  __int64 v12; // rbx
  signed __int32 v13; // r8d
  __int64 Page; // rax
  __int64 v15; // r14
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r13
  unsigned __int8 v19; // al
  __int64 v20; // r9
  __int64 v21; // r11
  ULONG_PTR v22; // rbx
  unsigned __int64 v23; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v25; // rax
  unsigned __int16 v26; // cx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rax
  unsigned int v31; // ebx
  char v32; // r11
  __int64 v33; // rax
  struct _KTHREAD *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rax
  __int64 v38; // rcx
  char v39; // al
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v41; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v44; // eax
  bool v45; // zf
  __int64 TransitionPte; // rax
  char v47; // r15
  __int64 v48; // rbx
  int HasShadow; // eax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // r8
  unsigned int v53; // edi
  ULONG_PTR v54; // rbx
  _KPROCESS *v55; // rsi
  unsigned __int8 v57; // [rsp+30h] [rbp-D0h]
  char v58; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v59; // [rsp+32h] [rbp-CEh]
  volatile signed __int64 *v60; // [rsp+38h] [rbp-C8h]
  int v62; // [rsp+44h] [rbp-BCh]
  __int64 v63; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v64; // [rsp+50h] [rbp-B0h]
  __int64 v65; // [rsp+50h] [rbp-B0h]
  __int64 v66; // [rsp+58h] [rbp-A8h]
  char EffectivePagePriorityThread; // [rsp+60h] [rbp-A0h]
  __int64 v68; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+70h] [rbp-90h]
  __int64 v70; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 ContainingPageTable; // [rsp+80h] [rbp-80h]
  __int64 ReadyInPageBlock; // [rsp+88h] [rbp-78h]
  unsigned __int64 v73; // [rsp+90h] [rbp-70h]
  unsigned __int64 v74; // [rsp+98h] [rbp-68h]
  __int128 v75; // [rsp+A0h] [rbp-60h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-50h]
  ULONG_PTR v77; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v78; // [rsp+C8h] [rbp-38h]
  _KPROCESS *Process; // [rsp+D0h] [rbp-30h]
  _QWORD v80[24]; // [rsp+E0h] [rbp-20h] BYREF

  BugCheckParameter3 = a1;
  v75 = 0LL;
  memset(v80, 0, 0xB8uLL);
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  v74 = *(_QWORD *)(a1 + 32);
  v62 = 0;
  v5 = ((v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v58 = 0;
  v66 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  MiInitializePageColorBase((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], 0, (__int64)&v75);
  v6 = 0LL;
  v7 = 0x3FFFFFFFFFLL;
  v8 = 0LL;
  v9 = *(ULONG_PTR **)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(v66 + 174));
  v63 = (__int64)v9;
  v11 = MiObtainFaultCharges(v9, v10, 2);
  v73 = v11;
  v12 = 0LL;
  if ( !v11 )
    goto LABEL_13;
  while ( 1 )
  {
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v75, 1u);
    Page = MiGetPage((__int64)v9, DWORD2(v75) & (unsigned int)v13 | HIDWORD(v75), 0);
    v15 = Page;
    if ( Page != -1 )
    {
      v6 = 48 * Page - 0x220000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v6, a3) )
      {
        *(_QWORD *)(v6 + 16) = v8;
        v8 = v6;
      }
      MiSetPfnBlink(v6, v7, 0);
      v7 = v15;
      v9 = (ULONG_PTR *)v63;
      ++v12;
      goto LABEL_8;
    }
    if ( v12 )
      break;
    v9 = (ULONG_PTR *)v63;
    MiWaitForFreePage(v63);
LABEL_8:
    if ( v12 == v11 )
      goto LABEL_11;
  }
  MiReturnFaultCharges(v63, v11 - v12, 0);
  v11 = v12;
  v73 = v12;
LABEL_11:
  if ( v8 )
  {
    v70 = 0LL;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v70);
    MiChangePageAttributeBatch(v8, a3, v70);
  }
LABEL_13:
  v16 = v66;
  ContainingPageTable = -1LL;
  v17 = 0LL;
  v78 = v5 + 8 * v11;
  v18 = 0LL;
  v64 = 0LL;
  v19 = MiLockWorkingSetShared(v66);
  v59 = v19;
  if ( v5 >= v5 + 8 * v11 )
    goto LABEL_33;
  v21 = 1LL;
  v77 = BugCheckParameter3 - ((v74 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  while ( 2 )
  {
    if ( v18 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v16, v18);
        goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v16, v18, 0LL, v20);
      ContainingPageTable = MiGetContainingPageTable(v5);
      v21 = 1LL;
    }
    if ( (unsigned int)MiIsProbeActive(v5, v21, 3) )
      goto LABEL_30;
    v22 = MI_READ_PTE_LOCK_FREE(v5);
    v68 = v22;
    if ( (v22 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v5, v22, BugCheckParameter3);
    v23 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v68) >> 12) & 0xFFFFFFFFFFLL;
    BugCheckParameter4 = 48 * v23 - 0x220000000000LL;
    if ( v23 > qword_140C50840 || (*(_QWORD *)(48 * v23 - 0x21FFFFFFFFD8LL) & 0x40000000000000LL) == 0 )
      goto LABEL_36;
    if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v5 )
      KeBugCheckEx(0x1Au, 0x41300uLL, v5, v22, BugCheckParameter4);
    v25 = *(_QWORD *)(BugCheckParameter4 + 40);
    v26 = 1;
    if ( (v25 & 0x10000000000LL) != 0 || (v25 & 0xFFFFFFFFFFLL) == 0x3FFFFFFFFELL )
      v26 = 2;
    if ( *(_WORD *)(BugCheckParameter4 + 32) < v26 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v5, v22, BugCheckParameter4);
    if ( *(_WORD *)(BugCheckParameter4 + 32) <= v26 )
    {
LABEL_36:
      v60 = (volatile signed __int64 *)(v6 + 24);
      v29 = v6;
      v30 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFLL;
      if ( v30 == 0x3FFFFFFFFFLL )
        v6 = 0LL;
      else
        v6 = 48 * v30 - 0x220000000000LL;
      v65 = 0xAAAAAAAAAAAAAAABuLL * ((v29 + 0x220000000000LL) >> 4);
      v31 = (v22 & 0x800) != 0 ? 4 : 1;
      if ( a3 == 2 )
      {
        v31 |= 0x18u;
      }
      else if ( !a3 )
      {
        v31 |= 8u;
      }
      v68 = MiSwizzleInvalidPte(32LL * v31);
      *(_QWORD *)(v29 + 16) = v68;
      if ( !v58 )
      {
        v33 = ReadyInPageBlock;
        v34 = CurrentThread;
        v58 = v32;
        *(_DWORD *)(ReadyInPageBlock + 192) |= 0x20u;
        *(_DWORD *)(v33 + 80) = 0;
        *(_QWORD *)(v33 + 88) = 0LL;
        *(_QWORD *)(v33 + 248) = v29;
        *(_QWORD *)(v33 + 152) = v34;
      }
      MiSetPfnPteFrame(v29, ContainingPageTable);
      v57 = MiLockPageInline(v35);
      v37 = ReadyInPageBlock;
      *(_BYTE *)(v29 + 34) |= 0x20u;
      if ( v37 )
        v38 = v37 + 32;
      else
        v38 = 0LL;
      *(_QWORD *)v29 = v38;
      *v60 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v29, 1LL, v36);
      v39 = *(_BYTE *)(v29 + 34) & 0xFA;
      *(_QWORD *)(v29 + 8) = v5;
      *(_BYTE *)(v29 + 34) = v39 | 2;
      *(_BYTE *)(v29 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v29 + 35)) & 7;
      if ( ((*(_QWORD *)(v29 + 40) >> 43) & 0x3FF) != 0 )
        ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v63 + 2368));
      _InterlockedAnd64(v60, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v41 = v57;
        if ( v57 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << (v57 + 1));
          v45 = (v44 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v44;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        v41 = v57;
      }
      __writecr8(v41);
      MiReturnFaultCharges(v63, 1uLL, 0);
      TransitionPte = MiMakeTransitionPte(v65, v31);
      v47 = TransitionPte;
      v68 = TransitionPte;
      v48 = TransitionPte;
      if ( MiPteInShadowRange(v5) )
      {
        HasShadow = MiPteHasShadow();
        v21 = 1LL;
        if ( HasShadow )
        {
          v50 = 1;
          if ( HIBYTE(word_140C51864) )
            goto LABEL_66;
        }
        else
        {
          v50 = 0;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_66;
        }
        if ( (v47 & 1) != 0 )
          v48 |= 0x8000000000000000uLL;
      }
      else
      {
        v50 = 0;
        v21 = 1LL;
      }
LABEL_66:
      *(_QWORD *)v5 = v48;
      if ( v50 )
        MiWritePteShadow(v5, v48);
      v51 = v65;
      v17 += v21;
      v16 = v66;
      v64 = v17;
      *(_QWORD *)(v77 + v5 + 48) = v51;
      v5 += 8LL;
      if ( v5 >= v78 )
        goto LABEL_30;
      continue;
    }
    break;
  }
  v16 = v66;
  v62 = 1;
LABEL_30:
  if ( v18 )
    MiUnlockPageTableInternal(v16, v18);
  v19 = v59;
LABEL_33:
  MiUnlockWorkingSetShared(v16, v19);
  if ( v6 )
  {
    do
    {
      v27 = v6;
      v28 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFLL;
      if ( v28 == 0x3FFFFFFFFFLL )
        v6 = 0LL;
      else
        v6 = 48 * v28 - 0x220000000000LL;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v27 + 16));
      MiReleaseFreshPage(v52);
    }
    while ( v6 );
    v17 = v64;
    v11 = v73;
  }
  if ( v17 == v11 )
  {
    v53 = v62;
  }
  else
  {
    MiReturnFaultCharges(v63, v11 - v17, 0);
    v53 = v62;
    if ( !v17 )
      v53 = 1;
  }
  v54 = BugCheckParameter3;
  *(_DWORD *)(BugCheckParameter3 + 40) = (_DWORD)v17 << 12;
  if ( v17 )
  {
    v55 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[13], v17);
    WORD2(v80[0]) = 0;
    v80[2] = 0LL;
    v80[3] = 0LL;
    LODWORD(v80[0]) = 1;
    LODWORD(v80[1]) = 20;
    MiInsertTbFlushEntry((__int64)v80, v74 & 0xFFFFFFFFFFFFF000uLL, v17, 0);
    MiFlushTbList((__int64)v80);
    *(_QWORD *)(v54 + 16) = v55;
    *(_WORD *)(v54 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v55[1].Affinity.StaticBitmap[14], v17);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v54, v17, 4);
  }
  return v53;
}
