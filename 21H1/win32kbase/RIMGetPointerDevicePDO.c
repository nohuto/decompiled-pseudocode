/*
 * XREFs of RIMGetPointerDevicePDO @ 0x1C00226D8
 * Callers:
 *     RIMRegOpenDeviceInstanceKey @ 0x1C00221DC (RIMRegOpenDeviceInstanceKey.c)
 *     RIMGetDeviceParent @ 0x1C00222C4 (RIMGetDeviceParent.c)
 *     RIMGetPanelId @ 0x1C0022628 (RIMGetPanelId.c)
 *     RIMGetContainerId @ 0x1C01664BC (RIMGetContainerId.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetPointerDevicePDO(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  PIRP v4; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v6; // rcx
  NTSTATUS Status; // ebx
  _QWORD *Information; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  if ( !DeviceObject )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(DeviceObject);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v4 )
  {
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 7;
    CurrentStackLocation[-1].Parameters.Read.Length = 4;
    v4->IoStatus.Status = -1073741637;
    Status = IofCallDriver(DeviceObject, v4);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Information = (_QWORD *)IoStatusBlock.Information;
      if ( !IoStatusBlock.Information )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      if ( *(_DWORD *)Information != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v6);
      *a2 = Information[1];
      ExFreePoolWithTag(Information, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Status;
}
