/*
 * XREFs of sub_1800D04B0 @ 0x1800D04B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D0338 @ 0x1800D0338 (sub_1800D0338.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 *__fastcall sub_1800D04B0(__int64 *a1, char a2)
{
  sub_1800D0338(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
