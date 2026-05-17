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

int __stdcall RtlQueryPackageClaims(
        int a1,
        wchar_t *a2,
        size_t *a3,
        wchar_t *a4,
        size_t *a5,
        _DWORD *a6,
        int a7,
        int a8)
{
  int result; // eax
  int v9; // esi
  wchar_t *v10; // edi
  _DWORD *v11; // ecx
  wchar_t *v12; // [esp+8h] [ebp-310h] BYREF
  wchar_t *Buffer; // [esp+Ch] [ebp-30Ch]
  size_t *v14; // [esp+10h] [ebp-308h]
  int v15; // [esp+14h] [ebp-304h] BYREF
  _DWORD *v16; // [esp+18h] [ebp-300h]
  int v17; // [esp+1Ch] [ebp-2FCh] BYREF
  _BYTE v18[8]; // [esp+20h] [ebp-2F8h] BYREF
  int v19; // [esp+28h] [ebp-2F0h]

  Buffer = a2;
  v12 = a4;
  v14 = a5;
  v16 = a6;
  result = RtlpQueryPackageIdentityAttributes(v18, a7, a8);
  v9 = result;
  if ( result >= 0 )
  {
    if ( Buffer )
    {
      if ( a3 )
      {
        result = RtlStringCbPrintfExW(Buffer, *a3, (int)&v15, (int)&v17, 2048, (wchar_t *)L"%wZ", *(_DWORD *)(v19 + 20));
        v9 = result;
        if ( result < 0 )
          return result;
        *a3 = v15 - (_DWORD)Buffer + 2;
LABEL_7:
        v10 = v12;
        if ( v12 )
        {
          v9 = RtlStringCbPrintfExW(v12, *v14, (int)&v12, 0, 2048, (wchar_t *)L"%wZ", *(_DWORD *)(v19 + 20) + 8);
          if ( v9 < 0 )
            return v9;
          *v14 = (char *)v12 - (char *)v10 + 2;
        }
        v11 = v16;
        if ( v16 )
        {
          *v16 = 0;
          v11[1] = 0;
          v11[2] = 0;
          v11[3] = 0;
          if ( *(_DWORD *)(v19 + 16) > 3u )
            RtlGUIDFromString(*(_DWORD *)(v19 + 20) + 24, v11);
        }
        return v9;
      }
    }
    else if ( !a3 )
    {
      goto LABEL_7;
    }
    return -1073741811;
  }
  return result;
}
