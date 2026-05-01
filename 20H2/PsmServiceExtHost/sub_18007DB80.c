/*
 * XREFs of sub_18007DB80 @ 0x18007DB80
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

int __fastcall sub_18007DB80(__int64 a1, __int64 a2)
{
  int result; // eax
  DWORD v4; // ebx
  _BYTE TlsValue[144]; // [rsp+20h] [rbp-A8h] BYREF

  sub_18000B7F8(TlsValue);
  sub_1800093A0(a2, 0);
  if ( (*(_DWORD *)(a2 + 648) & 0xE0000000) == 0xA0000000LL )
  {
    result = sub_18000A110(a2);
  }
  else
  {
    sub_18000A110(a2);
    result = RtlWakeAllConditionVariable(a2 + 680);
  }
  v4 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v4, 0LL);
  }
  return result;
}
