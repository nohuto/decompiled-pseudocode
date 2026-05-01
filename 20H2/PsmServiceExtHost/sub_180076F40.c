/*
 * XREFs of sub_180076F40 @ 0x180076F40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800769A0 @ 0x1800769A0 (sub_1800769A0.c)
 *     sub_18007FE60 @ 0x18007FE60 (sub_18007FE60.c)
 *     sub_18008509C @ 0x18008509C (sub_18008509C.c)
 */

__int64 __fastcall sub_180076F40(__int64 a1, const WCHAR *a2, const WCHAR *a3, int a4)
{
  int v8; // ebx
  unsigned int v9; // ebx
  signed int LastError; // eax
  DWORD v11; // edi
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v18; // [rsp+58h] [rbp-A8h] BYREF
  PSID Sid; // [rsp+60h] [rbp-A0h] BYREF
  const WCHAR *v20; // [rsp+68h] [rbp-98h] BYREF
  const WCHAR *v21; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v22[52]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE TlsValue[144]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v25[144]; // [rsp+200h] [rbp+100h] BYREF

  sub_18000B7F8(TlsValue);
  Sid = 0LL;
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009EC90, 0LL, 0LL, 2u, &v24);
  v8 = sub_18008509C(a3);
  if ( v8 >= 0 )
  {
    if ( ConvertStringSidToSidW(a2, &Sid) )
    {
      sub_180026B04((__int64)v25, Sid, *(_DWORD *)(a1 + 40), v22);
      sub_18007FE60(*(_QWORD *)(a1 + 32), v22, (a4 & 1) == 0);
      v9 = 0;
    }
    else
    {
      LastError = GetLastError();
      v9 = LastError;
      if ( LastError > 0 )
        v9 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  else
  {
    v9 = v8 | 0x10000000;
  }
  if ( Sid )
    LocalFree(Sid);
  v11 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v17 = *(_DWORD *)(a1 + 40);
    v16 = a4;
    v20 = a3;
    v21 = a2;
    v18 = v9;
    sub_1800769A0(
      v12,
      byte_18009ED09,
      v13,
      v14,
      (__int64)&v18,
      (__int64)&v17,
      (void **)&v21,
      (void **)&v20,
      (__int64)&v16);
  }
  return v9;
}
