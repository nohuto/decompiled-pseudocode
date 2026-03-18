/*
 * XREFs of ACPIQueryDeviceBiosNameEx @ 0x1C0006494
 * Callers:
 *     ACPIIoctlQueryDeviceBiosNameEx @ 0x1C0058C04 (ACPIIoctlQueryDeviceBiosNameEx.c)
 *     ACPIIsDebuggingDevice @ 0x1C0091E0C (ACPIIsDebuggingDevice.c)
 *     ACPIQueryDeviceBiosName @ 0x1C009255C (ACPIQueryDeviceBiosName.c)
 *     ACPIBusIrpDeviceEnumerated @ 0x1C00937D0 (ACPIBusIrpDeviceEnumerated.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0097DD0 (PnpBiosGetDeviceResourceList.c)
 *     ACPIInternalNotifyAvailableDeviceObject @ 0x1C00A0270 (ACPIInternalNotifyAvailableDeviceObject.c)
 *     AcpiIsDeviceSecure @ 0x1C00A0614 (AcpiIsDeviceSecure.c)
 *     ACPIIoctlQueryDeviceBiosName @ 0x1C00AF388 (ACPIIoctlQueryDeviceBiosName.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIAmliBuildObjectPathname @ 0x1C0006528 (ACPIAmliBuildObjectPathname.c)
 *     ACPIInitUnicodeString @ 0x1C009257C (ACPIInitUnicodeString.c)
 */

__int64 __fastcall ACPIQueryDeviceBiosNameEx(ULONG_PTR a1, unsigned int a2, struct _UNICODE_STRING *a3)
{
  __int64 v5; // rcx
  int v6; // ebx
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  *a3 = 0LL;
  P = 0LL;
  v5 = *(_QWORD *)(ACPIInternalGetDeviceExtension(a1) + 760);
  if ( v5 )
  {
    v6 = ACPIAmliBuildObjectPathname(v5, &P, a2);
    if ( v6 >= 0 )
    {
      v6 = ACPIInitUnicodeString(a3);
      if ( v6 >= 0 )
        v6 = 0;
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else
  {
    return (unsigned int)-1073741810;
  }
  return (unsigned int)v6;
}
