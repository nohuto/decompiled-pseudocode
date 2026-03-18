/*
 * XREFs of MiSwitchToTransition @ 0x1405343F4
 * Callers:
 *     MmRotatePhysicalView @ 0x1406BD3F0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiLockPageTableInternal @ 0x14020DFC0 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiObtainFaultCharges @ 0x14021B070 (MiObtainFaultCharges.c)
 *     MiInsertTbFlushEntry @ 0x14021E270 (MiInsertTbFlushEntry.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSwizzleInvalidPte @ 0x1402233C0 (MiSwizzleInvalidPte.c)
 *     MiGetContainingPageTable @ 0x140227150 (MiGetContainingPageTable.c)
 *     MiSetPfnBlink @ 0x14027AF70 (MiSetPfnBlink.c)
 *     MiAddLockedPageCharge @ 0x1402826F0 (MiAddLockedPageCharge.c)
 *     MiMakeTransitionPte @ 0x14028D2E0 (MiMakeTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140293410 (MiFlushTbList.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402B3FC0 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x1402B7AA0 (MiInitializePageColorBase.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402EAC50 (ExAcquireRundownProtectionCacheAware.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiIsProbeActive @ 0x1402F8260 (MiIsProbeActive.c)
 *     MiReleaseFreshPage @ 0x140326768 (MiReleaseFreshPage.c)
 *     MiReturnFaultCharges @ 0x140340698 (MiReturnFaultCharges.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1403454FC (MiPageAttributeBatchChangeNeeded.c)
 *     MiLockPageInline @ 0x140346F60 (MiLockPageInline.c)
 *     MiChangePageAttributeBatch @ 0x1403530A0 (MiChangePageAttributeBatch.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiAddMdlTracker @ 0x14052AD34 (MiAddMdlTracker.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x1408C3C64 (MiGetReadyInPageBlock.c)
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
  _DWORD *v16; // r9
  __int64 v17; // rbx
  unsigned int v18; // r12d
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  unsigned __int8 v21; // al
  __int64 v22; // r8
  __int64 v23; // r11
  ULONG_PTR v24; // rbx
  unsigned __int64 v25; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  __int64 v29; // r15
  __int64 v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // r8
  unsigned __int64 v34; // r9
  unsigned __int8 v35; // r11
  __int64 v36; // rax
  struct _KTHREAD *v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  char v40; // al
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v42; // r15
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v45; // eax
  bool v46; // zf
  __int64 TransitionPte; // rax
  char v48; // r15
  __int64 v49; // rbx
  int HasShadow; // eax
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // r8
  unsigned int v56; // edi
  _KPROCESS *v57; // rsi
  _KPROCESS *v58; // rdx
  unsigned __int8 v60; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v61; // [rsp+31h] [rbp-CFh]
  __int64 v62; // [rsp+38h] [rbp-C8h]
  volatile signed __int64 *v63; // [rsp+38h] [rbp-C8h]
  int v65; // [rsp+44h] [rbp-BCh]
  __int64 v67; // [rsp+50h] [rbp-B0h]
  unsigned int v68; // [rsp+58h] [rbp-A8h]
  __int64 v69; // [rsp+60h] [rbp-A0h]
  char EffectivePagePriorityThread; // [rsp+68h] [rbp-98h]
  ULONG_PTR v71; // [rsp+70h] [rbp-90h] BYREF
  __int64 v72; // [rsp+78h] [rbp-88h] BYREF
  __int64 ContainingPageTable; // [rsp+80h] [rbp-80h]
  __int64 ReadyInPageBlock; // [rsp+88h] [rbp-78h]
  __int64 v75; // [rsp+90h] [rbp-70h]
  unsigned __int64 v76; // [rsp+98h] [rbp-68h]
  unsigned __int64 v77; // [rsp+A0h] [rbp-60h]
  __int128 v78; // [rsp+A8h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v80; // [rsp+C8h] [rbp-38h]
  _KPROCESS *Process; // [rsp+D0h] [rbp-30h]
  _QWORD v82[24]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = BugCheckParameter3;
  v78 = 0LL;
  memset(v82, 0, 0xB8uLL);
  v72 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  v77 = *(_QWORD *)(v4 + 32);
  v5 = ((v77 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v69 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v65 = 0;
  v6 = 0;
  MiInitializePageColorBase((__int64)&Process[1].ActiveProcessorsPadding[6], 0, (__int64)&v78);
  v62 = 0xFFFFFFFFFLL;
  v8 = 0LL;
  v9 = 0LL;
  v67 = *(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(v7 + 174));
  v11 = MiObtainFaultCharges((ULONG_PTR *)v67, v10, 2);
  v68 = v11;
  v12 = 0;
  if ( !v11 )
    goto LABEL_14;
  while ( 1 )
  {
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v78, 1u);
    Page = MiGetPage(v67, DWORD2(v78) & (unsigned int)v13 | HIDWORD(v78), 0LL);
    v15 = Page;
    if ( Page != -1 )
    {
      v8 = 48 * Page - 0x58000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v8, a3) == 1 )
      {
        *(_QWORD *)(v8 + 16) = v9;
        v9 = v8;
      }
      MiSetPfnBlink(v8, v62, 0);
      v62 = v15;
      ++v12;
      goto LABEL_8;
    }
    if ( v12 )
      break;
    MiWaitForFreePage(v67);
LABEL_8:
    if ( v12 == v11 )
      goto LABEL_11;
  }
  MiReturnFaultCharges(v67, v11 - v12, 0);
  v11 = v12;
  v68 = v12;
LABEL_11:
  if ( v9 )
  {
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v72);
    MiChangePageAttributeBatch(v9, a3, v72, v16);
  }
  v4 = BugCheckParameter3;
LABEL_14:
  v17 = v69;
  v18 = 0;
  ContainingPageTable = -1LL;
  v19 = v11;
  v20 = 0LL;
  v76 = v5 + 8 * v19;
  v21 = MiLockWorkingSetShared(v69);
  v61 = v21;
  if ( v5 >= v76 )
    goto LABEL_66;
  v23 = 1LL;
  v80 = v4 - ((v77 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  while ( 2 )
  {
    if ( v20 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v17, v20, v22);
        goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v20 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v17, v20, 0LL);
      ContainingPageTable = MiGetContainingPageTable(v5);
      v23 = 1LL;
    }
    if ( (unsigned int)MiIsProbeActive(v5, v23, 3) )
      goto LABEL_63;
    v71 = MI_READ_PTE_LOCK_FREE(v5);
    v24 = v71;
    if ( (v71 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v5, v71, BugCheckParameter3);
    v25 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v71);
    BugCheckParameter4 = 48 * ((v25 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(48 * ((v25 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      goto LABEL_29;
    if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v5 )
      KeBugCheckEx(0x1Au, 0x41300uLL, v5, v24, BugCheckParameter4);
    v27 = *(_QWORD *)(BugCheckParameter4 + 40);
    v22 = 0x1000000000LL;
    v28 = 1;
    if ( (v27 & 0x1000000000LL) != 0 || (v22 = 0xFFFFFFFFDLL, (v27 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL) )
      v28 = 2;
    if ( *(_WORD *)(BugCheckParameter4 + 32) < v28 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v5, v24, BugCheckParameter4);
    if ( *(_WORD *)(BugCheckParameter4 + 32) <= v28 )
    {
LABEL_29:
      v29 = v8;
      v63 = (volatile signed __int64 *)(v8 + 24);
      v30 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL;
      if ( v30 == 0xFFFFFFFFFLL )
        v8 = 0LL;
      else
        v8 = 48 * v30 - 0x58000000000LL;
      v75 = (v29 + 0x58000000000LL) / 48;
      v31 = (v24 & 0x800) != 0 ? 4 : 1;
      if ( a3 == 2 )
      {
        v31 |= 0x18u;
      }
      else if ( !a3 )
      {
        v31 |= 8u;
      }
      v71 = MiSwizzleInvalidPte(32LL * v31);
      *(_QWORD *)(v29 + 16) = v71;
      if ( (v6 & v35) == 0 )
      {
        v36 = ReadyInPageBlock;
        v37 = CurrentThread;
        *(_DWORD *)(ReadyInPageBlock + 192) |= 0x20u;
        *(_DWORD *)(v36 + 80) = 0;
        *(_QWORD *)(v36 + 88) = 0LL;
        v6 |= v35;
        *(_QWORD *)(v36 + 248) = v29;
        *(_QWORD *)(v36 + 152) = v37;
      }
      *(_QWORD *)(v29 + 40) ^= v34 & (ContainingPageTable ^ *(_QWORD *)(v29 + 40));
      v60 = MiLockPageInline(v29, v32, v33, (_DWORD *)v34);
      v38 = ReadyInPageBlock;
      *(_BYTE *)(v29 + 34) |= 0x20u;
      if ( v38 )
        v39 = v38 + 32;
      else
        v39 = 0LL;
      *(_QWORD *)v29 = v39;
      *v63 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v29, 1);
      v40 = *(_BYTE *)(v29 + 34) & 0xFA;
      *(_QWORD *)(v29 + 8) = v5;
      *(_BYTE *)(v29 + 34) = v40 | 2;
      *(_BYTE *)(v29 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v29 + 35)) & 7;
      if ( ((*(_QWORD *)(v29 + 40) >> 39) & 0x3FF) != 0 )
        ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v67 + 2144));
      _InterlockedAnd64(v63, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v42 = v60;
        if ( v60 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v45 = ~(unsigned __int16)(-1LL << (v60 + 1));
          v46 = (v45 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v45;
          if ( v46 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        v42 = v60;
      }
      __writecr8(v42);
      MiReturnFaultCharges(v67, 1uLL, 0);
      TransitionPte = MiMakeTransitionPte(v75, v31);
      v48 = TransitionPte;
      v71 = TransitionPte;
      v49 = TransitionPte;
      if ( MiPteInShadowRange(v5) )
      {
        HasShadow = MiPteHasShadow();
        v23 = 1LL;
        if ( HasShadow )
        {
          v51 = 1;
          if ( !HIBYTE(word_140C4DF48) )
          {
LABEL_55:
            if ( (v48 & 1) != 0 )
              v49 |= 0x8000000000000000uLL;
          }
        }
        else
        {
          v51 = 0;
          if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
            goto LABEL_55;
        }
      }
      else
      {
        v51 = 0;
        v23 = 1LL;
      }
      *(_QWORD *)v5 = v49;
      if ( v51 )
        MiWritePteShadow(v5, v49);
      v18 += v23;
      v17 = v69;
      *(_QWORD *)(v80 + v5 + 48) = v75;
      v5 += 8LL;
      if ( v5 >= v76 )
        goto LABEL_63;
      continue;
    }
    break;
  }
  v17 = v69;
  v65 = 1;
LABEL_63:
  if ( v20 )
    MiUnlockPageTableInternal(v17, v20, v22);
  v21 = v61;
  v4 = BugCheckParameter3;
LABEL_66:
  MiUnlockWorkingSetShared(v17, v21);
  if ( v8 )
  {
    do
    {
      v52 = v8;
      v53 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL;
      if ( v53 == 0xFFFFFFFFFLL )
        v8 = 0LL;
      else
        v8 = 48 * v53 - 0x58000000000LL;
      MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v52 + 16));
      MiReleaseFreshPage(v55, v54, v55);
    }
    while ( v8 );
    v4 = BugCheckParameter3;
  }
  if ( v18 == v68 )
  {
    v56 = v65;
  }
  else
  {
    MiReturnFaultCharges(v67, v68 - v18, 0);
    v56 = v65;
    if ( !v18 )
      v56 = 1;
  }
  *(_DWORD *)(v4 + 40) = v18 << 12;
  if ( v18 )
  {
    v57 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], v18);
    WORD2(v82[0]) = 0;
    v82[2] = 0LL;
    v82[3] = 0LL;
    LODWORD(v82[0]) = 1;
    LODWORD(v82[1]) = 20;
    MiInsertTbFlushEntry((__int64)v82, v77 & 0xFFFFFFFFFFFFF000uLL, v18, 0);
    MiFlushTbList((__int64)v82, v58);
    *(_QWORD *)(v4 + 16) = v57;
    *(_WORD *)(v4 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v57[1].Affinity.Bitmap[14], v18);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v4, v18, 4);
  }
  return v56;
}
