/*
 * XREFs of sub_18011BE24 @ 0x18011BE24
 * Callers:
 *     sub_180108A34 @ 0x180108A34 (sub_180108A34.c)
 * Callees:
 *     sub_18011BE4C @ 0x18011BE4C (sub_18011BE4C.c)
 */

__int64 __fastcall sub_18011BE24(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8

  v3 = a2[2];
  if ( a2[3] >= 0x10uLL )
    a2 = (_QWORD *)*a2;
  sub_18011BE4C(a1, a2, v3);
  return a1;
}
