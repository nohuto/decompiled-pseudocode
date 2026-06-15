/*
 * XREFs of sub_18013E9D0 @ 0x18013E9D0
 * Callers:
 *     sub_180075370 @ 0x180075370 (sub_180075370.c)
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_18013E8B0 @ 0x18013E8B0 (sub_18013E8B0.c)
 */

_QWORD *__fastcall sub_18013E9D0(_QWORD *a1, char a2)
{
  sub_18013E8B0(a1);
  if ( (a2 & 1) != 0 )
    sub_18006A148(a1);
  return a1;
}
