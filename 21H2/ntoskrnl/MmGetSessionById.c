/*
 * XREFs of MmGetSessionById @ 0x1402AAD40
 * Callers:
 *     MmGetSessionObjectById @ 0x1402AAC94 (MmGetSessionObjectById.c)
 *     MiTrimSharedPageFromViews @ 0x1402FA994 (MiTrimSharedPageFromViews.c)
 *     PopPowerButtonWorkCallback @ 0x140578A90 (PopPowerButtonWorkCallback.c)
 *     PopWatchdogWorker @ 0x1405790B0 (PopWatchdogWorker.c)
 *     PspAttachSession @ 0x1405E4478 (PspAttachSession.c)
 *     ExCallSessionCallBack @ 0x1405E44F8 (ExCallSessionCallBack.c)
 *     PsGetSiloBySessionId @ 0x14068FAB4 (PsGetSiloBySessionId.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14069F3D8 (ExpWnfCaptureScopeInstanceId.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 *     EtwpSendDataBlock @ 0x1406BB334 (EtwpSendDataBlock.c)
 *     PspChangeProcessExecutionState @ 0x1406F5340 (PspChangeProcessExecutionState.c)
 *     PnpNotifyDriverCallback @ 0x1406FD0AC (PnpNotifyDriverCallback.c)
 *     PiUEventBroadcastEventWorker @ 0x140773DB0 (PiUEventBroadcastEventWorker.c)
 *     CmFcpChangeSubscriptionWrapper @ 0x14087E520 (CmFcpChangeSubscriptionWrapper.c)
 *     PiUEventBroadcastHardwareProfilesChangedEvent @ 0x1408A2C60 (PiUEventBroadcastHardwareProfilesChangedEvent.c)
 *     PiUEventBroadcastPortsChangedEvent @ 0x1408A2CEC (PiUEventBroadcastPortsChangedEvent.c)
 *     PopLazySensorActiveInput @ 0x1408F5314 (PopLazySensorActiveInput.c)
 *     TtmpSessionWorker @ 0x140900190 (TtmpSessionWorker.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     PsGetThreadServerSilo @ 0x1402AAE70 (PsGetThreadServerSilo.c)
 *     MiSelectSessionAttachProcess @ 0x1402AAEAC (MiSelectSessionAttachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402D3660 (KeAcquireInStackQueuedSpinLock.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F2D74 (KeIsExecutingInArbitraryThreadContext.c)
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
  v5 = (_QWORD *)qword_140C4DE28;
  if ( !qword_140C4DE28 )
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
