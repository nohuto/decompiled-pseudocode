/*
 * XREFs of sub_18003D4A0 @ 0x18003D4A0
 * Callers:
 *     sub_18003CDF8 @ 0x18003CDF8 (sub_18003CDF8.c)
 *     sub_18003D8F0 @ 0x18003D8F0 (sub_18003D8F0.c)
 * Callees:
 *     sub_18003D438 @ 0x18003D438 (sub_18003D438.c)
 */

__int64 __fastcall sub_18003D4A0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // [rsp+20h] [rbp-28h]
  int v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18003D438(a1, a2, a3, a4, v5, retaddr, v6, a4);
}
