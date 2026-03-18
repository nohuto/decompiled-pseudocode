/*
 * XREFs of sub_1C002F594 @ 0x1C002F594
 * Callers:
 *     sub_1C002EC68 @ 0x1C002EC68 (sub_1C002EC68.c)
 *     sub_1C002F010 @ 0x1C002F010 (sub_1C002F010.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011C40 @ 0x1C0011C40 (sub_1C0011C40.c)
 *     sub_1C002EF2C @ 0x1C002EF2C (sub_1C002EF2C.c)
 *     sub_1C002F064 @ 0x1C002F064 (sub_1C002F064.c)
 *     sub_1C002F0A8 @ 0x1C002F0A8 (sub_1C002F0A8.c)
 *     sub_1C002F238 @ 0x1C002F238 (sub_1C002F238.c)
 */

LONG __fastcall sub_1C002F594(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  int v7; // r11d
  __int64 v8; // rcx
  int v9; // r8d

  sub_1C000F050(a1);
  v6 = sub_1C002EF2C(a3, a2, 1);
  sub_1C000FD80(a1, 0x8000, 1718383413, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v7 == 1 )
  {
    sub_1C002F0A8(a1, *(_WORD *)(a2 + 4), *(_WORD *)(a2 + 2836));
    sub_1C0011C40(
      *(_QWORD *)(a3 + 8),
      a2 + 2744,
      *(_DWORD *)(a2 + 2832),
      *(unsigned __int16 *)(a2 + 4),
      a3,
      0x646E6950u);
    v9 = 2;
    goto LABEL_7;
  }
  if ( v7 == 2 )
  {
    sub_1C002F0A8(a1, *(_WORD *)(a2 + 4), 768);
    sub_1C0011C40(
      *(_QWORD *)(a3 + 8),
      a2 + 2744,
      *(_DWORD *)(a2 + 2832),
      *(unsigned __int16 *)(a2 + 4),
      a3,
      0x646E6950u);
    v9 = 1;
LABEL_7:
    v8 = a3;
    goto LABEL_8;
  }
  v8 = a3;
  if ( (unsigned int)(v7 - 3) <= 1 )
  {
    v9 = v7;
LABEL_8:
    sub_1C002F064(v8, a2, v9);
    v8 = a3;
  }
  return sub_1C002F238(v8);
}
