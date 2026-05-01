/*
 * XREFs of sub_180018610 @ 0x180018610
 * Callers:
 *     sub_1800465A9 @ 0x1800465A9 (sub_1800465A9.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180018610(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rcx

  v3 = 16 * a3;
  v4 = a2;
  if ( v3 >= 0x1000 )
  {
    v5 = *(_QWORD *)(a2 - 8);
    v3 += 39LL;
    if ( (unsigned __int64)(a2 - v5 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v5, a2);
      __debugbreak();
      JUMPOUT(0x180018658LL);
    }
    v4 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v4, v3);
}
