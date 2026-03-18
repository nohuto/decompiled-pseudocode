/*
 * XREFs of PnpBiosGetDeviceResourceList @ 0x1C0097DD0
 * Callers:
 *     PnpBiosUpdateResourceListWithSidebandResources @ 0x1C00977CC (PnpBiosUpdateResourceListWithSidebandResources.c)
 *     ACPIFilterIrpQueryResourceRequirements @ 0x1C0097840 (ACPIFilterIrpQueryResourceRequirements.c)
 *     ACPIBusIrpQueryResources @ 0x1C00978C0 (ACPIBusIrpQueryResources.c)
 *     ACPIBusIrpQueryResourceRequirements @ 0x1C0097B70 (ACPIBusIrpQueryResourceRequirements.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIQueryDeviceBiosNameEx @ 0x1C0006494 (ACPIQueryDeviceBiosNameEx.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     PnpDeviceBiosResourcesToNtResources @ 0x1C0022C8C (PnpDeviceBiosResourcesToNtResources.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 *     AcpiCheckSecureDevice @ 0x1C0094A0C (AcpiCheckSecureDevice.c)
 *     PnpiValidateSdevResources @ 0x1C00B3680 (PnpiValidateSdevResources.c)
 *     AcpiSearchSdevTable @ 0x1C00B4D68 (AcpiSearchSdevTable.c)
 */

__int64 __fastcall PnpBiosGetDeviceResourceList(ULONG_PTR a1, char a2, _QWORD *a3)
{
  void *BugCheckParameter4; // rsi
  int v7; // edi
  __int64 DeviceExtension; // r15
  int v9; // r14d
  int v10; // eax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // eax
  ULONG_PTR v15; // [rsp+50h] [rbp-30h] BYREF
  PVOID v16; // [rsp+58h] [rbp-28h] BYREF
  PVOID P; // [rsp+60h] [rbp-20h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v19; // [rsp+C8h] [rbp+48h] BYREF
  int v20; // [rsp+D0h] [rbp+50h] BYREF
  int v21; // [rsp+D8h] [rbp+58h] BYREF

  *(_OWORD *)BugCheckParameter3 = 0LL;
  v20 = 0;
  BugCheckParameter4 = 0LL;
  v21 = 0;
  v19 = 0;
  P = 0LL;
  v16 = 0LL;
  v7 = -1073741823;
  v15 = 0LL;
  *a3 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v9 = ACPIGet(DeviceExtension, 1397900127, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&P, (__int64)&v20);
  if ( a2 )
    v10 = ACPIGet(DeviceExtension, 1397903455, 268501000, 0LL, 0, 0LL, 0LL, (__int64)&v16, (__int64)&v21);
  else
    v10 = -1073741772;
  if ( v9 >= 0 )
  {
    v7 = -1073741772;
    if ( v10 < 0 )
      goto LABEL_11;
    goto LABEL_23;
  }
  if ( v10 >= 0 )
  {
LABEL_23:
    if ( v16 )
    {
      v7 = PnpDeviceBiosResourcesToNtResources(DeviceExtension, (__int64)v16, 0, (__int64)&v15);
      ExFreePoolWithTag(v16, 0);
      v16 = 0LL;
      BugCheckParameter4 = (void *)v15;
    }
    if ( v7 >= 0 )
    {
LABEL_12:
      if ( AcpiCheckSecureDevice(DeviceExtension) )
      {
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1447380051LL, 0LL, 0LL);
        if ( !v13 )
          goto LABEL_32;
        v7 = ACPIQueryDeviceBiosNameEx(a1, 1u, (struct _UNICODE_STRING *)BugCheckParameter3);
        if ( v7 < 0 )
          goto LABEL_14;
        if ( !(unsigned __int8)AcpiSearchSdevTable(v13, BugCheckParameter3, &v19) )
        {
LABEL_32:
          v7 = -1072431079;
          goto LABEL_14;
        }
        v14 = PnpiValidateSdevResources(v13, v19, BugCheckParameter4);
        v7 = v14;
        if ( v14 < 0 )
          KeBugCheckEx(0xA5u, 0x1000EuLL, v14, (ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
      }
      *a3 = BugCheckParameter4;
      BugCheckParameter4 = 0LL;
LABEL_14:
      if ( v9 >= 0 && P )
        ExFreePoolWithTag(P, 0);
      goto LABEL_17;
    }
    if ( v9 < 0 )
      goto LABEL_17;
LABEL_11:
    v12 = PnpDeviceBiosResourcesToNtResources(
            DeviceExtension,
            (__int64)P,
            (*(_DWORD *)(DeviceExtension + 8) >> 25) & 1,
            (__int64)&v15);
    BugCheckParameter4 = (void *)v15;
    v7 = v12;
    if ( v12 < 0 )
      goto LABEL_14;
    goto LABEL_12;
  }
  if ( v10 == -1073741772 )
  {
    if ( v9 == -1073741772 )
      return 0;
    v7 = v9;
  }
  else
  {
    v7 = v10;
  }
LABEL_17:
  if ( BugCheckParameter4 )
    ExFreePoolWithTag(BugCheckParameter4, 0);
  return (unsigned int)v7;
}
