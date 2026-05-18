/*
 * XREFs of sub_1800AD460 @ 0x1800AD460
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800ACF68 @ 0x1800ACF68 (sub_1800ACF68.c)
 *     j__o_free @ 0x180123A7C (j__o_free.c)
 */

__int64 __fastcall sub_1800AD460(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  sub_1800ACF68(a1, a2);
  if ( (v2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
