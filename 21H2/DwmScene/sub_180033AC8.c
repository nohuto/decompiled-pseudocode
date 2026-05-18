/*
 * XREFs of sub_180033AC8 @ 0x180033AC8
 * Callers:
 *     sub_18012689E @ 0x18012689E (sub_18012689E.c)
 *     sub_180126A42 @ 0x180126A42 (sub_180126A42.c)
 *     sub_180126A4E @ 0x180126A4E (sub_180126A4E.c)
 *     sub_18012C5E3 @ 0x18012C5E3 (sub_18012C5E3.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180033AC8(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return j_j__o_free(v1);
  return result;
}
