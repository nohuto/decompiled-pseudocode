/*
 * XREFs of RtlQueryPackageIdentity @ 0x1402E64F0
 * Callers:
 *     EtwpQueryTokenPackageInfo @ 0x1405D92C0 (EtwpQueryTokenPackageInfo.c)
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     PfSnCheckModernApp @ 0x14065048C (PfSnCheckModernApp.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406C7324 (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpApplyPackageIdFilter @ 0x14093C068 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x1402E6540 (RtlQueryPackageIdentityEx.c)
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
