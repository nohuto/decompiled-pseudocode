/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x14028CDD0
 * Callers:
 *     KeRegisterObjectNotification @ 0x140206258 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 *     KeReleaseMutant @ 0x140218050 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x140221690 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x140223290 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeSetProcess @ 0x14023D910 (KeSetProcess.c)
 *     KeSetEventBoostPriorityEx @ 0x140242D58 (KeSetEventBoostPriorityEx.c)
 *     KiTimerWaitTest @ 0x14028BDB0 (KiTimerWaitTest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14028C630 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x14028CF50 (IoSetIoCompletionEx2.c)
 *     KeInsertQueueEx @ 0x140295180 (KeInsertQueueEx.c)
 *     CcUnpinFileDataEx @ 0x14029D060 (CcUnpinFileDataEx.c)
 *     KiRundownMutants @ 0x1402D5C98 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x1402D602C (KeTerminateThread.c)
 *     KiResumeThread @ 0x1402D7924 (KiResumeThread.c)
 *     KeReleaseSemaphoreEx @ 0x1402DCAE0 (KeReleaseSemaphoreEx.c)
 *     KiExpireTimer2 @ 0x1402E01F0 (KiExpireTimer2.c)
 *     IoSetIoCompletionEx @ 0x1402F1130 (IoSetIoCompletionEx.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402F58B0 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSemaphore @ 0x1402FAEB0 (KeReleaseSemaphore.c)
 *     KePulseEvent @ 0x14030A3F0 (KePulseEvent.c)
 *     KeRundownQueueCommon @ 0x14030B17C (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x14030B3F8 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x140318018 (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x14031A71C (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x1403331D0 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1403610A0 (KeInsertQueue.c)
 *     KeInsertHeadQueue @ 0x140519440 (KeInsertHeadQueue.c)
 * Callees:
 *     KiSignalThread @ 0x14028D1C0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     KiInsertQueueInternal @ 0x14031A71C (KiInsertQueueInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
