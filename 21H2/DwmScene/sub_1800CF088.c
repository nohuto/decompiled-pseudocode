/*
 * XREFs of sub_1800CF088 @ 0x1800CF088
 * Callers:
 *     sub_1800A6074 @ 0x1800A6074 (sub_1800A6074.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 */

__int64 *__fastcall sub_1800CF088(__int64 a1, __int64 a2)
{
  __int64 v4[7]; // [rsp+20h] [rbp-38h] BYREF

  v4[2] = 0LL;
  v4[3] = 0LL;
  sub_180020B7C(v4, a2);
  return sub_180068194(a1, v4);
}
