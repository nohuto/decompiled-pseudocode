/*
 * XREFs of AslEnvGetProcessWowInfo @ 0x14073EA20
 * Callers:
 *     SdbpResolveMatchingFile @ 0x14073E198 (SdbpResolveMatchingFile.c)
 *     SdbGuestHostArchsToRuntimePlatformFlag @ 0x140962FD8 (SdbGuestHostArchsToRuntimePlatformFlag.c)
 *     SdbGuestTargetPlatformFlagsToRuntimePlatformFlags @ 0x140963084 (SdbGuestTargetPlatformFlagsToRuntimePlatformFlags.c)
 *     SdbpGetProcessHostGuestArchitectures @ 0x140963D00 (SdbpGetProcessHostGuestArchitectures.c)
 *     AslEnvVerifyGuestProcessorSupport @ 0x140967048 (AslEnvVerifyGuestProcessorSupport.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403F3C80 (ZwQuerySystemInformation.c)
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslEnvGetProcessWowInfo(_WORD *a1, _WORD *a2)
{
  NTSTATUS v4; // ebx
  int v6; // r8d
  __int64 v7; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+38h] [rbp-30h]
  __int64 SystemInformation; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]

  v7 = 0LL;
  SystemInformation = 0LL;
  v8 = 0;
  v10 = 0;
  if ( a1 )
  {
    v4 = ZwQuerySystemInformation(SystemProcessorInformation, &v7, 0xCu, 0LL);
    if ( v4 < 0 )
    {
      v6 = 1783;
      goto LABEL_11;
    }
    *a1 = v7;
  }
  if ( a2 )
  {
    v4 = ZwQuerySystemInformation(SystemProcessorInformation, &SystemInformation, 0xCu, 0LL);
    if ( v4 >= 0 )
    {
      *a2 = SystemInformation;
      return 0;
    }
    v6 = 1826;
LABEL_11:
    AslLogCallPrintf(
      1,
      (unsigned int)"AslEnvGetProcessWowInfo",
      v6,
      (unsigned int)"ZwQuerySystemInformation failed [%x]");
    return (unsigned int)v4;
  }
  return 0;
}
