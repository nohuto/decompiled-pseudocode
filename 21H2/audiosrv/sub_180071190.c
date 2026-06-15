/*
 * XREFs of sub_180071190 @ 0x180071190
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     sub_18006FBBC @ 0x18006FBBC (sub_18006FBBC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180071190(__int64 a1)
{
  _QWORD *v3; // [rsp+30h] [rbp+8h]

  v3 = sub_180055F40(0x48uLL);
  *v3 = off_18014A9C8;
  sub_18006FBBC((__int64)(v3 + 1), a1 + 8);
  return v3;
}
