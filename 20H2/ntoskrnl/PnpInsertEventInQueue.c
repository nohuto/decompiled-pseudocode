/*
 * XREFs of PnpInsertEventInQueue @ 0x14064AECC
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14036DA2C (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14037013C (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037BD40 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpInsertNoopEvent @ 0x1405CCDA4 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x1406489B4 (PnpSetCustomTargetEvent.c)
 *     PnpSetPlugPlayEvent @ 0x140739BC8 (PnpSetPlugPlayEvent.c)
 *     PnpSetTargetDeviceRemove @ 0x140741FC0 (PnpSetTargetDeviceRemove.c)
 *     PnpSetDeviceClassChange @ 0x14074424C (PnpSetDeviceClassChange.c)
 *     PnpSetBlockedDriverEvent @ 0x1408AE864 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1408AE8D4 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1408AE9E0 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1408AEA7C (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1408AEB34 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     KeResetEvent @ 0x140209F50 (KeResetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140243F94 (PnpIsSafeToExamineUserModeTeb.c)
 *     IoGetActivityIdThread @ 0x140243FF0 (IoGetActivityIdThread.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x14050BF84 (McTemplateK0z_EtwWriteTransfer.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpInsertEventInQueue(__int64 a1)
{
  unsigned int v2; // esi
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rdi
  struct _LIST_ENTRY *ActivityIdThread; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  GUID v14; // [rsp+20h] [rbp-28h]

  v14 = NullGuid;
  v2 = 0;
  PoolWithTag = 0LL;
  ActivityIdThread = IoGetActivityIdThread();
  if ( ActivityIdThread )
  {
    v14 = (GUID)*ActivityIdThread;
  }
  else if ( PnpIsSafeToExamineUserModeTeb()
         && KeGetPcr()->NtTib.$291CBC43A21EE7E4F58DE30F5474C31B::$F973CBAF4608634B0F908ADAEF96F715::Self )
  {
    v14 = *(GUID *)&KeGetPcr()->NtTib.$291CBC43A21EE7E4F58DE30F5474C31B::$F973CBAF4608634B0F908ADAEF96F715::Self[105].SubSystemTib;
  }
  *(GUID *)(a1 + 88) = v14;
  if ( (byte_140C130BB & 8) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 112) - *(_QWORD *)&GUID_DEVICE_QUERY_AND_REMOVE.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)(a1 + 120) - *(_QWORD *)GUID_DEVICE_QUERY_AND_REMOVE.Data4;
    if ( !v10 )
      goto LABEL_20;
    v11 = *(_QWORD *)(a1 + 112) - *(_QWORD *)&GUID_DEVICE_EJECT.Data1;
    if ( !v11 )
      v11 = *(_QWORD *)(a1 + 120) - *(_QWORD *)GUID_DEVICE_EJECT.Data4;
    if ( !v11 )
    {
LABEL_20:
      v12 = *(_QWORD *)(a1 + 152);
      if ( v12 )
        v13 = *(_QWORD *)(*(_QWORD *)(v12 + 312) + 40LL);
      else
        v13 = 0LL;
      McTemplateK0z_EtwWriteTransfer(
        v5,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_DeviceRemoval_Queue,
        v6,
        *(const wchar_t **)(v13 + 48));
    }
  }
  ExAcquireFastMutex((PFAST_MUTEX)(PnpDeviceEventList + 64));
  ExAcquireFastMutex(&PnpNotificationInProgressLock);
  if ( !BYTE2(NlsMbCodePageTag) )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x4C706E50u);
    if ( PoolWithTag )
    {
      BYTE2(NlsMbCodePageTag) = 1;
      KeResetEvent(&PnpEventQueueEmpty);
    }
    else
    {
      v2 = -1073741670;
    }
  }
  v7 = PnpDeviceEventList + 120;
  v8 = *(_QWORD **)(PnpDeviceEventList + 128);
  if ( *v8 != PnpDeviceEventList + 120 )
    __fastfail(3u);
  *(_QWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v8;
  *v8 = a1;
  *(_QWORD *)(v7 + 8) = a1;
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(PnpDeviceEventList + 64));
  if ( PoolWithTag )
  {
    PoolWithTag->WorkerRoutine = PnpDeviceEventWorker;
    PoolWithTag->Parameter = PoolWithTag;
    PoolWithTag->List.Flink = 0LL;
    ExQueueWorkItem(PoolWithTag, DelayedWorkQueue);
  }
  return v2;
}
