/*
 * XREFs of PopIsRunningInVm @ 0x140563200
 * Callers:
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A2600 (HviIsAnyHypervisorPresent.c)
 *     HviGetEnlightenmentInformation @ 0x1403A9C30 (HviGetEnlightenmentInformation.c)
 *     HviGetHypervisorFeatures @ 0x1403A9C70 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

bool PopIsRunningInVm()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  bool result; // al
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0LL;
  result = 0;
  if ( HviIsAnyHypervisorPresent() )
  {
    v7 = 0LL;
    HviGetHypervisorFeatures(&v7, v0, v1, v2);
    if ( (v7 & 0x100000000000LL) == 0 )
      return 1;
    HviGetEnlightenmentInformation(&v8, v3, v4, v5);
    if ( (v8 & 0x1000) != 0 )
      return 1;
  }
  return result;
}
