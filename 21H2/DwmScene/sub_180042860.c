/*
 * XREFs of sub_180042860 @ 0x180042860
 * Callers:
 *     sub_180126D76 @ 0x180126D76 (sub_180126D76.c)
 *     sub_18012F17B @ 0x18012F17B (sub_18012F17B.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180042860(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(4 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 4 * a3 + 39);
      JUMPOUT(0x1800428A1LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
