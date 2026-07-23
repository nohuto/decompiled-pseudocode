/*
 * XREFs of _RtlQueryPackageClaims@32 @ 0x4B2E4E70
 * Callers:
 *     _RtlQueryPackageIdentityEx@28 @ 0x4B2E4E20 (_RtlQueryPackageIdentityEx@28.c)
 *     _AppModelPolicy_GetPolicy_Internal@20 @ 0x4B33D42C (_AppModelPolicy_GetPolicy_Internal@20.c)
 * Callees:
 *     _RtlpQueryPackageIdentityAttributes@20 @ 0x4B2E4EE1 (_RtlpQueryPackageIdentityAttributes@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlStringCbPrintfExW @ 0x4B32DF38 (_RtlStringCbPrintfExW.c)
 *     _RtlGUIDFromString@8 @ 0x4B362640 (_RtlGUIDFromString@8.c)
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
  NTSTATUS result; // eax
  int v9; // esi
  wchar_t *v10; // edi
  PGUID v11; // ecx
  wchar_t *StackCookie; // [esp+8h] [ebp-310h] BYREF
  wchar_t *StackCookie_4; // [esp+Ch] [ebp-30Ch]
  int *v14; // [esp+10h] [ebp-308h]
  int v15; // [esp+14h] [ebp-304h] BYREF
  PGUID Guid; // [esp+18h] [ebp-300h]
  int v17; // [esp+1Ch] [ebp-2FCh] BYREF
  _BYTE Buffer[8]; // [esp+20h] [ebp-2F8h] BYREF
  int v19; // [esp+28h] [ebp-2F0h]

  StackCookie_4 = (wchar_t *)PackageFullName;
  StackCookie = (wchar_t *)AppId;
  v14 = (int *)AppIdSize;
  Guid = DynamicId;
  result = RtlpQueryPackageIdentityAttributes(TokenHandle, Buffer, (int)PkgClaim, (int)AttributesPresent);
  v9 = result;
  if ( result >= 0 )
  {
    if ( StackCookie_4 )
    {
      if ( PackageSize )
      {
        result = RtlStringCbPrintfExW(
                   StackCookie_4,
                   *(_DWORD *)PackageSize,
                   (int)&v15,
                   (int)&v17,
                   2048,
                   (int)L"%wZ",
                   *(_DWORD *)(v19 + 20));
        v9 = result;
        if ( result < 0 )
          return result;
        *(_DWORD *)PackageSize = v15 - (_DWORD)StackCookie_4 + 2;
LABEL_7:
        v10 = StackCookie;
        if ( StackCookie )
        {
          v9 = RtlStringCbPrintfExW(
                 StackCookie,
                 *v14,
                 (int)&StackCookie,
                 0,
                 2048,
                 (int)L"%wZ",
                 *(_DWORD *)(v19 + 20) + 8);
          if ( v9 < 0 )
            return v9;
          *v14 = (char *)StackCookie - (char *)v10 + 2;
        }
        v11 = Guid;
        if ( Guid )
        {
          Guid->Data1 = 0;
          *(_DWORD *)&v11->Data2 = 0;
          *(_DWORD *)v11->Data4 = 0;
          *(_DWORD *)&v11->Data4[4] = 0;
          if ( *(_DWORD *)(v19 + 16) > 3u )
            RtlGUIDFromString((PUNICODE_STRING)(*(_DWORD *)(v19 + 20) + 24), v11);
        }
        return v9;
      }
    }
    else if ( !PackageSize )
    {
      goto LABEL_7;
    }
    return -1073741811;
  }
  return result;
}
