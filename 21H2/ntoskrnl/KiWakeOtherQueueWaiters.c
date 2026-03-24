/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x140243310
 * Callers:
 *     KeRegisterObjectNotification @ 0x140202F18 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140203150 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x140229620 (NtAssociateWaitCompletionPacket.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140242B70 (NtReleaseWorkerFactoryWorker.c)
 *     IopfCompleteRequest @ 0x1402434C0 (IopfCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x140246230 (IoSetIoCompletionEx2.c)
 *     KiTimerWaitTest @ 0x140247DF0 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x14024B5C0 (KiExpireTimer2.c)
 *     KeSetProcess @ 0x140251D1C (KeSetProcess.c)
 *     KeReleaseSemaphoreEx @ 0x1402631F0 (KeReleaseSemaphoreEx.c)
 *     KePulseEvent @ 0x140271AC0 (KePulseEvent.c)
 *     KiRundownMutants @ 0x140277650 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1402784F0 (KeTerminateThread.c)
 *     KiResumeThread @ 0x1402798D0 (KiResumeThread.c)
 *     IoSetIoCompletionEx @ 0x14028FFC0 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x1402901A0 (KeInsertQueueEx.c)
 *     KeReleaseSemaphore @ 0x14029AC70 (KeReleaseSemaphore.c)
 *     KeRundownQueueCommon @ 0x1402A9DDC (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x1402AA058 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x1402BA75C (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x1402BCED8 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x1402C2B70 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1402CCD30 (KeInsertQueue.c)
 *     KeSetEventBoostPriorityEx @ 0x1402F1788 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x1402F4630 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x1403424B0 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14034B5C0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14034D1C0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeInsertHeadQueue @ 0x14051AF80 (KeInsertHeadQueue.c)
 * Callees:
 *     KiSignalThread @ 0x1402464A0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiInsertQueueInternal @ 0x1402BCED8 (KiInsertQueueInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiWakeOtherQueueWaiters(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *v5; // rbx
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

  v2 = *(_QWORD **)(a2 + 16);
  do
  {
    v5 = v2;
    v2 = (_QWORD *)v2[1];
    result = *((unsigned __int8 *)v5 + 16);
    if ( (_BYTE)result == 2 )
    {
      v14 = *v5;
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v2 != v5 )
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
      if ( *(_QWORD **)(*v5 + 8LL) != v5 || (_QWORD *)*v2 != v5 )
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
  while ( v2 != (_QWORD *)(a2 + 8) );
  return result;
}
