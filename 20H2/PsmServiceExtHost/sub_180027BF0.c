/*
 * XREFs of sub_180027BF0 @ 0x180027BF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180007FF8 @ 0x180007FF8 (sub_180007FF8.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_180025EC8 @ 0x180025EC8 (sub_180025EC8.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180027C9C @ 0x180027C9C (sub_180027C9C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

int __fastcall sub_180027BF0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  int result; // eax
  DWORD v5; // ebx
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-A8h] BYREF

  sub_18000B7F8(TlsValue);
  sub_180007FF8(a2, v3);
  *(_BYTE *)(a2 + 185) |= 2u;
  sub_180025EC8(a2);
  *(_BYTE *)(a2 + 184) &= ~4u;
  sub_180027C9C(a2);
  result = sub_1800274E0((_QWORD *)a2);
  v5 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v5, 0LL);
  }
  return result;
}
