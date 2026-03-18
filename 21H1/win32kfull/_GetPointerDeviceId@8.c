/*
 * XREFs of _GetPointerDeviceId@8 @ 0xAEACC
 * Callers:
 *     ?GetMouseDeviceHardwareId@@YGJPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@PAU_UNICODE_STRING@@@Z @ 0xF419E (-GetMouseDeviceHardwareId@@YGJPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@PAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall GetPointerDeviceId(PDEVICE_OBJECT DeviceObject, PUNICODE_STRING Destination)
{
  PIRP v4; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // ecx
  NTSTATUS Status; // edi
  void *Information; // esi
  struct _KEVENT Event; // [esp+10h] [ebp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-8h] BYREF

  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0, 0, 0, &Event, &IoStatusBlock);
  if ( !v4 )
    return -1073741670;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 19;
  CurrentStackLocation[-1].Parameters.Read.Length = 1;
  v4->IoStatus.Status = -1073741637;
  Status = IofCallDriver(DeviceObject, v4);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
  {
    Information = (void *)IoStatusBlock.Information;
    Status = RtlAppendUnicodeToString(Destination, (PCWSTR)IoStatusBlock.Information);
    ExFreePoolWithTag(Information, 0);
  }
  return Status;
}
