/*
 * XREFs of MiUnlinkPageFromList @ 0x140279090
 * Callers:
 *     MiEmptyDecayClusterTimers @ 0x140265568 (MiEmptyDecayClusterTimers.c)
 *     MiRelinkStandbyPage @ 0x140265740 (MiRelinkStandbyPage.c)
 *     MiHandleTransitionFault @ 0x140278C30 (MiHandleTransitionFault.c)
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MmCheckCachedPageStates @ 0x1402A4CE0 (MmCheckCachedPageStates.c)
 *     MiOutSwapWorkingSetPte @ 0x1402B02C0 (MiOutSwapWorkingSetPte.c)
 *     MiDeleteTransitionPte @ 0x1402C7050 (MiDeleteTransitionPte.c)
 *     MiWalkEntireImage @ 0x1402C8CD0 (MiWalkEntireImage.c)
 *     MiDeleteParentDecayNode @ 0x14030F9AC (MiDeleteParentDecayNode.c)
 *     MiUnlinkStandbyPfn @ 0x14030FD50 (MiUnlinkStandbyPfn.c)
 *     MiFreeSlabEntries @ 0x1403181C0 (MiFreeSlabEntries.c)
 *     MiReferencePageForModifiedWrite @ 0x14034474C (MiReferencePageForModifiedWrite.c)
 *     MiGatherMappedPages @ 0x140344824 (MiGatherMappedPages.c)
 *     MiActOnPte @ 0x1403476D0 (MiActOnPte.c)
 *     MiReservePageFileSpaceForPage @ 0x1403486C0 (MiReservePageFileSpaceForPage.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140349C1C (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeleteClusterSection @ 0x14034A680 (MiDeleteClusterSection.c)
 *     MiUnlinkStandbyBatch @ 0x14034CE80 (MiUnlinkStandbyBatch.c)
 *     MiCopyDataPageToImagePage @ 0x14034EC44 (MiCopyDataPageToImagePage.c)
 *     MiDecayPfnFullyInitialized @ 0x140351A08 (MiDecayPfnFullyInitialized.c)
 *     MiReplaceTransitionPage @ 0x140351C54 (MiReplaceTransitionPage.c)
 *     MiConvertStandbyToProto @ 0x140366CC8 (MiConvertStandbyToProto.c)
 *     MiResolveProtoCombine @ 0x14036A884 (MiResolveProtoCombine.c)
 *     MiMirrorPerformBrownWrites @ 0x140381C74 (MiMirrorPerformBrownWrites.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140384340 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140386698 (MiBuildReservationCluster.c)
 *     MiPurgeImageSection @ 0x1403A4B04 (MiPurgeImageSection.c)
 *     MiPurgeSubsection @ 0x1405287D0 (MiPurgeSubsection.c)
 *     MiMakeOutswappedPageResident @ 0x140529FC0 (MiMakeOutswappedPageResident.c)
 *     MiWalkResetCommitPte @ 0x14052B0F0 (MiWalkResetCommitPte.c)
 *     MiEnableLargeSubsection @ 0x14053EEAC (MiEnableLargeSubsection.c)
 *     MiMarkFileOnlyPfnBad @ 0x14053FC08 (MiMarkFileOnlyPfnBad.c)
 *     MiFreeModifiedReservations @ 0x140541C24 (MiFreeModifiedReservations.c)
 *     MiNoPagesLastChance @ 0x14054ECF8 (MiNoPagesLastChance.c)
 *     MiReuseStandbyPage @ 0x14054F890 (MiReuseStandbyPage.c)
 *     MiGetSlabStandbyPage @ 0x1405515FC (MiGetSlabStandbyPage.c)
 *     MiHandleForkTransitionPte @ 0x140558F94 (MiHandleForkTransitionPte.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KxAcquireQueuedSpinLock @ 0x140226AC0 (KxAcquireQueuedSpinLock.c)
 *     MiSetPfnBlink @ 0x140230190 (MiSetPfnBlink.c)
 *     MiGetPfnPriority @ 0x140279DB0 (MiGetPfnPriority.c)
 *     KxWaitForLockOwnerShip @ 0x1402950A0 (KxWaitForLockOwnerShip.c)
 *     MiPageToChannel @ 0x1402F2478 (MiPageToChannel.c)
 *     MiDeleteParentDecayNode @ 0x14030F9AC (MiDeleteParentDecayNode.c)
 *     KxWaitForLockChainValid @ 0x14035D0F0 (KxWaitForLockChainValid.c)
 *     MiUpdateAvailableEvents @ 0x1403B5404 (MiUpdateAvailableEvents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3080 (MI_PFN_IS_PROTO.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14051488C (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14051494C (KiReleaseQueuedSpinLockInstrumented.c)
 *     MiObtainFreePages @ 0x140539A84 (MiObtainFreePages.c)
 *     MiUnlinkPageFromBadList @ 0x14054DA40 (MiUnlinkPageFromBadList.c)
 *     MiGetSlabAllocatorStandbyList @ 0x1405513B4 (MiGetSlabAllocatorStandbyList.c)
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
  int v50; // r10d
  __int64 v51; // rcx
  int v52; // r14d
  volatile signed __int64 *v53; // r11
  volatile signed __int64 v54; // rdx
  signed __int64 v55; // rax
  signed __int64 v56; // r8
  signed __int64 v57; // rcx
  signed __int64 v58; // rcx
  unsigned int v59; // eax
  char v60; // al
  __int64 v61; // r12
  int v62; // edx
  __int64 v63; // r14
  __int64 v64; // r11
  char *v65; // rax
  int v66; // r8d
  int v67; // ecx
  __int64 v68; // rsi
  unsigned int v69; // eax
  _QWORD *v70; // r10
  __int64 v71; // r9
  signed __int64 v72; // rdx
  unsigned __int64 v73; // r11
  signed __int64 v74; // r8
  signed __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // r10
  unsigned __int64 v79; // r9
  volatile signed __int32 *v80; // r8
  int v81; // r13d
  unsigned __int64 v82; // rdx
  __int64 v83; // rax
  struct _KPRCB *v84; // rcx
  _DWORD *v85; // rdx
  int v86; // eax
  unsigned __int64 v87; // r14
  __int64 v88; // rax
  int v89; // ecx
  __int128 v90; // [rsp+30h] [rbp-58h] BYREF
  __int64 v91; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v93; // [rsp+90h] [rbp+8h]
  __int64 v94; // [rsp+90h] [rbp+8h]

  BugCheckParameter4 = *(unsigned __int16 *)(BugCheckParameter2 + 32);
  v91 = 0LL;
  v90 = 0LL;
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
  v6 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((v5 >> 39) & 0x3FF));
  v7 = *(_QWORD *)(v6 + 8LL * (*(_BYTE *)(BugCheckParameter2 + 34) & 7) + 4216);
  v8 = *(unsigned int *)(v7 + 8);
  v93 = *(_DWORD *)(v7 + 8);
  if ( (*(_BYTE *)(BugCheckParameter2 + 34) & 7) == 5 )
  {
    MiUnlinkPageFromBadList(BugCheckParameter2, 0LL);
    return 1LL;
  }
  v9 = 65;
  v10 = (__int64)(BugCheckParameter2 + 0x58000000000LL) / 48;
  if ( v10 < qword_140C4E820 || v10 >= qword_140C4E820 + 2048 )
  {
    if ( byte_140C51EDE && _bittest64((const signed __int64 *)qword_140C52408, v10 >> 9) )
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
      v51 = 4352LL;
      if ( !v49 )
        v51 = 5056LL;
      _InterlockedDecrement64((volatile signed __int64 *)(v51 + v6));
      if ( !v50 )
      {
        *(_QWORD *)&v90 = 0LL;
        *((_QWORD *)&v90 + 1) = v7 + 32;
        KxAcquireQueuedSpinLock((__int64)&v90, (volatile __int64 *)(v7 + 32));
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
        *(_QWORD *)&v90 = 0LL;
        *((_QWORD *)&v90 + 1) = v39;
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
          KiAcquireQueuedSpinLockInstrumented(&v90, v39);
        }
        else if ( _InterlockedExchange64(v39, (__int64)&v90) )
        {
          KxWaitForLockOwnerShip(&v90);
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
      *(_QWORD *)&v90 = 0LL;
      *((_QWORD *)&v90 + 1) = v7 + 32;
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
        KiAcquireQueuedSpinLockInstrumented(&v90, v7 + 32);
        *(_BYTE *)(BugCheckParameter2 + 39) &= 0xF0u;
LABEL_107:
        v20 = 0xFFFFFFFFFLL;
        v21 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
        v22 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
        goto LABEL_108;
      }
      if ( _InterlockedExchange64((volatile __int64 *)(v7 + 32), (__int64)&v90) )
        KxWaitForLockOwnerShip(&v90);
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
    *(_QWORD *)&v90 = 0LL;
    *((_QWORD *)&v90 + 1) = v7 + 32;
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
      KiAcquireQueuedSpinLockInstrumented(&v90, v7 + 32);
    }
    else if ( _InterlockedExchange64((volatile __int64 *)(v7 + 32), (__int64)&v90) )
    {
      KxWaitForLockOwnerShip(&v90);
    }
  }
  v20 = 0xFFFFFFFFFLL;
  v21 = *(_QWORD *)BugCheckParameter2 & 0xFFFFFFFFFLL;
  v22 = *(_QWORD *)(BugCheckParameter2 + 24) & 0xFFFFFFFFFLL;
  if ( (v9 & 8) == 0 )
  {
    if ( v21 == 0xFFFFFFFFFLL || v21 >= qword_140C4E820 && v21 < qword_140C4E820 + 2048 )
    {
      v33 = 0xFFFFFA8000000000uLL;
    }
    else
    {
      v31 = MiGetPfnPriority(48 * v21 - 0x58000000000LL, 48 * v21 - 0x58000000000LL, 0xFFFFFFFFFLL, v22);
      if ( v14 != v31 )
        KeBugCheckEx(0x1Au, 0x8886uLL, BugCheckParameter2, v32, v31 | (unsigned __int64)(v14 << 8));
    }
    if ( v22 != v20 && (v22 < qword_140C4E820 || v22 >= qword_140C4E820 + 2048) )
    {
      v34 = MiGetPfnPriority(v33 + 48 * v22, v33 + 48 * v22, v20, v22);
      if ( v14 != v34 )
        KeBugCheckEx(0x1Au, 0x8887uLL, BugCheckParameter2, v35, v34 | (unsigned __int64)(v14 << 8));
    }
    goto LABEL_62;
  }
  v23 = qword_140C4E820;
  if ( v21 < qword_140C4E820 || v21 >= qword_140C4E820 + 2048 || v22 != v21 )
  {
    v24 = (unsigned __int64 *)(48 * v22 - 0x58000000000LL);
    if ( v22 < qword_140C4E820 || v22 >= qword_140C4E820 + 2048 )
    {
      *v24 = v21 | *v24 & 0xFFFFFFF000000000uLL;
      goto LABEL_56;
    }
    v25 = v24[2];
    if ( qword_140C4DDC0 )
    {
      if ( (v25 & 0x10) != 0 )
        v25 &= ~0x10uLL;
      else
        v25 &= ~qword_140C4DDC0;
    }
    v26 = v25 & 0xFFFF000000000FFFuLL | (v21 << 12);
    if ( qword_140C4DDC0 )
    {
      if ( (qword_140C4DDC0 & v26) == 0 )
      {
        v24[2] = qword_140C4DDC0 | v26;
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
    v52 = v93;
    v59 = v9 >> 3;
    if ( (v9 & 8) == 0 )
      *(_QWORD *)(v7 + 24) = v22;
  }
  else
  {
    v52 = v93;
    v53 = (volatile signed __int64 *)(48 * v21 - 0x57FFFFFFFE8LL);
    v54 = *v53;
    v55 = _InterlockedCompareExchange64(v53, v22 | *v53 & 0xFFFFFFF000000000uLL, *v53);
    v56 = v55;
    if ( v52 == 2 )
    {
      if ( v54 != v55 )
      {
        do
        {
          v57 = v56;
          v56 = _InterlockedCompareExchange64(v53, v22 | v56 & 0xFFFFFFF000000000uLL, v56);
        }
        while ( v57 != v56 );
      }
    }
    else if ( v54 != v55 )
    {
      do
      {
        v58 = v56;
        v56 = _InterlockedCompareExchange64(v53, v22 | v56 & 0xFFFFFFF000000000uLL, v56);
      }
      while ( v58 != v56 );
    }
    v20 = 0xFFFFFFFFFLL;
    v59 = v9 >> 3;
  }
  if ( v22 == v20 )
  {
    if ( (v59 & 1) == 0 )
      *(_QWORD *)(v7 + 16) = v21;
  }
  else
  {
    *(_QWORD *)(48 * v22 - 0x58000000000LL) = v21 | *(_QWORD *)(48 * v22 - 0x58000000000LL) & 0xFFFFFFF000000000uLL;
  }
  if ( v9 >= 0x40 )
    --*(_QWORD *)v7;
  if ( v52 == 2 && (v9 & 0x14) == 0 )
  {
    v60 = *(_BYTE *)(BugCheckParameter2 + 35);
    if ( (v60 & 8) != 0 )
      v61 = 5LL;
    else
      v61 = v60 & 7;
    v62 = dword_140C4DD08;
    v63 = *(unsigned __int8 *)(BugCheckParameter2 + 39) | (*(_QWORD *)BugCheckParameter2 >> 28) & 0xFFFFFFF00LL;
    v64 = (*(_QWORD *)(BugCheckParameter2 + 24) >> 20) & 0xFFFFF0000LL | *(unsigned __int16 *)(BugCheckParameter2 + 36);
    v94 = v64;
    if ( dword_140C4DD04 > (unsigned int)dword_140C4DD08
      || (v65 = (char *)qword_140C4DD48 + 16 * dword_140C4DD04, v10 < *(_QWORD *)v65)
      || dword_140C4DD04 != dword_140C4DD08 && v10 >= *((_QWORD *)v65 + 2) )
    {
      v66 = 0;
      if ( dword_140C4DD08 < 0 )
LABEL_203:
        KeBugCheckEx(0x1Au, 0x6201uLL, v10, 0LL, 0LL);
      while ( 1 )
      {
        v67 = (v66 + v62) >> 1;
        v65 = (char *)qword_140C4DD48 + 16 * v67;
        if ( v10 >= *(_QWORD *)v65 )
        {
          if ( v67 == dword_140C4DD08 || v10 < *((_QWORD *)v65 + 2) )
          {
            dword_140C4DD04 = (v66 + v62) >> 1;
            break;
          }
          v66 = v67 + 1;
        }
        else
        {
          if ( !v67 )
            KeBugCheckEx(0x1Au, 0x6200uLL, v10, (ULONG_PTR)qword_140C4DD48, 0LL);
          v62 = v67 - 1;
        }
        if ( v62 < v66 )
          goto LABEL_203;
      }
    }
    v68 = *(_QWORD *)(*(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(BugCheckParameter2 + 40) >> 39) & 0x3FFLL)) + 16LL)
        + 4544LL * *((unsigned int *)v65 + 2);
    if ( qword_140C4DD50 )
    {
      v69 = MiPageToChannel(v10);
      v64 = v94;
    }
    else
    {
      v69 = 0;
    }
    v70 = (_QWORD *)(v68 + 24 * (v61 + 8LL * v69));
    if ( v63 == 0xFFFFFFFFFLL )
    {
      v70[409] = v64;
    }
    else
    {
      v71 = 48 * v63 - 0x58000000000LL;
      *(_WORD *)(v71 + 36) = v64;
      v72 = *(_QWORD *)(v71 + 24);
      v73 = (v64 & 0xFFFFFFFFFFFF0000uLL) << 20;
      v74 = _InterlockedCompareExchange64((volatile signed __int64 *)(v71 + 24), v73 | v72 & 0xFF00000FFFFFFFFFuLL, v72);
      if ( v72 != v74 )
      {
        do
        {
          v75 = v74;
          v74 = _InterlockedCompareExchange64(
                  (volatile signed __int64 *)(v71 + 24),
                  v73 | v74 & 0xFF00000FFFFFFFFFuLL,
                  v74);
        }
        while ( v75 != v74 );
      }
      v64 = v94;
    }
    if ( v64 == 0xFFFFFFFFFLL )
    {
      v70[408] = v63;
    }
    else
    {
      v76 = 48 * v64 - 0x58000000000LL;
      v77 = *(_QWORD *)v76 ^ (v63 << 28);
      *(_BYTE *)(v76 + 39) = v63;
      *(_QWORD *)v76 = (v63 << 28) ^ v77 & 0xFFFFFFFFFLL;
    }
    --v70[407];
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
    if ( (*(_QWORD *)(BugCheckParameter2 + 40) & 0x2000000000000LL) == 0 && dword_140C4E54C == 1 )
    {
      v78 = ((__int64)(BugCheckParameter2 + 0x58000000000LL) / 48) & 0x1F;
      LOBYTE(v79) = 1;
      v80 = (volatile signed __int32 *)(qword_140C4E5A8 + 4 * (v10 >> 5));
      if ( (unsigned __int64)(v78 + 1) > 0x20 )
      {
        if ( (v10 & 0x1F) == 0 )
          goto LABEL_166;
        v81 = v10 & 0x1F;
        _InterlockedOr(v80++, ((1 << (32 - v81)) - 1) << v78);
        v79 = 1LL - (unsigned int)(32 - v81);
        if ( v79 >= 0x20 )
        {
          v82 = v79 >> 5;
          v79 += -32LL * (v79 >> 5);
          do
          {
            *v80++ = -1;
            --v82;
          }
          while ( v82 );
        }
        if ( v79 )
LABEL_166:
          _InterlockedOr(v80, (1 << v79) - 1);
      }
      else
      {
        _InterlockedOr(v80, 1 << v78);
      }
    }
  }
  if ( a2 )
    goto LABEL_179;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&v90);
    v83 = v90;
    if ( !(_QWORD)v90 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v90 + 1), 0LL, (signed __int64)&v90) == &v90 )
        goto LABEL_175;
      v83 = KxWaitForLockChainValid(&v90);
    }
    *(_QWORD *)&v90 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v83 + 8), 1uLL);
    goto LABEL_175;
  }
  KiReleaseQueuedSpinLockInstrumented(&v90, retaddr);
LABEL_175:
  v84 = KeGetCurrentPrcb();
  v85 = v84->SchedulerAssist;
  if ( v85 )
  {
    if ( v84->NestingLevel <= 1u )
    {
      v86 = v85[6] - 1;
      v85[6] = v86;
      if ( !v86 )
        KiRemoveSystemWorkPriorityKick(v84);
    }
  }
LABEL_179:
  if ( (v9 & 2) != 0 )
  {
    v87 = _InterlockedDecrement64((volatile signed __int64 *)(v6 + 7104));
    if ( v87 == *(_QWORD *)(v6 + 5168) || v87 == *(_QWORD *)(v6 + 5176) )
      MiUpdateAvailableEvents(v6);
    if ( v87 <= 0x420 )
    {
      v88 = *(_QWORD *)(v6 + 6848);
      if ( !v88 || !*(_BYTE *)(v88 + 52) )
        MiObtainFreePages(v6);
      if ( v87 < 0xA0 && v87 + 1 >= 0xA0 && *(_DWORD *)(v6 + 1160) )
        KeSetEvent((PRKEVENT)(v6 + 1008), 0, 0);
    }
    if ( v87 < 0x9F )
    {
      v89 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
      if ( (v89 & 0xC) != 8
        && (v87 < 0x20 && (ULONG_PTR *)v6 == &MiSystemPartition
         || ((v89 & 2) == 0 || v87 < 0x21) && (*(_DWORD *)(v6 + 4) & 0x20) == 0) )
      {
        LOBYTE(v9) = -2;
      }
    }
  }
  return v9 & 1;
}
