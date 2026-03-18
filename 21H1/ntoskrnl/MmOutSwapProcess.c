/*
 * XREFs of MmOutSwapProcess @ 0x1402446DC
 * Callers:
 *     KiOutSwapProcesses @ 0x140244780 (KiOutSwapProcesses.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeIsEmptyAffinityEx @ 0x140276350 (KeIsEmptyAffinityEx.c)
 *     MiMakeTransitionPte @ 0x14028D2E0 (MiMakeTransitionPte.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402915F0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiEmptyPageAccessLog @ 0x1402A4D00 (MiEmptyPageAccessLog.c)
 *     KeWaitForGate @ 0x1402CCFD8 (KeWaitForGate.c)
 *     KeFlushProcessTb @ 0x1402D52E4 (KeFlushProcessTb.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x140351040 (MiLockAndDecrementShareCount.c)
 *     MiDecrementShareCount @ 0x140353040 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140353460 (MiMapPageInHyperSpaceWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseCommitForResetPages @ 0x140526A34 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140526BE8 (MiReleaseOutSwappedProcessCommit.c)
 */

char __fastcall MmOutSwapProcess(__int64 a1)
{
  LONG *v1; // rbx
  int v2; // r13d
  char v3; // al
  char v5; // cl
  __int64 v6; // rax
  char v7; // cl
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  _DWORD *v14; // r9
  int v15; // eax
  void *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // r14
  unsigned __int64 *v28; // r12
  __int64 TransitionPte; // rdi
  unsigned __int64 v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  bool v34; // zf
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  unsigned __int64 OldIrql; // rbx
  bool v39; // cf
  struct _KPRCB *v40; // r9
  _DWORD *v41; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  __int16 v44; // [rsp+38h] [rbp-18h] BYREF
  char v45; // [rsp+3Ah] [rbp-16h]
  char v46; // [rsp+3Bh] [rbp-15h]
  int v47; // [rsp+3Ch] [rbp-14h]
  _QWORD v48[2]; // [rsp+40h] [rbp-10h] BYREF
  char v49; // [rsp+90h] [rbp+40h] BYREF
  int v50; // [rsp+98h] [rbp+48h] BYREF
  int v51; // [rsp+A0h] [rbp+50h] BYREF

  v1 = &dword_140C4F6C0;
  v2 = 0;
  v3 = *(_BYTE *)(a1 + 1848) & 7;
  v46 = 0;
  v49 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 != 2 )
    v1 = (LONG *)(a1 + 1856);
  _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x40u);
  v5 = *(_BYTE *)(a1 + 1851);
  LOBYTE(v6) = v5 & 0x60;
  if ( (v5 & 0x60) == 0x20 )
  {
    LOBYTE(v6) = MiReleaseOutSwappedProcessCommit(a1);
  }
  else if ( (v5 & 0x60) == 0x40 )
  {
    v6 = *((_QWORD *)v1 + 4);
    if ( *(_QWORD *)(v6 + 40) )
      LOBYTE(v6) = MiReleaseCommitForResetPages(a1);
  }
  if ( *(_QWORD *)(a1 + 1800) != 1LL || (*(_BYTE *)(a1 + 1851) & 2) != 0 )
    return v6;
  v44 = 263;
  v48[1] = v48;
  v45 = 6;
  v48[0] = v48;
  v47 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
  while ( 1 )
  {
    v7 = *(_BYTE *)(a1 + 1849) >> 4;
    if ( (*(_BYTE *)(a1 + 1849) & 6) == 0 && !v7 )
      break;
    if ( v7 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      LOBYTE(v6) = KiIrqlFlags;
      OldIrql = LockHandle.OldIrql;
      if ( !KiIrqlFlags )
        goto LABEL_66;
      if ( (KiIrqlFlags & 1) == 0 )
        goto LABEL_66;
      LOBYTE(v6) = KeGetCurrentIrql();
      if ( (unsigned __int8)v6 > 0xFu || LockHandle.OldIrql > 0xFu )
        goto LABEL_66;
      v39 = (unsigned __int8)v6 < 2u;
      goto LABEL_63;
    }
    *(_QWORD *)(a1 + 1768) = &v44;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v20 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v34 = (v24 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v24;
          if ( v34 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v20);
    KeWaitForGate(&v44, 18LL);
    KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
    *(_QWORD *)(a1 + 1768) = 0LL;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 1124), 0x80u);
  v8 = (_QWORD *)(a1 + 1688);
  v9 = *(_QWORD *)(a1 + 1688);
  v10 = *(_QWORD **)(a1 + 1696);
  if ( *(_QWORD *)(v9 + 8) != a1 + 1688 || (_QWORD *)*v10 != v8 )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  *v8 = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v11 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v12 = KeGetCurrentIrql();
      if ( v12 <= 0xFu && LockHandle.OldIrql <= 0xFu && v12 >= 2u )
      {
        v13 = KeGetCurrentPrcb();
        v14 = v13->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v34 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v13);
      }
    }
  }
  __writecr8(v11);
  v16 = (void *)*((_QWORD *)v1 + 5);
  if ( v16 )
  {
    MiEmptyPageAccessLog(v16);
    *((_QWORD *)v1 + 5) = 0LL;
  }
  v50 = 0;
  while ( !(unsigned int)KeIsEmptyAffinityEx(a1 + 368) )
    KeYieldProcessorEx(&v50, v17, v18, v19);
  KeFlushProcessTb(*(_QWORD *)(a1 + 40));
  if ( *(_QWORD *)(a1 + 1928) )
    KeFlushProcessTb(*(_QWORD *)(a1 + 904));
  v26 = *(_QWORD *)(a1 + 40) >> 12;
  v27 = 48 * v26 - 0x58000000000LL;
  v28 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v26, &v49, 0x80000000LL, v25)
                           + 8LL * ((*(_DWORD *)(v27 + 8) >> 3) & 0x1FF));
  TransitionPte = MiMakeTransitionPte(v26, 4LL);
  v30 = TransitionPte;
  if ( (unsigned int)MiPteInShadowRange(v28, v31) )
  {
    if ( (unsigned int)MiPteHasShadow(v33, v32) )
    {
      v2 = 1;
      if ( !HIBYTE(word_140C4DF48) )
      {
        v34 = (TransitionPte & 1) == 0;
        goto LABEL_45;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v34 = (TransitionPte & 1) == 0;
LABEL_45:
      if ( !v34 )
        v30 = TransitionPte | 0x8000000000000000uLL;
    }
  }
  *v28 = v30;
  if ( v2 )
    MiWritePteShadow(v28, v30);
  LOBYTE(v32) = v49;
  MiUnmapPageInHyperSpaceWorker(v28, v32, 0x80000000LL);
  MiLockAndDecrementShareCount(v27, 0LL);
  KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
  v51 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v27 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v51, v35, v36, v37);
    while ( *(__int64 *)(v27 + 24) < 0 );
  }
  *(_QWORD *)(v27 + 8) = a1 + 1432;
  *(_QWORD *)(a1 + 1432) = TransitionPte;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_QWORD *)(a1 + 1808) = 0LL;
  MiDecrementShareCount(v27);
  _InterlockedAnd64((volatile signed __int64 *)(v27 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  LOBYTE(v6) = KiIrqlFlags;
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      LOBYTE(v6) = KeGetCurrentIrql();
      if ( (unsigned __int8)v6 <= 0xFu && LockHandle.OldIrql <= 0xFu )
      {
        v39 = (unsigned __int8)v6 < 2u;
LABEL_63:
        if ( !v39 )
        {
          v40 = KeGetCurrentPrcb();
          v41 = v40->SchedulerAssist;
          LODWORD(v6) = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v34 = ((unsigned int)v6 & v41[5]) == 0;
          v41[5] &= v6;
          if ( v34 )
            LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(v40);
        }
      }
    }
  }
LABEL_66:
  __writecr8(OldIrql);
  return v6;
}
