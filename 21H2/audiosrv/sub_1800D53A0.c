/*
 * XREFs of sub_1800D53A0 @ 0x1800D53A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043A40 @ 0x180043A40 (sub_180043A40.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_1800D53A0(_QWORD *a1, char a2)
{
  *a1 = off_180146470;
  sub_180043A40((__int64)a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
