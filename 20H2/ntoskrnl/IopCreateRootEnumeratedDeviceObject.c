/*
 * XREFs of IopCreateRootEnumeratedDeviceObject @ 0x1407C49F8
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x140748194 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x14074C8B4 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1408B669C (PiInitializeDevice.c)
 * Callees:
 *     IoDeleteDevice @ 0x140203350 (IoDeleteDevice.c)
 *     IoCreateDevice @ 0x1405D91C0 (IoCreateDevice.c)
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
