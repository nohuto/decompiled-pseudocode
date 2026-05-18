/*
 * XREFs of sub_18001CCB4 @ 0x18001CCB4
 * Callers:
 *     sub_180017F6C @ 0x180017F6C (sub_180017F6C.c)
 *     sub_180089BBC @ 0x180089BBC (sub_180089BBC.c)
 *     sub_1800EB8A4 @ 0x1800EB8A4 (sub_1800EB8A4.c)
 *     sub_1800F0830 @ 0x1800F0830 (sub_1800F0830.c)
 *     sub_1800F56BC @ 0x1800F56BC (sub_1800F56BC.c)
 * Callees:
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_18001CCB4(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    v9 = (a1[2] - v6) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v6 - 8);
      v11 = v9 + 39;
      v12 = v6 - v10;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v11);
        JUMPOUT(0x18001CD3BLL);
      }
      v6 = v10;
    }
    j_j__o_free(v6);
  }
  *a1 = a2;
  a1[1] = a2 + 8 * a3;
  result = a2 + 8 * a4;
  a1[2] = result;
  return result;
}
