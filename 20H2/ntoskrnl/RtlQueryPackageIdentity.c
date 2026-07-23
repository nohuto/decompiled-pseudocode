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
