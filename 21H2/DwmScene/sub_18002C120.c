/*
 * XREFs of sub_18002C120 @ 0x18002C120
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18002C120(__int64 a1, char a2)
{
  __int64 result; // rax

  if ( a2 )
    return j_j__o_free(a1);
  return result;
}
