/*
 * XREFs of sub_1800D5D34 @ 0x1800D5D34
 * Callers:
 *     sub_1800D5DBC @ 0x1800D5DBC (sub_1800D5DBC.c)
 * Callees:
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800D523C @ 0x1800D523C (sub_1800D523C.c)
 *     sub_1800D5EC4 @ 0x1800D5EC4 (sub_1800D5EC4.c)
 *     sub_180108D1C @ 0x180108D1C (sub_180108D1C.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800D5D34(__int64 a1, __int64 a2)
{
  char v4; // bl
  _BYTE v6[8]; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+38h] [rbp-10h]
  unsigned __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h]

  v9 = a1;
  sub_180067278(a1);
  sub_1800D5EC4(a1, v6, a2);
  v4 = 0;
  if ( v6[0] )
  {
    v8 = v7;
    sub_1800D523C((__int64 **)(a1 + 48), (__int64)v6, 0, &v8, v7);
    sub_180108D1C(*(_QWORD *)(a1 + 16 * (v8 + 4)));
    v4 = 1;
  }
  sub_180067304(a1);
  return v4;
}
