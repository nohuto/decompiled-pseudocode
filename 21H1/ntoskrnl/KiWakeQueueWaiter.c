/*
 * XREFs of KiWakeQueueWaiter @ 0x140243980
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
 *     KiCommitThreadWait @ 0x140264C30 (KiCommitThreadWait.c)
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
 *     KiActivateWaiterKQueue @ 0x140357520 (KiActivateWaiterKQueue.c)
 *     KeSetEventBoostPriorityEx @ 0x14035A898 (KeSetEventBoostPriorityEx.c)
 *     KeInsertHeadQueue @ 0x1405154C0 (KeInsertHeadQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1402466D0 (KiSignalThread.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
        KeYieldProcessorEx(&v19);
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
