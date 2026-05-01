/*
 * XREFs of sub_180037A20 @ 0x180037A20
 * Callers:
 *     sub_18002AC2C @ 0x18002AC2C (sub_18002AC2C.c)
 * Callees:
 *     sub_180029184 @ 0x180029184 (sub_180029184.c)
 *     sub_1800297B0 @ 0x1800297B0 (sub_1800297B0.c)
 *     sub_180029A90 @ 0x180029A90 (sub_180029A90.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180037A20(__int64 a1, void *a2, int a3)
{
  int v4; // ebx
  LSTATUS v6; // eax
  BYTE v7[8]; // [rsp+30h] [rbp-148h] BYREF
  HKEY hKey; // [rsp+38h] [rbp-140h] BYREF
  UINT32 v9[4]; // [rsp+40h] [rbp-138h] BYREF
  WCHAR ValueName[136]; // [rsp+50h] [rbp-128h] BYREF

  *(_DWORD *)v7 = a3;
  v9[0] = 130;
  hKey = 0LL;
  sub_1800297B0(a1, v9, ValueName);
  v4 = sub_180029184(a2, 131078, &hKey);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)v7 )
    {
      v4 = sub_180029A90(hKey, ValueName, 4u, v7, 4u);
    }
    else
    {
      v6 = RegDeleteValueW(hKey, ValueName);
      v4 = v6;
      if ( v6 > 0 )
        v4 = (unsigned __int16)v6 | 0xC0070000;
      if ( v4 == -1073283070 )
        v4 = 279;
    }
    if ( v4 >= 0 )
      v4 = 0;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v4;
}
