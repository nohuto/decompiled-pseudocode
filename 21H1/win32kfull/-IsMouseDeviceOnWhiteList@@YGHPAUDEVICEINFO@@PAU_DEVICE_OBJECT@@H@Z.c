/*
 * XREFs of ?IsMouseDeviceOnWhiteList@@YGHPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@H@Z @ 0xF4210
 * Callers:
 *     _IsLegacyTouchPadDevice@4 @ 0xE6B7C (_IsLegacyTouchPadDevice@4.c)
 * Callees:
 *     ?IsDeviceOnRegistryList@@YGHU_UNICODE_STRING@@0H@Z @ 0xE6E1A (-IsDeviceOnRegistryList@@YGHU_UNICODE_STRING@@0H@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetMouseDeviceHardwareId@@YGJPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@PAU_UNICODE_STRING@@@Z @ 0xF419E (-GetMouseDeviceHardwareId@@YGJPAUDEVICEINFO@@PAU_DEVICE_OBJECT@@PAU_UNICODE_STRING@@@Z.c)
 */

BOOL __userpurge IsMouseDeviceOnWhiteList@<eax>(
        struct _DEVICE_OBJECT *a1@<edx>,
        int a2@<ecx>,
        struct DEVICEINFO *a3,
        struct _DEVICE_OBJECT *a4,
        int a5)
{
  int v5; // esi
  struct _DEVICE_OBJECT *v7; // [esp+0h] [ebp-ECh]
  int v8; // [esp+0h] [ebp-ECh]
  struct _UNICODE_STRING *v9; // [esp+4h] [ebp-E8h]
  struct _UNICODE_STRING DestinationString; // [esp+8h] [ebp-E4h] BYREF
  struct _UNICODE_STRING v11; // [esp+10h] [ebp-DCh] BYREF
  char v12; // [esp+18h] [ebp-D4h] BYREF

  *(_DWORD *)&v11.Length = 13107200;
  v11.Buffer = (PWSTR)&v12;
  v5 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  if ( GetMouseDeviceHardwareId(a1, a2, &v11, v7, v9) >= 0 )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\PrecisionTouchPad\\LegacyDevices");
    return IsDeviceOnRegistryList((int)a3, DestinationString, v11, v8);
  }
  return v5;
}
