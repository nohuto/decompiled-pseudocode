/*
 * XREFs of sub_18000C8F4 @ 0x18000C8F4
 * Callers:
 *     sub_18000C330 @ 0x18000C330 (sub_18000C330.c)
 *     sub_18000D7DC @ 0x18000D7DC (sub_18000D7DC.c)
 *     sub_18001A4D0 @ 0x18001A4D0 (sub_18001A4D0.c)
 *     sub_18001D0A0 @ 0x18001D0A0 (sub_18001D0A0.c)
 *     sub_18001F920 @ 0x18001F920 (sub_18001F920.c)
 * Callees:
 *     sub_18000DC18 @ 0x18000DC18 (sub_18000DC18.c)
 */

__int64 __fastcall sub_18000C8F4(int a1, int a2, int a3)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return sub_18000DC18(a1, a2, a3, 0, 0LL, retaddr, 3, -2147418113);
}
