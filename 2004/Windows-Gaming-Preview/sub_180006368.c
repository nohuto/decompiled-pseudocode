/*
 * XREFs of sub_180006368 @ 0x180006368
 * Callers:
 *     sub_1800066D4 @ 0x1800066D4 (sub_1800066D4.c)
 *     sub_180006954 @ 0x180006954 (sub_180006954.c)
 *     sub_180008538 @ 0x180008538 (sub_180008538.c)
 * Callees:
 *     sub_180005EA0 @ 0x180005EA0 (sub_180005EA0.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 */

char __fastcall sub_180006368(_BYTE *a1)
{
  char result; // al
  __int64 v3; // [rsp+20h] [rbp-40h] BYREF
  __int64 v4; // [rsp+28h] [rbp-38h]
  __int64 v5; // [rsp+30h] [rbp-30h]
  __int64 v6; // [rsp+38h] [rbp-28h]
  __int64 v7; // [rsp+40h] [rbp-20h]
  __int64 v8; // [rsp+48h] [rbp-18h]

  if ( a1[56] )
  {
    v3 = 0x418A073AA3BC1C75LL;
    v4 = 0x418A073AA3BC2475LL;
    v5 = 0x418A073AA3BC2C75LL;
    result = sub_180005EA0((unsigned __int64)&v3, 3LL, (__int64)a1);
  }
  if ( a1[120] )
  {
    v3 = 0x418A073AA3BC3475LL;
    v4 = 0x418A073AA3BC3C75LL;
    v5 = 0x418A073AA3BC4475LL;
    result = sub_180005EA0((unsigned __int64)&v3, 3LL, (__int64)(a1 + 64));
  }
  if ( a1[184] )
  {
    v3 = 0x418A073AA3BC4C75LL;
    v4 = 0x418A073AA3BC5475LL;
    v5 = 0x418A073AA3BC5C75LL;
    v6 = 0x418A073AA3BC6475LL;
    v7 = 0x418A073AA3BC6C75LL;
    v8 = 0x418A073AA3BC7475LL;
    return sub_180005EA0((unsigned __int64)&v3, 6LL, (__int64)(a1 + 128));
  }
  return result;
}
