/*
 * XREFs of sub_1800038A4 @ 0x1800038A4
 * Callers:
 *     sub_18000319C @ 0x18000319C (sub_18000319C.c)
 * Callees:
 *     sub_1800025AC @ 0x1800025AC (sub_1800025AC.c)
 *     sub_1800042D4 @ 0x1800042D4 (sub_1800042D4.c)
 *     sub_180004620 @ 0x180004620 (sub_180004620.c)
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800038A4(__int64 a1, __int64 a2)
{
  HKEY *v2; // r14
  RPC_STATUS v4; // eax
  LPWSTR v5; // rbx
  int v6; // eax
  int v7; // edi
  int v8; // eax
  HKEY v9; // rsi
  bool v10; // sf
  HKEY v11; // rsi
  int v12; // ecx
  int v13; // eax
  int v14; // esi
  DWORD LastError; // edi
  DWORD v17; // edi
  RPC_STATUS v18; // [rsp+30h] [rbp-D0h]
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  LPWSTR v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SubKey[264]; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+298h] [rbp+198h]

  v2 = (HKEY *)(a1 + 64);
  if ( *(_QWORD *)(a1 + 64) )
    return 0LL;
  v4 = RpcImpersonateClient(0LL);
  v18 = v4;
  if ( !v4 || v4 == 1725 || v4 == 1765 )
  {
    v5 = 0LL;
    v20[0] = 0LL;
    if ( !a2 )
    {
      sub_18002A504(v20, 0LL);
      v6 = sub_1800025AC(v20);
      v7 = v6;
      if ( v6 < 0 )
      {
        sub_18004BD84(retaddr, 3462LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v6);
        v5 = v20[0];
LABEL_21:
        if ( v5 )
          CoTaskMemFree(v5);
        goto LABEL_23;
      }
      v5 = v20[0];
    }
    v8 = sub_1800042D4((char *)SubKey);
    v7 = v8;
    if ( v8 < 0 )
    {
      sub_18004BD84(retaddr, 3467LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v8);
    }
    else
    {
      hKey = 0LL;
      v7 = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x2001Fu, &hKey);
      if ( v7 == 5 )
      {
        v9 = hKey;
        if ( hKey )
        {
          LastError = GetLastError();
          RegCloseKey(v9);
          SetLastError(LastError);
        }
        hKey = 0LL;
        v7 = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x20019u, &hKey);
      }
      v10 = v7 < 0;
      if ( v7 > 0 )
      {
        v7 = (unsigned __int16)v7 | 0x80070000;
        v10 = v7 < 0;
      }
      if ( v10 )
      {
        if ( v7 != -2147024894 )
          sub_18004BD84(retaddr, 3484LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v7);
      }
      else
      {
        v11 = *v2;
        if ( *v2 )
        {
          v17 = GetLastError();
          RegCloseKey(v11);
          SetLastError(v17);
        }
        v12 = (int)hKey;
        *v2 = 0LL;
        v13 = sub_180004620(v12, (int)L"Audio\\PolicyConfig\\PropertyStore");
        v14 = v13;
        if ( v13 >= 0 )
        {
          v7 = 0;
        }
        else
        {
          v7 = -2147024891;
          if ( v13 != -2147024891 )
          {
            sub_18004BD84(
              retaddr,
              3486LL,
              "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (unsigned int)v13);
            v7 = v14;
          }
        }
      }
      if ( hKey )
        RegCloseKey(hKey);
    }
    goto LABEL_21;
  }
  if ( v4 > 0 )
    v7 = (unsigned __int16)v4 | 0x80070000;
  else
    v7 = v4;
  sub_18004BD84(retaddr, 3449LL, "avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", (unsigned int)v7);
LABEL_23:
  if ( !v18 )
    RpcRevertToSelf();
  return (unsigned int)v7;
}
