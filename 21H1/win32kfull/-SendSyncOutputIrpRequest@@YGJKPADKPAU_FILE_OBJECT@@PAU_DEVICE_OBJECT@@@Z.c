/*
 * XREFs of ?SendSyncOutputIrpRequest@@YGJKPADKPAU_FILE_OBJECT@@PAU_DEVICE_OBJECT@@@Z @ 0x183C28
 * Callers:
 *     ?IsHIDMouseDeviceRelative@@YGHPAUDEVICEINFO@@PAU_FILE_OBJECT@@PAU_DEVICE_OBJECT@@@Z @ 0x183AE3 (-IsHIDMouseDeviceRelative@@YGHPAUDEVICEINFO@@PAU_FILE_OBJECT@@PAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __userpurge SendSyncOutputIrpRequest@<eax>(
        void *a1@<edx>,
        ULONG a2@<ecx>,
        ULONG OutputBufferLength,
        char *a4,
        PDEVICE_OBJECT DeviceObject,
        struct _FILE_OBJECT *a6,
        struct _DEVICE_OBJECT *a7)
{
  NTSTATUS v9; // ebx
  PIRP v10; // esi
  struct _KEVENT Event; // [esp+10h] [ebp-1Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [esp+20h] [ebp-Ch] BYREF

  IoStatusBlock.Status = 0;
  IoStatusBlock.Information = 0;
  v9 = -1073741668;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v10 = IoBuildDeviceIoControlRequest(a2, DeviceObject, 0, 0, a1, OutputBufferLength, 0, &Event, &IoStatusBlock);
  if ( v10 )
  {
    *(_DWORD *)(v10->Tail.Overlay.PacketType - 12) = a4;
    v9 = IofCallDriver(DeviceObject, v10);
    if ( v9 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0);
      return IoStatusBlock.Status;
    }
  }
  return v9;
}
