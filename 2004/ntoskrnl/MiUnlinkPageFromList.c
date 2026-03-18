/*
 * XREFs of MiUnlinkPageFromList @ 0x1402A9D50
 * Callers:
 *     MiUnlinkStandbyBatch @ 0x140226F90 (MiUnlinkStandbyBatch.c)
 *     MiDeleteClusterSection @ 0x1402273C0 (MiDeleteClusterSection.c)
 *     MiWalkEntireImage @ 0x14022B620 (MiWalkEntireImage.c)
 *     MmCheckCachedPageStates @ 0x14022FA30 (MmCheckCachedPageStates.c)
 *     MiOutSwapWorkingSetPte @ 0x140237520 (MiOutSwapWorkingSetPte.c)
 *     MiDeleteTransitionPte @ 0x1402419A0 (MiDeleteTransitionPte.c)
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiHandleTransitionFault @ 0x1402A98F0 (MiHandleTransitionFault.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MiReservePageFileSpaceForPage @ 0x1402BAA60 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x1402BB6D0 (MiActOnPte.c)
 *     MiEmptyDecayClusterTimers @ 0x1402D1DE4 (MiEmptyDecayClusterTimers.c)
 *     MiRelinkStandbyPage @ 0x1402D1FBC (MiRelinkStandbyPage.c)
 *     MiGatherMappedPages @ 0x1402F5340 (MiGatherMappedPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402F64EC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReferencePageForModifiedWrite @ 0x1402F771C (MiReferencePageForModifiedWrite.c)
 *     MiReplaceTransitionPage @ 0x14031BEAC (MiReplaceTransitionPage.c)
 *     MiDecayPfnFullyInitialized @ 0x14033A13C (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x14033A264 (MiDeleteParentDecayNode.c)
 *     MiUnlinkStandbyPfn @ 0x14033D070 (MiUnlinkStandbyPfn.c)
 *     MiFreeSlabEntries @ 0x140346D00 (MiFreeSlabEntries.c)
 *     MiConvertStandbyToProto @ 0x140364CE8 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x1403688A4 (MiResolveProtoCombine.c)
 *     MiMirrorPerformBrownWrites @ 0x14037FD90 (MiMirrorPerformBrownWrites.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140382660 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x1403844EC (MiBuildReservationCluster.c)
 *     MiPurgeImageSection @ 0x1403A2634 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x140524E00 (MiPurgeSubsection.c)
 *     MiMakeOutswappedPageResident @ 0x1405265F0 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x140527720 (MiWalkResetCommitPte.c)
 *     MiEnableLargeSubsection @ 0x14053B4DC (MiEnableLargeSubsection.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053C238 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x14053E254 (MiFreeModifiedReservations.c)
 *     MiNoPagesLastChance @ 0x14054B328 (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x14054BEC0 (MiReuseStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x14054DC2C (MiGetSlabStandbyPage.c)
 *     MiHandleForkTransitionPte @ 0x1405555C4 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiSetPfnBlink @ 0x140221F20 (MiSetPfnBlink.c)
 *     KxWaitForLockChainValid @ 0x140279BD0 (KxWaitForLockChainValid.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14029AB10 (KxAcquireQueuedSpinLock.c)
 *     MiGetPfnPriority @ 0x1402AAA70 (MiGetPfnPriority.c)
 *     KxWaitForLockOwnerShip @ 0x1402C0EA0 (KxWaitForLockOwnerShip.c)
 *     MiPageToChannel @ 0x140317238 (MiPageToChannel.c)
 *     MiDeleteParentDecayNode @ 0x14033A264 (MiDeleteParentDecayNode.c)
 *     MiUpdateAvailableEvents @ 0x1403B2A94 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403EEC18 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140510F5C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051101C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x1405360B4 (MiObtainFreePages.c)
 *     MiUnlinkPageFromBadList @ 0x14054A070 (MiUnlinkPageFromBadList.c)
 *     MiGetSlabAllocatorStandbyList @ 0x14054D9E4 (MiGetSlabAllocatorStandbyList.c)
 */

__int64 __fastcall MiUnlinkPageFromList(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // r9d
  unsigned int v9; // ebx
  ULONG_PTR v10; // r13
  unsigned int PfnPriority; // eax
  __int64 v12; // rdx
  int v13; // r10d
  unsigned int v14; // r14d
  __int64 SlabAllocatorStandbyList; // rax
  unsigned int v16; // ebx
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  int v19; // eax
  signed __int64 v20; // r8
  unsigned __int64 v21; // r10
  ULONG_PTR v22; // r9
  ULONG_PTR v23; // r8
  __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // r11
  signed __int64 v27; // r8
  signed __int64 v28; // rcx
  unsigned int v29; // eax
  unsigned __int64 v30; // r11
  unsigned int v31; // eax
  int v32; // eax
  int v33; // r10d
  __int64 v34; // rcx
  volatile __int64 *v35; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v38; // eax
  unsigned __int16 v39; // cx
  char v40; // al
  __int64 v41; // rcx
  struct _KPRCB *v42; // rcx
  _DWORD *v43; // rdx
  int v44; // eax
  int v45; // eax
  int v46; // r10d
  __int64 v47; // rcx
  int v48; // r14d
  volatile signed __int64 *v49; // r11
  signed __int64 v50; // rax
  signed __int64 v51; // r8
  signed __int64 v52; // rcx
  signed __int64 v53; // rcx
  unsigned int v54; // eax
  char v55; // al
  __int64 v56; // r12
  int v57; // edx
  __int64 v58; // r14
  __int64 v59; // r11
  char *v60; // rax
  int v61; // ecx
  __int64 v62; // rsi
  unsigned int v63; // eax
  _QWORD *v64; // r10
  unsigned __int64 v65; // r11
  signed __int64 v66; // rcx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // r10
  int v70; // r13d
  __int64 v71; // rax
  struct _KPRCB *v72; // rcx
  _DWORD *v73; // rdx
  int v74; // eax
  unsigned __int64 v75; // r14
  __int64 v76; // rax
  int v77; // ecx
  __int128 v78; // [rsp+30h] [rbp-58h] BYREF
  __int64 v79; // [rsp+40h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h]
  int v81; // [rsp+90h] [rbp+8h]
  __int64 v82; // [rsp+90h] [rbp+8h]

  BugCheckParameter4 = *(unsigned __int16 *)(BugCheckParameter2 + 32);
  v79 = 0LL;
  v78 = 0LL;
  if ( (_WORD)BugCheckParameter4 )
  {
    if ( (*(_QWORD *)(BugCheckParameter2 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(
        0x4Eu,
        2uLL,
        (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48,
        BugCheckParameter3,
        BugCheckParameter4);
    return 1LL;
  }
  v5 = *(_QWORD *)(BugCheckParameter2 + 40);
  v6 = *(_QWORD *)(qword_140C4E448 + 8 * ((v5 >> 39) & 0x3FF));
  v7 = *(_QWORD *)(v6 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 4216);
  v8 = *(_DWORD *)(v7 + 8);
  v81 = v8;
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5 )
  {
    MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
    return 1LL;
  }
  v9 = 65;
  v10 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  if ( v10 < qword_140C4E7A0 || v10 >= qword_140C4E7A0 + 2048 )
  {
    if ( byte_140C51E5E && _bittest64((const signed __int64 *)qword_140C52388, v10 >> 9) )
      v9 = 81;
  }
  else
  {
    v9 = 69;
  }
  if ( v8 != 2 )
  {
    if ( v8 != 3 )
    {
      v45 = MI_PFN_IS_PROTO(BugCheckParameter2);
      v47 = 4352LL;
      v12 = 5056LL;
      if ( !v45 )
        v47 = 5056LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v47 + v6));
      if ( !v46 )
      {
        *(_QWORD *)&v78 = 0LL;
        *((_QWORD *)&v78 + 1) = v7 + 32;
        KxAcquireQueuedSpinLock((__int64)&v78, (volatile __int64 *)(v7 + 32));
      }
      goto LABEL_107;
    }
    _InterlockedDecrement64((volatile signed __int64 *)v7);
    v32 = MI_PFN_IS_PROTO(BugCheckParameter2);
    v34 = 4352LL;
    v12 = 5056LL;
    if ( !v32 )
      v34 = 5056LL;
    _InterlockedDecrement64((volatile signed __int64 *)(v34 + v6));
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
    {
      if ( !v33 )
      {
        v35 = (volatile __int64 *)(v7 + 32);
        *(_QWORD *)&v78 = 0LL;
        *((_QWORD *)&v78 + 1) = v35;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v38 = SchedulerAssist[6];
            SchedulerAssist[6] = v38 + 1;
            if ( v38 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v78, v35);
        }
        else
        {
          v12 = _InterlockedExchange64(v35, (__int64)&v78);
          if ( v12 )
            KxWaitForLockOwnerShip(&v78);
        }
      }
      --*(_QWORD *)(v6 + 7600);
      v39 = *(_QWORD *)(BugCheckParameter2 + 16);
      v40 = (unsigned __int8)v39 >> 1;
      v41 = v39 >> 12;
      if ( (v40 & 1) != 0 || (_DWORD)v41 == *(_DWORD *)(v6 + 1156) )
        v7 = v6 + 8 * (v41 + 4 * (v41 + 88));
      else
        v7 = v6 + 2752;
      goto LABEL_107;
    }
    v7 = v6
       + 8 * ((*(_BYTE *)(BugCheckParameter2 + 39) & 0xF) + 4 * ((*(_BYTE *)(BugCheckParameter2 + 39) & 0xF) + 108LL));
    if ( !v33 )
    {
      *(_QWORD *)&v78 = 0LL;
      *((_QWORD *)&v78 + 1) = v7 + 32;
      v42 = KeGetCurrentPrcb();
      v43 = v42->SchedulerAssist;
      if ( v43 )
      {
        if ( v42->NestingLevel <= 1u )
        {
          v44 = v43[6];
          v43[6] = v44 + 1;
          if ( v44 == -1 )
            KiRemoveSystemWorkPriorityKick(v42);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v78, v7 + 32);
        *(_BYTE *)(BugCheckParameter2 + 39) &= 0xF0u;
LABEL_107:
        v20 = 0xFFFFFFFFFLL;
        v21 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
        v22 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
        goto LABEL_108;
      }
      v12 = _InterlockedExchange64((volatile __int64 *)(v7 + 32), (__int64)&v78);
      if ( v12 )
        KxWaitForLockOwnerShip(&v78);
    }
    *(_BYTE *)(BugCheckParameter2 + 39) &= 0xF0u;
    goto LABEL_107;
  }
  if ( (v5 & 0x2000000000000LL) != 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x40) != 0 )
      MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
    *(_QWORD *)BugCheckParameter2 = 0LL;
    MiSetPfnBlink(BugCheckParameter2, 0LL, 1);
    return 1LL;
  }
  PfnPriority = MiGetPfnPriority(BugCheckParameter2);
  v9 |= 2u;
  v14 = PfnPriority;
  if ( (v9 & 4) == 0 || (v9 = v12 & 0xFFFFFFBD, (v12 & 4) == 0) )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 8) != 0 )
      v9 |= 8u;
  }
  v7 = v6 + 8 * (PfnPriority + 4 * (PfnPriority + 76LL));
  if ( (v9 & 0x10) != 0 )
  {
    if ( *(__int64 *)BugCheckParameter2 >= 0 )
    {
      v16 = v9 & 0xFFFFFFBF;
    }
    else
    {
      SlabAllocatorStandbyList = MiGetSlabAllocatorStandbyList(BugCheckParameter2, 0LL);
      v13 = a2;
      v7 = SlabAllocatorStandbyList;
      v16 = v9 | 0x20;
    }
    v9 = v16 & 0xFFFFFFFD;
  }
  if ( (v9 & 2) != 0 )
  {
    if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2) )
      _InterlockedDecrement64((volatile signed __int64 *)(v6 + 4352));
    else
      _InterlockedDecrement64((volatile signed __int64 *)(v6 + 5056));
  }
  if ( !v13 )
  {
    *(_QWORD *)&v78 = 0LL;
    *((_QWORD *)&v78 + 1) = v7 + 32;
    v17 = KeGetCurrentPrcb();
    v18 = v17->SchedulerAssist;
    if ( v18 )
    {
      if ( v17->NestingLevel <= 1u )
      {
        v19 = v18[6];
        v18[6] = v19 + 1;
        if ( v19 == -1 )
          KiRemoveSystemWorkPriorityKick(v17);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v78, v7 + 32);
    }
    else
    {
      v12 = _InterlockedExchange64((volatile __int64 *)(v7 + 32), (__int64)&v78);
      if ( v12 )
        KxWaitForLockOwnerShip(&v78);
    }
  }
  v20 = 0xFFFFFFFFFLL;
  v21 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
  v22 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
  if ( (v9 & 8) == 0 )
  {
    if ( v21 == 0xFFFFFFFFFLL || v21 >= qword_140C4E7A0 && v21 < qword_140C4E7A0 + 2048 )
    {
      v30 = 0xFFFFFA8000000000uLL;
    }
    else
    {
      v29 = MiGetPfnPriority(48 * v21 - 0x58000000000LL);
      if ( v14 != v29 )
        KeBugCheckEx(0x1Au, 0x8886uLL, BugCheckParameter2, v12, v29 | (unsigned __int64)(v14 << 8));
    }
    if ( v22 != v20 && (v22 < qword_140C4E7A0 || v22 >= qword_140C4E7A0 + 2048) )
    {
      v31 = MiGetPfnPriority(v30 + 48 * v22);
      if ( v14 != v31 )
        KeBugCheckEx(0x1Au, 0x8887uLL, BugCheckParameter2, v12, v31 | (unsigned __int64)(v14 << 8));
    }
    goto LABEL_62;
  }
  v23 = qword_140C4E7A0;
  if ( v21 < qword_140C4E7A0 || v21 >= qword_140C4E7A0 + 2048 || v22 != v21 )
  {
    v12 = 48 * v22 - 0x58000000000LL;
    if ( v22 < qword_140C4E7A0 || v22 >= qword_140C4E7A0 + 2048 )
    {
      *(_QWORD *)v12 = v21 | *(_QWORD *)v12 & 0xFFFFFFF000000000uLL;
      goto LABEL_56;
    }
    v24 = *(_QWORD *)(v12 + 16);
    if ( qword_140C4DD40 )
    {
      if ( (v24 & 0x10) != 0 )
        v24 &= ~0x10uLL;
      else
        v24 &= ~qword_140C4DD40;
    }
    v25 = v24 & 0xFFFF000000000FFFuLL | (v21 << 12);
    if ( qword_140C4DD40 )
    {
      if ( (qword_140C4DD40 & v25) == 0 )
      {
        *(_QWORD *)(v12 + 16) = qword_140C4DD40 | v25;
LABEL_56:
        v26 = 48 * v21 - 0x58000000000LL;
        if ( v21 < v23 || v21 >= v23 + 2048 )
        {
          v12 = *(_QWORD *)(v26 + 24);
          v27 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v26 + 24),
                  v22 | v12 & 0xFFFFFFF000000000uLL,
                  v12);
          if ( v12 != v27 )
          {
            do
            {
              v28 = v27;
              v27 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v26 + 24),
                      v22 | v27 & 0xFFFFFFF000000000uLL,
                      v27);
            }
            while ( v28 != v27 );
          }
        }
        else
        {
          *(_QWORD *)(v26 + 40) = v22 | *(_QWORD *)(v26 + 40) & 0xFFFFFFF000000000uLL;
        }
        goto LABEL_61;
      }
      v25 |= 0x10uLL;
    }
    *(_QWORD *)(v12 + 16) = v25;
    goto LABEL_56;
  }
  MiDeleteParentDecayNode(BugCheckParameter2);
LABEL_61:
  v20 = 0xFFFFFFFFFLL;
  v21 = 0xFFFFFFFFFLL;
  v22 = 0xFFFFFFFFFLL;
LABEL_62:
  if ( v14 < *(unsigned __int8 *)(v6 + 4828) && (v9 & 0x20) == 0 )
    v9 &= ~1u;
LABEL_108:
  if ( v21 == v20 )
  {
    v48 = v81;
    v54 = v9 >> 3;
    if ( (v9 & 8) == 0 )
      *(_QWORD *)(v7 + 24) = v22;
  }
  else
  {
    v48 = v81;
    v49 = (volatile signed __int64 *)(48 * v21 - 0x57FFFFFFFE8LL);
    v12 = *v49;
    v50 = _InterlockedCompareExchange64(v49, v22 | *v49 & 0xFFFFFFF000000000uLL, *v49);
    v51 = v50;
    if ( v48 == 2 )
    {
      if ( v12 != v50 )
      {
        do
        {
          v52 = v51;
          v51 = _InterlockedCompareExchange64(v49, v22 | v51 & 0xFFFFFFF000000000uLL, v51);
        }
        while ( v52 != v51 );
      }
    }
    else if ( v12 != v50 )
    {
      do
      {
        v53 = v51;
        v51 = _InterlockedCompareExchange64(v49, v22 | v51 & 0xFFFFFFF000000000uLL, v51);
      }
      while ( v53 != v51 );
    }
    v20 = 0xFFFFFFFFFLL;
    v54 = v9 >> 3;
  }
  if ( v22 == v20 )
  {
    if ( (v54 & 1) == 0 )
      *(_QWORD *)(v7 + 16) = v21;
  }
  else
  {
    v12 = 48 * v22 - 0x58000000000LL;
    *(_QWORD *)v12 = v21 | *(_QWORD *)v12 & 0xFFFFFFF000000000uLL;
  }
  if ( v9 >= 0x40 )
    --*(_QWORD *)v7;
  if ( v48 == 2 && (v9 & 0x14) == 0 )
  {
    v55 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v55 & 8) != 0 )
      v56 = 5LL;
    else
      v56 = v55 & 7;
    v57 = dword_140C4DC88;
    v58 = *(unsigned __int8 *)(BugCheckParameter2 + 39) | (*(_QWORD *)BugCheckParameter2 >> 28) & 0xFFFFFFF00LL;
    v59 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(BugCheckParameter2 + 36);
    v82 = v59;
    if ( dword_140C4DC84 > (unsigned int)dword_140C4DC88
      || (v60 = (char *)qword_140C4DCC8 + 16 * dword_140C4DC84, v10 < *(_QWORD *)v60)
      || dword_140C4DC84 != dword_140C4DC88 && v10 >= *((_QWORD *)v60 + 2) )
    {
      v20 = 0LL;
      if ( dword_140C4DC88 < 0 )
LABEL_204:
        KeBugCheckEx(0x1Au, 0x6201uLL, v10, 0LL, 0LL);
      while ( 1 )
      {
        v61 = ((int)v20 + v57) >> 1;
        v60 = (char *)qword_140C4DCC8 + 16 * v61;
        if ( v10 >= *(_QWORD *)v60 )
        {
          if ( v61 == dword_140C4DC88 || v10 < *((_QWORD *)v60 + 2) )
          {
            dword_140C4DC84 = ((int)v20 + v57) >> 1;
            break;
          }
          v20 = (unsigned int)(v61 + 1);
        }
        else
        {
          if ( !v61 )
            KeBugCheckEx(0x1Au, 0x6200uLL, v10, (ULONG_PTR)qword_140C4DCC8, 0LL);
          v57 = v61 - 1;
        }
        if ( v57 < (int)v20 )
          goto LABEL_204;
      }
    }
    v12 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
    v62 = *(_QWORD *)(v12 + 16) + 4544LL * *((unsigned int *)v60 + 2);
    if ( qword_140C4DCD0 )
    {
      v63 = MiPageToChannel(v10);
      v59 = v82;
    }
    else
    {
      v63 = 0;
    }
    v64 = (_QWORD *)(v62 + 24 * (v56 + 8LL * v63));
    if ( v58 == 0xFFFFFFFFFLL )
    {
      v64[409] = v59;
    }
    else
    {
      v22 = 48 * v58 - 0x58000000000LL;
      *(_WORD *)(v22 + 36) = v59;
      v12 = *(_QWORD *)(v22 + 24);
      v65 = (v59 & 0xFFFFFFFFFFFF0000uLL) << 20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)(v22 + 24), v65 | v12 & 0xFF00000FFFFFFFFFuLL, v12);
      if ( v12 != v20 )
      {
        v12 = 0xFF00000FFFFFFFFFuLL;
        do
        {
          v66 = v20;
          v20 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v22 + 24),
                  v65 | v20 & 0xFF00000FFFFFFFFFuLL,
                  v20);
        }
        while ( v66 != v20 );
      }
      v59 = v82;
    }
    if ( v59 == 0xFFFFFFFFFLL )
    {
      v64[408] = v58;
    }
    else
    {
      v67 = 48 * v59 - 0x58000000000LL;
      v68 = *(_QWORD *)v67 ^ (v58 << 28);
      *(_BYTE *)(v67 + 39) = v58;
      *(_QWORD *)v67 = (v58 << 28) ^ v68 & 0xFFFFFFFFFLL;
    }
    --v64[407];
    if ( (v9 & 8) != 0 )
      *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  }
  *(_QWORD *)BugCheckParameter2 = 0LL;
  if ( (v9 & 4) != 0 )
  {
    MiSetPfnBlink(BugCheckParameter2, 0LL, 0);
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFFF000000000uLL;
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x2000000000000LL) == 0 && dword_140C4E4CC == 1 )
    {
      v69 = ((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) & 0x1F;
      v22 = 1LL;
      v20 = qword_140C4E528 + 4 * (v10 >> 5);
      if ( (unsigned __int64)(v69 + 1) > 0x20 )
      {
        if ( (v10 & 0x1F) == 0 )
          goto LABEL_167;
        v70 = v10 & 0x1F;
        v12 = (unsigned int)(32 - v70);
        _InterlockedOr((volatile signed __int32 *)v20, ((1 << (32 - v70)) - 1) << v69);
        v20 += 4LL;
        v22 = 1 - v12;
        if ( (unsigned __int64)(1 - v12) >= 0x20 )
        {
          v12 = v22 >> 5;
          v22 += -32LL * (v22 >> 5);
          do
          {
            *(_DWORD *)v20 = -1;
            v20 += 4LL;
            --v12;
          }
          while ( v12 );
        }
        if ( v22 )
LABEL_167:
          _InterlockedOr((volatile signed __int32 *)v20, (1 << v22) - 1);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)v20, 1 << v69);
      }
    }
  }
  if ( a2 )
    goto LABEL_180;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v78);
    v71 = v78;
    if ( !(_QWORD)v78 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v78 + 1), 0LL, (signed __int64)&v78) == &v78 )
        goto LABEL_176;
      v71 = KxWaitForLockChainValid((__int64 *)&v78, v12, v20, v22);
    }
    *(_QWORD *)&v78 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v71 + 8), 1uLL);
    goto LABEL_176;
  }
  KiReleaseQueuedSpinLockInstrumented(&v78, retaddr);
LABEL_176:
  v72 = KeGetCurrentPrcb();
  v73 = v72->SchedulerAssist;
  if ( v73 )
  {
    if ( v72->NestingLevel <= 1u )
    {
      v74 = v73[6] - 1;
      v73[6] = v74;
      if ( !v74 )
        KiRemoveSystemWorkPriorityKick(v72);
    }
  }
LABEL_180:
  if ( (v9 & 2) != 0 )
  {
    v75 = _InterlockedDecrement64((volatile signed __int64 *)(v6 + 7104));
    if ( v75 == *(_QWORD *)(v6 + 5168) || v75 == *(_QWORD *)(v6 + 5176) )
      MiUpdateAvailableEvents(v6);
    if ( v75 <= 0x420 )
    {
      v76 = *(_QWORD *)(v6 + 6848);
      if ( !v76 || !*(_BYTE *)(v76 + 52) )
        MiObtainFreePages(v6);
      if ( v75 < 0xA0 && v75 + 1 >= 0xA0 && *(_DWORD *)(v6 + 1160) )
        KeSetEvent((PRKEVENT)(v6 + 1008), 0, 0);
    }
    if ( v75 < 0x9F )
    {
      v77 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v77 & 0xC) != 8
        && (v75 < 0x20 && (ULONG_PTR *)v6 == &MiSystemPartition
         || ((v77 & 2) == 0 || v75 < 0x21) && (*(_DWORD *)(v6 + 4) & 0x20) == 0) )
      {
        LOBYTE(v9) = -2;
      }
    }
  }
  return v9 & 1;
}
