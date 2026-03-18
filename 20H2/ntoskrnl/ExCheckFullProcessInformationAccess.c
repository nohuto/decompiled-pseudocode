/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x1406DB3E8
 * Callers:
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     NtSetDefaultLocale @ 0x140788070 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x14094A014 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x14094A16C (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140340910 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x1406B4960 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall ExCheckFullProcessInformationAccess(char a1)
{
  PVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  if ( a1 == 1 )
  {
    if ( RtlRunOnceExecuteOnce(&ExpFullProcessInfoInit, ExpInitFullProcessSecurityInfo, 0LL, &Context) >= 0 )
      RtlCheckTokenMembership(0LL, Context);
    RtlCheckTokenMembership(0LL, SeAliasAdminsSid);
  }
  return 3221225506LL;
}
