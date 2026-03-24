/*
 * XREFs of PnpBiosGetDeviceResourceList @ 0x1C009C794
 * Callers:
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C009BEAC (PnpBiosUpdateResourceListWithSidebandResources.c)
 *     ACPIBusIrpQueryResources @ 0x1C009C0D0 (ACPIBusIrpQueryResources.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C009C430 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C009C4B0 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002D40 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0003E70 (ACPIGet.c)
 *     PnpDeviceBiosResourcesToNtResources @ 0x1C0016B88 (PnpDeviceBiosResourcesToNtResources.c)
 */

__int64 __fastcall PnpBiosGetDeviceResourceList(ULONG_PTR a1, char a2, _QWORD *a3)
{
  void *v3; // rsi
  int v6; // edi
  __int64 DeviceExtension; // r15
  int v8; // r14d
  int v9; // eax
  int v11; // eax
  void *v12; // [rsp+50h] [rbp-20h] BYREF
  PVOID P; // [rsp+58h] [rbp-18h] BYREF
  __int128 v14; // [rsp+60h] [rbp-10h]
  int v15; // [rsp+B8h] [rbp+48h] BYREF
  int v16; // [rsp+C0h] [rbp+50h] BYREF
  PVOID v17; // [rsp+C8h] [rbp+58h] BYREF

  v14 = 0LL;
  v15 = 0;
  v3 = 0LL;
  v16 = 0;
  P = 0LL;
  v17 = 0LL;
  v6 = -1073741823;
  v12 = 0LL;
  *a3 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v8 = ACPIGet((__int64 *)DeviceExtension, 1397900127, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v15);
  if ( a2 )
    v9 = ACPIGet((__int64 *)DeviceExtension, 1397903455, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&v17, (__int64)&v16);
  else
    v9 = -1073741772;
  if ( v8 >= 0 )
  {
    v6 = -1073741772;
    if ( v9 < 0 )
      goto LABEL_10;
    goto LABEL_20;
  }
  if ( v9 >= 0 )
  {
LABEL_20:
    if ( v17 )
    {
      v6 = PnpDeviceBiosResourcesToNtResources(DeviceExtension, (__int64)v17, 0, (__int64)&v12);
      ExFreePoolWithTag(v17, 0);
      v3 = v12;
      v17 = 0LL;
    }
    if ( v6 >= 0 )
    {
LABEL_13:
      *a3 = v3;
      v3 = 0LL;
      goto LABEL_14;
    }
LABEL_10:
    if ( v8 >= 0 )
    {
      v11 = PnpDeviceBiosResourcesToNtResources(
              DeviceExtension,
              (__int64)P,
              (*(_DWORD *)(DeviceExtension + 8) >> 25) & 1,
              (__int64)&v12);
      v3 = v12;
      v6 = v11;
    }
    if ( v6 < 0 )
      goto LABEL_14;
    goto LABEL_13;
  }
  if ( v9 == -1073741772 )
  {
    if ( v8 == -1073741772 )
      return 0;
    v6 = v8;
  }
  else
  {
    v6 = v9;
  }
LABEL_14:
  if ( v8 >= 0 && P )
    ExFreePoolWithTag(P, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v6;
}
