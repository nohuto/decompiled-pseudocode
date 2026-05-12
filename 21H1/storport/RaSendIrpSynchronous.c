/*
 * XREFs of RaSendIrpSynchronous @ 0x1C000E060
 * Callers:
 *     RaUnitAtaPassThroughIoctl @ 0x1C0001AF0 (RaUnitAtaPassThroughIoctl.c)
 *     RaUnitDeviceUsageNotificationIrp @ 0x1C0010F24 (RaUnitDeviceUsageNotificationIrp.c)
 *     RaForwardIrpSynchronous @ 0x1C0011DF0 (RaForwardIrpSynchronous.c)
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0015280 (RaidBusEnumeratorIssueSynchronousRequest.c)
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1C001954C (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaidUnitLogSenseCommandSrb @ 0x1C001A028 (RaidUnitLogSenseCommandSrb.c)
 *     RaQueryInterface @ 0x1C0042EEC (RaQueryInterface.c)
 *     RaUnitSmartDataIoctl @ 0x1C0046E38 (RaUnitSmartDataIoctl.c)
 *     RaUnitSmartReturnStatus @ 0x1C0047390 (RaUnitSmartReturnStatus.c)
 *     RaidUnitResetTarget @ 0x1C0049C48 (RaidUnitResetTarget.c)
 *     RaidUnitResetUnit @ 0x1C0049F00 (RaidUnitResetUnit.c)
 *     RaidUnitSendSrbProtocolCommandSynchronously @ 0x1C004A21C (RaidUnitSendSrbProtocolCommandSynchronously.c)
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
