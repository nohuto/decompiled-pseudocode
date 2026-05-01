/*
 * XREFs of sub_18006B47C @ 0x18006B47C
 * Callers:
 *     sub_180073544 @ 0x180073544 (sub_180073544.c)
 * Callees:
 *     sub_180008D30 @ 0x180008D30 (sub_180008D30.c)
 *     sub_180031128 @ 0x180031128 (sub_180031128.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18006B47C(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 result; // rax
  char v6[544]; // [rsp+20h] [rbp-258h] BYREF
  __int64 v7; // [rsp+240h] [rbp-38h]

  result = sub_180031128(a2, v6);
  if ( (int)result >= 0 )
  {
    result = sub_180008D30(a1, v7, a3);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
