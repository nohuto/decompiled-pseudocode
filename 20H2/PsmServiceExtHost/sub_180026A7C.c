/*
 * XREFs of sub_180026A7C @ 0x180026A7C
 * Callers:
 *     sub_180026694 @ 0x180026694 (sub_180026694.c)
 * Callees:
 *     sub_180010220 @ 0x180010220 (sub_180010220.c)
 *     sub_180026B04 @ 0x180026B04 (sub_180026B04.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_180026A7C(__int64 a1, __int64 a2)
{
  _BYTE v5[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v5, 0, 0x82uLL);
  sub_180010220(a1, (__int64)v5);
  return sub_180026B04(v5, a1 + 464, *(unsigned int *)(a1 + 532), a2);
}
