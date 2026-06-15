/*
 * XREFs of sub_180031784 @ 0x180031784
 * Callers:
 *     sub_1800133CC @ 0x1800133CC (sub_1800133CC.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_18000CD64 @ 0x18000CD64 (sub_18000CD64.c)
 *     sub_180031A54 @ 0x180031A54 (sub_180031A54.c)
 *     sub_180031C0C @ 0x180031C0C (sub_180031C0C.c)
 *     sub_180032160 @ 0x180032160 (sub_180032160.c)
 *     sub_1800322B0 @ 0x1800322B0 (sub_1800322B0.c)
 *     sub_180032DB4 @ 0x180032DB4 (sub_180032DB4.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180031784(__int64 a1)
{
  SIZE_T v2; // rbx
  _WORD *v3; // rax
  _WORD *v4; // rsi
  _WORD *i; // rcx
  unsigned int v6; // r14d
  DWORD v7; // r15d
  LSTATUS v8; // eax
  int v9; // eax
  void *v10; // rbx
  int v12; // edx
  DWORD cbMaxValueNameLen; // [rsp+60h] [rbp-29h] BYREF
  DWORD cValues; // [rsp+64h] [rbp-25h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-21h] BYREF
  DWORD cchValueName; // [rsp+70h] [rbp-19h] BYREF
  unsigned int v17; // [rsp+74h] [rbp-15h] BYREF
  unsigned int v18; // [rsp+78h] [rbp-11h] BYREF
  LPVOID pv; // [rsp+80h] [rbp-9h]
  _WORD *v20; // [rsp+88h] [rbp-1h]
  _QWORD v21[4]; // [rsp+90h] [rbp+7h] BYREF
  __int64 retaddr; // [rsp+E8h] [rbp+5Fh]

  hKey = 0LL;
  if ( (int)sub_180031C0C(a1, 131097LL, 0LL, &hKey) < 0 )
    goto LABEL_20;
  cValues = 0;
  cbMaxValueNameLen = 0;
  if ( RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, &cValues, &cbMaxValueNameLen, 0LL, 0LL, 0LL) )
    goto LABEL_20;
  v2 = ++cbMaxValueNameLen;
  v3 = CoTaskMemAlloc(v2 * 2);
  v4 = v3;
  v20 = v3;
  if ( v3 )
  {
    for ( i = &v3[v2]; v3 != i; ++v3 )
      *v3 = 0;
  }
  if ( !v4 )
  {
    v6 = -2147024882;
    sub_180003AB0(
      retaddr,
      417,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      -2147024882);
    goto LABEL_30;
  }
  v7 = 0;
  if ( !cValues )
  {
LABEL_19:
    CoTaskMemFree(v4);
LABEL_20:
    v6 = 0;
    goto LABEL_21;
  }
  while ( 1 )
  {
    cchValueName = cbMaxValueNameLen;
    v8 = RegEnumValueW(hKey, v7, v4, &cchValueName, 0LL, 0LL, 0LL, 0LL);
    if ( v8 )
    {
      v6 = sub_18000A4C0(
             retaddr,
             434,
             (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
             v8);
      goto LABEL_30;
    }
    if ( cchValueName )
      break;
LABEL_18:
    if ( ++v7 >= cValues )
      goto LABEL_19;
  }
  sub_18000CD64(v21, v4);
  if ( sub_180032DB4(v21) != -1 )
  {
LABEL_17:
    sub_180009CF0((__int64)v21);
    goto LABEL_18;
  }
  pv = 0LL;
  v9 = sub_180032160(hKey, v4);
  v6 = v9;
  v10 = pv;
  if ( v9 >= 0 )
  {
    if ( (int)sub_1800322B0(v4, &v17, &v18) >= 0 )
    {
      v9 = sub_180031A54(a1, v18, v17, v10);
      v6 = v9;
      if ( v9 < 0 )
      {
        v12 = 461;
        goto LABEL_26;
      }
    }
    if ( v10 )
      CoTaskMemFree(v10);
    goto LABEL_17;
  }
  v12 = 451;
LABEL_26:
  sub_180003AB0(
    retaddr,
    v12,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
    v9);
  if ( v10 )
    CoTaskMemFree(v10);
  sub_180009CF0((__int64)v21);
LABEL_30:
  if ( v4 )
    CoTaskMemFree(v4);
LABEL_21:
  if ( hKey )
    RegCloseKey(hKey);
  return v6;
}
