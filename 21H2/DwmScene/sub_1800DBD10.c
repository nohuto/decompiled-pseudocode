/*
 * XREFs of sub_1800DBD10 @ 0x1800DBD10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DB820 @ 0x1800DB820 (sub_1800DB820.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 *__fastcall sub_1800DBD10(__int64 *a1, char a2)
{
  sub_1800DB820(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
