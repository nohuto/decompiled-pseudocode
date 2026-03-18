/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x14070DFA4
 * Callers:
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     NtSetDefaultLocale @ 0x140777660 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x140942FE0 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140943138 (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14035C110 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x140711660 (RtlRunOnceExecuteOnce.c)
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
