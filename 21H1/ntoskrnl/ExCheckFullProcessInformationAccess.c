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
  BOOLEAN IsMember; // [rsp+30h] [rbp+8h] BYREF
  PVOID Context; // [rsp+38h] [rbp+10h] BYREF

  Context = 0LL;
  IsMember = 0;
  if ( a1 == 1
    && (RtlRunOnceExecuteOnce(&ExpFullProcessInfoInit, ExpInitFullProcessSecurityInfo, 0LL, &Context) >= 0
     && RtlCheckTokenMembership(0LL, Context, &IsMember) >= 0
     && IsMember
     || RtlCheckTokenMembership(0LL, SeAliasAdminsSid, &IsMember) >= 0 && IsMember) )
  {
    return 0LL;
  }
  else
  {
    return 3221225506LL;
  }
}
