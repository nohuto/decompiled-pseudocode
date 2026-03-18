/*
 * XREFs of KiWakeQueueWaiter @ 0x1402E07D0
 * Callers:
 *     KeRegisterObjectNotification @ 0x140206258 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140206490 (NtWaitForWorkViaWorkerFactory.c)
 *     KeReleaseMutant @ 0x140218050 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KiCommitThreadWait @ 0x14021BDA0 (KiCommitThreadWait.c)
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
 *     KiActivateWaiterKQueue @ 0x14030374C (KiActivateWaiterKQueue.c)
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
 *     KiReleaseThreadLockSafe @ 0x1402F9ED0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiWakeQueueWaiter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // rsi
  __int64 v8; // rdi
  _QWORD *v9; // rax
  char v10; // r12
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v12; // rbp
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v15; // rcx
  _DWORD *v16; // rcx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_QWORD **)(a2 + 8);
  v5 = (_QWORD *)(a2 + 8);
  do
  {
    v8 = (__int64)v4;
    v4 = (_QWORD *)*v4;
    if ( *(_BYTE *)(v8 + 16) != 3 )
      break;
    v9 = *(_QWORD **)(v8 + 8);
    if ( v4[1] != v8 || *v9 != v8 )
      __fastfail(3u);
    *v9 = v4;
    v10 = 0;
    v4[1] = v9;
    CurrentPrcb = KeGetCurrentPrcb();
    v12 = *(_QWORD *)(v8 + 24);
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
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v12 + 64), 0LL) )
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
      while ( *(_QWORD *)(v12 + 64) );
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
    if ( *(_BYTE *)(v12 + 388) == 5 )
      v10 = KiSignalThread(a1, v12, a3, v8);
    KiReleaseThreadLockSafe(v12);
    ++*(_BYTE *)(v8 + 17);
    if ( v10 )
      return 1;
  }
  while ( v4 != v5 );
  return 0;
}
