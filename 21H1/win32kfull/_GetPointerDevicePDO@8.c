/*
 * XREFs of _GetPointerDevicePDO@8 @ 0xE6F66
 * Callers:
 *     _GetContainerId@12 @ 0xE6C84 (_GetContainerId@12.c)
 *     ?IsHIDMouse@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@@Z @ 0xE6EA2 (-IsHIDMouse@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@@Z.c)
 *     _GetPointerDeviceKey@12 @ 0x1442BA (_GetPointerDeviceKey@12.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall GetPointerDevicePDO(PDEVICE_OBJECT DeviceObject, _DWORD *a2)
{
  PIRP v4; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // ecx
  NTSTATUS Status; // esi
  void *Information; // [esp-8h] [ebp-30h]
  struct _KEVENT Event; // [esp+10h] [ebp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-8h] BYREF

  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0, 0, 0, &Event, &IoStatusBlock);
  if ( !v4 )
    return -1073741670;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 7;
  CurrentStackLocation[-1].Parameters.Read.Length = 4;
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
    *a2 = *(_DWORD *)(IoStatusBlock.Information + 4);
    ExFreePoolWithTag(Information, 0);
  }
  return Status;
}
