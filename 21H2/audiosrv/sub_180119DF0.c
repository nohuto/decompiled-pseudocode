/*
 * XREFs of sub_180119DF0 @ 0x180119DF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18011EA28 @ 0x18011EA28 (sub_18011EA28.c)
 */

_DWORD *__fastcall sub_180119DF0(_DWORD *a1, char a2)
{
  sub_18011EA28(a1 + 6);
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
