/*
 * XREFs of sub_180104074 @ 0x180104074
 * Callers:
 *     sub_1801037F0 @ 0x1801037F0 (sub_1801037F0.c)
 * Callees:
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800DBC74 @ 0x1800DBC74 (sub_1800DBC74.c)
 *     sub_180103418 @ 0x180103418 (sub_180103418.c)
 */

// Hidden C++ exception states: #wind=2
bool __fastcall sub_180104074(__int64 a1)
{
  __int64 v2; // rbx
  bool v3; // di

  v2 = a1 + 8;
  sub_1800619A8(a1 + 8);
  sub_180103418(a1);
  v3 = 0;
  if ( !sub_1800DBC74() )
    v3 = !sub_1800DBC74();
  sub_180061A34(v2);
  return v3;
}
