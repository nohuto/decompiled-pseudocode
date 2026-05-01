/*
 * XREFs of _wsetlocale_set_cat @ 0x180079634
 * Callers:
 *     sub_180080390 @ 0x180080390 (sub_180080390.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800252D0 @ 0x1800252D0 (sub_1800252D0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180078894 @ 0x180078894 (sub_180078894.c)
 *     sub_18007FD78 @ 0x18007FD78 (sub_18007FD78.c)
 *     sub_18008532C @ 0x18008532C (sub_18008532C.c)
 */

__int64 __fastcall wsetlocale_set_cat(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  char v6; // si
  int v11; // ebx
  __int64 v12; // rax
  _QWORD *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DWORD v18; // edi
  _BYTE v20[4]; // [rsp+50h] [rbp-B0h] BYREF
  UINT32 packageRelativeApplicationIdLength; // [rsp+54h] [rbp-ACh] BYREF
  UINT32 packageFamilyNameLength; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v23; // [rsp+5Ch] [rbp-A4h] BYREF
  int v24; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+68h] [rbp-98h] BYREF
  const WCHAR *v26; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v27[208]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE TlsValue[144]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+1E0h] [rbp+E0h] BYREF
  WCHAR packageFamilyName[72]; // [rsp+200h] [rbp+100h] BYREF
  WCHAR packageRelativeApplicationId[72]; // [rsp+290h] [rbp+190h] BYREF

  v6 = 0;
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009F26C, 0LL, 0LL, 2u, &v29);
  sub_18000B7F8(TlsValue);
  packageFamilyNameLength = 65;
  packageRelativeApplicationIdLength = 65;
  if ( ParseApplicationUserModelId(
         a2,
         &packageFamilyNameLength,
         packageFamilyName,
         &packageRelativeApplicationIdLength,
         packageRelativeApplicationId) )
  {
    v11 = -1073741585;
  }
  else
  {
    v11 = sub_18008532C(packageFamilyName, a3, a4, a5, v27);
    if ( v11 >= 0 )
    {
      v12 = sub_1800252D0(a1, (__int64)v27);
      v13 = (_QWORD *)v12;
      if ( v12 )
      {
        v14 = sub_18007FD78(v12, packageRelativeApplicationId);
        v6 = v14;
        *a6 = v14;
        v11 = 0;
        sub_1800274E0(v13);
      }
      else
      {
        v11 = -1073741275;
      }
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v20[0] = v6;
    v23 = a5;
    v25 = a3;
    v26 = a2;
    v24 = v11;
    sub_180078894(v15, byte_18009F17F, v16, v17, (__int64)&v24, (void **)&v26, &v25, (__int64)&v23, (__int64)v20);
  }
  v18 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v18, 0LL);
  }
  return (unsigned int)v11;
}
