/*
 * XREFs of sub_1C00446D4 @ 0x1C00446D4
 * Callers:
 *     sub_1C0043F70 @ 0x1C0043F70 (sub_1C0043F70.c)
 *     sub_1C0043FF0 @ 0x1C0043FF0 (sub_1C0043FF0.c)
 *     sub_1C0044090 @ 0x1C0044090 (sub_1C0044090.c)
 *     sub_1C0044230 @ 0x1C0044230 (sub_1C0044230.c)
 *     sub_1C0044420 @ 0x1C0044420 (sub_1C0044420.c)
 *     sub_1C0044590 @ 0x1C0044590 (sub_1C0044590.c)
 * Callees:
 *     sub_1C0002AF0 @ 0x1C0002AF0 (sub_1C0002AF0.c)
 *     sub_1C00317D8 @ 0x1C00317D8 (sub_1C00317D8.c)
 *     sub_1C003B9C4 @ 0x1C003B9C4 (sub_1C003B9C4.c)
 *     sub_1C00412E4 @ 0x1C00412E4 (sub_1C00412E4.c)
 *     sub_1C00438A0 @ 0x1C00438A0 (sub_1C00438A0.c)
 *     sub_1C0043DE0 @ 0x1C0043DE0 (sub_1C0043DE0.c)
 */

__int64 __fastcall sub_1C00446D4(__int64 a1, int a2)
{
  __int64 v4; // rdx

  sub_1C003B9C4(a1);
  sub_1C0043DE0(*(_QWORD *)(a1 + 8), 3, a2);
  sub_1C00317D8(*(_QWORD *)(a1 + 8), a1);
  sub_1C0002AF0(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 12);
  sub_1C00412E4(*(_QWORD *)(a1 + 8));
  sub_1C00438A0(0LL, v4, *(struct _LIST_ENTRY **)(a1 + 8), 2, 0LL, a1);
  return 0LL;
}
