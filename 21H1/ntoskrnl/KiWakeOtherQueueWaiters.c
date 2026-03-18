/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x1402462E0
 * Callers:
 *     CcUnpinFileDataEx @ 0x1402305D0 (CcUnpinFileDataEx.c)
 *     KiExpireTimer2 @ 0x140243360 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1402450F0 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140245B40 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140246460 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140246FD0 (IoSetIoCompletionEx.c)
 *     IopfCompleteRequest @ 0x140248740 (IopfCompleteRequest.c)
 *     KeReleaseMutant @ 0x140249450 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140261630 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140263230 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140268DF0 (NtWaitForWorkViaWorkerFactory.c)
 *     KeRegisterObjectNotification @ 0x1402C048C (KeRegisterObjectNotification.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402CD580 (NtAssociateWaitCompletionPacket.c)
 *     KeSetProcess @ 0x1402D4298 (KeSetProcess.c)
 *     KeReleaseSemaphore @ 0x1402EE560 (KeReleaseSemaphore.c)
 *     KePulseEvent @ 0x1402F6B10 (KePulseEvent.c)
 *     KeRundownQueueCommon @ 0x1402FBA2C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x1402FBCA8 (KeDeleteMutant.c)
 *     KeInsertQueueEx @ 0x1402FBFF8 (KeInsertQueueEx.c)
 *     KeWakeWaitChain @ 0x140308D4C (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x14030BF98 (KiInsertQueueInternal.c)
 *     KeInsertQueue @ 0x14031D0E0 (KeInsertQueue.c)
 *     KeSignalGate @ 0x1403247B0 (KeSignalGate.c)
 *     KeReleaseSemaphoreEx @ 0x140330D70 (KeReleaseSemaphoreEx.c)
 *     KeTerminateThread @ 0x140355A18 (KeTerminateThread.c)
 *     KiResumeThread @ 0x140356190 (KiResumeThread.c)
 *     KiRundownMutants @ 0x140356A08 (KiRundownMutants.c)
 *     KeSetEventBoostPriorityEx @ 0x14035A898 (KeSetEventBoostPriorityEx.c)
 *     KeInsertHeadQueue @ 0x1405154C0 (KeInsertHeadQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1402466D0 (KiSignalThread.c)
 *     KiInsertQueueInternal @ 0x14030BF98 (KiInsertQueueInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
