/*
 * XREFs of sub_180109944 @ 0x180109944
 * Callers:
 *     sub_1801090C0 @ 0x1801090C0 (sub_1801090C0.c)
 * Callees:
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800E1544 @ 0x1800E1544 (sub_1800E1544.c)
 *     sub_180108CE8 @ 0x180108CE8 (sub_180108CE8.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_180109944(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // di

  v2 = a1 + 8;
  sub_180067278(a1 + 8);
  sub_180108CE8(a1);
  v3 = 0;
  if ( !sub_1800E1544() )
    v3 = !sub_1800E1544();
  sub_180067304(v2);
  return v3;
}
