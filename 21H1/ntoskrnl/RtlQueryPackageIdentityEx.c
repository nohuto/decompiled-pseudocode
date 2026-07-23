/*
 * XREFs of RtlQueryPackageIdentityEx @ 0x1402E6540
 * Callers:
 *     RtlQueryPackageIdentity @ 0x1402E64F0 (RtlQueryPackageIdentity.c)
 *     PspIdentityBasedJobBreakaway @ 0x1405CEA74 (PspIdentityBasedJobBreakaway.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1402E65A0 (RtlQueryPackageClaims.c)
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
