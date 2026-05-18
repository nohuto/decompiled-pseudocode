/*
 * XREFs of sub_1800372B0 @ 0x1800372B0
 * Callers:
 *     sub_180126F30 @ 0x180126F30 (sub_180126F30.c)
 *     sub_180126FA0 @ 0x180126FA0 (sub_180126FA0.c)
 *     sub_18012CB91 @ 0x18012CB91 (sub_18012CB91.c)
 *     sub_180130C67 @ 0x180130C67 (sub_180130C67.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800372B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(32 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x1800372F1LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
