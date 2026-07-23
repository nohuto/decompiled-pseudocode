/*
 * XREFs of MiRemoveLowestPriorityStandbyPage @ 0x140385270
 * Callers:
 *     MiGetPage @ 0x1402B7F10 (MiGetPage.c)
 *     MiPurgePartitionStandby @ 0x140385154 (MiPurgePartitionStandby.c)
 *     MiPruneStandbyPages @ 0x140551014 (MiPruneStandbyPages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     MiDeleteParentDecayNode @ 0x1402298BC (MiDeleteParentDecayNode.c)
 *     MiRemoveDecayClusterTimer @ 0x140229950 (MiRemoveDecayClusterTimer.c)
 *     MiIsDecayPfn @ 0x140236E3C (MiIsDecayPfn.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x1402463F0 (MiGetAvailablePagesExcludeSlists.c)
 *     MiUpdateTransitionPteFrame @ 0x14025B980 (MiUpdateTransitionPteFrame.c)
 *     MiUnlinkPageFromList @ 0x1402BC1B0 (MiUnlinkPageFromList.c)
 *     MiUpdatePageFileHighInPte @ 0x1402E25D0 (MiUpdatePageFileHighInPte.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiIsPfnFromSlabAllocation @ 0x14030DC40 (MiIsPfnFromSlabAllocation.c)
 *     MiReturnFreeZeroPage @ 0x14030DDA0 (MiReturnFreeZeroPage.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     MiDecreaseAvailablePages @ 0x1403240D0 (MiDecreaseAvailablePages.c)
 *     MiInsertPageInList @ 0x140331550 (MiInsertPageInList.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiDiscardTransitionPteEx @ 0x140388FE4 (MiDiscardTransitionPteEx.c)
 *     MiUnlinkNumaStandbyPage @ 0x14039CB94 (MiUnlinkNumaStandbyPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
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
  __int64 v51; // r8
  int v52; // eax
  __int64 v53; // rcx
  char v54; // al
  char v55; // al
  char v56; // r8
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // rax
  _DWORD *v59; // r9
  int v60; // edx
  unsigned __int8 v61; // al
  struct _KPRCB *v62; // rax
  _DWORD *v63; // r9
  int v64; // edx
  ULONG_PTR AvailablePagesExcludeSlists; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  int v68; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v69; // [rsp+B0h] [rbp+18h]
  unsigned __int64 v70; // [rsp+B8h] [rbp+20h]

  v69 = a3;
  v3 = (_QWORD *)(a1 + 2432);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v70 = a1 + 8 * (a2 + 4 * (a2 + 76LL));
  if ( a1 + 2432 >= v70 )
    return -1LL;
  v4 = v70;
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
    if ( qword_140C4DF80 && (v17 & 0x10) == 0 )
      v17 &= ~qword_140C4DF80;
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
  v68 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v68, v23, v24, v25);
    while ( *(__int64 *)(v15 + 24) < 0 );
  }
  if ( (*(_BYTE *)(v15 + 34) & 7) != 2
    || *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v15 + 40) >> 39) & 0x3FFLL)) != a1 )
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
    v4 = v70;
    goto LABEL_63;
  }
  if ( v6 != v26 )
  {
    v6 = 0xFFFFFFFFFLL;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    goto LABEL_54;
  }
  v27 = *(_QWORD *)(v18 + 16);
  if ( qword_140C4DF80 && (v27 & 0x10) == 0 )
    v27 &= ~qword_140C4DF80;
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
  if ( dword_140C4E70C == 1 )
  {
    v35 = v9 & 0x1F;
    LOBYTE(v36) = 1;
    v37 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (v9 >> 5));
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
  v50 = MiDecreaseAvailablePages(a1, 1LL, 0xFFFFFFFFFFFFFFFFuLL, v69);
  *(_QWORD *)(v15 + 24) &= 0xFFFFFFF000000000uLL;
  MiRestoreTransitionPte(v15, 0LL, v51);
  v52 = MI_PFN_IS_PROTO(v15);
  v53 = 4352LL;
  if ( !v52 )
    v53 = 5056LL;
  _InterlockedDecrement64((volatile signed __int64 *)(v53 + a1));
  v54 = *(_BYTE *)(v15 + 34);
  *(_QWORD *)(v15 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(v15 + 34) = v54 & 0xC7;
  v55 = *(_BYTE *)(v15 + 35) & 0xDF;
  *(_QWORD *)v15 = 0LL;
  *(_BYTE *)(v15 + 35) = v55;
  *(_BYTE *)(v15 + 34) = *(_BYTE *)(v15 + 34) & 0xF8 | 5;
  *(_QWORD *)(v15 + 16) = ZeroPte;
  MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(v15 + 16));
  if ( (v56 & 1) != 0 )
    *(_QWORD *)(v15 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v15 + 16), 4294967293LL);
  if ( v50 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v61 = KeGetCurrentIrql();
        if ( v61 <= 0xFu && CurrentIrql <= 0xFu && v61 >= 2u )
        {
          v62 = KeGetCurrentPrcb();
          v63 = v62->SchedulerAssist;
          v64 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v64 & v63[5]) == 0;
          v63[5] &= v64;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v62);
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
        v57 = KeGetCurrentIrql();
        if ( v57 <= 0xFu && CurrentIrql <= 0xFu && v57 >= 2u )
        {
          v58 = KeGetCurrentPrcb();
          v59 = v58->SchedulerAssist;
          v60 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v14 = (v60 & v59[5]) == 0;
          v59[5] &= v60;
          if ( v14 )
            KiRemoveSystemWorkPriorityKick(v58);
        }
      }
    }
    __writecr8(CurrentIrql);
    return -1LL;
  }
}
