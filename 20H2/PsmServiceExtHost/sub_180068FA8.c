/*
 * XREFs of sub_180068FA8 @ 0x180068FA8
 * Callers:
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 * Callees:
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180068008 @ 0x180068008 (sub_180068008.c)
 *     sub_18006C4A4 @ 0x18006C4A4 (sub_18006C4A4.c)
 */

__int64 __fastcall sub_180068FA8(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // r10d
  __int64 v8; // rax
  DWORD v9; // ebx
  int v11; // [rsp+50h] [rbp-B0h] BYREF
  int v12; // [rsp+54h] [rbp-ACh] BYREF
  int v13; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+5Ch] [rbp-A4h] BYREF
  int v15; // [rsp+60h] [rbp-A0h] BYREF
  int v16; // [rsp+64h] [rbp-9Ch] BYREF
  __int64 v17; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v18[144]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+100h] [rbp+0h] BYREF

  v2 = *(_QWORD *)&qword_1800B41A8;
  sub_18000B63C(&v16, v18);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009BAE9, 0LL, 0LL, 2u, &v19);
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)a2 = 6;
  *(_DWORD *)(a2 + 16) = 10;
  *(_DWORD *)(a2 + 20) = 50;
  *(_DWORD *)(a2 + 24) = 30;
  sub_18001E380();
  sub_18006C4A4(v2 + 680, 0LL, a2 + 4, a2 + 8);
  sub_18000F390();
  *(_DWORD *)(a2 + 16) = 10;
  *(_DWORD *)(a2 + 20) = 70;
  *(_BYTE *)(a2 + 36) = 3;
  *(_DWORD *)(a2 + 24) = 30;
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v8 = *(_QWORD *)(a2 + 8);
    v15 = 0;
    v17 = v8;
    v14 = *(_DWORD *)(a2 + 4);
    v11 = v6;
    v12 = v7;
    v13 = 10;
    sub_180068008(
      v4,
      byte_18009B8B2,
      v5,
      v6,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v17,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11);
  }
  if ( v16 )
  {
    v9 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v9, 0LL);
    }
  }
  return 0LL;
}
