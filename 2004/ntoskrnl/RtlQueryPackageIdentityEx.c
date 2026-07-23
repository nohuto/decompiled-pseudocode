/*
 * XREFs of RtlQueryPackageIdentityEx @ 0x14026A100
 * Callers:
 *     RtlQueryPackageIdentity @ 0x14026A0B0 (RtlQueryPackageIdentity.c)
 *     PspIdentityBasedJobBreakaway @ 0x1405CFE44 (PspIdentityBasedJobBreakaway.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x14026A160 (RtlQueryPackageClaims.c)
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
  PULONG64 v7; // rbx
  NTSTATUS result; // eax

  DynamicId = 0LL;
  v7 = Flags;
  result = RtlQueryPackageClaims(
             TokenHandle,
             PackageFullName,
             PackageSize,
             AppId,
             AppIdSize,
             0LL,
             (PPS_PKG_CLAIM)((unsigned __int64)&DynamicId & -(__int64)(Flags != 0LL)),
             0LL);
  if ( result >= 0 )
  {
    if ( v7 )
      *v7 = (unsigned int)DynamicId;
  }
  return result;
}
