/*
 * XREFs of sub_180065C50 @ 0x180065C50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800657A4 @ 0x1800657A4 (sub_1800657A4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180065C50(__int64 a1, char a2)
{
  sub_1800657A4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
