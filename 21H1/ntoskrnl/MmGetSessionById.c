/*
 * XREFs of MmGetSessionById @ 0x14022BBB0
 * Callers:
 *     MmGetSessionObjectById @ 0x14025B084 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x1402CE864 (MiTrimSharedPageFromViews.c)
 *     PopPowerButtonWorkCallback @ 0x140572DC0 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x1405733E0 (PopWatchdogWorker.c)
 *     PspChangeProcessExecutionState @ 0x14065E324 (PspChangeProcessExecutionState.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x140669238 (ExpWnfCaptureScopeInstanceId.c)
 *     EtwpEnableGuid @ 0x14067E254 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x14067F880 (EtwpSendDataBlock.c)
 *     PsGetSiloBySessionId @ 0x1406A64A4 (PsGetSiloBySessionId.c)
 *     PnpNotifyDriverCallback @ 0x14070D040 (PnpNotifyDriverCallback.c)
 *     ExCallSessionCallBack @ 0x140710C88 (ExCallSessionCallBack.c)
 *     PspAttachSession @ 0x1407111BC (PspAttachSession.c)
 *     PiUEventBroadcastEventWorker @ 0x14075F2D0 (PiUEventBroadcastEventWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x140879BC0 (CmFcpChangeSubscriptionWrapper.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x14089E6E0 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x14089E76C (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x1408F0AD4 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x1408FB960 (TtmpSessionWorker.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x14022BC80 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x14022BCBC (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14022DFE0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140263790 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
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
  KeAcquireInStackQueuedSpinLock(&qword_140C4ED80, &LockHandle);
  v4 = (_QWORD *)qword_140C4DD28;
  if ( !qword_140C4DD28 )
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
