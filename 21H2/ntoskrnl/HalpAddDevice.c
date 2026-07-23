/*
 * XREFs of HalpAddDevice @ 0x1407AE6B0
 * Callers:
 *     HalpDriverEntry @ 0x1407AE300 (HalpDriverEntry.c)
 * Callees:
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     IoAttachDeviceToDeviceStack @ 0x140380DE0 (IoAttachDeviceToDeviceStack.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     IoCreateDevice @ 0x1406C9950 (IoCreateDevice.c)
 *     HalpPostPnpInitialize @ 0x1407AE7C8 (HalpPostPnpInitialize.c)
 *     HalpIsUefiFirmwareResourceTablePresent @ 0x1407AEA78 (HalpIsUefiFirmwareResourceTablePresent.c)
 */

NTSTATUS __fastcall HalpAddDevice(PDRIVER_OBJECT DriverObject, PDEVICE_OBJECT TargetDevice)
{
  NTSTATUS v4; // eax
  struct _DEVICE_OBJECT *v5; // rdi
  PDEVICE_OBJECT v6; // rcx
  _QWORD *DeviceExtension; // rbx
  PDEVICE_OBJECT v8; // rax
  NTSTATUS result; // eax
  PDEVICE_OBJECT v10; // rsi
  _QWORD *v11; // rdi
  PDEVICE_OBJECT v12; // rcx
  _QWORD *v13; // rax
  PDEVICE_OBJECT v14; // [rsp+40h] [rbp-28h] BYREF
  PDEVICE_OBJECT SourceDevice; // [rsp+80h] [rbp+18h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+88h] [rbp+20h] BYREF

  DeviceObject = 0LL;
  SourceDevice = 0LL;
  v14 = 0LL;
  v4 = IoCreateDevice(DriverObject, 0x28u, 0LL, 0x2Au, 0, 0, &SourceDevice);
  if ( v4 < 0 )
    KeBugCheckEx(0x5Cu, 0x10EuLL, v4, 0LL, 0LL);
  v5 = SourceDevice;
  v6 = SourceDevice;
  DeviceExtension = SourceDevice->DeviceExtension;
  *(_DWORD *)DeviceExtension = 193;
  DeviceExtension[2] = TargetDevice;
  DeviceExtension[3] = v6;
  v6->Flags &= ~0x80u;
  v8 = IoAttachDeviceToDeviceStack(v6, TargetDevice);
  if ( v8 )
  {
    DeviceExtension[4] = v8;
    result = IoCreateDevice(DriverObject, 0x30u, 0LL, 0x2Au, 0x80u, 0, &DeviceObject);
    if ( result >= 0 )
    {
      v10 = DeviceObject;
      AcpiRootPdo = DeviceObject;
      v11 = DeviceObject->DeviceExtension;
      v11[1] = 0LL;
      *(_DWORD *)v11 = 192;
      v11[2] = v10;
      v11[3] = DeviceExtension;
      *((_DWORD *)v11 + 8) = 129;
      if ( (unsigned __int8)HalpIsUefiFirmwareResourceTablePresent() )
      {
        if ( IoCreateDevice(DriverObject, 0x30u, 0LL, 0x2Au, 0x80u, 0, &v14) >= 0 )
        {
          v12 = v14;
          v13 = v14->DeviceExtension;
          v13[1] = 0LL;
          *(_DWORD *)v13 = 192;
          v13[2] = v12;
          v13[3] = DeviceExtension;
          *((_DWORD *)v13 + 8) = 131;
          v11[1] = v13;
          v12->Flags &= ~0x80u;
        }
      }
      v10->Flags &= ~0x80u;
      DeviceExtension[1] = v11;
      HalpPostPnpInitialize();
      return 0;
    }
  }
  else
  {
    IoDeleteDevice(v5);
    return -1073741810;
  }
  return result;
}
