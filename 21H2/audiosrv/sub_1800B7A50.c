/*
 * XREFs of sub_1800B7A50 @ 0x1800B7A50
 * Callers:
 *     sub_1800B7AB8 @ 0x1800B7AB8 (sub_1800B7AB8.c)
 *     sub_1800B8080 @ 0x1800B8080 (sub_1800B8080.c)
 * Callees:
 *     sub_1800BAA4C @ 0x1800BAA4C (sub_1800BAA4C.c)
 */

__int64 __fastcall sub_1800B7A50(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = 1;
  *a1 = &off_180149F48;
  result = sub_1800BAA4C(a1, 0LL, a3);
  qword_18019E418 = 0LL;
  byte_18019E4CC = 0;
  return result;
}
