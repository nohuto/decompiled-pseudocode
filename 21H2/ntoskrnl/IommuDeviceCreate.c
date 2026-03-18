/*
 * XREFs of IommuDeviceCreate @ 0x1408459C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpIommuFreeDeviceId @ 0x1403CD2B8 (HalpIommuFreeDeviceId.c)
 *     HalpIommuGetDeviceId @ 0x1403CD2D0 (HalpIommuGetDeviceId.c)
 *     HalpIommuCreateDevice @ 0x140846E20 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140908DD4 (HalpIommuDeleteDevice.c)
 */

__int64 __fastcall IommuDeviceCreate(__int64 a1, __int64 a2, _QWORD *a3)
{
  int DeviceId; // ebx
  void *Src; // [rsp+50h] [rbp+18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h]

  Src = 0LL;
  v8 = 0LL;
  *a3 = 0LL;
  DeviceId = HalpIommuGetDeviceId(a1, (__int64 *)&Src);
  if ( DeviceId >= 0 )
  {
    if ( a2 )
    {
      DeviceId = -1073741584;
    }
    else
    {
      DeviceId = HalpIommuCreateDevice(Src);
      if ( DeviceId >= 0 )
      {
        *a3 = v8;
        return (unsigned int)DeviceId;
      }
      if ( v8 )
        HalpIommuDeleteDevice(v8);
    }
  }
  if ( Src )
    HalpIommuFreeDeviceId((__int64)Src);
  return (unsigned int)DeviceId;
}
