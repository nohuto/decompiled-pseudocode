/*
 * XREFs of KiWakeQueueWaiter @ 0x1402F0D40
 * Callers:
 *     IoSetIoCompletionEx @ 0x14020DF30 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x14020E110 (KeInsertQueueEx.c)
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
 *     KiActivateWaiterKQueue @ 0x14021CB90 (KiActivateWaiterKQueue.c)
 *     KeRundownQueueCommon @ 0x140227F1C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140228198 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x14023896C (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x14023B588 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x140241090 (KeSignalGate.c)
 *     KePulseEvent @ 0x14025FA60 (KePulseEvent.c)
 *     KiRundownMutants @ 0x1402655F0 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140266490 (KeTerminateThread.c)
 *     KiResumeThread @ 0x140267870 (KiResumeThread.c)
 *     KeReleaseSemaphoreEx @ 0x140284630 (KeReleaseSemaphoreEx.c)
 *     KeInsertQueue @ 0x14029EAA0 (KeInsertQueue.c)
 *     KeRegisterObjectNotification @ 0x1402A7858 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A7A90 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402CDF20 (NtAssociateWaitCompletionPacket.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402E73C0 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x1402EAA80 (IoSetIoCompletionEx2.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 *     KeSetProcess @ 0x1402F652C (KeSetProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x1402FC4D8 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x14034D200 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KiCommitThreadWait @ 0x140350D00 (KiCommitThreadWait.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140356310 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140357F10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeInsertHeadQueue @ 0x14051B1C0 (KeInsertHeadQueue.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x1402121F0 (KiReleaseThreadLockSafe.c)
 *     KiSignalThread @ 0x1402EACF0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  __int64 v8; // rdi
  _QWORD *v10; // rax
  char v11; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v13; // rbp
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_QWORD **)(a2 + 8);
  v5 = (_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v8 = (__int64)v4;
    v4 = (_QWORD *)*v4;
    if ( *(_BYTE *)(v8 + 16) != 3 )
      return 0;
    v10 = *(_QWORD **)(v8 + 8);
    if ( v4[1] != v8 || *v10 != v8 )
      __fastfail(3u);
    *v10 = v4;
    v11 = 0;
    v4[1] = v10;
    CurrentPrcb = KeGetCurrentPrcb();
    v13 = *(_QWORD *)(v8 + 24);
    v20 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = SchedulerAssist[6];
        SchedulerAssist[6] = v17 + 1;
        if ( v17 == -1 )
LABEL_18:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 64), 0LL) )
    {
      v15 = CurrentPrcb->SchedulerAssist;
      if ( v15 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = v15[6] - 1;
          v15[6] = v18;
          if ( !v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v20, a2, a3, a4);
      while ( *(_QWORD *)(v13 + 64) );
      v16 = CurrentPrcb->SchedulerAssist;
      if ( v16 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v19 = v16[6];
          v16[6] = v19 + 1;
          if ( v19 == -1 )
            goto LABEL_18;
        }
      }
    }
    if ( *(_BYTE *)(v13 + 388) == 5 )
      v11 = KiSignalThread(a1, v13, a3, v8);
    KiReleaseThreadLockSafe(v13);
    ++*(_BYTE *)(v8 + 17);
    if ( v11 )
      return 1;
    if ( v4 == v5 )
      return 0;
  }
}
