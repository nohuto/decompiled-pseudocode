/*
 * XREFs of sub_1800B3C1C @ 0x1800B3C1C
 * Callers:
 *     sub_18012CB58 @ 0x18012CB58 (sub_18012CB58.c)
 *     sub_18012CBEE @ 0x18012CBEE (sub_18012CBEE.c)
 *     sub_18012D949 @ 0x18012D949 (sub_18012D949.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B3C1C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(48 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 48 * a3 + 39);
      JUMPOUT(0x1800B3C5ELL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
