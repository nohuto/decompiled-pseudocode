/*
 * XREFs of sub_180038B20 @ 0x180038B20
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180038CA8 @ 0x180038CA8 (sub_180038CA8.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180063F5C @ 0x180063F5C (sub_180063F5C.c)
 */

int __fastcall sub_180038B20(__int64 a1, __int64 a2)
{
  int result; // eax
  bool v4; // sf
  bool v5; // sf
  DWORD v6; // ebx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  bool v10; // sf
  int v11; // [rsp+60h] [rbp-A0h] BYREF
  int v12; // [rsp+64h] [rbp-9Ch] BYREF
  int v13; // [rsp+68h] [rbp-98h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-90h] BYREF
  HKEY phkResult; // [rsp+78h] [rbp-88h] BYREF
  __int64 v16; // [rsp+80h] [rbp-80h] BYREF
  __int64 v17; // [rsp+88h] [rbp-78h] BYREF
  __int64 v18; // [rsp+90h] [rbp-70h] BYREF
  __int64 v19; // [rsp+98h] [rbp-68h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE TlsValue[144]; // [rsp+B0h] [rbp-50h] BYREF

  sub_18000B7F8(TlsValue);
  hKey = 0LL;
  phkResult = 0LL;
  sub_18001E380();
  if ( *(_DWORD *)(a2 + 308) )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 0x200000000001LL) )
    {
      v12 = *(_DWORD *)(a2 + 304);
      v17 = *(_QWORD *)(a2 + 296);
      v18 = *(_QWORD *)(a2 + 288);
      v19 = *(_QWORD *)(a2 + 280);
      v20 = *(_QWORD *)(a2 + 272);
      v16 = 0x1000000LL;
      v11 = v9;
      sub_180063F5C(
        v7,
        (unsigned int)&unk_18009AB90,
        v8,
        v9,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v16);
    }
    *(_QWORD *)(a2 + 272) = 0LL;
    *(_QWORD *)(a2 + 280) = -1LL;
    *(_QWORD *)(a2 + 288) = 0LL;
    *(_QWORD *)(a2 + 296) = 0LL;
    *(_DWORD *)(a2 + 304) = 0;
    *(_DWORD *)(a2 + 308) = 0;
  }
  *(_DWORD *)(a2 + 568) = GetTickCount();
  sub_18000F390();
  result = RtlGetDeviceFamilyInfoEnum(0LL, &v13, 0LL);
  if ( v13 == 3 )
  {
    sub_180038CA8(&unk_1800B42B8, 0LL);
    result = RegOpenKeyExW(
               HKEY_LOCAL_MACHINE,
               L"System\\CurrentControlSet\\Control\\Session Manager\\Memory Management",
               0,
               0x20006u,
               &hKey);
    v4 = result < 0;
    if ( result > 0 )
    {
      result = (unsigned __int16)result | 0xC0070000;
      v4 = result < 0;
    }
    if ( !v4 )
    {
      result = RegOpenKeyExW(
                 HKEY_LOCAL_MACHINE,
                 L"Software\\Microsoft\\Windows NT\\ResourceManager",
                 0,
                 0x20006u,
                 &phkResult);
      v5 = result < 0;
      if ( result > 0 )
      {
        result = (unsigned __int16)result | 0xC0070000;
        v5 = result < 0;
      }
      if ( !v5 )
      {
        result = RegDeleteValueW(phkResult, L"SimulateCommitSavings");
        v10 = result < 0;
        if ( result > 0 )
        {
          result = (unsigned __int16)result | 0xC0070000;
          v10 = result < 0;
        }
        if ( !v10 )
          result = RegDeleteValueW(hKey, L"SimulateCommitSavings");
      }
    }
  }
  if ( hKey )
    result = RegCloseKey(hKey);
  if ( phkResult )
    result = RegCloseKey(phkResult);
  v6 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v6, 0LL);
  }
  return result;
}
