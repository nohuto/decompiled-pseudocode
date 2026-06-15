/*
 * XREFs of sub_180043F70 @ 0x180043F70
 * Callers:
 *     sub_1800019C0 @ 0x1800019C0 (sub_1800019C0.c)
 *     sub_180011C10 @ 0x180011C10 (sub_180011C10.c)
 *     sub_1800DE2A0 @ 0x1800DE2A0 (sub_1800DE2A0.c)
 *     sub_1800DEF80 @ 0x1800DEF80 (sub_1800DEF80.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sprintf_s @ 0x18006ACB4 (sprintf_s.c)
 *     sub_1800BDAAC @ 0x1800BDAAC (sub_1800BDAAC.c)
 */

__int64 __fastcall sub_180043F70(__int64 a1)
{
  __int64 v2; // rax
  int v3; // ebx
  __int64 v5; // rdx
  HRESULT v6; // eax
  LSTATUS v7; // eax
  LPOLESTR lpsz; // [rsp+30h] [rbp-D0h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  IID rclsid; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SubKey[264]; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+278h] [rbp+178h]

  if ( *(_DWORD *)(a1 + 48) >= 0x15u )
  {
    v5 = 1391LL;
    goto LABEL_11;
  }
  rclsid = *(IID *)(a1 + 16);
  v2 = *(_QWORD *)&rclsid.Data1;
  if ( !*(_QWORD *)&rclsid.Data1 )
    v2 = *(_QWORD *)rclsid.Data4;
  if ( !v2 )
    goto LABEL_5;
  lpsz = 0LL;
  sub_18002A504((void **)&lpsz, 0LL);
  v6 = StringFromCLSID(&rclsid, &lpsz);
  v3 = v6;
  if ( v6 >= 0 )
  {
    if ( sprintf_s(
           (char *const)SubKey,
           0x104uLL,
           L"%s\\%s",
           L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Containers\\",
           lpsz) == -1 )
    {
      sub_18004BD84(retaddr, 1379LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942522LL);
      sub_1800BDAAC(&lpsz);
      goto LABEL_16;
    }
    hKey = 0LL;
    v7 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey);
    v3 = v7;
    if ( v7 >= 0 )
    {
      if ( hKey )
        RegCloseKey(hKey);
      if ( lpsz )
        CoTaskMemFree(lpsz);
LABEL_5:
      v3 = 0;
      goto LABEL_6;
    }
    sub_18004BD84(retaddr, 1382LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v7);
    if ( hKey )
      RegCloseKey(hKey);
    if ( lpsz )
      CoTaskMemFree(lpsz);
  }
  else
  {
    sub_18004BD84(retaddr, 1376LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", (unsigned int)v6);
    sub_1800BDAAC(&lpsz);
  }
LABEL_6:
  if ( v3 < 0 )
  {
LABEL_16:
    v5 = 1393LL;
    goto LABEL_11;
  }
  if ( *(_DWORD *)(a1 + 52) <= 3u )
    return 0LL;
  v5 = 1395LL;
LABEL_11:
  sub_18004BD84(retaddr, v5, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942487LL);
  return 2147942487LL;
}
