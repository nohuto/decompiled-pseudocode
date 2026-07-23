/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x1406BC87C
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     NtSetDefaultLocale @ 0x140779A70 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x140944254 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409443AC (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1402FE9E0 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x1406A4800 (RtlRunOnceExecuteOnce.c)
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
