/*
 * XREFs of sub_18001CAA0 @ 0x18001CAA0
 * Callers:
 *     sub_18001C824 @ 0x18001C824 (sub_18001C824.c)
 * Callees:
 *     sub_18001CAEC @ 0x18001CAEC (sub_18001CAEC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18001CAA0(int a1, int a2, int a3, int a4)
{
  int v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp-20h] BYREF

  v6 = a2;
  v5 = a3;
  return sub_18001CAEC(a1, (unsigned int)&v6, 4, (unsigned int)&v5, 4LL, a4);
}
