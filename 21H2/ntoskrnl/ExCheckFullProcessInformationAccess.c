/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x1406BAC8C
 * Callers:
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     ExpGetProcessInformation @ 0x1406F1260 (ExpGetProcessInformation.c)
 *     NtSetDefaultLocale @ 0x14078BE50 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x1409477E4 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x14094793C (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14027F430 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x14068A9B0 (RtlRunOnceExecuteOnce.c)
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
