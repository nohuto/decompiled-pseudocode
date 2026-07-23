/*
 * XREFs of KeSetPriorityThread @ 0x140279050
 * Callers:
 *     CcBoostLowPriorityWorkerThread @ 0x14024ECCC (CcBoostLowPriorityWorkerThread.c)
 *     CmpSetPriorityThread @ 0x1402509BC (CmpSetPriorityThread.c)
 *     MiZeroInParallel @ 0x1402940B0 (MiZeroInParallel.c)
 *     MiZeroInParallelWorker @ 0x140297360 (MiZeroInParallelWorker.c)
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     MiSetIdealProcessorThread @ 0x14029E170 (MiSetIdealProcessorThread.c)
 *     CcApplyLowIoPriorityToThread @ 0x140301058 (CcApplyLowIoPriorityToThread.c)
 *     PfTSetTraceWorkerPriority @ 0x140382F54 (PfTSetTraceWorkerPriority.c)
 *     KeSwapProcessOrStack @ 0x1403B4200 (KeSwapProcessOrStack.c)
 *     KiExecuteDpc @ 0x1403B5900 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x1403B78A0 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x1403B9250 (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x1403BD5A0 (MiDereferenceSegmentThread.c)
 *     MiRebuildLargePagesThread @ 0x1403C0860 (MiRebuildLargePagesThread.c)
 *     FsRtlWorkerThread @ 0x1403CE980 (FsRtlWorkerThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E808 (KeSetThreadSchedulerAssist.c)
 *     MiPartitionWorkingSetManager @ 0x140535980 (MiPartitionWorkingSetManager.c)
 *     ExRegisterBootDevice @ 0x1405B3360 (ExRegisterBootDevice.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D6DE4 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x140A3C6A4 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402D4110 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x1402D5420 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePriority @ 0x1405A80D4 (EtwTracePriority.c)
 */

KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  int v4; // r15d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *CurrentThread; // r14
  _DWORD *v8; // rcx
  char PriorityDecrement; // cl
  char v10; // al
  KPRIORITY v11; // ebp
  volatile unsigned __int64 CycleTime; // rdx
  unsigned __int64 v13; // rcx
  char BasePriority; // al
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+80h] [rbp+18h] BYREF

  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v4 = 0;
  v23 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v22 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  v8 = CurrentPrcb->SchedulerAssist;
  if ( v8 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v19 = v8[6];
      v8[6] = v19 + 1;
      if ( v19 == -1 )
LABEL_36:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    v16 = CurrentPrcb->SchedulerAssist;
    if ( v16 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v20 = v16[6] - 1;
        v16[6] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v22);
    while ( Thread->ThreadLock );
    v17 = CurrentPrcb->SchedulerAssist;
    if ( v17 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = v17[6];
        v17[6] = v21 + 1;
        if ( v21 == -1 )
          goto LABEL_36;
      }
    }
  }
  PriorityDecrement = Thread->PriorityDecrement;
  v10 = Thread->Priority;
  v11 = v10;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
    {
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
      v10 = Thread->Priority;
    }
    Thread->PriorityDecrement = 0;
  }
  if ( Priority != v10 )
  {
    if ( Thread != CurrentThread || CurrentPrcb->NestingLevel )
    {
      CycleTime = Thread->CycleTime;
    }
    else
    {
      _disable();
      CycleTime = KiUpdateTotalCyclesCurrentThread(CurrentPrcb, Thread, 0LL);
      _enable();
    }
    v13 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    BasePriority = Thread->BasePriority;
    Thread->QuantumTarget = v13;
    if ( BasePriority && !Priority )
      Priority = 1;
    if ( (BasePriority < 16 || Priority >= 16)
      && (unsigned __int8)KiSetPriorityThread(Thread, &v23, (unsigned int)Priority) )
    {
      v4 = Thread->Priority;
    }
  }
  KiReleaseThreadLockSafe((__int64)Thread);
  KiProcessDeferredReadyList(CurrentPrcb, &v23, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
  {
    if ( v4 )
      EtwTracePriority((_DWORD)Thread, 1328, v11, v4, 0LL);
  }
  return v11;
}
