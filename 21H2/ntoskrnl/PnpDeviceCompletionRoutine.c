/*
 * XREFs of PnpDeviceCompletionRoutine @ 0x14036F9D0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeIrp @ 0x14035E290 (IoFreeIrp.c)
 *     PnpDiagnosticTraceObject @ 0x140364E1C (PnpDiagnosticTraceObject.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x14036FA94 (PnpDeviceCompletionRequestDestroy.c)
 *     PnpDeviceCompletionQueueDispatchedEntryCompleted @ 0x14036FAE8 (PnpDeviceCompletionQueueDispatchedEntryCompleted.c)
 *     IoFindDeviceThatFailedIrp @ 0x14037A944 (IoFindDeviceThatFailedIrp.c)
 *     PnpTraceStartDevice @ 0x14037BDF0 (PnpTraceStartDevice.c)
 */

__int64 __fastcall PnpDeviceCompletionRoutine(__int64 a1, IRP *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx
  __int64 DeviceThatFailedIrp; // rax

  v3 = 0LL;
  *(_QWORD *)(*(_QWORD *)(a3 + 16) + 72LL) = 0LL;
  if ( a2->PendingReturned )
    *(_DWORD *)(a3 + 36) = 1;
  *(_QWORD *)(a3 + 48) = a2->IoStatus.Information;
  *(_DWORD *)(a3 + 40) = a2->IoStatus.Status;
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 56));
  if ( *(int *)(a3 + 40) < 0 )
  {
    DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(a2);
    if ( DeviceThatFailedIrp )
      v3 = *(_QWORD *)(DeviceThatFailedIrp + 8);
  }
  PnpDeviceCompletionQueueDispatchedEntryCompleted(a1, a3);
  v6 = *(_QWORD *)(a3 + 16);
  if ( *(_DWORD *)(a3 + 32) == 781 )
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceEnum_Stop, (unsigned __int16 *)(v6 + 40));
  else
    PnpTraceStartDevice(v6, *(unsigned int *)(a3 + 40), v3);
  PnpDeviceCompletionRequestDestroy(a3);
  IoFreeIrp(a2);
  return 3221225494LL;
}
