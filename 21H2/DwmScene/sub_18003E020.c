/*
 * XREFs of sub_18003E020 @ 0x18003E020
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D3610 @ 0x1800D3610 (sub_1800D3610.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_18003E020(__int64 a1, char a2)
{
  sub_1800D3610(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
