/*
 * XREFs of RtlQueryPackageClaims @ 0x1402E65A0
 * Callers:
 *     AppModelPolicy_GetPolicy_Internal @ 0x1402D72CC (AppModelPolicy_GetPolicy_Internal.c)
 *     RtlQueryPackageIdentityEx @ 0x1402E6540 (RtlQueryPackageIdentityEx.c)
 *     SepDesktopAppxSubProcessToken @ 0x140339778 (SepDesktopAppxSubProcessToken.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140590890 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1402E63CC (RtlStringCbPrintfExW.c)
 *     RtlpQueryPackageIdentityAttributes @ 0x1402E6728 (RtlpQueryPackageIdentityAttributes.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlGUIDFromString @ 0x1406AA8D0 (RtlGUIDFromString.c)
 */

NTSTATUS __cdecl RtlQueryPackageClaims(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PGUID DynamicId,
        PPS_PKG_CLAIM PkgClaim,
        PULONG64 AttributesPresent)
{
  int v10; // esi
  int v12; // edx
  NTSTATUS result; // eax
  NTSTATUS v14; // ebx
  size_t *v15; // rdi
  __int64 v16; // rcx
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+40h] [rbp-C0h] BYREF
  NTSTRSAFE_PWSTR v18; // [rsp+48h] [rbp-B8h] BYREF
  size_t *v19; // [rsp+50h] [rbp-B0h]
  size_t pcbRemaining; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v21[102]; // [rsp+60h] [rbp-A0h] BYREF

  v10 = (int)TokenHandle;
  v18 = 0LL;
  v19 = AppIdSize;
  memset(v21, 0, sizeof(v21));
  ppszDestEnd = 0LL;
  result = RtlpQueryPackageIdentityAttributes(v10, v12, (unsigned int)v21, (_DWORD)PkgClaim, (__int64)AttributesPresent);
  v14 = result;
  if ( result < 0 )
    return result;
  if ( PackageFullName )
  {
    if ( PackageSize )
    {
      result = RtlStringCbPrintfExW(
                 PackageFullName,
                 *PackageSize,
                 &ppszDestEnd,
                 &pcbRemaining,
                 0x800u,
                 L"%wZ",
                 *(_QWORD *)(v21[1] + 32LL));
      v14 = result;
      if ( result < 0 )
        return result;
      *PackageSize = (char *)ppszDestEnd - (char *)PackageFullName + 2;
      goto LABEL_7;
    }
    return -1073741811;
  }
  if ( PackageSize )
    return -1073741811;
LABEL_7:
  if ( AppId )
  {
    v15 = v19;
    result = RtlStringCbPrintfExW(AppId, *v19, &v18, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v21[1] + 32LL) + 16LL);
    v14 = result;
    if ( result < 0 )
      return result;
    *v15 = (char *)v18 - (char *)AppId + 2;
  }
  if ( DynamicId )
  {
    v16 = v21[1];
    *DynamicId = 0LL;
    if ( *(_DWORD *)(v16 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v16 + 32) + 48LL), DynamicId);
  }
  return v14;
}
