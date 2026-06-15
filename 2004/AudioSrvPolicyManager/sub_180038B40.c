/*
 * XREFs of sub_180038B40 @ 0x180038B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008988 @ 0x180008988 (sub_180008988.c)
 *     sub_1800390FC @ 0x1800390FC (sub_1800390FC.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall sub_180038B40(__int64 a1, const WCHAR *a2)
{
  char v3; // r14
  signed int v4; // ebx
  char v5; // si
  void *v6; // rdi
  LSTATUS v7; // eax
  LSTATUS v8; // eax
  LPVOID pv[3]; // [rsp+38h] [rbp-18h] BYREF
  HKEY hKey; // [rsp+80h] [rbp+30h] BYREF
  HKEY phkResult; // [rsp+90h] [rbp+40h] BYREF

  v3 = 0;
  hKey = 0LL;
  memset(pv, 0, sizeof(pv));
  v4 = sub_1800390FC(pv, L"%s\\%s", *(_QWORD *)(a1 + 8), L"Configs");
  v5 = 1;
  if ( v4 >= 0 )
  {
    if ( hKey )
      sub_180008988(hKey);
    v6 = pv[0];
    v7 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, (LPCWSTR)pv[0], 0, 0x20019u, &hKey);
    if ( v7 )
    {
      v4 = (unsigned __int16)v7 | 0x80070000;
      if ( v7 <= 0 )
        v4 = v7;
      if ( v6 )
        CoTaskMemFree(v6);
      if ( hKey )
        RegCloseKey(hKey);
    }
    else
    {
      phkResult = 0LL;
      v8 = RegOpenKeyExW(hKey, a2, 0, 0x20019u, &phkResult);
      if ( v8 )
      {
        v4 = (unsigned __int16)v8 | 0x80070000;
        if ( v8 <= 0 )
          v4 = v8;
        if ( phkResult )
          RegCloseKey(phkResult);
        if ( v6 )
          CoTaskMemFree(v6);
        if ( hKey )
          RegCloseKey(hKey);
      }
      else
      {
        v3 = 1;
        if ( phkResult )
          RegCloseKey(phkResult);
        if ( v6 )
          CoTaskMemFree(v6);
        if ( hKey )
          RegCloseKey(hKey);
        v4 = 0;
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
  if ( v4 < 0 || !v3 )
    return 0;
  return v5;
}
