/*
 * XREFs of HalpQueryIommuReservedRegionInformation @ 0x140765644
 * Callers:
 *     HaliQuerySystemInformation @ 0x1409909D0 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpIommuFreeDeviceId @ 0x14037956C (HalpIommuFreeDeviceId.c)
 *     HalpIommuGetDeviceId @ 0x140379584 (HalpIommuGetDeviceId.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpIommuLocateFromDevice @ 0x1407656C0 (HalpIommuLocateFromDevice.c)
 */

__int64 __fastcall HalpQueryIommuReservedRegionInformation(__int64 a1, unsigned int a2)
{
  struct _DEVICE_OBJECT *v3; // rcx
  int DeviceId; // ebx
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  if ( a2 < 0x10 )
    return 3221225485LL;
  v3 = *(struct _DEVICE_OBJECT **)a1;
  v7 = 0LL;
  v8 = 0LL;
  DeviceId = HalpIommuGetDeviceId(v3, &v7);
  if ( DeviceId >= 0 )
  {
    DeviceId = HalpIommuLocateFromDevice(v7, &v8, 0LL);
    if ( DeviceId >= 0 )
    {
      if ( v8 )
      {
        v6 = *(__int64 (__fastcall **)(__int64))(v8 + 296);
        if ( v6 )
          *(_BYTE *)(a1 + 8) = v6(v7);
        else
          DeviceId = -1073741595;
      }
      else
      {
        DeviceId = -1073741810;
      }
    }
  }
  if ( v7 )
    HalpIommuFreeDeviceId(v7);
  return (unsigned int)DeviceId;
}
