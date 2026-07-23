/*
 * XREFs of IopCreateRootEnumeratedDeviceObject @ 0x1407C8FD8
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x14074EF10 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140753634 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1408B3DCC (PiInitializeDevice.c)
 * Callees:
 *     IoDeleteDevice @ 0x1402A5DF0 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x1406C9950 (IoCreateDevice.c)
 */

__int64 __fastcall IopCreateRootEnumeratedDeviceObject(_QWORD *a1)
{
  NTSTATUS v2; // ebx
  PDEVICE_OBJECT v3; // rdx
  struct _DEVICE_OBJECT *v4; // rcx
  PDEVICE_OBJECT v6; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0LL;
  v2 = IoCreateDevice(PnpDriverObject, 4u, 0LL, 4u, 0x80u, 0, &v6);
  if ( v2 < 0 )
  {
    v4 = v6;
  }
  else
  {
    v3 = v6;
    *a1 = v6;
    *(_DWORD *)v3->DeviceExtension = 0;
    v4 = 0LL;
  }
  if ( v4 )
    IoDeleteDevice(v4);
  return (unsigned int)v2;
}
