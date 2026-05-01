/*
 * XREFs of sub_18006BCA0 @ 0x18006BCA0
 * Callers:
 *     sub_18006BAD0 @ 0x18006BAD0 (sub_18006BAD0.c)
 * Callees:
 *     sub_18002EA88 @ 0x18002EA88 (sub_18002EA88.c)
 *     sub_18002FE4C @ 0x18002FE4C (sub_18002FE4C.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18006BCA0(__int64 a1)
{
  __int64 result; // rax
  _BYTE DestinationSid[80]; // [rsp+20h] [rbp-68h] BYREF

  result = sub_18002FE4C(DestinationSid);
  if ( (int)result >= 0 )
  {
    result = sub_18002EA88(DestinationSid, 2056LL, 0, a1 + 96);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
