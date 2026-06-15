/*
 * XREFs of sub_180115540 @ 0x180115540
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_QWORD *__fastcall sub_180115540(_QWORD *a1, char a2)
{
  *a1 = off_180155BF8;
  _o_free(a1[2]);
  a1[2] = 0LL;
  *a1 = &off_180148180;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
