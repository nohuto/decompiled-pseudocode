/*
 * XREFs of sub_180130F80 @ 0x180130F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

_DWORD *__fastcall sub_180130F80(_DWORD *a1, char a2)
{
  a1[13] = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
