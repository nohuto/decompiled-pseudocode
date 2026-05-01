/*
 * XREFs of sub_18000D9DC @ 0x18000D9DC
 * Callers:
 *     sub_180046315 @ 0x180046315 (sub_180046315.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000D9DC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = 8 * a3;
  if ( (unsigned __int64)(8 * a3) >= 0x1000 )
  {
    v5 = *(_QWORD *)(a2 - 8);
    v4 += 39LL;
    if ( (unsigned __int64)(a2 - v5 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v5, v4);
      __debugbreak();
      JUMPOUT(0x18000DA24LL);
    }
    a2 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(a2, v4);
}
