/*
 * XREFs of Controller_GetDeviceEnumerator @ 0x1C006DE04
 * Callers:
 *     Controller_Create @ 0x1C006C504 (Controller_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000F118 (WPP_RECORDER_SF_d.c)
 *     __security_check_cookie @ 0x1C0019F30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Controller_GetDeviceEnumerator(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  struct _DEVICE_OBJECT *v4; // rax
  NTSTATUS DeviceProperty; // eax
  int v6; // edx
  ULONG ResultLength; // [rsp+30h] [rbp-38h] BYREF
  wchar_t PropertyBuffer[8]; // [rsp+38h] [rbp-30h] BYREF

  v3 = 0;
  ResultLength = 0;
  v4 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 264))(
                                  WdfDriverGlobals,
                                  a1);
  DeviceProperty = IoGetDeviceProperty(v4, DevicePropertyEnumeratorName, 0x10u, PropertyBuffer, &ResultLength);
  if ( DeviceProperty < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return v3;
    WPP_RECORDER_SF_d(a2, 2, 4, 93, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, DeviceProperty);
  }
  else if ( _wcsicmp(PropertyBuffer, L"ACPI") )
  {
    if ( !_wcsicmp(PropertyBuffer, L"URS") )
      v3 = 2;
  }
  else
  {
    v3 = 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d(a2, v6, 4, 94, (__int64)&WPP_1fced1a270be39d344e698c349d4a9f8_Traceguids, v3);
  }
  return v3;
}
