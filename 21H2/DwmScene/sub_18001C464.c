/*
 * XREFs of sub_18001C464 @ 0x18001C464
 * Callers:
 *     sub_1800195DC @ 0x1800195DC (sub_1800195DC.c)
 *     sub_18001B77C @ 0x18001B77C (sub_18001B77C.c)
 *     sub_18001C824 @ 0x18001C824 (sub_18001C824.c)
 *     sub_18001D0A0 @ 0x18001D0A0 (sub_18001D0A0.c)
 * Callees:
 *     sub_18001CEC4 @ 0x18001CEC4 (sub_18001CEC4.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18001C464(_BYTE *a1)
{
  __int64 result; // rax
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
    result = sub_18001CEC4(&v3, 3LL, a1);
  }
  if ( a1[120] )
  {
    v3 = 0x418A073AA3BC3475LL;
    v4 = 0x418A073AA3BC3C75LL;
    v5 = 0x418A073AA3BC4475LL;
    result = sub_18001CEC4(&v3, 3LL, a1 + 64);
  }
  if ( a1[184] )
  {
    v3 = 0x418A073AA3BC4C75LL;
    v4 = 0x418A073AA3BC5475LL;
    v5 = 0x418A073AA3BC5C75LL;
    v6 = 0x418A073AA3BC6475LL;
    v7 = 0x418A073AA3BC6C75LL;
    v8 = 0x418A073AA3BC7475LL;
    return sub_18001CEC4(&v3, 6LL, a1 + 128);
  }
  return result;
}
