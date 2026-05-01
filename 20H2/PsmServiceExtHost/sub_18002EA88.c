/*
 * XREFs of sub_18002EA88 @ 0x18002EA88
 * Callers:
 *     sub_1800098DC @ 0x1800098DC (sub_1800098DC.c)
 *     sub_18003D3EC @ 0x18003D3EC (sub_18003D3EC.c)
 *     sub_180042CF4 @ 0x180042CF4 (sub_180042CF4.c)
 *     sub_18006BCA0 @ 0x18006BCA0 (sub_18006BCA0.c)
 * Callees:
 *     sub_18002FE4C @ 0x18002FE4C (sub_18002FE4C.c)
 *     sub_18002FF28 @ 0x18002FF28 (sub_18002FF28.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18002EA88(PSID a1, __int64 a2, int a3, __int64 a4)
{
  __int64 result; // rax
  _BYTE DestinationSid[80]; // [rsp+30h] [rbp-88h] BYREF

  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  result = sub_18002FE4C(DestinationSid);
  if ( (int)result >= 0 )
  {
    result = sub_18002FF28(DestinationSid, a1, a4);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
