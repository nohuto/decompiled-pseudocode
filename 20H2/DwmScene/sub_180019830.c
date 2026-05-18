/*
 * XREFs of sub_180019830 @ 0x180019830
 * Callers:
 *     <none>
 * Callees:
 *     sub_18009988C @ 0x18009988C (sub_18009988C.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

__int64 __fastcall sub_180019830(__int64 a1, char a2)
{
  sub_18009988C();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
