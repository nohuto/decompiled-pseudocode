/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x140381E20
 * Callers:
 *     MiGetPage @ 0x140212FA0 (MiGetPage.c)
 *     MiPurgePartitionStandby @ 0x140381D04 (MiPurgePartitionStandby.c)
 *     MiPruneStandbyPages @ 0x14054B2E4 (MiPruneStandbyPages.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MiUnlinkPageFromList @ 0x140217240 (MiUnlinkPageFromList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140223360 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiDecreaseAvailablePages @ 0x140224310 (MiDecreaseAvailablePages.c)
 *     MiUpdatePageFileHighInPte @ 0x140228500 (MiUpdatePageFileHighInPte.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiSetPfnBlink @ 0x14027AF70 (MiSetPfnBlink.c)
 *     MiIsPfnFromSlabAllocation @ 0x1402802F0 (MiIsPfnFromSlabAllocation.c)
 *     MiInsertPageInList @ 0x14028EB00 (MiInsertPageInList.c)
 *     MiDeleteParentDecayNode @ 0x1402FCF24 (MiDeleteParentDecayNode.c)
 *     MiRemoveDecayClusterTimer @ 0x1402FCFB8 (MiRemoveDecayClusterTimer.c)
 *     MiIsDecayPfn @ 0x140306A40 (MiIsDecayPfn.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x1403188C0 (MiGetAvailablePagesExcludeSlists.c)
 *     MiUpdateTransitionPteFrame @ 0x14034B85C (MiUpdateTransitionPteFrame.c)
 *     MiReturnFreeZeroPage @ 0x14034B8A8 (MiReturnFreeZeroPage.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     MiDiscardTransitionPteEx @ 0x140385624 (MiDiscardTransitionPteEx.c)
 *     MiUnlinkNumaStandbyPage @ 0x140399524 (MiUnlinkNumaStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall MiRemoveLowestPriorityStandbyPage(__int64 a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v3; // r14
  unsigned __int64 v4; // rax
  unsigned __int64 *v5; // rbp
  __int64 v6; // r13
  unsigned __int8 CurrentIrql; // si
  _DWORD *SchedulerAssist; // r9
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v12; // r9
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rbx
  __int64 v16; // r11
  unsigned __int64 v17; // rdi
  ULONG_PTR v18; // r15
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r11
  int v29; // edi
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r10
  _DWORD *v32; // r9
  int v33; // eax
  unsigned __int64 v35; // r10
  unsigned __int64 v36; // r9
  volatile signed __int32 *v37; // r8
  unsigned int v38; // eax
  unsigned __int64 v39; // rdx
  int v40; // ebp
  __int64 v41; // r9
  __int64 v42; // r9
  __int64 v43; // r10
  __int64 v44; // r11
  __int64 updated; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r11
  __int64 v49; // r10
  int v50; // ebp
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r8
  int v53; // eax
  __int64 v54; // rcx
  char v55; // al
  char v56; // al
  char v57; // r8
  unsigned __int8 v58; // al
  struct _KPRCB *v59; // rax
  _DWORD *v60; // r9
  int v61; // edx
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // rax
  _DWORD *v64; // r9
  int v65; // edx
  ULONG_PTR AvailablePagesExcludeSlists; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  int v69; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v70; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v71; // [rsp+B8h] [rbp+20h]

  v70 = a3;
  v3 = (_QWORD *)(a1 + 2432);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v71 = a1 + 8 * (a2 + 4 * (a2 + 76LL));
  if ( a1 + 2432 >= v71 )
    return -1LL;
  v4 = v71;
  v5 = (unsigned __int64 *)(a1 + 2464);
  v6 = 0xFFFFFFFFFLL;
  while ( v3[2] == 0xFFFFFFFFFLL )
  {
LABEL_63:
    v3 += 5;
    v5 += 5;
    if ( (unsigned __int64)v3 >= v4 )
      return -1LL;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  LockHandle.LockQueue.Lock = v5;
  LockHandle.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v5);
  v9 = v3[2];
  if ( v9 == 0xFFFFFFFFFLL )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v10 = KeGetCurrentIrql();
        if ( v10 <= 0xFu && CurrentIrql <= 0xFu && v10 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v12 = CurrentPrcb->SchedulerAssist;
          v13 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v13 & v12[5]) == 0;
          v12[5] &= v13;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    goto LABEL_62;
  }
  v15 = 48 * v9 - 0x58000000000LL;
  if ( MiIsDecayPfn(v3[2]) )
  {
    v6 = v9;
    v17 = *(_QWORD *)(v15 + 16);
    v18 = v15;
    if ( qword_140C4DE80 && (v17 & 0x10) == 0 )
      v17 &= ~qword_140C4DE80;
    v9 = (v17 >> 12) & 0xFFFFFFFFFLL;
    v15 = v16 + 48 * v9;
    if ( v9 == v6 )
    {
      MiUnlinkPageFromList(v18, 1);
      *(_BYTE *)(v18 + 35) &= ~8u;
      MiRemoveDecayClusterTimer(v18);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      goto LABEL_22;
    }
  }
  else
  {
    v18 = 0LL;
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
  {
    v6 = 0xFFFFFFFFFLL;
    goto LABEL_50;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v69 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v69, v23, v24, v25);
    while ( *(__int64 *)(v15 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v15 + 34) & 7) != 2
    || *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL)) != a1 )
  {
    goto LABEL_47;
  }
  LockHandle.LockQueue.Lock = v5;
  LockHandle.LockQueue.Next = 0LL;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v5);
  v26 = v3[2];
  if ( !v18 )
  {
    if ( v9 == v26 )
    {
      v6 = 0xFFFFFFFFFLL;
      goto LABEL_50;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
LABEL_47:
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_22:
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v20);
        }
      }
    }
    v6 = 0xFFFFFFFFFLL;
LABEL_61:
    v3 -= 5;
    v5 -= 5;
LABEL_62:
    __writecr8(CurrentIrql);
    v4 = v71;
    goto LABEL_63;
  }
  if ( v6 != v26 )
  {
    v6 = 0xFFFFFFFFFLL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_54;
  }
  v27 = *(_QWORD *)(v18 + 16);
  if ( qword_140C4DE80 && (v27 & 0x10) == 0 )
    v27 &= ~qword_140C4DE80;
  v6 = 0xFFFFFFFFFLL;
  if ( v9 != ((v27 >> 12) & 0xFFFFFFFFFLL) )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_54;
  }
LABEL_50:
  if ( MiIsPfnFromSlabAllocation(v15) )
  {
    v29 = MiUnlinkPageFromList(v15, 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v29 )
    {
      *(_BYTE *)(v15 + 35) &= 0xF8u;
      MiInsertPageInList(v15, 0x800u);
    }
    else
    {
      MiDiscardTransitionPteEx(v15, 0LL);
    }
LABEL_54:
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v30 = KeGetCurrentIrql();
        if ( v30 <= 0xFu && CurrentIrql <= 0xFu && v30 >= 2u )
        {
          v31 = KeGetCurrentPrcb();
          v32 = v31->SchedulerAssist;
          v33 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v33 & v32[5]) == 0;
          v32[5] &= v33;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v31);
        }
      }
    }
    goto LABEL_61;
  }
  if ( !*v3 )
  {
    AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists(a1);
    KeBugCheckEx(0x4Eu, 1uLL, (ULONG_PTR)v3, AvailablePagesExcludeSlists, 0LL);
  }
  --*v3;
  if ( dword_140C4E60C == 1 )
  {
    v35 = v9 & 0x1F;
    LOBYTE(v36) = 1;
    v37 = (volatile signed __int32 *)(qword_140C4E668 + 4 * (v9 >> 5));
    if ( v35 + 1 <= 0x20 )
    {
      v38 = 1 << v35;
      goto LABEL_75;
    }
    if ( (v9 & 0x1F) == 0 )
      goto LABEL_74;
    _InterlockedOr(v37++, ((1 << (32 - (v9 & 0x1F))) - 1) << v35);
    v36 = 1LL - (32 - (unsigned int)(v9 & 0x1F));
    if ( v36 >= 0x20 )
    {
      v39 = v36 >> 5;
      v36 += -32LL * (v36 >> 5);
      do
      {
        *v37++ = -1;
        --v39;
      }
      while ( v39 );
    }
    if ( v36 )
    {
LABEL_74:
      v38 = (1 << v36) - 1;
LABEL_75:
      _InterlockedOr(v37, v38);
    }
  }
  v40 = 0;
  v41 = *(_QWORD *)v15 & 0xFFFFFFFFFLL;
  if ( (*(_BYTE *)(v15 + 35) & 8) != 0 )
  {
    if ( MiIsDecayPfn(*(_QWORD *)(v15 + 24) & 0xFFFFFFFFFLL) && v42 == v43 )
    {
      MiDeleteParentDecayNode(v15);
      v40 = 1;
    }
    else
    {
      updated = MiUpdateTransitionPteFrame(*(_QWORD *)(v44 + 48 * v43 + 16), v42);
      *(_QWORD *)(v46 + 16) = updated;
      MiSetPfnBlink(v48 + 48 * v47, v49, 0);
      v40 = 1;
    }
  }
  else
  {
    v3[2] = v41;
    if ( v41 == 0xFFFFFFFFFLL )
      v3[3] = 0xFFFFFFFFFLL;
    else
      MiSetPfnBlink(v28 + 48 * v41, 0xFFFFFFFFFLL, 0);
  }
  MiUnlinkNumaStandbyPage(v15);
  if ( v40 == 1 )
    *(_BYTE *)(v15 + 35) &= ~8u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v50 = MiDecreaseAvailablePages(a1, 1LL, 0xFFFFFFFFFFFFFFFFuLL, v70);
  *(_QWORD *)(v15 + 24) &= 0xFFFFFFF000000000uLL;
  MiRestoreTransitionPte(v15, 0);
  v51 = *(_QWORD *)(v15 + 16);
  v52 = v51 >> 11;
  if ( (v51 & 0x400) == 0 )
    v52 = v51 >> 3;
  v53 = MI_PFN_IS_PROTO(v15, v51, v52);
  v54 = 4352LL;
  if ( !v53 )
    v54 = 5056LL;
  _InterlockedDecrement64((volatile signed __int64 *)(v54 + a1));
  v55 = *(_BYTE *)(v15 + 34);
  *(_QWORD *)(v15 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(v15 + 34) = v55 & 0xC7;
  v56 = *(_BYTE *)(v15 + 35) & 0xDF;
  *(_QWORD *)v15 = 0LL;
  *(_BYTE *)(v15 + 35) = v56;
  *(_BYTE *)(v15 + 34) = *(_BYTE *)(v15 + 34) & 0xF8 | 5;
  *(_QWORD *)(v15 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v15 + 16));
  if ( (v57 & 1) != 0 )
    *(_QWORD *)(v15 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v15 + 16), 4294967293LL);
  if ( v50 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v62 = KeGetCurrentIrql();
        if ( v62 <= 0xFu && CurrentIrql <= 0xFu && v62 >= 2u )
        {
          v63 = KeGetCurrentPrcb();
          v64 = v63->SchedulerAssist;
          v65 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v65 & v64[5]) == 0;
          v64[5] &= v65;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v63);
        }
      }
    }
    __writecr8(CurrentIrql);
    return v9;
  }
  else
  {
    MiReturnFreeZeroPage(v15);
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v58 = KeGetCurrentIrql();
        if ( v58 <= 0xFu && CurrentIrql <= 0xFu && v58 >= 2u )
        {
          v59 = KeGetCurrentPrcb();
          v60 = v59->SchedulerAssist;
          v61 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v61 & v60[5]) == 0;
          v60[5] &= v61;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v59);
        }
      }
    }
    __writecr8(CurrentIrql);
    return -1LL;
  }
}
