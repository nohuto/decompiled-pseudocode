/*
 * XREFs of PnpInsertEventInQueue @ 0x14070AC58
 * Callers:
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x14036B918 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x14037B818 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x14037E5FC (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpInsertNoopEvent @ 0x1405C6B94 (PnpInsertNoopEvent.c)
 *     PnpSetCustomTargetEvent @ 0x140683A54 (PnpSetCustomTargetEvent.c)
 *     PnpSetDeviceClassChange @ 0x14073038C (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x1407308D4 (PnpSetPlugPlayEvent.c)
 *     PnpSetTargetDeviceRemove @ 0x140732F74 (PnpSetTargetDeviceRemove.c)
 *     PnpSetBlockedDriverEvent @ 0x1408A7A14 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1408A7A84 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x1408A7B90 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x1408A7C2C (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x1408A7CE4 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     KeResetEvent @ 0x1402055D0 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x140226F40 (ExQueueWorkItem.c)
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14035B334 (PnpIsSafeToExamineUserModeTeb.c)
 *     IoGetActivityIdThread @ 0x14035B390 (IoGetActivityIdThread.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140508004 (McTemplateK0z_EtwWriteTransfer.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
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
         && KeGetPcr()->NtTib.$1CC13EA220102F7150542D4DBFF67C6A::$4027F68EF0E7CC3497C55FD2100A3F4B::Self )
  {
    v14 = *(GUID *)&KeGetPcr()->NtTib.$1CC13EA220102F7150542D4DBFF67C6A::$4027F68EF0E7CC3497C55FD2100A3F4B::Self[105].SubSystemTib;
  }
  *(GUID *)(a1 + 88) = v14;
  if ( (byte_140C1307B & 8) != 0 )
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
