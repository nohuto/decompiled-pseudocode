/*
 * XREFs of sub_18006F4B0 @ 0x18006F4B0
 * Callers:
 *     sub_18006FA04 @ 0x18006FA04 (sub_18006FA04.c)
 *     sub_180071290 @ 0x180071290 (sub_180071290.c)
 * Callees:
 *     sub_18006FB4C @ 0x18006FB4C (sub_18006FB4C.c)
 */

_QWORD *__fastcall sub_18006F4B0(_QWORD *a1)
{
  *a1 = off_18014A9C8;
  sub_18006FB4C();
  return a1;
}
