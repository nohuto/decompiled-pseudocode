/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x1402E7B60
 * Callers:
 *     IoSetIoCompletionEx @ 0x14020DF30 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x14020E110 (KeInsertQueueEx.c)
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
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
 *     IopfCompleteRequest @ 0x1402E7D10 (IopfCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x1402EAA80 (IoSetIoCompletionEx2.c)
 *     KiTimerWaitTest @ 0x1402EC640 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x1402EFE10 (KiExpireTimer2.c)
 *     KeSetProcess @ 0x1402F652C (KeSetProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x1402FC4D8 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x1402FF380 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x14034D200 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140356310 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140357F10 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeInsertHeadQueue @ 0x14051B1C0 (KeInsertHeadQueue.c)
 * Callees:
 *     KiInsertQueueInternal @ 0x14023B588 (KiInsertQueueInternal.c)
 *     KiSignalThread @ 0x1402EACF0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiWakeOtherQueueWaiters(__int64 a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v9; // r14
  __int64 v10; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v12; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // rax
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(__int64 **)(a2 + 16);
  do
  {
    v5 = v2;
    v2 = (__int64 *)v2[1];
    result = *((unsigned __int8 *)v5 + 16);
    if ( (_BYTE)result == 2 )
    {
      v14 = *v5;
      if ( *(__int64 **)(*v5 + 8) != v5 || (__int64 *)*v2 != v5 )
        goto LABEL_21;
      *v2 = v14;
      *(_QWORD *)(v14 + 8) = v2;
      *((_BYTE *)v5 + 17) = 5;
      KiInsertQueueInternal(v5[3], v5);
    }
    else
    {
      if ( (_BYTE)result != 1 )
        return result;
      v7 = *v5;
      if ( *(__int64 **)(*v5 + 8) != v5 || (__int64 *)*v2 != v5 )
LABEL_21:
        __fastfail(3u);
      *v2 = v7;
      *(_QWORD *)(v7 + 8) = v2;
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = *((unsigned __int16 *)v5 + 9);
      v10 = v5[3];
      v21 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v17 = SchedulerAssist[6];
          SchedulerAssist[6] = v17 + 1;
          if ( v17 == -1 )
LABEL_24:
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 64), 0LL) )
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
          KeYieldProcessorEx(&v21);
        while ( *(_QWORD *)(v10 + 64) );
        v16 = CurrentPrcb->SchedulerAssist;
        if ( v16 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v19 = v16[6];
            v16[6] = v19 + 1;
            if ( v19 == -1 )
              goto LABEL_24;
          }
        }
      }
      if ( *(_BYTE *)(v10 + 388) == 5 )
        KiSignalThread(a1, v10, v9, v5);
      *(_QWORD *)(v10 + 64) = 0LL;
      v12 = KeGetCurrentPrcb();
      v13 = v12->SchedulerAssist;
      if ( v13 && v12->NestingLevel <= 1u )
      {
        v20 = v13[6] - 1;
        v13[6] = v20;
        if ( !v20 )
          KiRemoveSystemWorkPriorityKick(v12);
      }
      ++*((_BYTE *)v5 + 17);
    }
    result = a2 + 8;
  }
  while ( v2 != (__int64 *)(a2 + 8) );
  return result;
}
