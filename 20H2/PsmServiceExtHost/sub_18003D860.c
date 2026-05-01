/*
 * XREFs of sub_18003D860 @ 0x18003D860
 * Callers:
 *     sub_18003D7CC @ 0x18003D7CC (sub_18003D7CC.c)
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18003D860(const WCHAR *a1, bool *a2)
{
  LSTATUS v3; // eax
  unsigned int v4; // ebx
  bool v5; // cc
  UINT32 packageFamilyNameLength; // [rsp+30h] [rbp-69h] BYREF
  DWORD cbData; // [rsp+34h] [rbp-65h] BYREF
  BYTE Data[8]; // [rsp+38h] [rbp-61h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-59h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+50h] [rbp-49h] BYREF

  hKey = 0LL;
  packageFamilyNameLength = 65;
  PackageFamilyNameFromFullName(a1, &packageFamilyNameLength, packageFamilyName);
  v3 = RegOpenKeyExW(
         HKEY_LOCAL_MACHINE,
         L"Software\\Microsoft\\Windows NT\\CurrentVersion\\BackgroundModel\\EmptyHostDisallowList",
         0,
         0x20019u,
         &hKey);
  v4 = v3;
  v5 = v3 <= 0;
  if ( !v3 )
  {
    cbData = 4;
    v3 = RegQueryValueExW(hKey, packageFamilyName, 0LL, 0LL, Data, &cbData);
    v4 = v3;
    if ( v3 == 2 )
    {
      *a2 = 0;
LABEL_4:
      v4 = 0;
      goto LABEL_5;
    }
    v5 = v3 <= 0;
    if ( !v3 )
    {
      *a2 = *(_DWORD *)Data != 0;
      goto LABEL_4;
    }
  }
  if ( !v5 )
    v4 = (unsigned __int16)v3 | 0xC0070000;
LABEL_5:
  if ( hKey )
    RegCloseKey(hKey);
  return v4;
}
