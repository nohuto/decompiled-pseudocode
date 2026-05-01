/*
 * XREFs of sub_180079DCC @ 0x180079DCC
 * Callers:
 *     sub_180080370 @ 0x180080370 (sub_180080370.c)
 *     sub_180080530 @ 0x180080530 (sub_180080530.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180078FDC @ 0x180078FDC (sub_180078FDC.c)
 *     sub_1800805FC @ 0x1800805FC (sub_1800805FC.c)
 *     sub_180085200 @ 0x180085200 (sub_180085200.c)
 */

__int64 __fastcall sub_180079DCC(__int64 *a1, void *a2, int a3, int a4, int a5, _QWORD *a6)
{
  __int64 v10; // r14
  __int64 v11; // rdi
  char *v12; // r14
  int v13; // ebx
  int v14; // eax
  DWORD v15; // esi
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  int v21; // [rsp+58h] [rbp-A8h] BYREF
  char *v22; // [rsp+60h] [rbp-A0h] BYREF
  void *v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[132]; // [rsp+80h] [rbp-80h] BYREF
  char v26; // [rsp+104h] [rbp+4h] BYREF
  _BYTE TlsValue[144]; // [rsp+150h] [rbp+50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+1E0h] [rbp+E0h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A0449, 0LL, 0LL, 2u, &v28);
  sub_18000B7F8(TlsValue);
  v10 = *a1;
  v11 = 0LL;
  v20 = 0LL;
  v12 = (char *)(v10 + 876);
  v13 = sub_180085200((_DWORD)a2, a4, a5, a3, (__int64)v25);
  if ( v13 >= 0 )
  {
    v12 = &v26;
    v14 = sub_1800805FC(v25, a1, &v20);
    v11 = v20;
    v13 = v14;
    if ( v14 >= 0 )
    {
      *a6 = v20;
      v13 = 0;
    }
  }
  v15 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
  {
    v22 = v12;
    v21 = a3;
    v23 = a2;
    v24 = v11;
    LODWORD(v20) = v13;
    sub_180078FDC(v16, byte_18009F370, v17, v18, (__int64)&v20, (__int64)&v24, &v23, (__int64)&v21, (__int64 *)&v22);
  }
  return (unsigned int)v13;
}
