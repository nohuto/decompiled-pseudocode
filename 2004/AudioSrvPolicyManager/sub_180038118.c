/*
 * XREFs of sub_180038118 @ 0x180038118
 * Callers:
 *     sub_180037A30 @ 0x180037A30 (sub_180037A30.c)
 * Callees:
 *     sub_180008988 @ 0x180008988 (sub_180008988.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180038118(LPCWSTR *a1)
{
  unsigned int v1; // ebx
  unsigned int Data; // [rsp+60h] [rbp+18h] BYREF
  DWORD cbData; // [rsp+68h] [rbp+20h] BYREF
  DWORD Type; // [rsp+70h] [rbp+28h] BYREF
  HKEY hKey; // [rsp+78h] [rbp+30h] BYREF

  hKey = 0LL;
  if ( RegOpenKeyExW(HKEY_LOCAL_MACHINE, *a1, 0, 0x20019u, &hKey)
    || (Data = 0, cbData = 4, RegQueryValueExW(hKey, L"Version", 0LL, &Type, (LPBYTE)&Data, &cbData))
    || Type != 4 )
  {
    v1 = 0;
  }
  else
  {
    v1 = Data;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return v1;
}
