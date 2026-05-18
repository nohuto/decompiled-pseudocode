/*
 * XREFs of sub_1800D4850 @ 0x1800D4850
 * Callers:
 *     <none>
 * Callees:
 *     sub_180072774 @ 0x180072774 (sub_180072774.c)
 *     sub_180107AB8 @ 0x180107AB8 (sub_180107AB8.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_1800D4850(__int64 a1, char a2)
{
  sub_180072774((__int64 *)(a1 + 16), a1 + 16);
  sub_180107AB8(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
