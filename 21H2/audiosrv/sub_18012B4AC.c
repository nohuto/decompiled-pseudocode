/*
 * XREFs of sub_18012B4AC @ 0x18012B4AC
 * Callers:
 *     sub_18012B740 @ 0x18012B740 (sub_18012B740.c)
 * Callees:
 *     sub_1800042D4 @ 0x1800042D4 (sub_1800042D4.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18012B4AC(__int64 a1, unsigned int *a2)
{
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  int v6; // r14d
  __int64 v7; // r9
  HKEY v8; // rcx
  HKEY v9; // rcx
  int v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+48h] [rbp-B8h]
  int v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+58h] [rbp-A8h]
  int v15; // [rsp+60h] [rbp-A0h]
  int v16; // [rsp+68h] [rbp-98h]
  DWORD cbData; // [rsp+70h] [rbp-90h] BYREF
  BYTE Data[4]; // [rsp+74h] [rbp-8Ch] BYREF
  HKEY hKey; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v20[6]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-20h]
  char DstBuf[512]; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR SubKey[256]; // [rsp+2F0h] [rbp+1F0h] BYREF

  v3 = *((unsigned __int8 *)a2 + 9);
  v4 = *((unsigned __int8 *)a2 + 8);
  v5 = *((unsigned __int16 *)a2 + 3);
  v6 = *((unsigned __int16 *)a2 + 2);
  v7 = *a2;
  v16 = *((unsigned __int8 *)a2 + 15);
  v15 = *((unsigned __int8 *)a2 + 14);
  v14 = *((unsigned __int8 *)a2 + 13);
  v13 = *((unsigned __int8 *)a2 + 12);
  v12 = *((unsigned __int8 *)a2 + 11);
  v11 = *((unsigned __int8 *)a2 + 10);
  v20[0] = xmmword_180174890;
  v20[1] = xmmword_1801748A0;
  v20[2] = xmmword_1801748B0;
  v20[3] = xmmword_1801748C0;
  v20[4] = xmmword_1801748D0;
  v20[5] = xmmword_1801748E0;
  v21 = 0x7200650064LL;
  sub_1800042D4(
    DstBuf,
    0xFFuLL,
    (const char *)L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    v7,
    v6,
    v5,
    v4,
    v3,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  sub_1800042D4((char *)SubKey, 0x1FEuLL, L"%s\\%s", v20, DstBuf);
  if ( !RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0x20019u, &hKey) )
  {
    *(_DWORD *)Data = *(unsigned __int16 *)(a1 + 124);
    cbData = 4;
    RegQueryValueExW(hKey, L"MaxDynamicObjectCount", 0LL, 0LL, Data, &cbData);
    v8 = hKey;
    *(_WORD *)(a1 + 124) = *(_WORD *)Data;
    *(_DWORD *)Data = *(_DWORD *)(a1 + 116);
    cbData = 4;
    RegQueryValueExW(v8, L"NativeStaticObjectMask", 0LL, 0LL, Data, &cbData);
    v9 = hKey;
    *(_DWORD *)(a1 + 116) = *(_DWORD *)Data;
    cbData = 4;
    *(_DWORD *)Data = 116;
    RegQueryValueExW(v9, L"ProjectionData", 0LL, 0LL, 0LL, &cbData);
    if ( cbData == 116 )
      RegQueryValueExW(hKey, L"ProjectionData", 0LL, 0LL, (LPBYTE)(a1 + 126), &cbData);
    RegCloseKey(hKey);
  }
  return 0LL;
}
