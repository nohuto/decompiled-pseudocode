/*
 * XREFs of KiWakeQueueWaiter @ 0x1402F6A70
 * Callers:
 *     KeSetProcess @ 0x1402095F0 (KeSetProcess.c)
 *     IoSetIoCompletionEx @ 0x14022A180 (IoSetIoCompletionEx.c)
 *     KeRundownQueueCommon @ 0x140234888 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140234B28 (KeDeleteMutant.c)
 *     KeSignalGate @ 0x14024B0B4 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1402624D0 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     KiTimerWaitTest @ 0x1402A7FE0 (KiTimerWaitTest.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402B02B0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402B1740 (ExpReleaseResourceSharedForThreadLite.c)
 *     KiCommitThreadWait @ 0x1402B5240 (KiCommitThreadWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402BA130 (NtWaitForWorkViaWorkerFactory.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     KiActivateWaiterKQueue @ 0x1402EE238 (KiActivateWaiterKQueue.c)
 *     KiResumeThread @ 0x1402EF710 (KiResumeThread.c)
 *     KeTerminateThread @ 0x1402F00BC (KeTerminateThread.c)
 *     KiRundownMutants @ 0x1402F0604 (KiRundownMutants.c)
 *     KeRegisterObjectNotification @ 0x1402F0D90 (KeRegisterObjectNotification.c)
 *     KiExpireTimer2 @ 0x1402F2CA0 (KiExpireTimer2.c)
 *     AlpcpQueueIoCompletion @ 0x1402F6750 (AlpcpQueueIoCompletion.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402F8040 (NtReleaseWorkerFactoryWorker.c)
 *     KeReleaseMutant @ 0x1402F91E0 (KeReleaseMutant.c)
 *     KeInsertQueueEx @ 0x140311A50 (KeInsertQueueEx.c)
 *     KeSetEventBoostPriorityEx @ 0x1403595B4 (KeSetEventBoostPriorityEx.c)
 *     IoSetIoCompletionEx2 @ 0x14035A850 (IoSetIoCompletionEx2.c)
 *     KeReleaseSemaphoreEx @ 0x14035AD70 (KeReleaseSemaphoreEx.c)
 *     KiInsertQueueInternal @ 0x14035B608 (KiInsertQueueInternal.c)
 *     KeWakeWaitChain @ 0x14035B8F4 (KeWakeWaitChain.c)
 *     KeInsertHeadQueue @ 0x140570CF0 (KeInsertHeadQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1402F6ED0 (KiSignalThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // r14
  _QWORD *v8; // rbx
  _QWORD *v9; // rax
  char v10; // bp
  struct _KPRCB *CurrentPrcb; // r15
  __int64 v12; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v14; // rcx
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_QWORD **)(a2 + 8);
  v5 = (_QWORD *)(a2 + 8);
  do
  {
    v8 = v4;
    v4 = (_QWORD *)*v4;
    if ( *((_BYTE *)v8 + 16) != 3 )
      break;
    v9 = (_QWORD *)v8[1];
    if ( (_QWORD *)v4[1] != v8 || (_QWORD *)*v9 != v8 )
      __fastfail(3u);
    *v9 = v4;
    v10 = 0;
    v4[1] = v9;
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = v8[3];
    v22 = 0;
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v18 = SchedulerAssist[6];
        SchedulerAssist[6] = v18 + 1;
        if ( v18 == -1 )
LABEL_20:
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 64), 0LL) )
    {
      v16 = CurrentPrcb->SchedulerAssist;
      if ( v16 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v19 = v16[6] - 1;
          v16[6] = v19;
          if ( !v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v22, a2, a3, a4);
      while ( *(_QWORD *)(v12 + 64) );
      v17 = CurrentPrcb->SchedulerAssist;
      if ( v17 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v20 = v17[6];
          v17[6] = v20 + 1;
          if ( v20 == -1 )
            goto LABEL_20;
        }
      }
    }
    if ( *(_BYTE *)(v12 + 388) == 5 )
      v10 = KiSignalThread(a1, v12, a3, v8);
    *(_QWORD *)(v12 + 64) = 0LL;
    v14 = KeGetCurrentPrcb();
    a2 = (__int64)v14->SchedulerAssist;
    if ( a2 && v14->NestingLevel <= 1u )
    {
      v21 = *(_DWORD *)(a2 + 24) - 1;
      *(_DWORD *)(a2 + 24) = v21;
      if ( !v21 )
        KiRemoveSystemWorkPriorityKick(v14);
    }
    ++*((_BYTE *)v8 + 17);
    if ( v10 )
      return 1;
  }
  while ( v4 != v5 );
  return 0;
}
