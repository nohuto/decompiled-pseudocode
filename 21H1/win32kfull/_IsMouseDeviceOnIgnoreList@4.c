/*
 * XREFs of _IsMouseDeviceOnIgnoreList@4 @ 0xE6D1C
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDeviceOnRegistryList@@YGHU_UNICODE_STRING@@0H@Z @ 0xE6E1A (-IsDeviceOnRegistryList@@YGHU_UNICODE_STRING@@0H@Z.c)
 *     ?IsHIDMouse@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@@Z @ 0xE6EA2 (-IsHIDMouse@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@@Z.c)
 *     _GetDeviceObjectPointer@24 @ 0xE6FF0 (_GetDeviceObjectPointer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetMouseDeviceHardwareId@@YGJPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@PAU_UNICODE_STRING@@@Z @ 0xF419E (-GetMouseDeviceHardwareId@@YGJPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@PAU_UNICODE_STRING@@@Z.c)
 */

int __thiscall IsMouseDeviceOnIgnoreList(void *this, int a2)
{
  int MouseDeviceHardwareId; // edi
  struct DEVICEINFO *v4; // [esp+0h] [ebp-F8h]
  struct _DEVICE_OBJECT *v5; // [esp+0h] [ebp-F8h]
  int v6; // [esp+0h] [ebp-F8h]
  struct _DEVICE_OBJECT *v7; // [esp+4h] [ebp-F4h]
  struct _UNICODE_STRING *v8; // [esp+4h] [ebp-F4h]
  PVOID Object; // [esp+8h] [ebp-F0h] BYREF
  HANDLE Handle; // [esp+Ch] [ebp-ECh] BYREF
  PVOID v11; // [esp+10h] [ebp-E8h] BYREF
  struct _UNICODE_STRING v12; // [esp+14h] [ebp-E4h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+1Ch] [ebp-DCh] BYREF
  int v14; // [esp+24h] [ebp-D4h]
  char v15; // [esp+28h] [ebp-D0h] BYREF

  Object = 0;
  v11 = 0;
  Handle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  if ( GetDeviceObjectPointer(a2 + 128, 0, this, &Handle, &v11, &Object) < 0 )
    return 0;
  ObfReferenceObject(Object);
  v14 = IsHIDMouse(v4, v7);
  v12.Buffer = (PWSTR)&v15;
  *(_DWORD *)&v12.Length = 13107200;
  MouseDeviceHardwareId = GetMouseDeviceHardwareId(&v12, v5, v8);
  ZwClose(Handle);
  ObfDereferenceObject(v11);
  ObfDereferenceObject(Object);
  if ( MouseDeviceHardwareId < 0 )
    return 1;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\IgnoredExternalMice");
  return IsDeviceOnRegistryList(DestinationString, v12, v6);
}
