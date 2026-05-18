/*
 * XREFs of sub_1800CEED8 @ 0x1800CEED8
 * Callers:
 *     sub_180127F20 @ 0x180127F20 (sub_180127F20.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_1800CEED8(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
    return j_j__o_free(v1);
  return result;
}
