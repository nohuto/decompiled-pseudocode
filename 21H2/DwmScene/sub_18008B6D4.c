/*
 * XREFs of sub_18008B6D4 @ 0x18008B6D4
 * Callers:
 *     sub_18012B9D9 @ 0x18012B9D9 (sub_18012B9D9.c)
 * Callees:
 *     sub_18008B58C @ 0x18008B58C (sub_18008B58C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18008B6D4(__int64 a1, char a2)
{
  sub_18008B58C(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
