/*
 * XREFs of sub_18009DC40 @ 0x18009DC40
 * Callers:
 *     sub_18012C461 @ 0x18012C461 (sub_18012C461.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009DC40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(88 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 88 * a3 + 39);
      JUMPOUT(0x18009DC7ELL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
