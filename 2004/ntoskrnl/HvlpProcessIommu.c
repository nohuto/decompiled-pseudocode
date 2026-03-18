/*
 * XREFs of HvlpProcessIommu @ 0x1404F43C8
 * Callers:
 *     HvlQueryVsmProtectionInfo @ 0x14088B354 (HvlQueryVsmProtectionInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F3C80 (ZwQuerySystemInformation.c)
 *     KiGetCpuVendor @ 0x140998608 (KiGetCpuVendor.c)
 */

char __fastcall HvlpProcessIommu(__int64 a1, __int64 a2)
{
  char v2; // bl
  int v3; // eax
  int v5; // [rsp+28h] [rbp-28h] BYREF
  __int64 v6; // [rsp+2Ch] [rbp-24h]
  __int64 v7; // [rsp+34h] [rbp-1Ch]

  v2 = 0;
  v6 = 1LL;
  v7 = 0LL;
  v5 = 1094930505;
  v3 = KiGetCpuVendor(a1, a2) - 1;
  if ( v3 )
  {
    if ( v3 != 1 )
      return v2;
    HIDWORD(v6) = 1380011332;
  }
  else
  {
    HIDWORD(v6) = 1397904969;
  }
  if ( (unsigned int)ZwQuerySystemInformation(76LL, (__int64)&v5) == -1073741789 )
    return 1;
  return v2;
}
