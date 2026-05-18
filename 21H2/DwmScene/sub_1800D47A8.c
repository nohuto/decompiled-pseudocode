/*
 * XREFs of sub_1800D47A8 @ 0x1800D47A8
 * Callers:
 *     sub_18012D838 @ 0x18012D838 (sub_18012D838.c)
 * Callees:
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800D47A8(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return j_j__o_free(v1);
  return result;
}
