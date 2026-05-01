/*
 * XREFs of sub_18007B7A0 @ 0x18007B7A0
 * Callers:
 *     sub_180080500 @ 0x180080500 (sub_180080500.c)
 * Callees:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000EE6C @ 0x18000EE6C (sub_18000EE6C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180067F74 @ 0x180067F74 (sub_180067F74.c)
 */

__int64 __fastcall sub_18007B7A0(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbp
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  DWORD v12; // ebx
  __int64 v14; // [rsp+40h] [rbp-E8h] BYREF
  int v15; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v18; // [rsp+F0h] [rbp-38h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A046B, 0LL, 0LL, 2u, &v18);
  sub_18000B7F8(TlsValue);
  v2 = *(_QWORD *)(a1 + 168);
  v3 = *(_QWORD *)a1;
  v4 = -1LL;
  v14 = 0LL;
  v5 = sub_18000EE6C(v3, v2, &v14);
  v6 = v14;
  v7 = v5;
  if ( v5 >= 0 )
  {
    v4 = *(_QWORD *)(v14 - 32);
    sub_18000506C(v14, 1u, 5888, a1, 0, 0);
    v7 = 0;
  }
  if ( v6 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v6 + 592))-- == 1LL )
      sub_18000A1AC(v6 - 64, v8);
    sub_18000F390();
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v15 = *(_DWORD *)(a1 + 140);
    v16 = v4;
    LODWORD(v14) = v7;
    sub_180067F74((__int64)&dword_1800B3218, byte_18009F409, v10, v11, (__int64)&v14, (__int64)&v15, (__int64)&v16);
  }
  v12 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v12, 0LL);
  }
  return v7;
}
