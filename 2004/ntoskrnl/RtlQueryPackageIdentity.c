/*
 * XREFs of RtlQueryPackageIdentity @ 0x14026A0B0
 * Callers:
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     EtwpQueryTokenPackageInfo @ 0x14065F5C0 (EtwpQueryTokenPackageInfo.c)
 *     PfSnCheckModernApp @ 0x1406B861C (PfSnCheckModernApp.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1406E7C1C (PopEtGetProcessSidAndPackageIdentity.c)
 *     EtwpApplyPackageIdFilter @ 0x14093D2E4 (EtwpApplyPackageIdFilter.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x14026A100 (RtlQueryPackageIdentityEx.c)
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
