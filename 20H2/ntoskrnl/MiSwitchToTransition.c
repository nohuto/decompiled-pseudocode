/*
 * XREFs of MiSwitchToTransition @ 0x140538414
 * Callers:
 *     MmRotatePhysicalView @ 0x14065CA40 (MmRotatePhysicalView.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiSetPfnBlink @ 0x140230190 (MiSetPfnBlink.c)
 *     MiInitializePageColorBase @ 0x140231F50 (MiInitializePageColorBase.c)
 *     MiIsProbeActive @ 0x14025EA90 (MiIsProbeActive.c)
 *     MiLockPageTableInternal @ 0x14026FE10 (MiLockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiGetPage @ 0x140274DF0 (MiGetPage.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiObtainFaultCharges @ 0x14027D270 (MiObtainFaultCharges.c)
 *     MiGetContainingPageTable @ 0x14029C940 (MiGetContainingPageTable.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPte @ 0x1402B1DC0 (MiMakeTransitionPte.c)
 *     MiInsertTbFlushEntry @ 0x1402B8FC0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1402BFA90 (MiFlushTbList.c)
 *     MiAddLockedPageCharge @ 0x1402CACB8 (MiAddLockedPageCharge.c)
 *     MiGetEffectivePagePriorityThread @ 0x1402D1080 (MiGetEffectivePagePriorityThread.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402F4540 (ExAcquireRundownProtectionCacheAware.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiReturnFaultCharges @ 0x140329604 (MiReturnFaultCharges.c)
 *     MiReleaseFreshPage @ 0x140333A30 (MiReleaseFreshPage.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140334EC0 (MiPageAttributeBatchChangeNeeded.c)
 *     MiChangePageAttributeBatch @ 0x1403495C4 (MiChangePageAttributeBatch.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiAddMdlTracker @ 0x14052ED54 (MiAddMdlTracker.c)
 *     MiWaitForFreePage @ 0x14055A72C (MiWaitForFreePage.c)
 *     MiGetReadyInPageBlock @ 0x1408CADF4 (MiGetReadyInPageBlock.c)
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
  __int64 v16; // r9
  __int64 v17; // rbx
  unsigned int v18; // r12d
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  unsigned __int8 v21; // al
  __int64 v22; // r11
  ULONG_PTR v23; // rbx
  unsigned __int64 v24; // rax
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v26; // rax
  unsigned __int16 v27; // cx
  __int64 v28; // r15
  __int64 v29; // rax
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // r8
  unsigned __int64 v33; // r9
  unsigned __int8 v34; // r11
  __int64 v35; // rax
  struct _KTHREAD *v36; // rcx
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
  __int64 v49; // r8
  int HasShadow; // eax
  int v51; // eax
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // r8
  unsigned int v55; // edi
  _KPROCESS *v56; // rsi
  _KPROCESS *v57; // rdx
  unsigned __int8 v59; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v60; // [rsp+31h] [rbp-CFh]
  __int64 v61; // [rsp+38h] [rbp-C8h]
  volatile signed __int64 *v62; // [rsp+38h] [rbp-C8h]
  int v64; // [rsp+44h] [rbp-BCh]
  __int64 v66; // [rsp+50h] [rbp-B0h]
  unsigned int v67; // [rsp+58h] [rbp-A8h]
  __int64 v68; // [rsp+60h] [rbp-A0h]
  char EffectivePagePriorityThread; // [rsp+68h] [rbp-98h]
  ULONG_PTR v70; // [rsp+70h] [rbp-90h] BYREF
  __int64 v71; // [rsp+78h] [rbp-88h] BYREF
  __int64 ContainingPageTable; // [rsp+80h] [rbp-80h]
  __int64 ReadyInPageBlock; // [rsp+88h] [rbp-78h]
  __int64 v74; // [rsp+90h] [rbp-70h]
  unsigned __int64 v75; // [rsp+98h] [rbp-68h]
  unsigned __int64 v76; // [rsp+A0h] [rbp-60h]
  __int128 v77; // [rsp+A8h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v79; // [rsp+C8h] [rbp-38h]
  _KPROCESS *Process; // [rsp+D0h] [rbp-30h]
  _QWORD v81[24]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = BugCheckParameter3;
  v77 = 0LL;
  memset(v81, 0, 0xB8uLL);
  v71 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  ReadyInPageBlock = MiGetReadyInPageBlock(a2);
  v76 = *(_QWORD *)(v4 + 32);
  v5 = ((v76 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v68 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v64 = 0;
  v6 = 0;
  MiInitializePageColorBase((__int64)&Process[1].ActiveProcessorsPadding[6], 0, (__int64)&v77);
  v61 = 0xFFFFFFFFFLL;
  v8 = 0LL;
  v9 = 0LL;
  v66 = *(_QWORD *)(qword_140C4E4C8 + 8LL * *(unsigned __int16 *)(v7 + 174));
  v11 = MiObtainFaultCharges((ULONG_PTR *)v66, v10, 2);
  v67 = v11;
  v12 = 0;
  if ( !v11 )
    goto LABEL_14;
  while ( 1 )
  {
    v13 = _InterlockedExchangeAdd((volatile signed __int32 *)v77, 1u);
    Page = MiGetPage(v66, DWORD2(v77) & (unsigned int)v13 | HIDWORD(v77), 0LL);
    v15 = Page;
    if ( Page != -1 )
    {
      v8 = 48 * Page - 0x58000000000LL;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v8, a3) == 1 )
      {
        *(_QWORD *)(v8 + 16) = v9;
        v9 = v8;
      }
      MiSetPfnBlink(v8, v61, 0);
      v61 = v15;
      ++v12;
      goto LABEL_8;
    }
    if ( v12 )
      break;
    MiWaitForFreePage(v66);
LABEL_8:
    if ( v12 == v11 )
      goto LABEL_11;
  }
  MiReturnFaultCharges(v66, v11 - v12, 0);
  v11 = v12;
  v67 = v12;
LABEL_11:
  if ( v9 )
  {
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)&v71);
    MiChangePageAttributeBatch(v9, a3, v71, v16);
  }
  v4 = BugCheckParameter3;
LABEL_14:
  v17 = v68;
  v18 = 0;
  ContainingPageTable = -1LL;
  v19 = v11;
  v20 = 0LL;
  v75 = v5 + 8 * v19;
  v21 = MiLockWorkingSetShared(v68);
  v60 = v21;
  if ( v5 >= v75 )
    goto LABEL_66;
  v22 = 1LL;
  v79 = v4 - ((v76 >> 9) & 0x7FFFFFFFF8LL) + 0x98000000000LL;
  while ( 2 )
  {
    if ( v20 )
    {
      if ( (v5 & 0xFFF) == 0 )
      {
        MiUnlockPageTableInternal(v17, v20);
        goto LABEL_19;
      }
    }
    else
    {
LABEL_19:
      v20 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal(v17, v20, 0LL);
      ContainingPageTable = MiGetContainingPageTable(v5);
      v22 = 1LL;
    }
    if ( (unsigned int)MiIsProbeActive(v5, v22, 3) )
      goto LABEL_63;
    v70 = MI_READ_PTE_LOCK_FREE(v5);
    v23 = v70;
    if ( (v70 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x41200uLL, v5, v70, BugCheckParameter3);
    v24 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v70);
    BugCheckParameter4 = 48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( (*(_QWORD *)(48 * ((v24 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      goto LABEL_29;
    if ( (*(_QWORD *)(BugCheckParameter4 + 8) | 0x8000000000000000uLL) == v5 )
      KeBugCheckEx(0x1Au, 0x41300uLL, v5, v23, BugCheckParameter4);
    v26 = *(_QWORD *)(BugCheckParameter4 + 40);
    v27 = 1;
    if ( (v26 & 0x1000000000LL) != 0 || (v26 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
      v27 = 2;
    if ( *(_WORD *)(BugCheckParameter4 + 32) < v27 )
      KeBugCheckEx(0x1Au, 0x41301uLL, v5, v23, BugCheckParameter4);
    if ( *(_WORD *)(BugCheckParameter4 + 32) <= v27 )
    {
LABEL_29:
      v28 = v8;
      v62 = (volatile signed __int64 *)(v8 + 24);
      v29 = *(_QWORD *)(v8 + 24) & 0xFFFFFFFFFLL;
      if ( v29 == 0xFFFFFFFFFLL )
        v8 = 0LL;
      else
        v8 = 48 * v29 - 0x58000000000LL;
      v74 = (v28 + 0x58000000000LL) / 48;
      v30 = (v23 & 0x800) != 0 ? 4 : 1;
      if ( a3 == 2 )
      {
        v30 |= 0x18u;
      }
      else if ( !a3 )
      {
        v30 |= 8u;
      }
      v70 = MiSwizzleInvalidPte(32LL * v30);
      *(_QWORD *)(v28 + 16) = v70;
      if ( (v6 & v34) == 0 )
      {
        v35 = ReadyInPageBlock;
        v36 = CurrentThread;
        *(_DWORD *)(ReadyInPageBlock + 192) |= 0x20u;
        *(_DWORD *)(v35 + 80) = 0;
        *(_QWORD *)(v35 + 88) = 0LL;
        v6 |= v34;
        *(_QWORD *)(v35 + 248) = v28;
        *(_QWORD *)(v35 + 152) = v36;
      }
      *(_QWORD *)(v28 + 40) ^= v33 & (ContainingPageTable ^ *(_QWORD *)(v28 + 40));
      v59 = MiLockPageInline(v28, v31, v32, (_DWORD *)v33);
      v37 = ReadyInPageBlock;
      *(_BYTE *)(v28 + 34) |= 0x20u;
      if ( v37 )
        v38 = v37 + 32;
      else
        v38 = 0LL;
      *(_QWORD *)v28 = v38;
      *v62 &= 0xC000000000000000uLL;
      MiAddLockedPageCharge(v28, 1);
      v39 = *(_BYTE *)(v28 + 34) & 0xFA;
      *(_QWORD *)(v28 + 8) = v5;
      *(_BYTE *)(v28 + 34) = v39 | 2;
      *(_BYTE *)(v28 + 35) ^= (EffectivePagePriorityThread ^ *(_BYTE *)(v28 + 35)) & 7;
      if ( ((*(_QWORD *)(v28 + 40) >> 39) & 0x3FF) != 0 )
        ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v66 + 2144));
      _InterlockedAnd64(v62, 0x7FFFFFFFFFFFFFFFuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v41 = v59;
        if ( v59 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v44 = ~(unsigned __int16)(-1LL << (v59 + 1));
          v45 = (v44 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v44;
          if ( v45 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      else
      {
        v41 = v59;
      }
      __writecr8(v41);
      MiReturnFaultCharges(v66, 1uLL, 0);
      TransitionPte = MiMakeTransitionPte(v74, v30);
      v47 = TransitionPte;
      v70 = TransitionPte;
      v48 = TransitionPte;
      if ( MiPteInShadowRange(v5) )
      {
        HasShadow = MiPteHasShadow();
        v22 = 1LL;
        if ( HasShadow )
        {
          v51 = 1;
          if ( !HIBYTE(word_140C4DE88) )
          {
LABEL_55:
            if ( (v47 & 1) != 0 )
              v48 |= 0x8000000000000000uLL;
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
        v22 = 1LL;
      }
      *(_QWORD *)v5 = v48;
      if ( v51 )
        MiWritePteShadow(v5, v48, v49);
      v18 += v22;
      v17 = v68;
      *(_QWORD *)(v79 + v5 + 48) = v74;
      v5 += 8LL;
      if ( v5 >= v75 )
        goto LABEL_63;
      continue;
    }
    break;
  }
  v17 = v68;
  v64 = 1;
LABEL_63:
  if ( v20 )
    MiUnlockPageTableInternal(v17, v20);
  v21 = v60;
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
      MiReleaseFreshPage(v54);
    }
    while ( v8 );
    v4 = BugCheckParameter3;
  }
  if ( v18 == v67 )
  {
    v55 = v64;
  }
  else
  {
    MiReturnFaultCharges(v66, v67 - v18, 0);
    v55 = v64;
    if ( !v18 )
      v55 = 1;
  }
  *(_DWORD *)(v4 + 40) = v18 << 12;
  if ( v18 )
  {
    v56 = Process;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], v18);
    WORD2(v81[0]) = 0;
    v81[2] = 0LL;
    v81[3] = 0LL;
    LODWORD(v81[0]) = 1;
    LODWORD(v81[1]) = 20;
    MiInsertTbFlushEntry((__int64)v81, v76 & 0xFFFFFFFFFFFFF000uLL, v18, 0);
    MiFlushTbList((unsigned int *)v81, v57);
    *(_QWORD *)(v4 + 16) = v56;
    *(_WORD *)(v4 + 10) |= 2u;
    _InterlockedExchangeAdd64((volatile signed __int64 *)&v56[1].Affinity.Bitmap[14], v18);
    if ( (MmTrackLockedPages & 1) != 0 )
      MiAddMdlTracker(v4, v18, 4);
  }
  return v55;
}
