/*
 * XREFs of _RtlQueryPackageIdentity@24 @ 0x4B2E4DE0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlQueryPackageIdentityEx@28 @ 0x4B2E4E20 (_RtlQueryPackageIdentityEx@28.c)
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
  unsigned __int64 Flags; // [esp+8h] [ebp-8h] BYREF

  result = RtlQueryPackageIdentityEx(TokenHandle, PackageFullName, PackageSize, AppId, AppIdSize, 0, &Flags);
  if ( result >= 0 )
  {
    if ( Packaged )
      *Packaged = Flags != 0;
  }
  return result;
}
