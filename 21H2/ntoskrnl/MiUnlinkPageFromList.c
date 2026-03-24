/*
 * XREFs of MiUnlinkPageFromList @ 0x1402178B0
 * Callers:
 *     MiHandleTransitionFault @ 0x140217450 (MiHandleTransitionFault.c)
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     MiDeleteTransitionPte @ 0x140238830 (MiDeleteTransitionPte.c)
 *     MiWalkEntireImage @ 0x14023A4B0 (MiWalkEntireImage.c)
 *     MiActOnPte @ 0x14023C5F0 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x14023D660 (MiReservePageFileSpaceForPage.c)
 *     MiGatherMappedPages @ 0x140255BC8 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x1402568EC (MiReferencePageForModifiedWrite.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1402696C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplaceTransitionPage @ 0x14026D370 (MiReplaceTransitionPage.c)
 *     MiEmptyDecayClusterTimers @ 0x140271E00 (MiEmptyDecayClusterTimers.c)
 *     MiRelinkStandbyPage @ 0x140271FD8 (MiRelinkStandbyPage.c)
 *     MiDecayPfnFullyInitialized @ 0x1402AB654 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x1402AB77C (MiDeleteParentDecayNode.c)
 *     MiUnlinkStandbyPfn @ 0x1402B07E0 (MiUnlinkStandbyPfn.c)
 *     MiFreeSlabEntries @ 0x1402BA910 (MiFreeSlabEntries.c)
 *     MiDeleteClusterSection @ 0x1403003E0 (MiDeleteClusterSection.c)
 *     MiUnlinkStandbyBatch @ 0x140302BE0 (MiUnlinkStandbyBatch.c)
 *     MiCopyDataPageToImagePage @ 0x1403043E8 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x140321590 (MmCheckCachedPageStates.c)
 *     MiOutSwapWorkingSetPte @ 0x14032CEB0 (MiOutSwapWorkingSetPte.c)
 *     MiConvertStandbyToProto @ 0x140366F78 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14036AB34 (MiResolveProtoCombine.c)
 *     MiMirrorPerformBrownWrites @ 0x1403822B8 (MiMirrorPerformBrownWrites.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385120 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140386DF0 (MiBuildReservationCluster.c)
 *     MiPurgeImageSection @ 0x1403A53C4 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x14052A2B0 (MiPurgeSubsection.c)
 *     MiMakeOutswappedPageResident @ 0x14052BAC0 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x14052CBF0 (MiWalkResetCommitPte.c)
 *     MiEnableLargeSubsection @ 0x1405409AC (MiEnableLargeSubsection.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541708 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x140543724 (MiFreeModifiedReservations.c)
 *     MiNoPagesLastChance @ 0x1405507C8 (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x140551360 (MiReuseStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x1405530CC (MiGetSlabStandbyPage.c)
 *     MiHandleForkTransitionPte @ 0x14055AA64 (MiHandleForkTransitionPte.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402185D0 (MiGetPfnPriority.c)
 *     KxWaitForLockOwnerShip @ 0x14022EEA0 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x140287190 (KxWaitForLockChainValid.c)
 *     MiDeleteParentDecayNode @ 0x1402AB77C (MiDeleteParentDecayNode.c)
 *     MiPageToChannel @ 0x1402FF108 (MiPageToChannel.c)
 *     MiSetPfnBlink @ 0x140318130 (MiSetPfnBlink.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x140350970 (KxAcquireQueuedSpinLock.c)
 *     MiUpdateAvailableEvents @ 0x1403B6A44 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1405163CC (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051648C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x14053B584 (MiObtainFreePages.c)
 *     MiUnlinkPageFromBadList @ 0x14054F540 (MiUnlinkPageFromBadList.c)
 *     MiGetSlabAllocatorStandbyList @ 0x140552E84 (MiGetSlabAllocatorStandbyList.c)
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
  int v12; // edx
  int v13; // r10d
  unsigned int v14; // r14d
  __int64 SlabAllocatorStandbyList; // rax
  unsigned int v16; // ebx
  struct _KPRCB *v17; // rcx
  _DWORD *v18; // rdx
  int v19; // eax
  __int64 v20; // r8
  unsigned __int64 v21; // r10
  unsigned __int64 v22; // r9
  ULONG_PTR v23; // r8
  unsigned __int64 *v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r11
  signed __int64 v28; // rdx
  signed __int64 v29; // r8
  signed __int64 v30; // rcx
  unsigned int v31; // eax
  ULONG_PTR v32; // rdx
  unsigned __int64 v33; // r11
  unsigned int v34; // eax
  ULONG_PTR v35; // rdx
  int v36; // eax
  int v37; // r10d
  __int64 v38; // rcx
  volatile __int64 *v39; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v42; // eax
  unsigned __int16 v43; // cx
  char v44; // al
  __int64 v45; // rcx
  struct _KPRCB *v46; // rcx
  _DWORD *v47; // rdx
  int v48; // eax
  int v49; // eax
  __int64 v50; // r8
  int v51; // r10d
  __int64 v52; // rcx
  int v53; // r14d
  volatile signed __int64 *v54; // r11
  volatile signed __int64 v55; // rdx
  signed __int64 v56; // rax
  signed __int64 v57; // r8
  signed __int64 v58; // rcx
  signed __int64 v59; // rcx
  unsigned int v60; // eax
  char v61; // al
  __int64 v62; // r12
  int v63; // edx
  __int64 v64; // r14
  __int64 v65; // r11
  char *v66; // rax
  int v67; // r8d
  int v68; // ecx
  __int64 v69; // rsi
  unsigned int v70; // eax
  _QWORD *v71; // r10
  __int64 v72; // r9
  signed __int64 v73; // rdx
  unsigned __int64 v74; // r11
  signed __int64 v75; // r8
  signed __int64 v76; // rcx
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // r10
  unsigned __int64 v80; // r9
  volatile signed __int32 *v81; // r8
  int v82; // r13d
  unsigned __int64 v83; // rdx
  __int64 v84; // rax
  struct _KPRCB *v85; // rcx
  _DWORD *v86; // rdx
  int v87; // eax
  unsigned __int64 v88; // r14
  __int64 v89; // rax
  int v90; // ecx
  __int128 v91; // [rsp+30h] [rbp-58h] BYREF
  __int64 v92; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v94; // [rsp+90h] [rbp+8h]
  __int64 v95; // [rsp+90h] [rbp+8h]

  BugCheckParameter4 = *(unsigned __int16 *)(BugCheckParameter2 + 32);
  v92 = 0LL;
  v91 = 0LL;
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
  v6 = *(_QWORD *)(qword_140C4E648 + 8 * ((v5 >> 39) & 0x3FF));
  v7 = *(_QWORD *)(v6 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 4216);
  v8 = *(unsigned int *)(v7 + 8);
  v94 = *(_DWORD *)(v7 + 8);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5 )
  {
    MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
    return 1LL;
  }
  v9 = 65;
  v10 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  if ( v10 < qword_140C4E9A0 || v10 >= qword_140C4E9A0 + 2048 )
  {
    if ( byte_140C5205E && _bittest64((const signed __int64 *)qword_140C52588, v10 >> 9) )
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
      v49 = MI_PFN_IS_PROTO(BugCheckParameter2);
      v52 = 4352LL;
      if ( !v49 )
        v52 = 5056LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v52 + v6));
      if ( !v51 )
      {
        *(_QWORD *)&v91 = 0LL;
        *((_QWORD *)&v91 + 1) = v7 + 32;
        KxAcquireQueuedSpinLock(&v91, v7 + 32, v50);
      }
      goto LABEL_107;
    }
    _InterlockedDecrement64((volatile signed __int64 *)v7);
    v36 = MI_PFN_IS_PROTO(BugCheckParameter2);
    v38 = 4352LL;
    if ( !v36 )
      v38 = 5056LL;
    _InterlockedDecrement64((volatile signed __int64 *)(v38 + v6));
    if ( (*(_DWORD *)(BugCheckParameter2 + 16) & 0x400LL) == 0 )
    {
      if ( !v37 )
      {
        v39 = (volatile __int64 *)(v7 + 32);
        *(_QWORD *)&v91 = 0LL;
        *((_QWORD *)&v91 + 1) = v39;
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v42 = SchedulerAssist[6];
            SchedulerAssist[6] = v42 + 1;
            if ( v42 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v91, v39);
        }
        else if ( _InterlockedExchange64(v39, (__int64)&v91) )
        {
          KxWaitForLockOwnerShip(&v91);
        }
      }
      --*(_QWORD *)(v6 + 7600);
      v43 = *(_QWORD *)(BugCheckParameter2 + 16);
      v44 = (unsigned __int8)v43 >> 1;
      v45 = v43 >> 12;
      if ( (v44 & 1) != 0 || (_DWORD)v45 == *(_DWORD *)(v6 + 1156) )
        v7 = v6 + 8 * (v45 + 4 * (v45 + 88));
      else
        v7 = v6 + 2752;
      goto LABEL_107;
    }
    v7 = v6
       + 8 * ((*(_BYTE *)(BugCheckParameter2 + 39) & 0xF) + 4 * ((*(_BYTE *)(BugCheckParameter2 + 39) & 0xF) + 108LL));
    if ( !v37 )
    {
      *(_QWORD *)&v91 = 0LL;
      *((_QWORD *)&v91 + 1) = v7 + 32;
      v46 = KeGetCurrentPrcb();
      v47 = v46->SchedulerAssist;
      if ( v47 )
      {
        if ( v46->NestingLevel <= 1u )
        {
          v48 = v47[6];
          v47[6] = v48 + 1;
          if ( v48 == -1 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented(&v91, v7 + 32);
        *(_BYTE *)(BugCheckParameter2 + 39) &= 0xF0u;
LABEL_107:
        v20 = 0xFFFFFFFFFLL;
        v21 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
        v22 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
        goto LABEL_108;
      }
      if ( _InterlockedExchange64((volatile __int64 *)(v7 + 32), (__int64)&v91) )
        KxWaitForLockOwnerShip(&v91);
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
    *(_QWORD *)&v91 = 0LL;
    *((_QWORD *)&v91 + 1) = v7 + 32;
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
      KiAcquireQueuedSpinLockInstrumented(&v91, v7 + 32);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(v7 + 32), (__int64)&v91) )
    {
      KxWaitForLockOwnerShip(&v91);
    }
  }
  v20 = 0xFFFFFFFFFLL;
  v21 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
  v22 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
  if ( (v9 & 8) == 0 )
  {
    if ( v21 == 0xFFFFFFFFFLL || v21 >= qword_140C4E9A0 && v21 < qword_140C4E9A0 + 2048 )
    {
      v33 = 0xFFFFFA8000000000uLL;
    }
    else
    {
      v31 = MiGetPfnPriority(48 * v21 - 0x58000000000LL, 48 * v21 - 0x58000000000LL, 0xFFFFFFFFFLL, v22);
      if ( v14 != v31 )
        KeBugCheckEx(0x1Au, 0x8886uLL, BugCheckParameter2, v32, v31 | (unsigned __int64)(v14 << 8));
    }
    if ( v22 != v20 && (v22 < qword_140C4E9A0 || v22 >= qword_140C4E9A0 + 2048) )
    {
      v34 = MiGetPfnPriority(v33 + 48 * v22, v33 + 48 * v22, v20, v22);
      if ( v14 != v34 )
        KeBugCheckEx(0x1Au, 0x8887uLL, BugCheckParameter2, v35, v34 | (unsigned __int64)(v14 << 8));
    }
    goto LABEL_62;
  }
  v23 = qword_140C4E9A0;
  if ( v21 < qword_140C4E9A0 || v21 >= qword_140C4E9A0 + 2048 || v22 != v21 )
  {
    v24 = (unsigned __int64 *)(48 * v22 - 0x58000000000LL);
    if ( v22 < qword_140C4E9A0 || v22 >= qword_140C4E9A0 + 2048 )
    {
      *v24 = v21 | *v24 & 0xFFFFFFF000000000uLL;
      goto LABEL_56;
    }
    v25 = v24[2];
    if ( qword_140C4DF40 )
    {
      if ( (v25 & 0x10) != 0 )
        v25 &= ~0x10uLL;
      else
        v25 &= ~qword_140C4DF40;
    }
    v26 = v25 & 0xFFFF000000000FFFuLL | (v21 << 12);
    if ( qword_140C4DF40 )
    {
      if ( (qword_140C4DF40 & v26) == 0 )
      {
        v24[2] = qword_140C4DF40 | v26;
LABEL_56:
        v27 = 48 * v21 - 0x58000000000LL;
        if ( v21 < v23 || v21 >= v23 + 2048 )
        {
          v28 = *(_QWORD *)(v27 + 24);
          v29 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v27 + 24),
                  v22 | v28 & 0xFFFFFFF000000000uLL,
                  v28);
          if ( v28 != v29 )
          {
            do
            {
              v30 = v29;
              v29 = _InterlockedCompareExchange64(
                      (volatile signed __int64 *)(v27 + 24),
                      v22 | v29 & 0xFFFFFFF000000000uLL,
                      v29);
            }
            while ( v30 != v29 );
          }
        }
        else
        {
          *(_QWORD *)(v27 + 40) = v22 | *(_QWORD *)(v27 + 40) & 0xFFFFFFF000000000uLL;
        }
        goto LABEL_61;
      }
      v26 |= 0x10uLL;
    }
    v24[2] = v26;
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
    v53 = v94;
    v60 = v9 >> 3;
    if ( (v9 & 8) == 0 )
      *(_QWORD *)(v7 + 24) = v22;
  }
  else
  {
    v53 = v94;
    v54 = (volatile signed __int64 *)(48 * v21 - 0x57FFFFFFFE8LL);
    v55 = *v54;
    v56 = _InterlockedCompareExchange64(v54, v22 | *v54 & 0xFFFFFFF000000000uLL, *v54);
    v57 = v56;
    if ( v53 == 2 )
    {
      if ( v55 != v56 )
      {
        do
        {
          v58 = v57;
          v57 = _InterlockedCompareExchange64(v54, v22 | v57 & 0xFFFFFFF000000000uLL, v57);
        }
        while ( v58 != v57 );
      }
    }
    else if ( v55 != v56 )
    {
      do
      {
        v59 = v57;
        v57 = _InterlockedCompareExchange64(v54, v22 | v57 & 0xFFFFFFF000000000uLL, v57);
      }
      while ( v59 != v57 );
    }
    v20 = 0xFFFFFFFFFLL;
    v60 = v9 >> 3;
  }
  if ( v22 == v20 )
  {
    if ( (v60 & 1) == 0 )
      *(_QWORD *)(v7 + 16) = v21;
  }
  else
  {
    *(_QWORD *)(48 * v22 - 0x58000000000LL) = v21 | *(_QWORD *)(48 * v22 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  }
  if ( v9 >= 0x40 )
    --*(_QWORD *)v7;
  if ( v53 == 2 && (v9 & 0x14) == 0 )
  {
    v61 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v61 & 8) != 0 )
      v62 = 5LL;
    else
      v62 = v61 & 7;
    v63 = dword_140C4DE88;
    v64 = *(unsigned __int8 *)(BugCheckParameter2 + 39) | (*(_QWORD *)BugCheckParameter2 >> 28) & 0xFFFFFFF00LL;
    v65 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(BugCheckParameter2 + 36);
    v95 = v65;
    if ( dword_140C4DE84 > (unsigned int)dword_140C4DE88
      || (v66 = (char *)qword_140C4DEC8 + 16 * dword_140C4DE84, v10 < *(_QWORD *)v66)
      || dword_140C4DE84 != dword_140C4DE88 && v10 >= *((_QWORD *)v66 + 2) )
    {
      v67 = 0;
      if ( dword_140C4DE88 < 0 )
LABEL_203:
        KeBugCheckEx(0x1Au, 0x6201uLL, v10, 0LL, 0LL);
      while ( 1 )
      {
        v68 = (v67 + v63) >> 1;
        v66 = (char *)qword_140C4DEC8 + 16 * v68;
        if ( v10 >= *(_QWORD *)v66 )
        {
          if ( v68 == dword_140C4DE88 || v10 < *((_QWORD *)v66 + 2) )
          {
            dword_140C4DE84 = (v67 + v63) >> 1;
            break;
          }
          v67 = v68 + 1;
        }
        else
        {
          if ( !v68 )
            KeBugCheckEx(0x1Au, 0x6200uLL, v10, (ULONG_PTR)qword_140C4DEC8, 0LL);
          v63 = v68 - 1;
        }
        if ( v63 < v67 )
          goto LABEL_203;
      }
    }
    v69 = *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL)) + 16LL)
        + 4544LL * *((unsigned int *)v66 + 2);
    if ( qword_140C4DED0 )
    {
      v70 = MiPageToChannel(v10);
      v65 = v95;
    }
    else
    {
      v70 = 0;
    }
    v71 = (_QWORD *)(v69 + 24 * (v62 + 8LL * v70));
    if ( v64 == 0xFFFFFFFFFLL )
    {
      v71[409] = v65;
    }
    else
    {
      v72 = 48 * v64 - 0x58000000000LL;
      *(_WORD *)(v72 + 36) = v65;
      v73 = *(_QWORD *)(v72 + 24);
      v74 = (v65 & 0xFFFFFFFFFFFF0000uLL) << 20;
      v75 = _InterlockedCompareExchange64((volatile signed __int64 *)(v72 + 24), v74 | v73 & 0xFF00000FFFFFFFFFuLL, v73);
      if ( v73 != v75 )
      {
        do
        {
          v76 = v75;
          v75 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v72 + 24),
                  v74 | v75 & 0xFF00000FFFFFFFFFuLL,
                  v75);
        }
        while ( v76 != v75 );
      }
      v65 = v95;
    }
    if ( v65 == 0xFFFFFFFFFLL )
    {
      v71[408] = v64;
    }
    else
    {
      v77 = 48 * v65 - 0x58000000000LL;
      v78 = *(_QWORD *)v77 ^ (v64 << 28);
      *(_BYTE *)(v77 + 39) = v64;
      *(_QWORD *)v77 = (v64 << 28) ^ v78 & 0xFFFFFFFFFLL;
    }
    --v71[407];
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
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x2000000000000LL) == 0 && dword_140C4E6CC == 1 )
    {
      v79 = ((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) & 0x1F;
      LOBYTE(v80) = 1;
      v81 = (volatile signed __int32 *)(qword_140C4E728 + 4 * (v10 >> 5));
      if ( (unsigned __int64)(v79 + 1) > 0x20 )
      {
        if ( (v10 & 0x1F) == 0 )
          goto LABEL_166;
        v82 = v10 & 0x1F;
        _InterlockedOr(v81++, ((1 << (32 - v82)) - 1) << v79);
        v80 = 1LL - (unsigned int)(32 - v82);
        if ( v80 >= 0x20 )
        {
          v83 = v80 >> 5;
          v80 += -32LL * (v80 >> 5);
          do
          {
            *v81++ = -1;
            --v83;
          }
          while ( v83 );
        }
        if ( v80 )
LABEL_166:
          _InterlockedOr(v81, (1 << v80) - 1);
      }
      else
      {
        _InterlockedOr(v81, 1 << v79);
      }
    }
  }
  if ( a2 )
    goto LABEL_179;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v91);
    v84 = v91;
    if ( !(_QWORD)v91 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v91 + 1), 0LL, (signed __int64)&v91) == &v91 )
        goto LABEL_175;
      v84 = KxWaitForLockChainValid(&v91);
    }
    *(_QWORD *)&v91 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v84 + 8), 1uLL);
    goto LABEL_175;
  }
  KiReleaseQueuedSpinLockInstrumented(&v91, retaddr);
LABEL_175:
  v85 = KeGetCurrentPrcb();
  v86 = v85->SchedulerAssist;
  if ( v86 )
  {
    if ( v85->NestingLevel <= 1u )
    {
      v87 = v86[6] - 1;
      v86[6] = v87;
      if ( !v87 )
        KiRemoveSystemWorkPriorityKick(v85);
    }
  }
LABEL_179:
  if ( (v9 & 2) != 0 )
  {
    v88 = _InterlockedDecrement64((volatile signed __int64 *)(v6 + 7104));
    if ( v88 == *(_QWORD *)(v6 + 5168) || v88 == *(_QWORD *)(v6 + 5176) )
      MiUpdateAvailableEvents(v6);
    if ( v88 <= 0x420 )
    {
      v89 = *(_QWORD *)(v6 + 6848);
      if ( !v89 || !*(_BYTE *)(v89 + 52) )
        MiObtainFreePages(v6);
      if ( v88 < 0xA0 && v88 + 1 >= 0xA0 && *(_DWORD *)(v6 + 1160) )
        KeSetEvent((PRKEVENT)(v6 + 1008), 0, 0);
    }
    if ( v88 < 0x9F )
    {
      v90 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v90 & 0xC) != 8
        && (v88 < 0x20 && (ULONG_PTR *)v6 == &MiSystemPartition
         || ((v90 & 2) == 0 || v88 < 0x21) && (*(_DWORD *)(v6 + 4) & 0x20) == 0) )
      {
        LOBYTE(v9) = -2;
      }
    }
  }
  return v9 & 1;
}
