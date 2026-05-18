/*
 * XREFs of sub_18000EEA0 @ 0x18000EEA0
 * Callers:
 *     sub_18000C578 @ 0x18000C578 (sub_18000C578.c)
 *     sub_18000D91C @ 0x18000D91C (sub_18000D91C.c)
 * Callees:
 *     sub_18000DAA0 @ 0x18000DAA0 (sub_18000DAA0.c)
 */

__int64 __fastcall sub_18000EEA0(__int64 a1, int a2, __int64 a3)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18000DAA0(a1, a2, a3, 0LL, 0LL, retaddr, 3);
}
