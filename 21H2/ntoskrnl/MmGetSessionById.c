/*
 * XREFs of MmGetSessionById @ 0x140206410
 * Callers:
 *     MmGetSessionObjectById @ 0x140206364 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC44 (MiTrimSharedPageFromViews.c)
 *     PopPowerButtonWorkCallback @ 0x140578850 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x140578E70 (PopWatchdogWorker.c)
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14060F928 (ExpWnfCaptureScopeInstanceId.c)
 *     PsGetSiloBySessionId @ 0x140634520 (PsGetSiloBySessionId.c)
 *     PspAttachSession @ 0x1406835F8 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x140683678 (ExCallSessionCallBack.c)
 *     EtwpEnableGuid @ 0x1406E2404 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1406E4054 (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x1406E5CC4 (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastEventWorker @ 0x140773BF0 (PiUEventBroadcastEventWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x14087E3C0 (CmFcpChangeSubscriptionWrapper.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408A2B00 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1408A2B8C (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x1408F51B4 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140900030 (TtmpSessionWorker.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x140206540 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x14020657C (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022EE10 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140287110 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D24 (KeIsExecutingInArbitraryThreadContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGetSessionById(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 ThreadServerSilo; // rdi
  _QWORD *v5; // rax
  unsigned int v6; // ecx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = a1;
  v3 = 0LL;
  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext(a1, a2) )
    ThreadServerSilo = 0LL;
  else
    ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v5 = (_QWORD *)qword_140C4DDE8;
  if ( !qword_140C4DDE8 )
    goto LABEL_16;
  while ( 1 )
  {
    v6 = *((_DWORD *)v5 - 34);
    if ( v2 > v6 )
    {
      v5 = (_QWORD *)v5[1];
      goto LABEL_9;
    }
    if ( v2 >= v6 )
      break;
    v5 = (_QWORD *)*v5;
LABEL_9:
    if ( !v5 )
      goto LABEL_16;
  }
  if ( v5 && (!ThreadServerSilo || v5[113] == ThreadServerSilo) && v6 == v2 )
    v3 = MiSelectSessionAttachProcess(v5 - 18);
LABEL_16:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v12 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  return v3;
}
