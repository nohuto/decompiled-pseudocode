/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x140A179E0
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140A12DA0 (SdbpResolveMatchingFile.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x140A1357C (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140A13628 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140A142D0 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslEnvVerifyGuestProcessorSupport @ 0x140A18040 (AslEnvVerifyGuestProcessorSupport.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     AslLogCallPrintf @ 0x1406E0C3C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  int SystemInformation; // ebx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]

  v6 = 0LL;
  v8 = 0LL;
  v7 = 0;
  v9 = 0;
  if ( !a1 )
  {
LABEL_5:
    if ( a2 )
    {
      SystemInformation = ZwQuerySystemInformation(1LL, (__int64)&v8);
      if ( SystemInformation < 0 )
        goto LABEL_3;
      *a2 = v8;
    }
    return 0;
  }
  SystemInformation = ZwQuerySystemInformation(1LL, (__int64)&v6);
  if ( SystemInformation >= 0 )
  {
    *a1 = v6;
    goto LABEL_5;
  }
LABEL_3:
  AslLogCallPrintf(1LL);
  return (unsigned int)SystemInformation;
}
