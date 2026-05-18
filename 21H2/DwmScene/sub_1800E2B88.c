/*
 * XREFs of sub_1800E2B88 @ 0x1800E2B88
 * Callers:
 *     sub_18012DC31 @ 0x18012DC31 (sub_18012DC31.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E2B88(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(a3 << 7) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x1800E2BC9LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
