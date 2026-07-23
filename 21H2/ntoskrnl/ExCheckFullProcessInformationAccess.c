/*
 * XREFs of ExCheckFullProcessInformationAccess @ 0x140619F60
 * Callers:
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     ExpGetProcessInformation @ 0x140708640 (ExpGetProcessInformation.c)
 *     NtSetDefaultLocale @ 0x14078C010 (NtSetDefaultLocale.c)
 *     EtwpQueryCoverageSamplerInformation @ 0x1409479B4 (EtwpQueryCoverageSamplerInformation.c)
 *     EtwpSetCoverageSamplerInformation @ 0x140947B0C (EtwpSetCoverageSamplerInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x14026D6E0 (RtlCheckTokenMembership.c)
 *     RtlRunOnceExecuteOnce @ 0x1405E9E40 (RtlRunOnceExecuteOnce.c)
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
