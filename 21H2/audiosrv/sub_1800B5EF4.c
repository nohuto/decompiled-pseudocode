/*
 * XREFs of sub_1800B5EF4 @ 0x1800B5EF4
 * Callers:
 *     sub_18000410C @ 0x18000410C (sub_18000410C.c)
 *     sub_18002DD60 @ 0x18002DD60 (sub_18002DD60.c)
 *     sub_18004F930 @ 0x18004F930 (sub_18004F930.c)
 *     sub_180051B0C @ 0x180051B0C (sub_180051B0C.c)
 *     sub_180052284 @ 0x180052284 (sub_180052284.c)
 *     sub_180068E94 @ 0x180068E94 (sub_180068E94.c)
 * Callees:
 *     sub_1800B5370 @ 0x1800B5370 (sub_1800B5370.c)
 */

__int64 __fastcall sub_1800B5EF4(int a1, int a2, int a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_1800B5370(a1, a2, a3, a4, v5, retaddr, 3);
}
