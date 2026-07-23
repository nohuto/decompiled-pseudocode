/*
 * XREFs of RtlQueryPackageIdentity @ 0x180069530
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800CB6D0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpConstructModernAppKeyName @ 0x1800D083C (LdrpConstructModernAppKeyName.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800F4678 (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     RtlQueryPackageIdentityEx @ 0x180069580 (RtlQueryPackageIdentityEx.c)
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
  unsigned __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF

  result = RtlQueryPackageIdentityEx(TokenHandle, PackageFullName, PackageSize, AppId, AppIdSize, 0LL, v7);
  if ( result >= 0 )
  {
    if ( Packaged )
      *Packaged = v7[0] != 0;
  }
  return result;
}
