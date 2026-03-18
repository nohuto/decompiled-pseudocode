/*
 * XREFs of MiUnlinkPageFromList @ 0x140217240
 * Callers:
 *     MiHandleTransitionFault @ 0x140216DE0 (MiHandleTransitionFault.c)
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MiReservePageFileSpaceForPage @ 0x140227DE0 (MiReservePageFileSpaceForPage.c)
 *     MiActOnPte @ 0x140228A50 (MiActOnPte.c)
 *     MiEmptyDecayClusterTimers @ 0x14023F05C (MiEmptyDecayClusterTimers.c)
 *     MiRelinkStandbyPage @ 0x14023F234 (MiRelinkStandbyPage.c)
 *     MiUnlinkStandbyBatch @ 0x14027FFE0 (MiUnlinkStandbyBatch.c)
 *     MiDeleteClusterSection @ 0x140280410 (MiDeleteClusterSection.c)
 *     MiWalkEntireImage @ 0x140284670 (MiWalkEntireImage.c)
 *     MmCheckCachedPageStates @ 0x140288A80 (MmCheckCachedPageStates.c)
 *     MiOutSwapWorkingSetPte @ 0x140290570 (MiOutSwapWorkingSetPte.c)
 *     MiDeleteTransitionPte @ 0x14029A9D0 (MiDeleteTransitionPte.c)
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiDecayPfnFullyInitialized @ 0x1402FCDFC (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x1402FCF24 (MiDeleteParentDecayNode.c)
 *     MiUnlinkStandbyPfn @ 0x140300770 (MiUnlinkStandbyPfn.c)
 *     MiFreeSlabEntries @ 0x140308F00 (MiFreeSlabEntries.c)
 *     MiReplaceTransitionPage @ 0x14034B1EC (MiReplaceTransitionPage.c)
 *     MiGatherMappedPages @ 0x14035131C (MiGatherMappedPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1403524CC (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReferencePageForModifiedWrite @ 0x1403536FC (MiReferencePageForModifiedWrite.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x140367EE4 (MiResolveProtoCombine.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140381E20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140383580 (MiBuildReservationCluster.c)
 *     MiMirrorPerformBrownWrites @ 0x14038A368 (MiMirrorPerformBrownWrites.c)
 *     MiPurgeImageSection @ 0x1403A1EA4 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x1405247B0 (MiPurgeSubsection.c)
 *     MiMakeOutswappedPageResident @ 0x140525FA0 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x1405270D0 (MiWalkResetCommitPte.c)
 *     MiEnableLargeSubsection @ 0x14053AE8C (MiEnableLargeSubsection.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053BBE8 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x14053DC04 (MiFreeModifiedReservations.c)
 *     MiNoPagesLastChance @ 0x14054ACD8 (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x14054B870 (MiReuseStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x14054D5DC (MiGetSlabStandbyPage.c)
 *     MiHandleForkTransitionPte @ 0x140554F74 (MiHandleForkTransitionPte.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x140208000 (KxAcquireQueuedSpinLock.c)
 *     MiGetPfnPriority @ 0x140217F60 (MiGetPfnPriority.c)
 *     KxWaitForLockOwnerShip @ 0x14022E070 (KxWaitForLockOwnerShip.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     MiSetPfnBlink @ 0x14027AF70 (MiSetPfnBlink.c)
 *     KxWaitForLockChainValid @ 0x1402DAB20 (KxWaitForLockChainValid.c)
 *     MiDeleteParentDecayNode @ 0x1402FCF24 (MiDeleteParentDecayNode.c)
 *     MiPageToChannel @ 0x140346578 (MiPageToChannel.c)
 *     MiUpdateAvailableEvents @ 0x1403ACE14 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403ED8B8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051090C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405109CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x140535A64 (MiObtainFreePages.c)
 *     MiUnlinkPageFromBadList @ 0x140549A20 (MiUnlinkPageFromBadList.c)
 *     MiGetSlabAllocatorStandbyList @ 0x14054D394 (MiGetSlabAllocatorStandbyList.c)
 */

__int64 __fastcall MiUnlinkPageFromList(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // r9
  unsigned int v9; // ebx
  ULONG_PTR v10; // r13
  unsigned int PfnPriority; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r10d
  unsigned int v15; // r14d
  __int64 SlabAllocatorStandbyList; // rax
  unsigned int v17; // ebx
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  int v20; // eax
  signed __int64 v21; // r8
  unsigned __int64 v22; // r10
  unsigned __int64 v23; // r9
  ULONG_PTR v24; // r8
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r11
  signed __int64 v28; // r8
  signed __int64 v29; // rcx
  unsigned int v30; // eax
  unsigned __int64 v31; // r11
  unsigned int v32; // eax
  int v33; // eax
  int v34; // r10d
  __int64 v35; // rcx
  volatile __int64 *v36; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v39; // eax
  unsigned __int16 v40; // cx
  char v41; // al
  __int64 v42; // rcx
  struct _KPRCB *v43; // rcx
  _DWORD *v44; // rdx
  int v45; // eax
  int v46; // eax
  int v47; // r10d
  __int64 v48; // rcx
  int v49; // r14d
  volatile signed __int64 *v50; // r11
  signed __int64 v51; // rax
  signed __int64 v52; // r8
  signed __int64 v53; // rcx
  signed __int64 v54; // rcx
  unsigned int v55; // eax
  char v56; // al
  __int64 v57; // r12
  int v58; // edx
  __int64 v59; // r14
  __int64 v60; // r11
  char *v61; // rax
  int v62; // ecx
  __int64 v63; // rsi
  unsigned int v64; // eax
  _QWORD *v65; // r10
  __int64 v66; // r9
  unsigned __int64 v67; // r11
  signed __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // r10
  unsigned __int64 v72; // r9
  int v73; // r13d
  __int64 v74; // rax
  struct _KPRCB *v75; // rcx
  _DWORD *v76; // rdx
  int v77; // eax
  unsigned __int64 v78; // r14
  __int64 v79; // rax
  int v80; // ecx
  __int128 v81; // [rsp+30h] [rbp-58h] BYREF
  __int64 v82; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v84; // [rsp+90h] [rbp+8h]
  __int64 v85; // [rsp+90h] [rbp+8h]

  BugCheckParameter4 = *(unsigned __int16 *)(BugCheckParameter2 + 32);
  v82 = 0LL;
  v81 = 0LL;
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
  v6 = *(_QWORD *)(qword_140C4E588 + 8 * ((v5 >> 39) & 0x3FF));
  v7 = *(_QWORD *)(v6 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 4216);
  v8 = *(unsigned int *)(v7 + 8);
  v84 = *(_DWORD *)(v7 + 8);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5 )
  {
    MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
    return 1LL;
  }
  v9 = 65;
  v10 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  if ( v10 < qword_140C4E8E0 || v10 >= qword_140C4E8E0 + 2048 )
  {
    if ( byte_140C51F5E && _bittest64((const signed __int64 *)qword_140C52488, v10 >> 9) )
      v9 = 81;
  }
  else
  {
    v9 = 69;
  }
  if ( (_DWORD)v8 != 2 )
  {
    if ( (_DWORD)v8 != 3 )
    {
      v46 = MI_PFN_IS_PROTO(BugCheckParameter2, v9, v5);
      v48 = 4352LL;
      v12 = 5056LL;
      if ( !v46 )
        v48 = 5056LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v48 + v6));
      if ( !v47 )
      {
        *(_QWORD *)&v81 = 0LL;
        *((_QWORD *)&v81 + 1) = v7 + 32;
        KxAcquireQueuedSpinLock((__int64)&v81, (volatile __int64 *)(v7 + 32));
      }
      goto LABEL_107;
    }
    _InterlockedDecrement64((volatile signed __int64 *)v7);
    v33 = MI_PFN_IS_PROTO(BugCheckParameter2, v9, v5);
    v35 = 4352LL;
    v12 = 5056LL;
    if ( !v33 )
      v35 = 5056LL;
    _InterlockedDecrement64((volatile signed __int64 *)(v35 + v6));
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
    {
      if ( !v34 )
      {
        v36 = (volatile __int64 *)(v7 + 32);
        *(_QWORD *)&v81 = 0LL;
        *((_QWORD *)&v81 + 1) = v36;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v39 = SchedulerAssist[6];
            SchedulerAssist[6] = v39 + 1;
            if ( v39 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v81, v36);
        }
        else
        {
          v12 = _InterlockedExchange64(v36, (__int64)&v81);
          if ( v12 )
            KxWaitForLockOwnerShip(&v81);
        }
      }
      --*(_QWORD *)(v6 + 7600);
      v40 = *(_QWORD *)(BugCheckParameter2 + 16);
      v41 = (unsigned __int8)v40 >> 1;
      v42 = v40 >> 12;
      if ( (v41 & 1) != 0 || (_DWORD)v42 == *(_DWORD *)(v6 + 1156) )
        v7 = v6 + 8 * (v42 + 4 * (v42 + 88));
      else
        v7 = v6 + 2752;
      goto LABEL_107;
    }
    v7 = v6
       + 8 * ((*(_BYTE *)(BugCheckParameter2 + 39) & 0xF) + 4 * ((*(_BYTE *)(BugCheckParameter2 + 39) & 0xF) + 108LL));
    if ( !v34 )
    {
      *(_QWORD *)&v81 = 0LL;
      *((_QWORD *)&v81 + 1) = v7 + 32;
      v43 = KeGetCurrentPrcb();
      v44 = v43->SchedulerAssist;
      if ( v44 )
      {
        if ( v43->NestingLevel <= 1u )
        {
          v45 = v44[6];
          v44[6] = v45 + 1;
          if ( v45 == -1 )
            KiRemoveSystemWorkPriorityKick(v43);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v81, v7 + 32);
        *(_BYTE *)(BugCheckParameter2 + 39) &= 0xF0u;
LABEL_107:
        v21 = 0xFFFFFFFFFLL;
        v22 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
        v23 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
        goto LABEL_108;
      }
      v12 = _InterlockedExchange64((volatile __int64 *)(v7 + 32), (__int64)&v81);
      if ( v12 )
        KxWaitForLockOwnerShip(&v81);
    }
    *(_BYTE *)(BugCheckParameter2 + 39) &= 0xF0u;
    goto LABEL_107;
  }
  if ( (v5 & 0x2000000000000LL) != 0 )
  {
    if ( (*(_BYTE *)(BugCheckParameter2 + 35) & 0x40) != 0 )
      MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
    *(_QWORD *)BugCheckParameter2 = 0LL;
    MiSetPfnBlink(BugCheckParameter2, 0LL, 1LL);
    return 1LL;
  }
  PfnPriority = MiGetPfnPriority(BugCheckParameter2, v9, v5, v8);
  v9 |= 2u;
  v15 = PfnPriority;
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
      v17 = v9 & 0xFFFFFFBF;
    }
    else
    {
      SlabAllocatorStandbyList = MiGetSlabAllocatorStandbyList(BugCheckParameter2, 0LL);
      v14 = a2;
      v7 = SlabAllocatorStandbyList;
      v17 = v9 | 0x20;
    }
    v9 = v17 & 0xFFFFFFFD;
  }
  if ( (v9 & 2) != 0 )
  {
    if ( (unsigned int)MI_PFN_IS_PROTO(BugCheckParameter2, v12, v13) )
      _InterlockedDecrement64((volatile signed __int64 *)(v6 + 4352));
    else
      _InterlockedDecrement64((volatile signed __int64 *)(v6 + 5056));
  }
  if ( !v14 )
  {
    *(_QWORD *)&v81 = 0LL;
    *((_QWORD *)&v81 + 1) = v7 + 32;
    v18 = KeGetCurrentPrcb();
    v19 = v18->SchedulerAssist;
    if ( v19 )
    {
      if ( v18->NestingLevel <= 1u )
      {
        v20 = v19[6];
        v19[6] = v20 + 1;
        if ( v20 == -1 )
          KiRemoveSystemWorkPriorityKick(v18);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v81, v7 + 32);
    }
    else
    {
      v12 = _InterlockedExchange64((volatile __int64 *)(v7 + 32), (__int64)&v81);
      if ( v12 )
        KxWaitForLockOwnerShip(&v81);
    }
  }
  v21 = 0xFFFFFFFFFLL;
  v22 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
  v23 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
  if ( (v9 & 8) == 0 )
  {
    if ( v22 == 0xFFFFFFFFFLL || v22 >= qword_140C4E8E0 && v22 < qword_140C4E8E0 + 2048 )
    {
      v31 = 0xFFFFFA8000000000uLL;
    }
    else
    {
      v30 = MiGetPfnPriority(48 * v22 - 0x58000000000LL, 48 * v22 - 0x58000000000LL, 0xFFFFFFFFFLL, v23);
      if ( v15 != v30 )
        KeBugCheckEx(0x1Au, 0x8886uLL, BugCheckParameter2, v12, v30 | (unsigned __int64)(v15 << 8));
    }
    if ( v23 != v21 && (v23 < qword_140C4E8E0 || v23 >= qword_140C4E8E0 + 2048) )
    {
      v32 = MiGetPfnPriority(v31 + 48 * v23, v31 + 48 * v23, v21, v23);
      if ( v15 != v32 )
        KeBugCheckEx(0x1Au, 0x8887uLL, BugCheckParameter2, v12, v32 | (unsigned __int64)(v15 << 8));
    }
    goto LABEL_62;
  }
  v24 = qword_140C4E8E0;
  if ( v22 < qword_140C4E8E0 || v22 >= qword_140C4E8E0 + 2048 || v23 != v22 )
  {
    v12 = 48 * v23 - 0x58000000000LL;
    if ( v23 < qword_140C4E8E0 || v23 >= qword_140C4E8E0 + 2048 )
    {
      *(_QWORD *)v12 = v22 | *(_QWORD *)v12 & 0xFFFFFFF000000000uLL;
      goto LABEL_56;
    }
    v25 = *(_QWORD *)(v12 + 16);
    if ( qword_140C4DE80 )
    {
      if ( (v25 & 0x10) != 0 )
        v25 &= ~0x10uLL;
      else
        v25 &= ~qword_140C4DE80;
    }
    v26 = v25 & 0xFFFF000000000FFFuLL | (v22 << 12);
    if ( qword_140C4DE80 )
    {
      if ( (qword_140C4DE80 & v26) == 0 )
      {
        *(_QWORD *)(v12 + 16) = qword_140C4DE80 | v26;
LABEL_56:
        v27 = 48 * v22 - 0x58000000000LL;
        if ( v22 < v24 || v22 >= v24 + 2048 )
        {
          v12 = *(_QWORD *)(v27 + 24);
          v28 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v27 + 24),
                  v23 | v12 & 0xFFFFFFF000000000uLL,
                  v12);
          if ( v12 != v28 )
          {
            do
            {
              v29 = v28;
              v28 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v27 + 24),
                      v23 | v28 & 0xFFFFFFF000000000uLL,
                      v28);
            }
            while ( v29 != v28 );
          }
        }
        else
        {
          *(_QWORD *)(v27 + 40) = v23 | *(_QWORD *)(v27 + 40) & 0xFFFFFFF000000000uLL;
        }
        goto LABEL_61;
      }
      v26 |= 0x10uLL;
    }
    *(_QWORD *)(v12 + 16) = v26;
    goto LABEL_56;
  }
  MiDeleteParentDecayNode(BugCheckParameter2);
LABEL_61:
  v21 = 0xFFFFFFFFFLL;
  v22 = 0xFFFFFFFFFLL;
  v23 = 0xFFFFFFFFFLL;
LABEL_62:
  if ( v15 < *(unsigned __int8 *)(v6 + 4828) && (v9 & 0x20) == 0 )
    v9 &= ~1u;
LABEL_108:
  if ( v22 == v21 )
  {
    v49 = v84;
    v55 = v9 >> 3;
    if ( (v9 & 8) == 0 )
      *(_QWORD *)(v7 + 24) = v23;
  }
  else
  {
    v49 = v84;
    v50 = (volatile signed __int64 *)(48 * v22 - 0x57FFFFFFFE8LL);
    v12 = *v50;
    v51 = _InterlockedCompareExchange64(v50, v23 | *v50 & 0xFFFFFFF000000000uLL, *v50);
    v52 = v51;
    if ( v49 == 2 )
    {
      if ( v12 != v51 )
      {
        do
        {
          v53 = v52;
          v52 = _InterlockedCompareExchange64(v50, v23 | v52 & 0xFFFFFFF000000000uLL, v52);
        }
        while ( v53 != v52 );
      }
    }
    else if ( v12 != v51 )
    {
      do
      {
        v54 = v52;
        v52 = _InterlockedCompareExchange64(v50, v23 | v52 & 0xFFFFFFF000000000uLL, v52);
      }
      while ( v54 != v52 );
    }
    v21 = 0xFFFFFFFFFLL;
    v55 = v9 >> 3;
  }
  if ( v23 == v21 )
  {
    if ( (v55 & 1) == 0 )
      *(_QWORD *)(v7 + 16) = v22;
  }
  else
  {
    v12 = 48 * v23 - 0x58000000000LL;
    *(_QWORD *)v12 = v22 | *(_QWORD *)v12 & 0xFFFFFFF000000000uLL;
  }
  if ( v9 >= 0x40 )
    --*(_QWORD *)v7;
  if ( v49 == 2 && (v9 & 0x14) == 0 )
  {
    v56 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v56 & 8) != 0 )
      v57 = 5LL;
    else
      v57 = v56 & 7;
    v58 = dword_140C4DDC8;
    v59 = *(unsigned __int8 *)(BugCheckParameter2 + 39) | (*(_QWORD *)BugCheckParameter2 >> 28) & 0xFFFFFFF00LL;
    v60 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(BugCheckParameter2 + 36);
    v85 = v60;
    if ( dword_140C4DDC4 > (unsigned int)dword_140C4DDC8
      || (v61 = (char *)qword_140C4DE08 + 16 * dword_140C4DDC4, v10 < *(_QWORD *)v61)
      || dword_140C4DDC4 != dword_140C4DDC8 && v10 >= *((_QWORD *)v61 + 2) )
    {
      v21 = 0LL;
      if ( dword_140C4DDC8 < 0 )
LABEL_204:
        KeBugCheckEx(0x1Au, 0x6201uLL, v10, 0LL, 0LL);
      while ( 1 )
      {
        v62 = ((int)v21 + v58) >> 1;
        v61 = (char *)qword_140C4DE08 + 16 * v62;
        if ( v10 >= *(_QWORD *)v61 )
        {
          if ( v62 == dword_140C4DDC8 || v10 < *((_QWORD *)v61 + 2) )
          {
            dword_140C4DDC4 = ((int)v21 + v58) >> 1;
            break;
          }
          v21 = (unsigned int)(v62 + 1);
        }
        else
        {
          if ( !v62 )
            KeBugCheckEx(0x1Au, 0x6200uLL, v10, (ULONG_PTR)qword_140C4DE08, 0LL);
          v58 = v62 - 1;
        }
        if ( v58 < (int)v21 )
          goto LABEL_204;
      }
    }
    v12 = *(_QWORD *)(qword_140C4E588 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL));
    v63 = *(_QWORD *)(v12 + 16) + 4544LL * *((unsigned int *)v61 + 2);
    if ( qword_140C4DE10 )
    {
      v64 = MiPageToChannel(v10);
      v60 = v85;
    }
    else
    {
      v64 = 0;
    }
    v65 = (_QWORD *)(v63 + 24 * (v57 + 8LL * v64));
    if ( v59 == 0xFFFFFFFFFLL )
    {
      v65[409] = v60;
    }
    else
    {
      v66 = 48 * v59 - 0x58000000000LL;
      *(_WORD *)(v66 + 36) = v60;
      v12 = *(_QWORD *)(v66 + 24);
      v67 = (v60 & 0xFFFFFFFFFFFF0000uLL) << 20;
      v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(v66 + 24), v67 | v12 & 0xFF00000FFFFFFFFFuLL, v12);
      if ( v12 != v21 )
      {
        v12 = 0xFF00000FFFFFFFFFuLL;
        do
        {
          v68 = v21;
          v21 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v66 + 24),
                  v67 | v21 & 0xFF00000FFFFFFFFFuLL,
                  v21);
        }
        while ( v68 != v21 );
      }
      v60 = v85;
    }
    if ( v60 == 0xFFFFFFFFFLL )
    {
      v65[408] = v59;
    }
    else
    {
      v69 = 48 * v60 - 0x58000000000LL;
      v70 = *(_QWORD *)v69 ^ (v59 << 28);
      *(_BYTE *)(v69 + 39) = v59;
      *(_QWORD *)v69 = (v59 << 28) ^ v70 & 0xFFFFFFFFFLL;
    }
    --v65[407];
    if ( (v9 & 8) != 0 )
      *(_BYTE *)(BugCheckParameter2 + 35) &= ~8u;
  }
  *(_QWORD *)BugCheckParameter2 = 0LL;
  if ( (v9 & 4) != 0 )
  {
    MiSetPfnBlink(BugCheckParameter2, 0LL, 0LL);
  }
  else
  {
    *(_QWORD *)(BugCheckParameter2 + 24) &= 0xFFFFFFF000000000uLL;
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x2000000000000LL) == 0 && dword_140C4E60C == 1 )
    {
      v71 = ((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) & 0x1F;
      LOBYTE(v72) = 1;
      v21 = qword_140C4E668 + 4 * (v10 >> 5);
      if ( (unsigned __int64)(v71 + 1) > 0x20 )
      {
        if ( (v10 & 0x1F) == 0 )
          goto LABEL_167;
        v73 = v10 & 0x1F;
        v12 = (unsigned int)(32 - v73);
        _InterlockedOr((volatile signed __int32 *)v21, ((1 << (32 - v73)) - 1) << v71);
        v21 += 4LL;
        v72 = 1 - v12;
        if ( (unsigned __int64)(1 - v12) >= 0x20 )
        {
          v12 = v72 >> 5;
          v72 += -32LL * (v72 >> 5);
          do
          {
            *(_DWORD *)v21 = -1;
            v21 += 4LL;
            --v12;
          }
          while ( v12 );
        }
        if ( v72 )
LABEL_167:
          _InterlockedOr((volatile signed __int32 *)v21, (1 << v72) - 1);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)v21, 1 << v71);
      }
    }
  }
  if ( a2 )
    goto LABEL_180;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v81);
    v74 = v81;
    if ( !(_QWORD)v81 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v81 + 1), 0LL, (signed __int64)&v81) == &v81 )
        goto LABEL_176;
      v74 = KxWaitForLockChainValid(&v81, v12, v21);
    }
    *(_QWORD *)&v81 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v74 + 8), 1uLL);
    goto LABEL_176;
  }
  KiReleaseQueuedSpinLockInstrumented(&v81, retaddr, v21);
LABEL_176:
  v75 = KeGetCurrentPrcb();
  v76 = v75->SchedulerAssist;
  if ( v76 )
  {
    if ( v75->NestingLevel <= 1u )
    {
      v77 = v76[6] - 1;
      v76[6] = v77;
      if ( !v77 )
        KiRemoveSystemWorkPriorityKick(v75);
    }
  }
LABEL_180:
  if ( (v9 & 2) != 0 )
  {
    v78 = _InterlockedDecrement64((volatile signed __int64 *)(v6 + 7104));
    if ( v78 == *(_QWORD *)(v6 + 5168) || v78 == *(_QWORD *)(v6 + 5176) )
      MiUpdateAvailableEvents(v6);
    if ( v78 <= 0x420 )
    {
      v79 = *(_QWORD *)(v6 + 6848);
      if ( !v79 || !*(_BYTE *)(v79 + 52) )
        MiObtainFreePages(v6);
      if ( v78 < 0xA0 && v78 + 1 >= 0xA0 && *(_DWORD *)(v6 + 1160) )
        KeSetEvent((PRKEVENT)(v6 + 1008), 0, 0);
    }
    if ( v78 < 0x9F )
    {
      v80 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v80 & 0xC) != 8
        && (v78 < 0x20 && (ULONG_PTR *)v6 == &MiSystemPartition
         || ((v80 & 2) == 0 || v78 < 0x21) && (*(_DWORD *)(v6 + 4) & 0x20) == 0) )
      {
        LOBYTE(v9) = -2;
      }
    }
  }
  return v9 & 1;
}
