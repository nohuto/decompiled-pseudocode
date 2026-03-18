/*
 * XREFs of MmGetSessionById @ 0x140297320
 * Callers:
 *     MmGetSessionObjectById @ 0x140209854 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x140354B14 (MiTrimSharedPageFromViews.c)
 *     PopPowerButtonWorkCallback @ 0x140576E40 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x140577460 (PopWatchdogWorker.c)
 *     ExCallSessionCallBack @ 0x14062BF24 (ExCallSessionCallBack.c)
 *     PspChangeProcessExecutionState @ 0x14062E290 (PspChangeProcessExecutionState.c)
 *     PsGetSiloBySessionId @ 0x14063BBB4 (PsGetSiloBySessionId.c)
 *     PnpNotifyDriverCallback @ 0x140646E68 (PnpNotifyDriverCallback.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140654CC8 (ExpWnfCaptureScopeInstanceId.c)
 *     PspAttachSession @ 0x1406DF204 (PspAttachSession.c)
 *     EtwpEnableGuid @ 0x1407188EC (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x14071A53C (EtwpSendDataBlock.c)
 *     PiUEventBroadcastEventWorker @ 0x14076FD20 (PiUEventBroadcastEventWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x140880A20 (CmFcpChangeSubscriptionWrapper.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408A5530 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1408A55BC (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x1408F79D4 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140902880 (TtmpSessionWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140295000 (KeAcquireInStackQueuedSpinLock.c)
 *     PsGetThreadServerSilo @ 0x140297450 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x14029748C (MiSelectSessionAttachProcess.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F1894 (KeIsExecutingInArbitraryThreadContext.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
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
  KeAcquireInStackQueuedSpinLock(&qword_140C4ECC0, &LockHandle);
  v5 = (_QWORD *)qword_140C4DC68;
  if ( !qword_140C4DC68 )
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
