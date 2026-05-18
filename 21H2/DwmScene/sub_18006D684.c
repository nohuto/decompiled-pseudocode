/*
 * XREFs of sub_18006D684 @ 0x18006D684
 * Callers:
 *     sub_18012A474 @ 0x18012A474 (sub_18012A474.c)
 *     sub_18012D8E0 @ 0x18012D8E0 (sub_18012D8E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006D684(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(152 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 152 * a3 + 39);
      JUMPOUT(0x18006D6C5LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
