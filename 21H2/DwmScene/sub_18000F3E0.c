/*
 * XREFs of sub_18000F3E0 @ 0x18000F3E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180019A1C @ 0x180019A1C (sub_180019A1C.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18000F3E0(__int64 a1, char a2)
{
  sub_180019A1C();
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
