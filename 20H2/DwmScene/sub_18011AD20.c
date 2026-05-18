/*
 * XREFs of sub_18011AD20 @ 0x18011AD20
 * Callers:
 *     <none>
 * Callees:
 *     sub_180118340 @ 0x180118340 (sub_180118340.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18011AD20(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned int v5; // [rsp+20h] [rbp-18h] BYREF

  if ( !(unsigned int)sub_180118340(a1, a2, &v5) )
    return v5;
  return a3;
}
