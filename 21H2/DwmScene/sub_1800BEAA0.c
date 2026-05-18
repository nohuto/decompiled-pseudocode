/*
 * XREFs of sub_1800BEAA0 @ 0x1800BEAA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BDB04 @ 0x1800BDB04 (sub_1800BDB04.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_1800BEAA0(__int64 a1, char a2)
{
  sub_1800BDB04(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
