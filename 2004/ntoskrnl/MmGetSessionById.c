/*
 * XREFs of MmGetSessionById @ 0x1402BE830
 * Callers:
 *     MmGetSessionObjectById @ 0x140297904 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x14031EC94 (MiTrimSharedPageFromViews.c)
 *     PopPowerButtonWorkCallback @ 0x140573410 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x140573A30 (PopWatchdogWorker.c)
 *     PsGetSiloBySessionId @ 0x1405D7E74 (PsGetSiloBySessionId.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140623B18 (ExpWnfCaptureScopeInstanceId.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x140637004 (EtwpSendDataBlock.c)
 *     PnpNotifyDriverCallback @ 0x140648974 (PnpNotifyDriverCallback.c)
 *     PspChangeProcessExecutionState @ 0x14065A9AC (PspChangeProcessExecutionState.c)
 *     PspAttachSession @ 0x1406A4BAC (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x1406A507C (ExCallSessionCallBack.c)
 *     PiUEventBroadcastEventWorker @ 0x140761710 (PiUEventBroadcastEventWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x14087AEB0 (CmFcpChangeSubscriptionWrapper.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14089FA00 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14089FA8C (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x1408F1DC4 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1408FCC50 (TtmpSessionWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsGetThreadServerSilo @ 0x1402BE900 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x1402BE93C (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402C0E10 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmGetSessionById(unsigned int a1)
{
  __int64 v2; // rdi
  __int64 ThreadServerSilo; // rsi
  _QWORD *v4; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned int v7; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  ThreadServerSilo = PsGetThreadServerSilo(KeGetCurrentThread());
  KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
  v4 = (_QWORD *)qword_140C4DBE8;
  if ( !qword_140C4DBE8 )
    goto LABEL_2;
  while ( 1 )
  {
    v7 = *((_DWORD *)v4 - 34);
    if ( a1 > v7 )
    {
      v4 = (_QWORD *)v4[1];
      goto LABEL_8;
    }
    if ( a1 >= v7 )
      break;
    v4 = (_QWORD *)*v4;
LABEL_8:
    if ( !v4 )
      goto LABEL_2;
  }
  if ( v4 && (!ThreadServerSilo || v4[113] == ThreadServerSilo) && v7 == a1 )
    v2 = MiSelectSessionAttachProcess(v4 - 18);
LABEL_2:
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
  return v2;
}
