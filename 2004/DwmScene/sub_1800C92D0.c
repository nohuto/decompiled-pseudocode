/*
 * XREFs of sub_1800C92D0 @ 0x1800C92D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062590 @ 0x180062590 (sub_180062590.c)
 *     sub_180063C48 @ 0x180063C48 (sub_180063C48.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1800C92D0(__int64 a1, int a2)
{
  int v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = a2;
  sub_180063C48((__int64 *)(a1 + 136), (unsigned int *)&v5);
  return sub_180062590(a1, a2);
}
