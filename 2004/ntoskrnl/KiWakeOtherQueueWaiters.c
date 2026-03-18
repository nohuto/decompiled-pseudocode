/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x140282AC0
 * Callers:
 *     ExpReleaseResourceSharedForThreadLite @ 0x140208710 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14020A310 (ExpReleaseResourceExclusiveForThreadLite.c)
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
 *     KiInsertQueueInternal @ 0x140349E58 (KiInsertQueueInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiWakeOtherQueueWaiters(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  _QWORD *v7; // rbx
  __int64 result; // rax
  __int64 v9; // rax
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v11; // r14
  __int64 v12; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v14; // rcx
  __int64 v15; // rax
  _DWORD *v16; // rcx
  _DWORD *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_QWORD **)(a2 + 16);
  v5 = a2;
  do
  {
    v7 = v4;
    v4 = (_QWORD *)v4[1];
    result = *((unsigned __int8 *)v7 + 16);
    if ( (_BYTE)result == 2 )
    {
      v15 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v4 != v7 )
        goto LABEL_21;
      *v4 = v15;
      *(_QWORD *)(v15 + 8) = v4;
      *((_BYTE *)v7 + 17) = 5;
      KiInsertQueueInternal(v7[3], v7);
    }
    else
    {
      if ( (_BYTE)result != 1 )
        return result;
      v9 = *v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || (_QWORD *)*v4 != v7 )
LABEL_21:
        __fastfail(3u);
      *v4 = v9;
      *(_QWORD *)(v9 + 8) = v4;
      CurrentPrcb = KeGetCurrentPrcb();
      v11 = *((unsigned __int16 *)v7 + 9);
      v12 = v7[3];
      v22 = 0;
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = SchedulerAssist[6];
          SchedulerAssist[6] = v18 + 1;
          if ( v18 == -1 )
LABEL_24:
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
              goto LABEL_24;
          }
        }
      }
      if ( *(_BYTE *)(v12 + 388) == 5 )
        KiSignalThread(a1, v12, v11, v7);
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
      ++*((_BYTE *)v7 + 17);
    }
    result = v5 + 8;
  }
  while ( v4 != (_QWORD *)(v5 + 8) );
  return result;
}
