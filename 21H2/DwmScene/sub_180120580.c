/*
 * XREFs of sub_180120580 @ 0x180120580
 * Callers:
 *     <none>
 * Callees:
 *     sub_18011DE50 @ 0x18011DE50 (sub_18011DE50.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_180120580(__int64 a1, _QWORD *a2, double a3)
{
  unsigned __int64 v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned int)sub_18011DE50(a1, a2, (double *)&v4) )
    return *(__m128 *)&a3;
  else
    return (__m128)v4;
}
