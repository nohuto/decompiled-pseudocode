/*
 * XREFs of KiWakeQueueWaiter @ 0x140280080
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x140208710 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KiCommitThreadWait @ 0x14020BBE0 (KiCommitThreadWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14020FDA0 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRegisterObjectNotification @ 0x14026745C (KeRegisterObjectNotification.c)
 *     KeSetEventBoostPriorityEx @ 0x140274BF8 (KeSetEventBoostPriorityEx.c)
 *     KeSetProcess @ 0x14027BE30 (KeSetProcess.c)
 *     KiExpireTimer2 @ 0x14027FA60 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1402818D0 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140282320 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140282C40 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x1402837B0 (IoSetIoCompletionEx.c)
 *     IopfCompleteRequest @ 0x140284EE0 (IopfCompleteRequest.c)
 *     KeReleaseMutant @ 0x140285BF0 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     CcUnpinFileDataEx @ 0x1402C3400 (CcUnpinFileDataEx.c)
 *     KeReleaseSemaphoreEx @ 0x1402EBC30 (KeReleaseSemaphoreEx.c)
 *     KePulseEvent @ 0x1402F2EF0 (KePulseEvent.c)
 *     KeTerminateThread @ 0x1402F9A38 (KeTerminateThread.c)
 *     KiResumeThread @ 0x1402FA1B0 (KiResumeThread.c)
 *     KiRundownMutants @ 0x1402FAA28 (KiRundownMutants.c)
 *     KiActivateWaiterKQueue @ 0x1402FB540 (KiActivateWaiterKQueue.c)
 *     NtAssociateWaitCompletionPacket @ 0x14030EF50 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSemaphore @ 0x140327E90 (KeReleaseSemaphore.c)
 *     KeRundownQueueCommon @ 0x140338A5C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140338CD8 (KeDeleteMutant.c)
 *     KeInsertQueueEx @ 0x140339334 (KeInsertQueueEx.c)
 *     KeWakeWaitChain @ 0x140346B4C (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x140349E58 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x140350B20 (KeSignalGate.c)
 *     KeInsertQueue @ 0x14035ACC0 (KeInsertQueue.c)
 *     KeInsertHeadQueue @ 0x140515B10 (KeInsertHeadQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x140282EB0 (KiSignalThread.c)
 *     KiReleaseThreadLockSafe @ 0x140327E50 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *v7; // rdi
  _QWORD *v9; // rax
  char v10; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v12; // rbp
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v14; // rcx
  _DWORD *v15; // rcx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // [rsp+58h] [rbp+10h] BYREF

  v3 = *(_QWORD **)(a2 + 8);
  v4 = (_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v7 = v3;
    v3 = (_QWORD *)*v3;
    if ( *((_BYTE *)v7 + 16) != 3 )
      return 0;
    v9 = (_QWORD *)v7[1];
    if ( (_QWORD *)v3[1] != v7 || (_QWORD *)*v9 != v7 )
      __fastfail(3u);
    *v9 = v3;
    v10 = 0;
    v3[1] = v9;
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = v7[3];
    v19 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v16 = SchedulerAssist[6];
        SchedulerAssist[6] = v16 + 1;
        if ( v16 == -1 )
LABEL_18:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 64), 0LL) )
    {
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v17 = v14[6] - 1;
          v14[6] = v17;
          if ( !v17 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v19, a2);
      while ( *(_QWORD *)(v12 + 64) );
      v15 = CurrentPrcb->SchedulerAssist;
      if ( v15 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = v15[6];
          v15[6] = v18 + 1;
          if ( v18 == -1 )
            goto LABEL_18;
        }
      }
    }
    if ( *(_BYTE *)(v12 + 388) == 5 )
      v10 = KiSignalThread(a1, v12, a3, v7);
    KiReleaseThreadLockSafe(v12);
    ++*((_BYTE *)v7 + 17);
    if ( v10 )
      return 1;
    if ( v3 == v4 )
      return 0;
  }
}
