/*
 * XREFs of sub_180118A38 @ 0x180118A38
 * Callers:
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 *     sub_18001D3F0 @ 0x18001D3F0 (sub_18001D3F0.c)
 *     sub_18001E240 @ 0x18001E240 (sub_18001E240.c)
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_18001F9C0 @ 0x18001F9C0 (sub_18001F9C0.c)
 *     sub_180021130 @ 0x180021130 (sub_180021130.c)
 *     sub_180021660 @ 0x180021660 (sub_180021660.c)
 *     sub_180021FB0 @ 0x180021FB0 (sub_180021FB0.c)
 *     sub_180022AC0 @ 0x180022AC0 (sub_180022AC0.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234A0 @ 0x1800234A0 (sub_1800234A0.c)
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_18004B060 @ 0x18004B060 (sub_18004B060.c)
 *     sub_180055010 @ 0x180055010 (sub_180055010.c)
 *     sub_180058660 @ 0x180058660 (sub_180058660.c)
 *     sub_18005AD24 @ 0x18005AD24 (sub_18005AD24.c)
 * Callees:
 *     _o___std_exception_copy @ 0x18006AA72 (_o___std_exception_copy.c)
 */

__int64 __fastcall sub_180118A38(__int64 a1)
{
  *(_QWORD *)a1 = &off_180149EB8;
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy();
  *(_QWORD *)a1 = &off_180155CF8;
  return a1;
}
