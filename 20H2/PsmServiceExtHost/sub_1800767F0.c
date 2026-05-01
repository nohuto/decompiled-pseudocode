/*
 * XREFs of sub_1800767F0 @ 0x1800767F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001608 @ 0x180001608 (sub_180001608.c)
 *     sub_180001664 @ 0x180001664 (sub_180001664.c)
 *     sub_1800084E8 @ 0x1800084E8 (sub_1800084E8.c)
 *     sub_180008518 @ 0x180008518 (sub_180008518.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180076698 @ 0x180076698 (sub_180076698.c)
 */

int __fastcall sub_1800767F0(__int64 a1, __int64 a2)
{
  char v3; // bl
  _DWORD *v4; // rdi
  int v5; // esi
  int v6; // edx
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int result; // eax
  DWORD v12; // ebx
  _BYTE v13[8]; // [rsp+30h] [rbp-D8h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+D0h] [rbp-38h] BYREF

  sub_18000B7F8(TlsValue);
  v3 = 0;
  v4 = (_DWORD *)(a2 + 104);
  v5 = 0;
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009E872, 0LL, 0LL, 2u, &v16);
  sub_180008518((__int64)v4);
  v6 = *(_DWORD *)(a2 + 168);
  if ( (*(_BYTE *)(a2 + 2712) & 1) == 0 && (v6 & 2) != 0 )
  {
    sub_180001664((__int64)v4);
    v7 = *(_DWORD *)(a2 + 168);
    if ( (v7 & 1) == 0 )
    {
      *(_DWORD *)(a2 + 168) = v7 & 0xFFFFFFFD;
      sub_180001608(0);
      v7 = *(_DWORD *)(a2 + 168);
    }
    v3 = v7 & 1;
    RtlQueryUnbiasedInterruptTime(&v14);
    v5 = v14 / 0x2710 - *v4;
  }
  else
  {
    *(_DWORD *)(a2 + 168) = v6 & 0xFFFFFFFE;
  }
  if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 8LL) )
  {
    LODWORD(v14) = v5;
    v13[0] = v3 ^ 1;
    sub_180076698(v8, byte_18009E797, v9, v10, (__int64)v13, (__int64)&v14);
  }
  result = sub_1800084E8(a2 + 104);
  v12 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v12, 0LL);
  }
  return result;
}
