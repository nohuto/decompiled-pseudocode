/*
 * XREFs of sub_18002578C @ 0x18002578C
 * Callers:
 *     sub_1800245D0 @ 0x1800245D0 (sub_1800245D0.c)
 * Callees:
 *     sub_18002595C @ 0x18002595C (sub_18002595C.c)
 *     sub_180025A54 @ 0x180025A54 (sub_180025A54.c)
 */

__int64 __fastcall sub_18002578C(__int64 a1, __int64 a2, const WCHAR *a3, _QWORD *a4)
{
  bool v5; // zf
  signed int v7; // ebx
  LSTATUS v8; // eax
  LSTATUS v9; // eax
  LSTATUS v10; // eax
  HKEY v12; // [rsp+50h] [rbp-20h] BYREF
  HKEY v13; // [rsp+58h] [rbp-18h] BYREF
  HKEY phkResult; // [rsp+60h] [rbp-10h] BYREF
  HKEY hKey; // [rsp+A8h] [rbp+38h] BYREF

  v5 = *a4 == -1LL;
  hKey = 0LL;
  phkResult = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  if ( v5 && a4[1] == -1LL && a4[2] == -1LL && a4[3] == -1LL )
  {
    return 0;
  }
  else
  {
    v7 = sub_180025A54(a1, a2, a3, &hKey);
    if ( v7 >= 0 )
    {
      v8 = RegCreateKeyExW(hKey, L"HAM\\AUI", 0, 0LL, 0, 4u, 0LL, &phkResult, 0LL);
      v7 = v8;
      if ( v8 > 0 )
        v7 = (unsigned __int16)v8 | 0xC0070000;
      if ( v7 >= 0 )
      {
        v9 = RegCreateKeyExW(phkResult, a3, 0, 0LL, 0, 4u, 0LL, &v13, 0LL);
        v7 = v9;
        if ( v9 > 0 )
          v7 = (unsigned __int16)v9 | 0xC0070000;
        if ( v7 >= 0 )
        {
          v10 = RegCreateKeyExW(v13, L"V1", 0, 0LL, 0, 4u, 0LL, &v12, 0LL);
          v7 = v10;
          if ( v10 > 0 )
            v7 = (unsigned __int16)v10 | 0xC0070000;
          if ( v7 >= 0 )
          {
            v7 = sub_18002595C(a4, v12);
            if ( v7 >= 0 )
              v7 = 0;
          }
        }
      }
    }
    if ( v12 )
      RegCloseKey(v12);
    if ( v13 )
      RegCloseKey(v13);
    if ( phkResult )
      RegCloseKey(phkResult);
    if ( hKey )
      RegCloseKey(hKey);
  }
  return (unsigned int)v7;
}
