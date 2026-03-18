/*
 * XREFs of KeSetPriorityThread @ 0x1402EBF90
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x1402C56BC (CcApplyLowIoPriorityToThread.c)
 *     MiSetIdealProcessorThread @ 0x1402DF534 (MiSetIdealProcessorThread.c)
 *     MiZeroInParallelWorker @ 0x1402DF7C0 (MiZeroInParallelWorker.c)
 *     KeGenericProcessorCallback @ 0x1402E45F4 (KeGenericProcessorCallback.c)
 *     MiZeroInParallel @ 0x14030B714 (MiZeroInParallel.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1403216F0 (CcBoostLowPriorityWorkerThread.c)
 *     CmpSetPriorityThread @ 0x14035F77C (CmpSetPriorityThread.c)
 *     PfTSetTraceWorkerPriority @ 0x1403809FC (PfTSetTraceWorkerPriority.c)
 *     KeSwapProcessOrStack @ 0x1403B0300 (KeSwapProcessOrStack.c)
 *     KiExecuteDpc @ 0x1403B17A0 (KiExecuteDpc.c)
 *     MiMappedPageWriter @ 0x1403B4730 (MiMappedPageWriter.c)
 *     KeBalanceSetManager @ 0x1403B5C40 (KeBalanceSetManager.c)
 *     MiDereferenceSegmentThread @ 0x1403BA4A0 (MiDereferenceSegmentThread.c)
 *     MiRebuildLargePagesThread @ 0x1403BD760 (MiRebuildLargePagesThread.c)
 *     FsRtlWorkerThread @ 0x1403CB200 (FsRtlWorkerThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140519118 (KeSetThreadSchedulerAssist.c)
 *     MiPartitionWorkingSetManager @ 0x140530270 (MiPartitionWorkingSetManager.c)
 *     ExRegisterBootDevice @ 0x1405ADBD0 (ExRegisterBootDevice.c)
 *     NtSetInformationThread @ 0x140673B60 (NtSetInformationThread.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1409D2DD4 (ViPendingQueuePassiveLevelCompletion.c)
 *     Phase1InitializationDiscard @ 0x140A37B24 (Phase1InitializationDiscard.c)
 * Callees:
 *     KiSetPriorityThread @ 0x140213680 (KiSetPriorityThread.c)
 *     KiProcessDeferredReadyList @ 0x140213FB0 (KiProcessDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x1402ED9C0 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTracePriority @ 0x1405A29D4 (EtwTracePriority.c)
 */

// local variable allocation has failed, the output may be wrong!
KPRIORITY __stdcall KeSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  __int64 v2; // r8
  _DWORD *SchedulerAssist; // r9
  KPRIORITY v4; // edi
  int v6; // r15d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *CurrentThread; // r14
  _DWORD *v10; // rcx
  char PriorityDecrement; // cl
  char v12; // al
  KPRIORITY v13; // ebp
  volatile unsigned __int64 CycleTime; // rdx
  unsigned __int64 v15; // rcx
  char BasePriority; // al
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+70h] [rbp+8h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h] BYREF

  v4 = Priority;
  if ( Thread->Process == (_KPROCESS *)&KiInitialProcess )
    return 1;
  v6 = 0;
  v24 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    *(_QWORD *)&Priority = (-1LL << (CurrentIrql + 1)) & 4;
    v2 = (unsigned int)Priority | SchedulerAssist[5];
    SchedulerAssist[5] = v2;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v23 = 0;
  CurrentThread = CurrentPrcb->CurrentThread;
  v10 = CurrentPrcb->SchedulerAssist;
  if ( v10 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v20 = v10[6];
      v10[6] = v20 + 1;
      if ( v20 == -1 )
LABEL_36:
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  while ( _interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
  {
    v18 = CurrentPrcb->SchedulerAssist;
    if ( v18 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v21 = v18[6] - 1;
        v18[6] = v21;
        if ( !v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v23, *(__int64 *)&Priority, v2, (__int64)SchedulerAssist);
    while ( Thread->ThreadLock );
    v19 = CurrentPrcb->SchedulerAssist;
    if ( v19 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v22 = v19[6];
        v19[6] = v22 + 1;
        if ( v22 == -1 )
          goto LABEL_36;
      }
    }
  }
  PriorityDecrement = Thread->PriorityDecrement;
  v12 = Thread->Priority;
  v13 = v12;
  if ( PriorityDecrement )
  {
    if ( (PriorityDecrement & 0xF) != 0 )
    {
      Thread->ForegroundLossTime = MEMORY[0xFFFFF78000000320];
      v12 = Thread->Priority;
    }
    Thread->PriorityDecrement = 0;
  }
  if ( v4 != v12 )
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
    v15 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)Thread->SchedulerApc.SpareByte1;
    if ( (*((_DWORD *)&Thread->0 + 1) & 0x20) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 5u);
    BasePriority = Thread->BasePriority;
    Thread->QuantumTarget = v15;
    if ( BasePriority && !v4 )
      v4 = 1;
    if ( (BasePriority < 16 || v4 >= 16) && KiSetPriorityThread(Thread, (__int64)&v24, v4) )
      v6 = Thread->Priority;
  }
  KiReleaseThreadLockSafe(Thread);
  KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v24, CurrentIrql);
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
  {
    if ( v6 )
      EtwTracePriority((_DWORD)Thread, 1328, v13, v6, 0LL);
  }
  return v13;
}
