/*
 * XREFs of KiWakeQueueWaiter @ 0x14024C4F0
 * Callers:
 *     KeRegisterObjectNotification @ 0x140202F18 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140203150 (NtWaitForWorkViaWorkerFactory.c)
 *     NtAssociateWaitCompletionPacket @ 0x140229620 (NtAssociateWaitCompletionPacket.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140242B70 (NtReleaseWorkerFactoryWorker.c)
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
 *     KiActivateWaiterKQueue @ 0x14029F630 (KiActivateWaiterKQueue.c)
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
 *     KiCommitThreadWait @ 0x140345FB0 (KiCommitThreadWait.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14034B5C0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14034D1C0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     KeInsertHeadQueue @ 0x14051AF80 (KeInsertHeadQueue.c)
 * Callees:
 *     KiSignalThread @ 0x1402464A0 (KiSignalThread.c)
 *     KeYieldProcessorEx @ 0x14024B280 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x14029A860 (KiReleaseThreadLockSafe.c)
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
