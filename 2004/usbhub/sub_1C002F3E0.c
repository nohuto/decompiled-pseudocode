/*
 * XREFs of sub_1C002F3E0 @ 0x1C002F3E0
 * Callers:
 *     sub_1C002EC68 @ 0x1C002EC68 (sub_1C002EC68.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011260 @ 0x1C0011260 (sub_1C0011260.c)
 *     sub_1C002EF2C @ 0x1C002EF2C (sub_1C002EF2C.c)
 *     sub_1C002F064 @ 0x1C002F064 (sub_1C002F064.c)
 *     sub_1C002F0A8 @ 0x1C002F0A8 (sub_1C002F0A8.c)
 *     sub_1C002F238 @ 0x1C002F238 (sub_1C002F238.c)
 */

LONG __fastcall sub_1C002F3E0(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d

  sub_1C000F050(a1);
  v6 = sub_1C002EF2C(a3, a2, 3);
  sub_1C000FD80(a1, 0x8000, 1718383412, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 <= 0 )
    return sub_1C002F238(a3);
  if ( v7 <= 2 )
  {
    sub_1C0011260(*(_QWORD *)(a3 + 8), a2 + 2744);
    goto LABEL_7;
  }
  if ( v7 == 3 )
  {
LABEL_7:
    sub_1C002F064(a3, a2, 3);
    sub_1C002F0A8(a1, *(_WORD *)(a2 + 4), 0);
    return sub_1C002F238(a3);
  }
  if ( v7 == 4 )
    sub_1C002F064(a3, a2, 4);
  return sub_1C002F238(a3);
}
