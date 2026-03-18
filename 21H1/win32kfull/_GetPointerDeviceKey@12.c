/*
 * XREFs of _GetPointerDeviceKey@12 @ 0x1442BA
 * Callers:
 *     _RetrieveCalibrationData@12 @ 0x13EF9A (_RetrieveCalibrationData@12.c)
 *     __SetCalibrationData@16 @ 0x1448D3 (__SetCalibrationData@16.c)
 * Callees:
 *     _GetPointerDevicePDO@8 @ 0xE6F66 (_GetPointerDevicePDO@8.c)
 *     _GetDeviceObjectPointer@24 @ 0xE6FF0 (_GetDeviceObjectPointer@24.c)
 */

BOOL __thiscall GetPointerDeviceKey(PHANDLE DeviceRegKey, struct _UNICODE_STRING a2)
{
  NTSTATUS DeviceObjectPointer; // edi
  HANDLE Handle; // [esp+8h] [ebp-10h] BYREF
  PVOID v6; // [esp+Ch] [ebp-Ch] BYREF
  PDEVICE_OBJECT DeviceObject; // [esp+10h] [ebp-8h] BYREF
  PVOID Object; // [esp+14h] [ebp-4h] BYREF

  DeviceObject = 0;
  Object = 0;
  v6 = 0;
  Handle = 0;
  DeviceObjectPointer = GetDeviceObjectPointer(&a2, 2u, (int)DeviceRegKey, &Handle, &v6, (PDEVICE_OBJECT *)&Object);
  if ( DeviceObjectPointer >= 0 )
  {
    ObfReferenceObject(Object);
    DeviceObjectPointer = GetPointerDevicePDO((PDEVICE_OBJECT)Object, &DeviceObject);
    if ( DeviceObjectPointer >= 0 )
      DeviceObjectPointer = IoOpenDeviceRegistryKey(DeviceObject, 1u, (ACCESS_MASK)&loc_20006, DeviceRegKey);
    ObfDereferenceObject(Object);
    ObfDereferenceObject(v6);
    ObfDereferenceObject(DeviceObject);
    ZwClose(Handle);
  }
  return DeviceObjectPointer >= 0;
}
