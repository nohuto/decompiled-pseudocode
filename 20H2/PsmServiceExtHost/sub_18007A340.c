/*
 * XREFs of sub_18007A340 @ 0x18007A340
 * Callers:
 *     sub_180080560 @ 0x180080560 (sub_180080560.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002A414 @ 0x18002A414 (sub_18002A414.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180076564 @ 0x180076564 (sub_180076564.c)
 *     sub_18007FF78 @ 0x18007FF78 (sub_18007FF78.c)
 *     sub_18008089C @ 0x18008089C (sub_18008089C.c)
 */

__int64 __fastcall sub_18007A340(__int64 a1, __int64 a2, int *a3)
{
  int v3; // esi
  __int64 v7; // rax
  _QWORD *v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // rbx
  DWORD v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[4]; // [rsp+40h] [rbp-F8h] BYREF
  unsigned int v16; // [rsp+44h] [rbp-F4h] BYREF
  __int64 v17; // [rsp+48h] [rbp-F0h] BYREF
  _BYTE TlsValue[144]; // [rsp+50h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+E0h] [rbp-58h] BYREF

  LOBYTE(v3) = 4;
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009FAC8, 0LL, 0LL, 2u, &v19);
  sub_18000B7F8(TlsValue);
  v7 = sub_18008089C(a1, a2);
  v8 = (_QWORD *)v7;
  if ( v7 )
  {
    v10 = *(_QWORD *)(v7 + 56);
    sub_18002A414(v10);
    v3 = (*(_DWORD *)(v10 + 344) >> 5) & 7;
    sub_18007FF78(v10);
    v9 = 0;
    *a3 = v3;
    sub_1800274E0(v8);
  }
  else
  {
    v9 = -1073741275;
  }
  v11 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    v15[0] = v3;
    v17 = a2;
    v16 = v9;
    sub_180076564((__int64)&dword_1800B3218, byte_1800A03D9, v12, v13, (__int64)&v16, (__int64)&v17, (__int64)v15);
  }
  return v9;
}
