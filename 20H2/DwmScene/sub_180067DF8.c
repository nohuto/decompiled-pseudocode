/*
 * XREFs of sub_180067DF8 @ 0x180067DF8
 * Callers:
 *     sub_180124BAD @ 0x180124BAD (sub_180124BAD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180067DF8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(a3 << 6) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x180067E39LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
