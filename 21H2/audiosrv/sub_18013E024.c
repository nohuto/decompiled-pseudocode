/*
 * XREFs of sub_18013E024 @ 0x18013E024
 * Callers:
 *     sub_180075340 @ 0x180075340 (sub_180075340.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18013DF80 @ 0x18013DF80 (sub_18013DF80.c)
 */

_QWORD *__fastcall sub_18013E024(_QWORD *a1, char a2)
{
  sub_18013DF80(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
