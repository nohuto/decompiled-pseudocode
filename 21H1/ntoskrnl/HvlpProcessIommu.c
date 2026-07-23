/*
 * XREFs of HvlpProcessIommu @ 0x1404F3D78
 * Callers:
 *     HvlQueryVsmProtectionInfo @ 0x14088A034 (HvlQueryVsmProtectionInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F29F0 (ZwQuerySystemInformation.c)
 *     KiGetCpuVendor @ 0x1409975A4 (KiGetCpuVendor.c)
 */

bool __fastcall HvlpProcessIommu(__int64 a1, __int64 a2)
{
  char v2; // bl
  int v3; // eax
  ULONG ReturnLength; // [rsp+20h] [rbp-30h] BYREF
  int SystemInformation; // [rsp+28h] [rbp-28h] BYREF
  __int64 v7; // [rsp+2Ch] [rbp-24h]
  __int64 v8; // [rsp+34h] [rbp-1Ch]

  v2 = 0;
  v7 = 1LL;
  v8 = 0LL;
  SystemInformation = 1094930505;
  ReturnLength = 20;
  v3 = KiGetCpuVendor(a1, a2) - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
      return v2;
    HIDWORD(v7) = 1380011332;
  }
  else
  {
    HIDWORD(v7) = 1397904969;
  }
  if ( ZwQuerySystemInformation(SystemFirmwareTableInformation, &SystemInformation, ReturnLength, &ReturnLength) == -1073741789 )
    return ReturnLength != 0;
  return v2;
}
