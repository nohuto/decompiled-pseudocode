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
