/*
 * XREFs of sub_18000F4E4 @ 0x18000F4E4
 * Callers:
 *     sub_1801260A0 @ 0x1801260A0 (sub_1801260A0.c)
 *     sub_18012BB8D @ 0x18012BB8D (sub_18012BB8D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F4E4(__int64 a1, __int64 a2, __int64 a3)
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
      JUMPOUT(0x18000F525LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
