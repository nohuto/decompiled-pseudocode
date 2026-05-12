/*
 * XREFs of RaSendIrpSynchronous @ 0x1C0010DE0
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001190 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C00142F4 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaForwardIrpSynchronous @ 0x1C00151C0 (RaForwardIrpSynchronous.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0017588 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001C094 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001DF50 (RaidUnitLogSenseCommandSrb.c)
 *     RaQueryInterface @ 0x1C00444D8 (RaQueryInterface.c)
 *     RaUnitSmartDataIoctl @ 0x1C0048358 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C00488B0 (RaUnitSmartReturnStatus.c)
 *     RaidUnitResetTarget @ 0x1C004B168 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C004B420 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C004B73C (RaidUnitSendSrbProtocolCommandSynchronously.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaSendIrpSynchronous(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&RiSignalCompletion;
  CurrentStackLocation[-1].Context = &Event;
  CurrentStackLocation[-1].Control = -32;
  v5 = IofCallDriver(DeviceObject, Irp);
  if ( v5 == 259 )
  {
    v5 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v5;
}
