/*
 * XREFs of ACPIQueryDeviceBiosName @ 0x1C00999C0
 * Callers:
 *     ACPIAddInitializationDependencies @ 0x1C0011318 (ACPIAddInitializationDependencies.c)
 *     ACPIIsDebuggingDevice @ 0x1C0098ABC (ACPIIsDebuggingDevice.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0099450 (ACPIBusIrpDeviceEnumerated.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C00A1EF8 (ACPIInternalNotifyAvailableDeviceObject.c)
 *     AcpiIsDeviceSecure @ 0x1C00A232C (AcpiIsDeviceSecure.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00AFBC0 (ACPIIoctlQueryDeviceBiosName.c)
 * Callees:
 *     ACPIAmliBuildObjectPathname @ 0x1C0011484 (ACPIAmliBuildObjectPathname.c)
 *     OSConvertDeviceHandleToNSHANDLE @ 0x1C001165C (OSConvertDeviceHandleToNSHANDLE.c)
 *     ACPIInitUnicodeString @ 0x1C0099A50 (ACPIInitUnicodeString.c)
 */

__int64 __fastcall ACPIQueryDeviceBiosName(ULONG_PTR a1, struct _UNICODE_STRING *a2)
{
  __int64 v3; // rax
  int v4; // ebx
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  *a2 = 0LL;
  P = 0LL;
  v3 = OSConvertDeviceHandleToNSHANDLE(a1);
  if ( v3 )
  {
    v4 = ACPIAmliBuildObjectPathname(v3, (char **)&P, 1);
    if ( v4 >= 0 )
    {
      v4 = ACPIInitUnicodeString(a2);
      if ( v4 >= 0 )
        v4 = 0;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)v4;
}
