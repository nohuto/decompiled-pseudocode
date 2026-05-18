/*
 * XREFs of sub_18003CF90 @ 0x18003CF90
 * Callers:
 *     sub_18012145E @ 0x18012145E (sub_18012145E.c)
 *     sub_180129863 @ 0x180129863 (sub_180129863.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003CF90(__int64 a1, __int64 a2, __int64 a3)
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
      JUMPOUT(0x18003CFD1LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
