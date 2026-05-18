/*
 * XREFs of sub_1800778FC @ 0x1800778FC
 * Callers:
 *     sub_18012A8CE @ 0x18012A8CE (sub_18012A8CE.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800778FC(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return j_j__o_free(v1);
  return result;
}
