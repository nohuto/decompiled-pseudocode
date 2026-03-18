/*
 * XREFs of AcpiIsDeviceSecure @ 0x1C00A232C
 * Callers:
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C009E810 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     AcpiCheckSecureDevice @ 0x1C00B5288 (AcpiCheckSecureDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0031E80 (_guard_dispatch_icall_nop.c)
 *     ACPIQueryDeviceBiosName @ 0x1C00999C0 (ACPIQueryDeviceBiosName.c)
 *     AcpiSearchSdevTable @ 0x1C00B5370 (AcpiSearchSdevTable.c)
 */

char __fastcall AcpiIsDeviceSecure(__int64 a1)
{
  char v1; // bl
  __int64 v4; // rsi
  PVOID P[2]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+38h] [rbp-28h]
  __int128 v8; // [rsp+40h] [rbp-20h] BYREF

  v1 = 0;
  v6 = 0LL;
  v8 = 0LL;
  v7 = 0;
  *(_OWORD *)P = 0LL;
  if ( BYTE1(WPP_MAIN_CB.Queue.ListEntry.Flink) )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(PmHalDispatchTable + 88))(1447380051LL, 0LL, 0LL);
    if ( v4 )
    {
      if ( (int)ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 728), (struct _UNICODE_STRING *)P) >= 0 )
      {
        if ( (unsigned __int8)AcpiSearchSdevTable(v4, P, (char *)&v6 + 4) )
        {
          LODWORD(v6) = 3;
          if ( (int)VslQuerySecureDevice(&v6, &v8) >= 0 )
          {
            v1 = v8;
            *(_QWORD *)(a1 + 920) = *((_QWORD *)&v8 + 1);
          }
        }
      }
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0x53706341u);
  return v1;
}
