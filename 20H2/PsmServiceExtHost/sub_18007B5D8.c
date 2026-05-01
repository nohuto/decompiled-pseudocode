/*
 * XREFs of sub_18007B5D8 @ 0x18007B5D8
 * Callers:
 *     PsmHamTerminatePackage @ 0x180062480 (PsmHamTerminatePackage.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800252D0 @ 0x1800252D0 (sub_1800252D0.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800785A8 @ 0x1800785A8 (sub_1800785A8.c)
 *     sub_18008011C @ 0x18008011C (sub_18008011C.c)
 */

__int64 __fastcall sub_18007B5D8(__int64 a1, void *a2, void *a3, int a4, int a5)
{
  __int64 v9; // rax
  _QWORD *v10; // rdi
  int v11; // ebx
  DWORD v12; // edi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _BYTE v17[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v18; // [rsp+54h] [rbp-ACh] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  void *v20; // [rsp+60h] [rbp-A0h] BYREF
  void *v21; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v22[52]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE TlsValue[144]; // [rsp+140h] [rbp+40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v24; // [rsp+1D0h] [rbp+D0h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A03B3, 0LL, 0LL, 2u, &v24);
  sub_18000B7F8(TlsValue);
  sub_180026B04((__int64)a2, a3, a4, v22);
  v9 = sub_1800252D0(a1, (__int64)v22);
  v10 = (_QWORD *)v9;
  if ( v9 )
  {
    v11 = sub_18008011C(v9, 3, a5, 0, 4000);
    if ( v11 >= 0 )
      v11 = 0;
    sub_1800274E0(v10);
  }
  else
  {
    v11 = -1073741275;
  }
  v12 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v17[0] = a5;
    v20 = a3;
    v18 = a4;
    v21 = a2;
    v19 = v11;
    sub_1800785A8(v13, byte_18009FAEA, v14, v15, (__int64)&v19, &v21, (__int64)&v18, (__int64 *)&v20, (__int64)v17);
  }
  return (unsigned int)v11;
}
