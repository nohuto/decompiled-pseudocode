/*
 * XREFs of RtlQueryPackageIdentity @ 0x1402E3F50
 * Callers:
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x140630098 (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpQueryTokenPackageInfo @ 0x140633974 (EtwpQueryTokenPackageInfo.c)
 *     PfSnCheckModernApp @ 0x14068EAB4 (PfSnCheckModernApp.c)
 *     EtwpApplyPackageIdFilter @ 0x1409430AC (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x1402E3FA0 (RtlQueryPackageIdentityEx.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(int a1, int a2, int a3, int a4, __int64 a5, _BYTE *a6)
{
  __int64 result; // rax

  result = RtlQueryPackageIdentityEx(a1, a2, a3, a4, a5);
  if ( (int)result >= 0 )
  {
    if ( a6 )
      *a6 = 0;
  }
  return result;
}
