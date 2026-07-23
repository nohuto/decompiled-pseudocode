/*
 * XREFs of MiUnlinkPageFromList @ 0x1402BC1B0
 * Callers:
 *     MiDecayPfnFullyInitialized @ 0x140229794 (MiDecayPfnFullyInitialized.c)
 *     MiDeleteParentDecayNode @ 0x1402298BC (MiDeleteParentDecayNode.c)
 *     MiUnlinkStandbyPfn @ 0x14022EB40 (MiUnlinkStandbyPfn.c)
 *     MiFreeSlabEntries @ 0x140238B20 (MiFreeSlabEntries.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140257660 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReplaceTransitionPage @ 0x14025B310 (MiReplaceTransitionPage.c)
 *     MiEmptyDecayClusterTimers @ 0x14025FDA0 (MiEmptyDecayClusterTimers.c)
 *     MiRelinkStandbyPage @ 0x14025FF78 (MiRelinkStandbyPage.c)
 *     MiGatherMappedPages @ 0x140277138 (MiGatherMappedPages.c)
 *     MiReferencePageForModifiedWrite @ 0x140277E5C (MiReferencePageForModifiedWrite.c)
 *     MiHandleTransitionFault @ 0x1402BBD50 (MiHandleTransitionFault.c)
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 *     MiDeleteTransitionPte @ 0x1402DD080 (MiDeleteTransitionPte.c)
 *     MiWalkEntireImage @ 0x1402DED00 (MiWalkEntireImage.c)
 *     MiActOnPte @ 0x1402E0E40 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1402E1EB0 (MiReservePageFileSpaceForPage.c)
 *     MiDeleteClusterSection @ 0x14030B130 (MiDeleteClusterSection.c)
 *     MiUnlinkStandbyBatch @ 0x14030D930 (MiUnlinkStandbyBatch.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MmCheckCachedPageStates @ 0x14032C2E0 (MmCheckCachedPageStates.c)
 *     MiOutSwapWorkingSetPte @ 0x140337C00 (MiOutSwapWorkingSetPte.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14036ACE4 (MiResolveProtoCombine.c)
 *     MiMirrorPerformBrownWrites @ 0x140382400 (MiMirrorPerformBrownWrites.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140385270 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140386F40 (MiBuildReservationCluster.c)
 *     MiPurgeImageSection @ 0x1403A5514 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x14052A4F0 (MiPurgeSubsection.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x14052CE30 (MiWalkResetCommitPte.c)
 *     MiEnableLargeSubsection @ 0x140540BEC (MiEnableLargeSubsection.c)
 *     MiMarkFileOnlyPfnBad @ 0x140541948 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x140543964 (MiFreeModifiedReservations.c)
 *     MiNoPagesLastChance @ 0x140550A08 (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x1405515A0 (MiReuseStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x14055330C (MiGetSlabStandbyPage.c)
 *     MiHandleForkTransitionPte @ 0x14055ACA4 (MiHandleForkTransitionPte.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140204330 (KxWaitForLockChainValid.c)
 *     MiDeleteParentDecayNode @ 0x1402298BC (MiDeleteParentDecayNode.c)
 *     MiGetPfnPriority @ 0x1402BCED0 (MiGetPfnPriority.c)
 *     KxWaitForLockOwnerShip @ 0x1402D36F0 (KxWaitForLockOwnerShip.c)
 *     MiPageToChannel @ 0x140309E58 (MiPageToChannel.c)
 *     MiSetPfnBlink @ 0x140322E80 (MiSetPfnBlink.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x14035B6C0 (KxAcquireQueuedSpinLock.c)
 *     MiUpdateAvailableEvents @ 0x1403B6BB4 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F48C8 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051660C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1405166CC (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x14053B7C4 (MiObtainFreePages.c)
 *     MiUnlinkPageFromBadList @ 0x14054F780 (MiUnlinkPageFromBadList.c)
 *     MiGetSlabAllocatorStandbyList @ 0x1405530C4 (MiGetSlabAllocatorStandbyList.c)
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
  __int64 v51; // r9
  int v52; // r10d
  __int64 v53; // rcx
  int v54; // r14d
  volatile signed __int64 *v55; // r11
  volatile signed __int64 v56; // rdx
  signed __int64 v57; // rax
  signed __int64 v58; // r8
  signed __int64 v59; // rcx
  signed __int64 v60; // rcx
  unsigned int v61; // eax
  char v62; // al
  __int64 v63; // r12
  int v64; // edx
  __int64 v65; // r14
  __int64 v66; // r11
  char *v67; // rax
  int v68; // r8d
  int v69; // ecx
  __int64 v70; // rsi
  unsigned int v71; // eax
  _QWORD *v72; // r10
  __int64 v73; // r9
  signed __int64 v74; // rdx
  unsigned __int64 v75; // r11
  signed __int64 v76; // r8
  signed __int64 v77; // rcx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // r10
  unsigned __int64 v81; // r9
  volatile signed __int32 *v82; // r8
  int v83; // r13d
  unsigned __int64 v84; // rdx
  __int64 v85; // rax
  struct _KPRCB *v86; // rcx
  _DWORD *v87; // rdx
  int v88; // eax
  unsigned __int64 v89; // r14
  __int64 v90; // rax
  int v91; // ecx
  __int128 v92; // [rsp+30h] [rbp-58h] BYREF
  __int64 v93; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v95; // [rsp+90h] [rbp+8h]
  __int64 v96; // [rsp+90h] [rbp+8h]

  BugCheckParameter4 = *(unsigned __int16 *)(BugCheckParameter2 + 32);
  v93 = 0LL;
  v92 = 0LL;
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
  v6 = *(_QWORD *)(qword_140C4E688 + 8 * ((v5 >> 39) & 0x3FF));
  v7 = *(_QWORD *)(v6 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 4216);
  v8 = *(_DWORD *)(v7 + 8);
  v95 = v8;
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5 )
  {
    MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
    return 1LL;
  }
  v9 = 65;
  v10 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  if ( v10 < qword_140C4E9E0 || v10 >= qword_140C4E9E0 + 2048 )
  {
    if ( byte_140C5209E && _bittest64((const signed __int64 *)qword_140C525C8, v10 >> 9) )
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
      v49 = MI_PFN_IS_PROTO(BugCheckParameter2);
      v53 = 4352LL;
      if ( !v49 )
        v53 = 5056LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v53 + v6));
      if ( !v52 )
      {
        *(_QWORD *)&v92 = 0LL;
        *((_QWORD *)&v92 + 1) = v7 + 32;
        KxAcquireQueuedSpinLock(&v92, v7 + 32, v50, v51);
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
        *(_QWORD *)&v92 = 0LL;
        *((_QWORD *)&v92 + 1) = v39;
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
          KiAcquireQueuedSpinLockInstrumented(&v92, v39);
        }
        else if ( _InterlockedExchange64(v39, (__int64)&v92) )
        {
          KxWaitForLockOwnerShip(&v92);
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
      *(_QWORD *)&v92 = 0LL;
      *((_QWORD *)&v92 + 1) = v7 + 32;
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
        KiAcquireQueuedSpinLockInstrumented(&v92, v7 + 32);
        *(_BYTE *)(BugCheckParameter2 + 39) &= 0xF0u;
LABEL_107:
        v20 = 0xFFFFFFFFFLL;
        v21 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
        v22 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
        goto LABEL_108;
      }
      if ( _InterlockedExchange64((volatile __int64 *)(v7 + 32), (__int64)&v92) )
        KxWaitForLockOwnerShip(&v92);
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
    *(_QWORD *)&v92 = 0LL;
    *((_QWORD *)&v92 + 1) = v7 + 32;
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
      KiAcquireQueuedSpinLockInstrumented(&v92, v7 + 32);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(v7 + 32), (__int64)&v92) )
    {
      KxWaitForLockOwnerShip(&v92);
    }
  }
  v20 = 0xFFFFFFFFFLL;
  v21 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
  v22 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
  if ( (v9 & 8) == 0 )
  {
    if ( v21 == 0xFFFFFFFFFLL || v21 >= qword_140C4E9E0 && v21 < qword_140C4E9E0 + 2048 )
    {
      v33 = 0xFFFFFA8000000000uLL;
    }
    else
    {
      v31 = MiGetPfnPriority(48 * v21 - 0x58000000000LL);
      if ( v14 != v31 )
        KeBugCheckEx(0x1Au, 0x8886uLL, BugCheckParameter2, v32, v31 | (unsigned __int64)(v14 << 8));
    }
    if ( v22 != v20 && (v22 < qword_140C4E9E0 || v22 >= qword_140C4E9E0 + 2048) )
    {
      v34 = MiGetPfnPriority(v33 + 48 * v22);
      if ( v14 != v34 )
        KeBugCheckEx(0x1Au, 0x8887uLL, BugCheckParameter2, v35, v34 | (unsigned __int64)(v14 << 8));
    }
    goto LABEL_62;
  }
  v23 = qword_140C4E9E0;
  if ( v21 < qword_140C4E9E0 || v21 >= qword_140C4E9E0 + 2048 || v22 != v21 )
  {
    v24 = (unsigned __int64 *)(48 * v22 - 0x58000000000LL);
    if ( v22 < qword_140C4E9E0 || v22 >= qword_140C4E9E0 + 2048 )
    {
      *v24 = v21 | *v24 & 0xFFFFFFF000000000uLL;
      goto LABEL_56;
    }
    v25 = v24[2];
    if ( qword_140C4DF80 )
    {
      if ( (v25 & 0x10) != 0 )
        v25 &= ~0x10uLL;
      else
        v25 &= ~qword_140C4DF80;
    }
    v26 = v25 & 0xFFFF000000000FFFuLL | (v21 << 12);
    if ( qword_140C4DF80 )
    {
      if ( (qword_140C4DF80 & v26) == 0 )
      {
        v24[2] = qword_140C4DF80 | v26;
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
    v54 = v95;
    v61 = v9 >> 3;
    if ( (v9 & 8) == 0 )
      *(_QWORD *)(v7 + 24) = v22;
  }
  else
  {
    v54 = v95;
    v55 = (volatile signed __int64 *)(48 * v21 - 0x57FFFFFFFE8LL);
    v56 = *v55;
    v57 = _InterlockedCompareExchange64(v55, v22 | *v55 & 0xFFFFFFF000000000uLL, *v55);
    v58 = v57;
    if ( v54 == 2 )
    {
      if ( v56 != v57 )
      {
        do
        {
          v59 = v58;
          v58 = _InterlockedCompareExchange64(v55, v22 | v58 & 0xFFFFFFF000000000uLL, v58);
        }
        while ( v59 != v58 );
      }
    }
    else if ( v56 != v57 )
    {
      do
      {
        v60 = v58;
        v58 = _InterlockedCompareExchange64(v55, v22 | v58 & 0xFFFFFFF000000000uLL, v58);
      }
      while ( v60 != v58 );
    }
    v20 = 0xFFFFFFFFFLL;
    v61 = v9 >> 3;
  }
  if ( v22 == v20 )
  {
    if ( (v61 & 1) == 0 )
      *(_QWORD *)(v7 + 16) = v21;
  }
  else
  {
    *(_QWORD *)(48 * v22 - 0x58000000000LL) = v21 | *(_QWORD *)(48 * v22 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  }
  if ( v9 >= 0x40 )
    --*(_QWORD *)v7;
  if ( v54 == 2 && (v9 & 0x14) == 0 )
  {
    v62 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v62 & 8) != 0 )
      v63 = 5LL;
    else
      v63 = v62 & 7;
    v64 = dword_140C4DEC8;
    v65 = *(unsigned __int8 *)(BugCheckParameter2 + 39) | (*(_QWORD *)BugCheckParameter2 >> 28) & 0xFFFFFFF00LL;
    v66 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(BugCheckParameter2 + 36);
    v96 = v66;
    if ( dword_140C4DEC4 > (unsigned int)dword_140C4DEC8
      || (v67 = (char *)qword_140C4DF08 + 16 * dword_140C4DEC4, v10 < *(_QWORD *)v67)
      || dword_140C4DEC4 != dword_140C4DEC8 && v10 >= *((_QWORD *)v67 + 2) )
    {
      v68 = 0;
      if ( dword_140C4DEC8 < 0 )
LABEL_203:
        KeBugCheckEx(0x1Au, 0x6201uLL, v10, 0LL, 0LL);
      while ( 1 )
      {
        v69 = (v68 + v64) >> 1;
        v67 = (char *)qword_140C4DF08 + 16 * v69;
        if ( v10 >= *(_QWORD *)v67 )
        {
          if ( v69 == dword_140C4DEC8 || v10 < *((_QWORD *)v67 + 2) )
          {
            dword_140C4DEC4 = (v68 + v64) >> 1;
            break;
          }
          v68 = v69 + 1;
        }
        else
        {
          if ( !v69 )
            KeBugCheckEx(0x1Au, 0x6200uLL, v10, (ULONG_PTR)qword_140C4DF08, 0LL);
          v64 = v69 - 1;
        }
        if ( v64 < v68 )
          goto LABEL_203;
      }
    }
    v70 = *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL)) + 16LL)
        + 4544LL * *((unsigned int *)v67 + 2);
    if ( qword_140C4DF10 )
    {
      v71 = MiPageToChannel(v10);
      v66 = v96;
    }
    else
    {
      v71 = 0;
    }
    v72 = (_QWORD *)(v70 + 24 * (v63 + 8LL * v71));
    if ( v65 == 0xFFFFFFFFFLL )
    {
      v72[409] = v66;
    }
    else
    {
      v73 = 48 * v65 - 0x58000000000LL;
      *(_WORD *)(v73 + 36) = v66;
      v74 = *(_QWORD *)(v73 + 24);
      v75 = (v66 & 0xFFFFFFFFFFFF0000uLL) << 20;
      v76 = _InterlockedCompareExchange64((volatile signed __int64 *)(v73 + 24), v75 | v74 & 0xFF00000FFFFFFFFFuLL, v74);
      if ( v74 != v76 )
      {
        do
        {
          v77 = v76;
          v76 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v73 + 24),
                  v75 | v76 & 0xFF00000FFFFFFFFFuLL,
                  v76);
        }
        while ( v77 != v76 );
      }
      v66 = v96;
    }
    if ( v66 == 0xFFFFFFFFFLL )
    {
      v72[408] = v65;
    }
    else
    {
      v78 = 48 * v66 - 0x58000000000LL;
      v79 = *(_QWORD *)v78 ^ (v65 << 28);
      *(_BYTE *)(v78 + 39) = v65;
      *(_QWORD *)v78 = (v65 << 28) ^ v79 & 0xFFFFFFFFFLL;
    }
    --v72[407];
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
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x2000000000000LL) == 0 && dword_140C4E70C == 1 )
    {
      v80 = ((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) & 0x1F;
      LOBYTE(v81) = 1;
      v82 = (volatile signed __int32 *)(qword_140C4E768 + 4 * (v10 >> 5));
      if ( (unsigned __int64)(v80 + 1) > 0x20 )
      {
        if ( (v10 & 0x1F) == 0 )
          goto LABEL_166;
        v83 = v10 & 0x1F;
        _InterlockedOr(v82++, ((1 << (32 - v83)) - 1) << v80);
        v81 = 1LL - (unsigned int)(32 - v83);
        if ( v81 >= 0x20 )
        {
          v84 = v81 >> 5;
          v81 += -32LL * (v81 >> 5);
          do
          {
            *v82++ = -1;
            --v84;
          }
          while ( v84 );
        }
        if ( v81 )
LABEL_166:
          _InterlockedOr(v82, (1 << v81) - 1);
      }
      else
      {
        _InterlockedOr(v82, 1 << v80);
      }
    }
  }
  if ( a2 )
    goto LABEL_179;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v92);
    v85 = v92;
    if ( !(_QWORD)v92 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v92 + 1), 0LL, (signed __int64)&v92) == &v92 )
        goto LABEL_175;
      v85 = KxWaitForLockChainValid((__int64 *)&v92);
    }
    *(_QWORD *)&v92 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v85 + 8), 1uLL);
    goto LABEL_175;
  }
  KiReleaseQueuedSpinLockInstrumented(&v92, retaddr);
LABEL_175:
  v86 = KeGetCurrentPrcb();
  v87 = v86->SchedulerAssist;
  if ( v87 )
  {
    if ( v86->NestingLevel <= 1u )
    {
      v88 = v87[6] - 1;
      v87[6] = v88;
      if ( !v88 )
        KiRemoveSystemWorkPriorityKick(v86);
    }
  }
LABEL_179:
  if ( (v9 & 2) != 0 )
  {
    v89 = _InterlockedDecrement64((volatile signed __int64 *)(v6 + 7104));
    if ( v89 == *(_QWORD *)(v6 + 5168) || v89 == *(_QWORD *)(v6 + 5176) )
      MiUpdateAvailableEvents(v6);
    if ( v89 <= 0x420 )
    {
      v90 = *(_QWORD *)(v6 + 6848);
      if ( !v90 || !*(_BYTE *)(v90 + 52) )
        MiObtainFreePages(v6);
      if ( v89 < 0xA0 && v89 + 1 >= 0xA0 && *(_DWORD *)(v6 + 1160) )
        KeSetEvent((PRKEVENT)(v6 + 1008), 0, 0);
    }
    if ( v89 < 0x9F )
    {
      v91 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v91 & 0xC) != 8
        && (v89 < 0x20 && (ULONG_PTR *)v6 == &MiSystemPartition
         || ((v91 & 2) == 0 || v89 < 0x21) && (*(_DWORD *)(v6 + 4) & 0x20) == 0) )
      {
        LOBYTE(v9) = -2;
      }
    }
  }
  return v9 & 1;
}
