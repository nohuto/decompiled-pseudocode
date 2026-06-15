/*
 * XREFs of sub_180038F40 @ 0x180038F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008988 @ 0x180008988 (sub_180008988.c)
 *     sub_1800390FC @ 0x1800390FC (sub_1800390FC.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180038F40(__int64 a1)
{
  char v1; // r14
  signed int v2; // ebx
  char v3; // si
  void *v4; // rdi
  LSTATUS v5; // eax
  LSTATUS v6; // eax
  LPVOID pv[3]; // [rsp+38h] [rbp-18h] BYREF
  DWORD cbData; // [rsp+80h] [rbp+30h] BYREF
  DWORD Type; // [rsp+88h] [rbp+38h] BYREF
  HKEY hKey; // [rsp+90h] [rbp+40h] BYREF

  v1 = 0;
  hKey = 0LL;
  memset(pv, 0, sizeof(pv));
  v2 = sub_1800390FC(pv, L"%s\\%s", *(_QWORD *)(a1 + 8), L"Configs");
  v3 = 1;
  if ( v2 >= 0 )
  {
    if ( hKey )
      sub_180008988(hKey);
    v4 = pv[0];
    v5 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)pv[0], 0, 0x20019u, &hKey);
    if ( v5 )
    {
      v2 = (unsigned __int16)v5 | 0x80070000;
      if ( v5 <= 0 )
        v2 = v5;
      if ( v4 )
        CoTaskMemFree(v4);
      if ( hKey )
        RegCloseKey(hKey);
    }
    else
    {
      v6 = RegQueryValueExW(hKey, L"GlobalProfileId", 0LL, &Type, 0LL, &cbData);
      if ( v6 )
      {
        v2 = (unsigned __int16)v6 | 0x80070000;
        if ( v6 <= 0 )
          v2 = v6;
        if ( v4 )
          CoTaskMemFree(v4);
        if ( hKey )
          RegCloseKey(hKey);
      }
      else
      {
        v1 = 1;
        if ( v4 )
          CoTaskMemFree(v4);
        if ( hKey )
          RegCloseKey(hKey);
        v2 = 0;
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
  if ( v2 < 0 || !v1 )
    return 0;
  return v3;
}
