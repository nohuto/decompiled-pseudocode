/*
 * XREFs of sub_1800814CC @ 0x1800814CC
 * Callers:
 *     sub_18012E983 @ 0x18012E983 (sub_18012E983.c)
 *     sub_18012F100 @ 0x18012F100 (sub_18012F100.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800814CC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(56 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 56 * a3 + 39);
      JUMPOUT(0x18008150ALL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
