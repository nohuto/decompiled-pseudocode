/*
 * XREFs of sub_180031B00 @ 0x180031B00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000E744 @ 0x18000E744 (sub_18000E744.c)
 *     sub_18000EC88 @ 0x18000EC88 (sub_18000EC88.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180031B00(__int64 a1, char a2)
{
  sub_18000EC88(a1 + 72);
  WindowsDeleteString(*(HSTRING *)(a1 + 64));
  *(_QWORD *)(a1 + 64) = 0LL;
  sub_18000E744(a1);
  if ( (a2 & 1) != 0 )
    j_j__o_free(a1, 88LL);
  return a1;
}
