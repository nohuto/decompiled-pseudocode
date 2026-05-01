/*
 * XREFs of sub_18007B0F8 @ 0x18007B0F8
 * Callers:
 *     PsmHamTerminateHost @ 0x180062450 (PsmHamTerminateHost.c)
 * Callees:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180022DB0 @ 0x180022DB0 (sub_180022DB0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180078A74 @ 0x180078A74 (sub_180078A74.c)
 */

__int64 __fastcall sub_18007B0F8(__int64 a1, __int64 a2, int a3)
{
  void *v6; // rsi
  int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  DWORD v15; // ebx
  _BYTE v17[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  void *v20; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+F0h] [rbp-10h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_1800A048D, 0LL, 0LL, 2u, &v22);
  v6 = 0LL;
  v18 = 0LL;
  sub_18000B7F8(TlsValue);
  v7 = sub_180022DB0(a1, a2, &v18);
  v8 = v18;
  v9 = v7;
  if ( v7 >= 0 )
  {
    v6 = (void *)(v18 + 24);
    sub_18000506C(v18, 3u, a3, 0LL, 0, 0);
    v9 = 0;
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v17[0] = a3;
    v19 = a2;
    v20 = v6;
    LODWORD(v18) = v9;
    sub_180078A74(v10, byte_1800A0553, v11, v12, (__int64)&v18, &v20, (__int64)&v19, (__int64)v17);
  }
  if ( v8 )
  {
    sub_18001E380();
    if ( (*(_QWORD *)(v8 + 592))-- == 1LL )
      sub_18000A1AC(v8 - 64, v13);
    sub_18000F390();
  }
  v15 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v15, 0LL);
  }
  return v9;
}
