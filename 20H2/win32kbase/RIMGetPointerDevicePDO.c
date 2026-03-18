/*
 * XREFs of RIMGetPointerDevicePDO @ 0x1C000A430
 * Callers:
 *     RIMRegOpenDeviceInstanceKey @ 0x1C0009DCC (RIMRegOpenDeviceInstanceKey.c)
 *     RIMGetDeviceParent @ 0x1C0009F48 (RIMGetDeviceParent.c)
 *     RIMGetPanelId @ 0x1C000A380 (RIMGetPanelId.c)
 *     RIMGetContainerId @ 0x1C015DC0C (RIMGetContainerId.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMGetPointerDevicePDO(PDEVICE_OBJECT DeviceObject, _QWORD *a2, __int64 a3, __int64 a4)
{
  PIRP v6; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS Status; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *Information; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  if ( !DeviceObject )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(0LL, a2, a3, a4);
  if ( !a2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(DeviceObject, a2, a3, a4);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v6 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v6 )
  {
    CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MinorFunction = 7;
    CurrentStackLocation[-1].Parameters.Read.Length = 4;
    v6->IoStatus.Status = -1073741637;
    Status = IofCallDriver(DeviceObject, v6);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      Information = (_QWORD *)IoStatusBlock.Information;
      if ( !IoStatusBlock.Information )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v11, v12);
      if ( *(_DWORD *)Information != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v11, v12);
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
