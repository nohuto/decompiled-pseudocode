/*
 * XREFs of sub_180038D50 @ 0x180038D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008988 @ 0x180008988 (sub_180008988.c)
 *     sub_1800390FC @ 0x1800390FC (sub_1800390FC.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180038D50(__int64 a1)
{
  char v1; // bl
  bool v2; // r14
  signed int v3; // edi
  void *v4; // rsi
  LSTATUS v5; // eax
  LSTATUS v6; // eax
  LPVOID pv[3]; // [rsp+68h] [rbp-18h] BYREF
  DWORD cSubKeys; // [rsp+A0h] [rbp+20h] BYREF
  HKEY hKey; // [rsp+A8h] [rbp+28h] BYREF

  v1 = 0;
  v2 = 0;
  hKey = 0LL;
  memset(pv, 0, sizeof(pv));
  v3 = sub_1800390FC(pv, L"%s\\%s", *(_QWORD *)(a1 + 8), L"GroupConfigs");
  if ( v3 >= 0 )
  {
    if ( hKey )
      sub_180008988(hKey);
    v4 = pv[0];
    v5 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)pv[0], 0, 0x20019u, &hKey);
    if ( v5 )
    {
      v3 = (unsigned __int16)v5 | 0x80070000;
      if ( v5 <= 0 )
        v3 = v5;
      if ( v4 )
        CoTaskMemFree(v4);
      if ( hKey )
        RegCloseKey(hKey);
    }
    else
    {
      cSubKeys = 0;
      v6 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      if ( v6 )
      {
        v3 = (unsigned __int16)v6 | 0x80070000;
        if ( v6 <= 0 )
          v3 = v6;
        if ( v4 )
          CoTaskMemFree(v4);
        if ( hKey )
          RegCloseKey(hKey);
      }
      else
      {
        v2 = cSubKeys != 0;
        if ( v4 )
          CoTaskMemFree(v4);
        if ( hKey )
          RegCloseKey(hKey);
        v3 = 0;
      }
    }
  }
  else
  {
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
    if ( hKey )
      RegCloseKey(hKey);
  }
  if ( v3 >= 0 && v2 )
    return 1;
  return v1;
}
