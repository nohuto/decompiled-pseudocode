/*
 * XREFs of sub_1800B8200 @ 0x1800B8200
 * Callers:
 *     <none>
 * Callees:
 *     sub_180062CB4 @ 0x180062CB4 (sub_180062CB4.c)
 *     sub_180069338 @ 0x180069338 (sub_180069338.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800BA8D0 @ 0x1800BA8D0 (sub_1800BA8D0.c)
 */

_QWORD *__fastcall sub_1800B8200(_QWORD *a1, char a2)
{
  *a1 = off_180148E80;
  sub_180062CB4((__int64)a1, 0);
  sub_1800BA8D0(a1);
  sub_180069338();
  sub_1800BA8D0(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
