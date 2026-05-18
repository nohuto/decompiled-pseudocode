/*
 * XREFs of sub_18000F404 @ 0x18000F404
 * Callers:
 *     sub_1801207D0 @ 0x1801207D0 (sub_1801207D0.c)
 *     sub_180126275 @ 0x180126275 (sub_180126275.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F404(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(8 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 8 * a3 + 39);
      JUMPOUT(0x18000F445LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
