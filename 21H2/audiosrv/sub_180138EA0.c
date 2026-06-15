/*
 * XREFs of sub_180138EA0 @ 0x180138EA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_180138D68 @ 0x180138D68 (sub_180138D68.c)
 */

_QWORD *__fastcall sub_180138EA0(_QWORD *a1, char a2)
{
  sub_180138D68(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
