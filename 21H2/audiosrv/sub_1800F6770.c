/*
 * XREFs of sub_1800F6770 @ 0x1800F6770
 * Callers:
 *     sub_180052FF4 @ 0x180052FF4 (sub_180052FF4.c)
 *     sub_18013411C @ 0x18013411C (sub_18013411C.c)
 * Callees:
 *     sub_1800F65D8 @ 0x1800F65D8 (sub_1800F65D8.c)
 */

__int64 __fastcall sub_1800F6770(int a1, int a2, int a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  int v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_1800F65D8(a1, a2, a3, a4, v5, retaddr, v6, a4);
}
