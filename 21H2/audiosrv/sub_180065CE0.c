/*
 * XREFs of sub_180065CE0 @ 0x180065CE0
 * Callers:
 *     sub_180054490 @ 0x180054490 (sub_180054490.c)
 *     sub_1801325AC @ 0x1801325AC (sub_1801325AC.c)
 * Callees:
 *     sub_18000E660 @ 0x18000E660 (sub_18000E660.c)
 *     sub_180065DC0 @ 0x180065DC0 (sub_180065DC0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

char __fastcall sub_180065CE0(HKEY hKey, __int64 a2)
{
  HKEY v2; // rax
  __int64 v3; // r11
  int v5; // r8d
  HKEY hKeya[2]; // [rsp+30h] [rbp-C8h] BYREF
  WCHAR SubKey[80]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = 0LL;
  v3 = a2;
  hKeya[0] = 0LL;
  if ( a2 )
  {
    v5 = sub_180065DC0(a2, 39LL, hKeya);
    v2 = hKeya[0];
  }
  else
  {
    v5 = -2147024809;
  }
  if ( v5 < 0
    || v2 != (HKEY)38
    || (int)sub_18000E660((char *)SubKey, 75LL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects", v3) < 0
    || RegOpenKeyExW(hKey, SubKey, 0, 0x20019u, hKeya) )
  {
    return 0;
  }
  RegCloseKey(hKeya[0]);
  return 1;
}
