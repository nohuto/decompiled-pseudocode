/*
 * XREFs of _LdrpConstructModernAppKeyName@8 @ 0x4B331983
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _RtlQueryPackageIdentityEx@28 @ 0x4B2E4E20 (_RtlQueryPackageIdentityEx@28.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlStringCbPrintfExW @ 0x4B32DF38 (_RtlStringCbPrintfExW.c)
 */

NTSTATUS __thiscall LdrpConstructModernAppKeyName(wchar_t *Buffer)
{
  NTSTATUS result; // eax
  size_t v3; // [esp-4h] [ebp-1B4h]
  size_t v4; // [esp-4h] [ebp-1B4h]
  unsigned __int64 Flags; // [esp+10h] [ebp-1A0h] BYREF
  ULONG_PTR PackageSize; // [esp+18h] [ebp-198h] BYREF
  WCHAR PackageFullName[128]; // [esp+20h] [ebp-190h] BYREF
  WCHAR AppId[70]; // [esp+120h] [ebp-90h] BYREF

  LODWORD(v3) = 256;
  PackageSize = 0x8400000100LL;
  memset(PackageFullName, 0, v3);
  LODWORD(v4) = 132;
  memset(AppId, 0, v4);
  result = RtlQueryPackageIdentityEx(
             (HANDLE)0xFFFFFFFC,
             PackageFullName,
             &PackageSize,
             AppId,
             (ULONG_PTR *)((char *)&PackageSize + 4),
             0,
             &Flags);
  if ( result >= 0 )
    return RtlStringCbPrintfExW(Buffer, 0x184u, 0, 0, 0, (int *)L"%s!%s", (wchar_t)PackageFullName);
  return result;
}
