/*
 * XREFs of MmOutSwapProcess @ 0x14024A494
 * Callers:
 *     KiOutSwapProcesses @ 0x14024A2B0 (KiOutSwapProcesses.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140228560 (KeIsEmptyAffinityEx.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiDecrementShareCount @ 0x1402401C0 (MiDecrementShareCount.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     MiEmptyPageAccessLog @ 0x14025BC70 (MiEmptyPageAccessLog.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeFlushProcessTb @ 0x140297284 (KeFlushProcessTb.c)
 *     KeWaitForGate @ 0x140299F74 (KeWaitForGate.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiLockAndDecrementShareCount @ 0x1402D5EE0 (MiLockAndDecrementShareCount.c)
 *     MiMakeTransitionPte @ 0x14032E9B0 (MiMakeTransitionPte.c)
 *     MiMapPageInHyperSpaceWorker @ 0x140331AB0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140348910 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseCommitForResetPages @ 0x14052C554 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14052C708 (MiReleaseOutSwappedProcessCommit.c)
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
  unsigned __int64 v17; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // r14
  unsigned __int64 *v25; // r12
  __int64 TransitionPte; // rdi
  unsigned __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  bool v33; // zf
  unsigned __int64 OldIrql; // rbx
  bool v35; // cf
  struct _KPRCB *v36; // r9
  _DWORD *v37; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-30h] BYREF
  __int16 v40; // [rsp+38h] [rbp-18h] BYREF
  char v41; // [rsp+3Ah] [rbp-16h]
  char v42; // [rsp+3Bh] [rbp-15h]
  int v43; // [rsp+3Ch] [rbp-14h]
  _QWORD v44[2]; // [rsp+40h] [rbp-10h] BYREF
  char v45; // [rsp+90h] [rbp+40h] BYREF
  int v46; // [rsp+98h] [rbp+48h] BYREF
  int v47; // [rsp+A0h] [rbp+50h] BYREF

  v1 = &dword_140C4F780;
  v2 = 0;
  v3 = *(_BYTE *)(a1 + 1848) & 7;
  v42 = 0;
  v45 = 0;
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
  v40 = 263;
  v44[1] = v44;
  v41 = 6;
  v44[0] = v44;
  v43 = 0;
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
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
      v35 = (unsigned __int8)v6 < 2u;
      goto LABEL_63;
    }
    *(_QWORD *)(a1 + 1768) = &v40;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v17 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v21 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v33 = (v21 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v21;
          if ( v33 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v17);
    KeWaitForGate(&v40, 18LL);
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
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
        v33 = (v15 & v14[5]) == 0;
        v14[5] &= v15;
        if ( v33 )
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
  v46 = 0;
  while ( !(unsigned int)KeIsEmptyAffinityEx((_WORD *)(a1 + 368)) )
    KeYieldProcessorEx(&v46);
  KeFlushProcessTb(*(_QWORD *)(a1 + 40));
  if ( *(_QWORD *)(a1 + 1928) )
    KeFlushProcessTb(*(_QWORD *)(a1 + 904));
  v23 = *(_QWORD *)(a1 + 40) >> 12;
  v24 = 48 * v23 - 0x58000000000LL;
  v25 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v23, &v45, 0x80000000LL, v22)
                           + 8LL * ((*(_DWORD *)(v24 + 8) >> 3) & 0x1FF));
  TransitionPte = MiMakeTransitionPte(v23, 4LL);
  v27 = TransitionPte;
  if ( (unsigned int)MiPteInShadowRange(v25, v28) )
  {
    if ( (unsigned int)MiPteHasShadow(v30, v29, v31, v32) )
    {
      v2 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
        v33 = (TransitionPte & 1) == 0;
        goto LABEL_45;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v33 = (TransitionPte & 1) == 0;
LABEL_45:
      if ( !v33 )
        v27 = TransitionPte | 0x8000000000000000uLL;
    }
  }
  *v25 = v27;
  if ( v2 )
    MiWritePteShadow(v25, v27);
  LOBYTE(v29) = v45;
  MiUnmapPageInHyperSpaceWorker(v25, v29, 0x80000000LL);
  MiLockAndDecrementShareCount(v24, 0LL);
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v47 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v47);
    while ( *(__int64 *)(v24 + 24) < 0 );
  }
  *(_QWORD *)(v24 + 8) = a1 + 1432;
  *(_QWORD *)(a1 + 1432) = TransitionPte;
  *(_QWORD *)(a1 + 1784) = 0LL;
  *(_QWORD *)(a1 + 1792) = 0LL;
  *(_QWORD *)(a1 + 1800) = 0LL;
  *(_QWORD *)(a1 + 1808) = 0LL;
  MiDecrementShareCount(v24);
  _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
        v35 = (unsigned __int8)v6 < 2u;
LABEL_63:
        if ( !v35 )
        {
          v36 = KeGetCurrentPrcb();
          v37 = v36->SchedulerAssist;
          LODWORD(v6) = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v33 = ((unsigned int)v6 & v37[5]) == 0;
          v37[5] &= v6;
          if ( v33 )
            LOBYTE(v6) = KiRemoveSystemWorkPriorityKick(v36);
        }
      }
    }
  }
LABEL_66:
  __writecr8(OldIrql);
  return v6;
}
