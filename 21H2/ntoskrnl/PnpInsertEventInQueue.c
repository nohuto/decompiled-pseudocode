/*
 * XREFs of PnpInsertEventInQueue @ 0x14078C398
 * Callers:
 *     PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance @ 0x140255030 (PnpSetDeviceInstancePropertyChangeEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceStartedEventFromDeviceInstance @ 0x1402DE270 (PnpSetDeviceInstanceStartedEventFromDeviceInstance.c)
 *     PnpSetDeviceInstanceRemovalEvent @ 0x1403A6C78 (PnpSetDeviceInstanceRemovalEvent.c)
 *     PnpSetTargetDeviceRemove @ 0x14076729C (PnpSetTargetDeviceRemove.c)
 *     PnpInsertNoopEvent @ 0x140768194 (PnpInsertNoopEvent.c)
 *     PnpSetDeviceClassChange @ 0x1407699F8 (PnpSetDeviceClassChange.c)
 *     PnpSetPlugPlayEvent @ 0x14076C288 (PnpSetPlugPlayEvent.c)
 *     PnpSetCustomTargetEvent @ 0x14078AB30 (PnpSetCustomTargetEvent.c)
 *     PnpSetBlockedDriverEvent @ 0x140950968 (PnpSetBlockedDriverEvent.c)
 *     PnpSetDeviceRemovalSafe @ 0x1409509D8 (PnpSetDeviceRemovalSafe.c)
 *     PnpSetHwProfileChangeEvent @ 0x140950AE4 (PnpSetHwProfileChangeEvent.c)
 *     PnpSetInvalidIDEvent @ 0x140950B80 (PnpSetInvalidIDEvent.c)
 *     PnpSetPowerVetoEvent @ 0x140950C38 (PnpSetPowerVetoEvent.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeResetEvent @ 0x1402A40D0 (KeResetEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x1402E08F8 (PnpIsSafeToExamineUserModeTeb.c)
 *     IoGetActivityIdThread @ 0x1402E0960 (IoGetActivityIdThread.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     McTemplateK0z_EtwWriteTransfer @ 0x140561048 (McTemplateK0z_EtwWriteTransfer.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpInsertEventInQueue(__int64 a1)
{
  unsigned int v2; // esi
  struct _WORK_QUEUE_ITEM *Pool2; // rdi
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
  Pool2 = 0LL;
  ActivityIdThread = IoGetActivityIdThread();
  if ( ActivityIdThread )
  {
    v14 = (GUID)*ActivityIdThread;
  }
  else if ( PnpIsSafeToExamineUserModeTeb()
         && KeGetPcr()->NtTib.$D930595FF9CFE8BC32A0A90C751D1401::$2ADFB250FDFF3378DEB06B8BF0B21A0F::Self )
  {
    v14 = *(GUID *)&KeGetPcr()->NtTib.$D930595FF9CFE8BC32A0A90C751D1401::$2ADFB250FDFF3378DEB06B8BF0B21A0F::Self[105].SubSystemTib;
  }
  *(GUID *)(a1 + 88) = v14;
  if ( (byte_140C0DD4B & 8) != 0 )
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
  if ( !BYTE2(NlsMbOemCodePageTag) )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 32LL, 1282436688LL);
    if ( Pool2 )
    {
      BYTE2(NlsMbOemCodePageTag) = 1;
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
  if ( Pool2 )
  {
    Pool2->WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceEventWorker;
    Pool2->Parameter = Pool2;
    Pool2->List.Flink = 0LL;
    ExQueueWorkItem(Pool2, DelayedWorkQueue);
  }
  return v2;
}
