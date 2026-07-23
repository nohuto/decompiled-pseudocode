/*
 * XREFs of _RtlQueryPackageIdentityEx@28 @ 0x4B2E4E20
 * Callers:
 *     _RtlQueryPackageIdentity@24 @ 0x4B2E4DE0 (_RtlQueryPackageIdentity@24.c)
 *     _LdrAppxHandleIntegrityFailure@4 @ 0x4B32C290 (_LdrAppxHandleIntegrityFailure@4.c)
 *     _LdrpConstructModernAppKeyName@8 @ 0x4B331983 (_LdrpConstructModernAppKeyName@8.c)
 *     _RtlpHpOptIntoSegmentHeap@4 @ 0x4B358522 (_RtlpHpOptIntoSegmentHeap@4.c)
 * Callees:
 *     _RtlQueryPackageClaims@32 @ 0x4B2E4E70 (_RtlQueryPackageClaims@32.c)
 */

NTSTATUS __cdecl RtlQueryPackageIdentityEx(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PGUID DynamicId,
        PULONG64 Flags)
{
  NTSTATUS result; // eax
  _DWORD v8[3]; // [esp+8h] [ebp-Ch] BYREF

  v8[0] = 0;
  v8[1] = 0;
  result = RtlQueryPackageClaims(
             TokenHandle,
             PackageFullName,
             PackageSize,
             AppId,
             AppIdSize,
             DynamicId,
             Flags != 0 ? (PPS_PKG_CLAIM)v8 : 0,
             0);
  if ( result >= 0 )
  {
    if ( Flags )
      *Flags = v8[0];
  }
  return result;
}
