/*
 * XREFs of sub_180029A00 @ 0x180029A00
 * Callers:
 *     sub_180029BA8 @ 0x180029BA8 (sub_180029BA8.c)
 * Callees:
 *     sub_1800293D0 @ 0x1800293D0 (sub_1800293D0.c)
 *     sub_180029A90 @ 0x180029A90 (sub_180029A90.c)
 *     sub_180029AC8 @ 0x180029AC8 (sub_180029AC8.c)
 */

__int64 __fastcall sub_180029A00(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v4; // rax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF
  HKEY hKey; // [rsp+50h] [rbp+18h] BYREF

  v6 = a2;
  hKey = 0LL;
  v3 = sub_1800293D0(a1, 1, &hKey);
  if ( v3 >= 0 )
  {
    v4 = sub_180029AC8(*(unsigned int *)(a1 + 560));
    v3 = sub_180029A90(hKey, v4, 11LL, &v6, 8);
    if ( v3 >= 0 )
      v3 = 0;
  }
  if ( hKey )
    RegCloseKey(hKey);
  return (unsigned int)v3;
}
