/*
 * XREFs of sub_1800422A4 @ 0x1800422A4
 * Callers:
 *     sub_180041FAC @ 0x180041FAC (sub_180041FAC.c)
 * Callees:
 *     sub_180035EEC @ 0x180035EEC (sub_180035EEC.c)
 *     sub_180042524 @ 0x180042524 (sub_180042524.c)
 *     sub_180042590 @ 0x180042590 (sub_180042590.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180046098 @ 0x180046098 (sub_180046098.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_1800422A4(__int64 a1)
{
  DWORD v2; // esi
  __int64 v3; // rax
  __int64 v4; // rax
  LSTATUS v5; // eax
  signed int v6; // ebx
  LSTATUS v7; // eax
  LSTATUS i; // eax
  unsigned int v9; // ebx
  DWORD cbData; // [rsp+48h] [rbp-C0h] BYREF
  DWORD Type; // [rsp+4Ch] [rbp-BCh] BYREF
  DWORD cchValueName[2]; // [rsp+50h] [rbp-B8h] BYREF
  HKEY phkResult; // [rsp+58h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A8h] BYREF
  WCHAR ValueName[264]; // [rsp+68h] [rbp-A0h] BYREF
  BYTE Data[2048]; // [rsp+278h] [rbp+170h] BYREF

  hKey = 0LL;
  phkResult = 0LL;
  v2 = 0;
  cchValueName[0] = 259;
  Type = 0;
  cbData = 2046;
  memset(ValueName, 0, 0x208uLL);
  memset(Data, 0, sizeof(Data));
  v3 = sub_180046098(0x510uLL);
  if ( v3 )
    v3 = sub_180035EEC(v3);
  sub_180042590(a1 + 24, v3);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v4 )
  {
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 1280) = 2;
    *(_QWORD *)(v4 + 24) = a1;
    if ( hKey )
      RegCloseKey(hKey);
    v5 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\ResourceManager", 0, 0x20019u, &hKey);
    v6 = v5;
    if ( v5 > 0 )
      v6 = (unsigned __int16)v5 | 0xC0070000;
    if ( v6 >= 0 )
    {
      if ( phkResult )
        RegCloseKey(phkResult);
      v7 = RegOpenKeyExW(hKey, L"Registrars\\", 0, 0x20019u, &phkResult);
      v6 = v7;
      if ( v7 > 0 )
        v6 = (unsigned __int16)v7 | 0xC0070000;
      if ( v6 >= 0 )
      {
        for ( i = RegEnumValueW(phkResult, 0, ValueName, cchValueName, 0LL, &Type, Data, &cbData);
              !i;
              i = RegEnumValueW(phkResult, v2, ValueName, cchValueName, 0LL, &Type, Data, &cbData) )
        {
          ++v2;
          if ( Type == 1 && cbData > 2 )
            sub_180042524(a1, Data);
          memset(ValueName, 0, 0x208uLL);
          memset(Data, 0, sizeof(Data));
          cchValueName[0] = 259;
          cbData = 2046;
        }
        goto LABEL_20;
      }
    }
    if ( v6 == -1073283070 )
    {
LABEL_20:
      v9 = 0;
      goto LABEL_21;
    }
    v9 = v6 | 0x10000000;
  }
  else
  {
    v9 = -2147024882;
  }
LABEL_21:
  if ( phkResult )
    RegCloseKey(phkResult);
  if ( hKey )
    RegCloseKey(hKey);
  return v9;
}
