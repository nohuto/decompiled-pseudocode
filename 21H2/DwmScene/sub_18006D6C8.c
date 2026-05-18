/*
 * XREFs of sub_18006D6C8 @ 0x18006D6C8
 * Callers:
 *     sub_18012A4C5 @ 0x18012A4C5 (sub_18012A4C5.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006D6C8(__int64 a1, __int64 a2, __int64 a3)
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
      JUMPOUT(0x18006D709LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
