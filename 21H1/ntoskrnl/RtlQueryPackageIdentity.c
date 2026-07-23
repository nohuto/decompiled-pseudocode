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

NTSTATUS __cdecl RtlQueryPackageIdentity(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PBOOLEAN Packaged)
{
  NTSTATUS result; // eax
  GUID *v7; // [rsp+28h] [rbp-30h]
  unsigned __int64 v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v8[0] = 0LL;
  result = RtlQueryPackageIdentityEx(TokenHandle, PackageFullName, PackageSize, AppId, AppIdSize, v7, v8);
  if ( result >= 0 )
  {
    if ( Packaged )
      *Packaged = v8[0] != 0;
  }
  return result;
}
