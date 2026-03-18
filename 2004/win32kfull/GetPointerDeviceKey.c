/*
 * XREFs of GetPointerDeviceKey @ 0x1C01D5B90
 * Callers:
 *     RetrieveCalibrationData @ 0x1C01CFFC0 (RetrieveCalibrationData.c)
 *     _SetCalibrationData @ 0x1C01D6318 (_SetCalibrationData.c)
 * Callees:
 *     GetPointerDevicePDO @ 0x1C01170E0 (GetPointerDevicePDO.c)
 *     GetDeviceObjectPointer @ 0x1C01171BC (GetDeviceObjectPointer.c)
 */

_BOOL8 __fastcall GetPointerDeviceKey(struct _UNICODE_STRING *a1, void **a2, __int64 a3)
{
  int DeviceObjectPointer; // ebx
  PVOID v6; // [rsp+30h] [rbp-10h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-8h] BYREF
  PVOID Object; // [rsp+60h] [rbp+20h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp+28h] BYREF

  DeviceObject = 0LL;
  Object = 0LL;
  v6 = 0LL;
  Handle = 0LL;
  DeviceObjectPointer = GetDeviceObjectPointer(a1, 2u, a3, &Handle, &v6, (PDEVICE_OBJECT *)&Object);
  if ( DeviceObjectPointer >= 0 )
  {
    ObfReferenceObject(Object);
    DeviceObjectPointer = GetPointerDevicePDO((PDEVICE_OBJECT)Object, &DeviceObject);
    if ( DeviceObjectPointer >= 0 )
      DeviceObjectPointer = IoOpenDeviceRegistryKey(DeviceObject, 1u, 0x20006u, a2);
    ObfDereferenceObject(Object);
    ObfDereferenceObject(v6);
    ObfDereferenceObject(DeviceObject);
    ZwClose(Handle);
  }
  return DeviceObjectPointer >= 0;
}
